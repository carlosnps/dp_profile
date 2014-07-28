<?php
/**
 * @file
 * provider_search_infrastructure.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function provider_search_infrastructure_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'vnsny-xpathparser_71-default_value';
  $feeds_tamper->importer = 'vnsny';
  $feeds_tamper->source = 'xpathparser:71';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'Not Provided',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set default value';
  $export['vnsny-xpathparser_71-default_value'] = $feeds_tamper;

  return $export;
}
