
<h1>Build Your Greeting</h1>
<form action="greet.php" method="POST"/>
    <label>Your name:</label>
    <input type="text" name="recipient_name" />
    <br/>
    <label>Select a greeting:</label>
    <select name="select_greeting">
    <?php foreach($greeting_row as $greeting) : ?>
        <option value="<?php echo $greeting['text']; ?>"><?php echo $greeting['text']; ?></option>
    <?php endforeach; ?>
    </select>
    <label>Or create your own:</label>
    <input type="text" name="custom_greeting" />
    <br/>
    <input type="submit"/>
</form>

