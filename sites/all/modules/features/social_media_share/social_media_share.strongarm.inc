<?php
/**
 * @file
 * social_media_share.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function social_media_share_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_global_order';
  $strongarm->value = array(
    0 => 'twitter',
    1 => 'facebook',
    2 => 'googleplus',
    3 => 'linkedin',
  );
  $export['easy_social_global_order'] = $strongarm;

  return $export;
}
