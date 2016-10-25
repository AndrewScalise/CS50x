<?php
    $orders = readline("How many orders? ");
    $count = 0;
    $food = [];
    while($count < $orders)
    {
        print("Order {$count} ");
        $name = readline("name: \n");
        print("Order {$count} ");
        $order = readline("order: \n");
        $food[$name] = $order;
        $count++;
    }
    
    print("\nTotal order: \n");

    foreach($food as $people => $ordered)
    {
        print($people);
        print(": ");
        print($ordered);
        print("\n");
    }
    
?>