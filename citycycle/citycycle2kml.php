<?php
define('CITYCYCLE_XML','http://www.citycycle.com.au/service/carto');

// Load the XML source
$xml = new DOMDocument;
$xmlSource = file_get_contents(CITYCYCLE_XML);
$xml->loadXML($xmlSource);

$xsl = new DOMDocument;
$xsl->load('citycycle.xsl');

$proc = new XSLTProcessor;
$proc->importStyleSheet($xsl); // attach the xsl rules
$proc->setParameter('', 'current-date', date('c')); // Give it today's date.
echo $proc->transformToXML($xml);
