<?php

/**
 * Add or append a GeoJSON file.
 */
$json = false;
function addJson($file){
	global $json;
	$new = file_get_contents($file);
	$new = json_decode($new);
	if($json){
		foreach($new->features as $feature){
			$json->features[] = $feature;
		}
	}else{
		$json = $new;
	}
}


// Add these files.
addJson('citycycle.json');
addJson('shops.json');

// Send headers & Enable gzip compression
header('content-type:application/json');
header('Content-Encoding: gzip');
ob_start("ob_gzhandler");

// Print.
die(json_encode($json));
