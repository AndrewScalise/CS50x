<?php
    if(empty($_POST["name"]) || empty($_POST["gender"]) || empty($_POST["dorm"]))
    {
        header("Location: https://ide50-amscalise.cs50.io/froshims-0.php");
        exit;
    }
?>


<!DOCTYPE html>

<html>
    <head>
        <title>Frosh IMs</title>
    </head>
    <body>
        <pre>
            <?php print_r($_POST); ?>
        </pre>
    </body>
</html>