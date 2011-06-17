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

$out = Array(
	'type' => 'FeatureCollection',
	'features' => $out
);
foreach($cc->markers->marker as $marker){
	$attr = $marker->attributes();
	$out['features'][] = Array(
		'id' => (string)$attr->number,
		'type' => 'Feature',
		'geometry' => Array(
			'type' => 'Point',
			'coordinates' => Array((string)$attr->lat, (string)$attr->lng),
			'properties' => Array(
				'name' => ucname($attr->name),
				'address' => ucname($attr->address)
			)
		)
	);
}

print(json_encode($out));
