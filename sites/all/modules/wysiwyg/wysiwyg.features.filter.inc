<?php
/**
 * @file
 * wysiwyg.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function wysiwyg_filter_default_formats() {
  $formats = array();

  // Exported format: Wysiwyg profile.
  $formats['wysiwyg_profile'] = array(
    'format' => 'wysiwyg_profile',
    'name' => 'Wysiwyg profile',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(),
  );

  return $formats;
}
