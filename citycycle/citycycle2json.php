<?php
/**
 * A PHP thing to convert the CityCycle XML into a really tiny but
 * non-standard JSON object.
 * I've abandoned this idea.
 */

function ucname($string) {
    $string=ucwords(strtolower($string));

    foreach (array('-', '\'') as $delimiter) {
      if (strpos($string, $delimiter)!==false) {
        $string =implode($delimiter, array_map('ucfirst', explode($delimiter, $string)));
      }
    }
    return $string;
}

$cc = file_get_contents('citycycle.xml');
$cc = new SimpleXmlElement($cc);

$out = Array();
foreach($cc->markers->marker as $marker){
	$attr = $marker->attributes();
	$out[] = Array(
		'n' => ucname($attr->name),
		'ref' => (string)$attr->number,
		'addr' => ucname($attr->address),
		'lat' => (string)$attr->lat,
		'lon' => (string)$attr->lng,
		'open' => (string)$attr->open,
	);
}

print(json_encode($out));
