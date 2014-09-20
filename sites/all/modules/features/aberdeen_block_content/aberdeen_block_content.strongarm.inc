<?php
/**
 * @file
 * aberdeen_block_content.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function aberdeen_block_content_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupalfi_aberdeen_block_content';
  $strongarm->value = '<div>Palvelintilan tarjoaa:</div>
<a href="http://www.aberdeencloud.com/"><img style="max-width: 150px" src="/sites/all/modules/custom/drupalfi_aberdeen_block/images/aberdeencloud.png" /></a>';
  $export['drupalfi_aberdeen_block_content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupalfi_aberdeen_block_title';
  $strongarm->value = '<none>';
  $export['drupalfi_aberdeen_block_title'] = $strongarm;

  return $export;
}
