This is the Digital Pulp Distribution.  Please use the Digital Pulp Install profile to install locally.

Items pending:

combine the BitBucket DP Vagrant build with this distro
Get Provider Search files via SFTP from ftp.vnsny.org

DO NOT CONNECT WITH ACQUIA SEARCH....
	This will need to connect to a local SOLR search

How to process a provider file 	

move file to /Users/ccoto/tmp/Geo_input_out.xml  (or change code below)
run xmlcut.php in devel/php  (or add code to custom module) -- see code below

in cron run one file at a time --
  run processFeeds.php 

 after all files have been processed
    time to get SOLR to index data in cron
    




***********************************************************************************************************************
xmlcut.php
// next two lines need to have administration logic added
$xml = simplexml_load_file('/Users/ccoto/tmp/Geo_input_out.xml');
$cutAt = 5000;

$y = 0;
$x = 0;
$str = '<main>';

foreach ($xml->children() as $child)
{
	if ($child->getName() == 'DATA_RECORD') {
		$str .= "<DATA_RECORD>\n"; 
		foreach ($child->children() as $nc) {
			$val = trim($nc->__toString());
			$str .= "<" . $nc->getName() . ">" . htmlentities($val , ENT_QUOTES) .  "</" . $nc->getName() . ">" . "\n";
		}
		$str .= "</DATA_RECORD>\n"; 
		$x++;
		if ($x >= $cutAt) {
			_load_file($str, $y);

	    	$x = 0;
	    	$str = '<main>';
		}
	}
}
if ($str != '<main>') {
	_load_file($str, $y);
}
print 'the end';


function _load_file($str, &$y) {
	$str .= "</main>";
	$y++;
	$newFileName = "public://feeds/tmp/providerSearch_$y.xml";
	$file = file_save_data($str , $newFileName);
}


***********************************************************************************************************************
processFeeds.php


$qry = db_select('file_managed' , 'f')
    ->fields('f' , array(
        'fid'
    ))
    ->condition('filename' , 'providerSearch%.xml' , 'like')
    ->orderBy('timestamp' , 'ASC')
    ->range(0,1)
    ->execute();
if ($result = $qry->fetchAssoc()) {
   $fid = $result['fid'];

	$file = file_load($fid);

    $source = feeds_source('vnsny');

	$configAry = array(
                'FeedsFileFetcher' => array(
                                        'fid' => 0,
                                        'source' => $file->uri,
                                        'upload' => '',
                                        'file' => $file
                ),
                'FeedsXPathParserXML' => array(
                ),
	);
 
    $source->addConfig($configAry);
    $source->save();

  // Add to schedule, make sure importer is scheduled, too.
	$source->schedule();
	$source->importer->schedule();

    file_delete($file , TRUE);
}

***********************************************************************************************************************




