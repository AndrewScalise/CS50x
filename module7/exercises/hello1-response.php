<?php 

$username = $_GET["username"]; 
$say = $_GET["greeting"];

if (empty($username) || empty($say)): // TODO we also want to check if the greeting is an empty value

    // redirect the user back to the index page
    header("Location: https://ide50-amscalise.cs50.io/hello1-form.php"); // notice we can use a "relative" link here

    // stop running this script
    exit;
endif

?>

<!DOCTYPE html>
<head>
</head>
<body>
    <?php print("$say, $username"); ?>!
    <!-- TODO replace the hard-coded "Hello" above with the user-supplied greeting -->
</body>