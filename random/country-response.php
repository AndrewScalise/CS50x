<?php

$country = $_GET["country"];
$countries = ["USA" => "Washington D.C.", "Japan" => "Tokyo", "Korea" => "Seoul"];




?>

<!DOCTYPE html>
<head></head>
<body>
    <?php if($country == "nothing"): ?>
    You must provide a country
    <a href="https://ide50-amscalise.cs50.io/country.php"> back</a>
    <?php else: 
    print("\nThe capital of {$country} is {$countries[$country]}");
    ?>
    <?php endif ?>
</body>


