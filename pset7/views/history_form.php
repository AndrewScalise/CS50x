<div id="middle">
<table class="table table-striped">

    <thead>
        <tr>
            <th>Transaction</th>
            <th>Date/Time</th>
            <th>Symbol</th>
            <th>Shares</th>
            <th>Price</th>
        </tr>
    </thead>

     <tbody class="table">
    <?php 
        foreach ($rows as $row):
        {
            print("<tr>");
            
            //make the symbols uppercase
            $symbol = strtoupper($row["symbol"]);
            
            //print the information in the table
            print("<td>{$row["transaction"]}</td>");
            print("<td>{$row["time"]}</td>");
            print("<td>{$symbol}</td>");
            print("<td>{$row["shares"]}</td>");
            
            //format price
            $prices = number_format($row["price"], 2, '.', ',');
            print("<td>\${$prices}</td>");
        
        }
        
        endforeach ?>
        
    </tbody>

</table>
            </div>