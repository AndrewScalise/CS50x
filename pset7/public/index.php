<?php

    // configuration
    require("../includes/config.php"); 
    
    //get the information from users portfolio
    $rows = CS50::query("SELECT * FROM portfolio WHERE user_id = ?", $_SESSION["id"]);
    
    //variable to hold cash total which is always $10,000 to start
    $cash = CS50::query("SELECT cash FROM users WHERE id = ?", $_SESSION["id"]);
    
    //initialize the totals for all stocks bought
    $newTotal = 0;
    
    //create a new array to hold the table information
    $positions = [];
    foreach ($rows as $row)
    {
        $stock = lookup($row["symbol"]);
        if ($stock !== false)
        {
            $positions[] = [
                "name" => $stock["name"],
                "price" => $stock["price"],
                "shares" => $row["shares"],
                "symbol" => $row["symbol"],
                "total" =>($stock["price"]) * $row["shares"]
                ];
                
                $total = $stock["price"] * $row["shares"];
                //new total to add each total from stocks
                $newTotal += $total;
        }
        

    }
    
    //calculate cash left over after buying stocks
    $cashLeftOver = $cash[0]["cash"];
    
    
           // render portfolio
    render("portfolio.php", ["title" => "Portfolio", "positions" => $positions, "cash" => $cashLeftOver]);
    

?>
