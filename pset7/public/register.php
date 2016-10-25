<?php

    // configuration
    require("../includes/config.php");

    // if user reached page via GET (as by clicking a link or via redirect)
    if ($_SERVER["REQUEST_METHOD"] == "GET")
    {
        // else render form
        render("register_form.php", ["title" => "Register"]);
    }

    // else if user reached page via POST (as by submitting a form via POST)
    else if ($_SERVER["REQUEST_METHOD"] == "POST")
    {
        //validate submission
        if (empty($_POST["username"]))
        {
            apologize("You must provide a username.");
        }
        else if (empty($_POST["password"]))
        {
            apologize("You must provide a password.");
        }
        else if (empty($_POST["confirmation"]))
        {
            apologize("You must confirm your password.");
        }
        
        //make sure password matches confirmation
        if ($_POST["password"] != $_POST["confirmation"])
        {
            apologize("Your password must match confirmed password.");
        }
          
        else
        {
            //add user to database
            $results = CS50::query("INSERT IGNORE INTO users (username, hash, cash) VALUES(?, ?, 10000.0000)", $_POST["username"], password_hash($_POST["password"], PASSWORD_DEFAULT));
            
            //if user exists already apologize
        
            if ($results == 0)
            {
                apologize("Username is already taken.");
            }
            
            else
            {
                //log the user in
                $rows = CS50::query("SELECT LAST_INSERT_ID() AS id");
                $id = $rows[0]["id"];
                $_SESSION["id"] = $id;
                    
                //redirect them to site
                redirect("/index.php");
            }
        }
        
    }
 
?>