<div id="middle">
<table class="table table-striped">

    <thead>
        <tr>
            <th>Symbol</th>
            <th>Name</th>
            <th>Shares</th>
            <th>Price</th>
            <th>TOTAL</th>
        </tr>
    </thead>

    <tbody class="table">
    <?php 
        foreach ($positions as $position):
        {
            print("<tr>");
            //make the symbols uppercase
            $symbol = strtoupper($position["symbol"]);
            
            //print the information in the table
            print("<td>{$symbol}</td>");
            print("<td>{$position["name"]}</td>");
            print("<td>{$position["shares"]}</td>");
            
            //format price
            $prices = number_format($position["price"], 2, '.', ',');
            print("<td>\${$prices}</td>");
            
            //format the total to two decimal places and print it
            $total = number_format($position["total"], 2, '.', ',');
            print("<td>\${$total}</td>");
        
        }
        
        endforeach ?>
        
        <tr>
            <td colspan="4">CASH</td>
            <?php 
            $cashed = number_format($cash, 2, '.',',');
            print("<td>\${$cashed}</td>"); ?>
        </tr>

    </tbody>

</table>
</div>
