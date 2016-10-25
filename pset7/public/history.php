<?php

     //include config
    require("../includes/config.php");
    
    //get the data from history table
    $rows = CS50::query("SELECT * FROM history WHERE user_id = ?", $_SESSION["id"]);
    
    //send that information to the history form for display
    render("history_form.php", ["title" => "History", "rows" => $rows]);
    
?>