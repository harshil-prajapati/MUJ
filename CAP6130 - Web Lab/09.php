<?php if (!isset($_POST['name'])) { ?>
  <h3>Student Result</h3>
  <form method="post">Name: <input name="name" required><br>
    <?php for ($i = 1; $i <= 5; $i++) echo "Subject $i: <input type='number' name='m[]' min='0' max='100' required><br>"; ?>
    <input type="submit">
  </form>
<?php } else {
  $m = $_POST['m'];
  $total = array_sum($m);
  $per = $total / 5;
  $grade = $per >= 75 ? "A" : ($per >= 60 ? "B" : ($per >= 40 ? "C" : "F"));
  $color = $grade == "F" ? "red" : "green"; ?>
  <html>

  <body style="font-family:Arial">
    <h3>Result of <?php echo htmlspecialchars($_POST['name']); ?></h3>
    <table border="1" cellpadding="5">
      <?php foreach ($m as $i => $v): ?><tr>
          <td>Subject <?= $i + 1 ?></td>
          <td><?= $v ?></td>
        </tr><?php endforeach; ?>
      <tr style="color:<?= $color ?>">
        <td>Total / % / Grade</td>
        <td><?= "$total / $per% / $grade" ?></td>
      </tr>
    </table>
  </body>

  </html>
<?php } ?>