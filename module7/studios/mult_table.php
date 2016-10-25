<?php

$n = $_GET["numbers"]; // TODO what should $n really be? Replace the 10 with the user-supplied value from the form

// if we don't have a number, redirect back to the form page
if (empty($n)) {
    header("Location: https://ide50-amscalise.cs50.io/mult_form.php");
    exit;
}

?>

<!DOCTYPE html>
<html>
    <head>
        <title>Your Table is Ready</title>
    </head>
    <body>
        <table border="1px" bgcolor="yellow" bordercolor="white" width="30%" align="center">
            <?php for ($i = 1; $i <= $n; $i++): ?>
                <!-- TODO this multiplication table needs some work! -->
                <tr>
                    <?php for($j = 1; $j<= $n; $j++): ?>
                    <td>
                    <?php $a= $j*$i; ?>
                    <?php print("$a"); ?>
                    </td>
                <?php endfor ?>
                </tr>
            <?php endfor ?>
        </table>
    </body>
</html>