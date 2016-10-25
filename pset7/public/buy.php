<?php

    //include config
    require("../includes/config.php");
    
    //initialize getting how much cash the user has
    $cash = CS50::query("SELECT * FROM users WHERE id = ?", $_SESSION["id"]);
    $cashed = (double)$cash[0]["cash"];
        
    //if form is submitted
    if($_SERVER["REQUEST_METHOD"] == "POST")
    {
        
        //look up the stock
        $stock = lookup($_POST["symbol"]);

        //if symbol or shares are empty
        if(empty($_POST["symbol"]) || empty($_POST["shares"]))
        {
            //apologize
            apologize("You must enter stock symbol and number of shares.");
        }
        
        //check to see if symbol is valid
        if (lookup($_POST["symbol"]) === false)
        {
            apologize("Stock symbol does not exist.");
        }
        
        //validate the amount of shares entered
        if (preg_match("/^\d+$/", $_POST["shares"]) == false)
        {
            apologize("Enter a positive integer for shares.");
        }
        
        else
        {
            //calculate how much the stock will cost to purchase
            $costs = $stock["price"] * $_POST["shares"];
        
            //format the costs
            $cost = (double)$costs;
            
            //if costs are greater than cash user has, apologize
            if ($cashed < $cost)
            {
                apologize("Insufficient funds.");
            }
        
            //Otherwise buy the stocks and update the information to the tables
            if ($cashed >= $cost)
            {
                //make sure symbol is uppercase
                $_POST["symbol"] = strtoupper($_POST["symbol"]);
            
                //insert into portfolio
                CS50::query("INSERT INTO portfolio (user_id, symbol, shares) VALUES(?,?,?) ON DUPLICATE KEY UPDATE shares = shares + VALUES(shares)", $_SESSION["id"], $_POST["symbol"], $_POST["shares"]);
            
                //update the cash
                CS50::query("UPDATE users SET cash = cash - ? WHERE id = ?", $cost, $_SESSION["id"]);
            
                //set transaction name for history
                $transaction = "Buy";
            
                //insert into the history portfolio the purchase
                CS50::query("INSERT INTO history (user_id, transaction, symbol, shares, price) VALUES(?,?,?,?,?)", $_SESSION["id"], $transaction, $_POST["symbol"], $_POST["shares"], $stock["price"]);
            
                //redirect to portfolio
                redirect("/");
            
            }
            
            
        }
    }
    
    //render form
    render("buy_form.php", ["title" => "Buy"]);

?>