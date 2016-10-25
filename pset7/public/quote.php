 <?php
 
 
  // configuration
    require("../includes/config.php"); 
    
    // if user reached page via GET (as by clicking a link or via redirect)
    if ($_SERVER["REQUEST_METHOD"] == "GET")
    {
        // else render form
        render("quote_form.php", ["title" => "Quote"]);
    }

    // else if user reached page via POST (as by submitting a form via POST)
    else if ($_SERVER["REQUEST_METHOD"] == "POST")
    {
        //lookup the stock entered
        $stock = lookup($_POST["symbol"]);
        
        
        //format the price
        $price = number_format($stock["price"], 2, '.', ',');
        
        //render quote form2
        render("quote_form2.php", ["title" => "Quote", "stocks" => $stock, "price" => $price]);
        
    }
?>