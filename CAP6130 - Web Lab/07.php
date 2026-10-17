<?php
$name = "Harshil Prajapati";
$age = 21;
$percent = 86.5;
$isStudent = true;
define("CITY", "Ahmedabad, Gujarat");
$student = array("name" => $name, "age" => $age, "percentage" => $percent, "isStudent" => $isStudent);

echo "Name: $name<br>";
echo "Age: $age<br>";
print "Percentage: $percent<br>";
print "Student: " . ($isStudent ? "Yes" : "No") . "<br>";
echo "City: " . CITY . "<br>";
print_r($student);

$state = "Gujarat";
function showScope()
{
  global $state;
  $local = "Surat";
  echo "<br>Global: $state, Local: $local<br>";
}
showScope();

echo "<pre>";
var_dump($name, $age, $percent, $isStudent);
echo "</pre>";
?>
<hr>
<form method="post">
  A: <input type="number" name="a" required>
  B: <input type="number" name="b" required>
  <input type="submit">
</form>
<?php
if (isset($_POST['a'], $_POST['b'])) {
  $a = $_POST['a'];
  $b = $_POST['b'];
  $t = fn($v) => $v ? "True" : "False";
  $rows = [
    "A + B" => $a + $b,
    "A - B" => $a - $b,
    "A * B" => $a * $b,
    "A / B" => $b ? $a / $b : "NA",
    "A % B" => $b ? $a % $b : "NA",
    "A > B" => $t($a > $b),
    "A == B" => $t($a == $b),
    "A > 0 && B > 0" => $t($a > 0 && $b > 0),
    "A > 0 || B > 0" => $t($a > 0 || $b > 0),
  ];
  echo "<table border='1' cellpadding='5'>";
  foreach ($rows as $k => $v) echo "<tr><td>$k</td><td>$v</td></tr>";
  echo "</table>";
}
