<?php
/**
 * @file
 * localization_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function localization_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_default_timezone';
  $strongarm->value = 'Europe/Helsinki';
  $export['date_default_timezone'] = $strongarm;

  return $export;
}
