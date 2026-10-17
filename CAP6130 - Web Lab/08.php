<form method="post">
  Number: <input type="number" name="n" required>
  Marks (0-100): <input type="number" name="m" min="0" max="100" required>
  <input type="submit">
</form>
<?php
if (isset($_POST['n'], $_POST['m'])) {
    $n = (int)$_POST['n'];
    $m = (int)$_POST['m'];

    if ($n > 0) $sign = "Positive";
    elseif ($n < 0) $sign = "Negative";
    else $sign = "Zero";
    echo "<h3>a) Number Check</h3>$n is $sign and " . ($n % 2 == 0 ? "Even" : "Odd");

    switch (intdiv($m, 10)) {
        case 10:
        case 9: $g = "A"; break;
        case 8: $g = "B"; break;
        case 7: $g = "C"; break;
        case 6: $g = "D"; break;
        default: $g = "F";
    }
    echo "<h3>b) Grade</h3>Marks $m = Grade $g";

    echo "<h3>c) Table of $n</h3>";
    for ($i = 1; $i <= 10; $i++) echo "$n x $i = " . $n * $i . "<br>";

    echo "<h3>d) Factorial and Prime</h3>";
    $f = 1; $i = 1;
    while ($i <= $n) { $f *= $i; $i++; }
    echo "Factorial of $n = $f<br>";

    $prime = $n > 1; $d = 2;
    while ($prime && $d * $d <= $n) {
        if ($n % $d == 0) $prime = false;
        $d++;
    }
    echo "$n is " . ($prime ? "Prime" : "Not Prime");
}