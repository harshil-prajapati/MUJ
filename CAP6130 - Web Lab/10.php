<?php
// a) max, min, avg without built-ins
function stats($a)
{
  $max = $min = $a[0];
  $sum = 0;
  foreach ($a as $v) {
    if ($v > $max) $max = $v;
    if ($v < $min) $min = $v;
    $sum += $v;
  }
  return [$max, $min, $sum / count($a)];
}
[$mx, $mn, $av] = stats([12, 45, 7, 89, 23, 56, 34, 90, 3, 61]);
echo "Max=$mx Min=$mn Avg=$av<br>";
// b) associative array
$st = ["Amit" => 78, "Riya" => 92, "Sam" => 65];
$top = "";
$hi = -1;
foreach ($st as $n => $m) {
  echo "$n: $m<br>";
  if ($m > $hi) {
    $hi = $m;
    $top = $n;
  }
}
echo "Topper: $top ($hi)<br>";
// c) built-in functions
$a = [5, 2, 8];
sort($a);
array_push($a, 10);
echo implode(",", $a) . " | count=" . count($a) . " | in_array(8)=" . var_export(in_array(8, $a), true) . " | index of 10=" . array_search(10, $a) . " | reversed=" . implode(",", array_reverse($a)) . "<br>";
// d) default & variadic
function greet($n = "Guest")
{
  return "Hello $n<br>";
}
function add(...$args)
{
  return array_sum($args);
}
echo greet(), greet("Ravi"), "Sum=" . add(1, 2, 3, 4);
