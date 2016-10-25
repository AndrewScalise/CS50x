<?php

$lottoNumbers = [123, 555, 23, 7129];
$drawnNumbers = [
    "Sally" => 23,
    "Ken" => 3,
    "Jeremy" => 8,
    "Rhonda" => 7129
];

print "Tonight's numbers:\n";

// TODO: your code goes here!
// loop through
foreach($lottoNumbers as $lottoNumber)
{
    print($lottoNumber);
    print(", ");
}

print "\nParticipant's drawn numbers:\n";

// TODO: your code goes here:
// loop through the drawn numbers printing each name and number
foreach($drawnNumbers as $people => $numbers)
{
    print($people);
    print(": ");
    print("$numbers");
    print("\n");
}

?>