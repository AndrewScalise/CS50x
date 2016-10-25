<?php

    // configuration
    require("../includes/config.php"); 
    
    //Get the symbols that are in the portfolio
    $rows = CS50::query("SELECT * FROM portfolio WHERE user_id = ?", $_SESSION["id"]);
    
    if(empty($rows))
    {
        apologize("Sorry, there is nothing to sell!");
    }
    elseif (!empty($_POST['symbol']))
    {
        //lookup the stock
        $stock = lookup($_POST["symbol"]);
        
        //format the price
        $price = number_format($stock["price"], 2, '.', ',');
        
        //get how many shares are owned by user
        $shares = CS50::query("SELECT shares FROM portfolio WHERE symbol = ? AND user_id = ?", $_POST["symbol"], $_SESSION["id"]);
        
        //calculate how much the shares are worth
        $value = $shares[0]["shares"] * $price;
        
        //delete the info from portfolio and update cash values
        CS50::query("DELETE FROM portfolio WHERE user_id = ? AND symbol = ?", $_SESSION["id"], $_POST["symbol"]);
        CS50::query("UPDATE users SET cash = cash + $value WHERE id = ?", $_SESSION["id"]);
        
        //set history transaction
        $transaction = "Sell";
        
        //Insert the sale into history log
        CS50::query("INSERT INTO history (user_id, transaction, symbol, shares, price) VALUES (?, ?, ?, ?, ?)", $_SESSION["id"], $transaction, $_POST["symbol"], $shares[0]["shares"], $stock["price"]);
        
        //after selling redirect them to site
        redirect("/index.php");
        
    }
    
    //render sell.php
    render("sell_form.php", ["title" => "Sell", "rows" => $rows]);
?>

    
