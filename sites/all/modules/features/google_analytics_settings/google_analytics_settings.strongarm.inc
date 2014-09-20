<?php
/**
 * @file
 * google_analytics_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function google_analytics_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_account';
  $strongarm->value = 'UA-5152194-2';
  $export['googleanalytics_account'] = $strongarm;

  return $export;
}
