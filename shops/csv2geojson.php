<?php
/**
 * Convert the shop spreadsheet into a GeoJSON object. 
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


function makeOpeningHours($data){
	
	global $keys;
	
	// Go through each day of the week.
	foreach(Array(
		$keys['Mon'],
		$keys['Tue'],
		$keys['Wed'],
		$keys['Thu'],
		$keys['Fri'],
		$keys['Sat'],
		$keys['Sun']
		) as $day){
		
		// First up, convert to 12 hour time.
		$hours = explode('-',$data[$day]);
		foreach($hours as &$hour){
			if($hour >= 1300){
				$hour -= 1200;
			}
			$hour = str_pad($hour,4,'0',STR_PAD_LEFT);

			$hour = substr($hour,0,2) . ':' . substr($hour,2,2);
		}
		$hours = implode(' &ndash; ',$hours);
		$data[$day] = $hours;
	}
	
	$html = "<dl><dt>Monday</dt><dd>{$data[$keys['Mon']]}</dd><dt>Tuesday</dt><dd>{$data[$keys['Tue']]}</dd><dt>Wednesday</dt><dd>{$data[$keys['Wed']]}</dd><dt>Thursday</dt><dd>{$data[$keys['Thu']]}</dd><dt>Friday</dt><dd>{$data[$keys['Fri']]}</dd><dt>Saturday</dt><dd>{$data[$keys['Sat']]}</dd><dt>Sunday</dt><dd>{$data[$keys['Sun']]}</dd></dl>";
	
	return $html;
	
}

$fh = fopen('shops.csv','r');


$out = Array(
	'type' => 'FeatureCollection',
	'features' => Array()
);

/* First row is a heading. This is our key. */
$keys = fgetcsv($fh, 1000, ",");
$keys = array_flip($keys);



$i=0;
while (($data = fgetcsv($fh, 1000, ",")) !== FALSE) {
	$i++;
	$entry = Array(
		'id' => $data[$keys['Name']],
		'type' => 'Feature',
		'geometry' => Array(
			'type' => 'Point',
			'coordinates' => Array((float)$data[$keys['Lon']], (float)$data[$keys['Lat']])
		),
		'properties' => Array(
			'description' => '',
			'category' => 'shop'
		)
	);
	
	$entry['properties']['description'] = '<p>'.str_replace(',',',<br/>',$data[$keys['Address']]).'</p>';
	$entry['properties']['description'] .= makeOpeningHours($data);
		
	if($data[$keys['Url']]){
		$entry['properties']['description'] .= "<p><a href=\"{$data[$keys['Url']]}\">Website</a></p>";
	}
	$out['features'][] = $entry;
}

print(json_encode($out));
