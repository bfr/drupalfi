<?php
/**
 * @file
 * liftup.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function liftup_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function liftup_node_info() {
  $items = array(
    'liftup' => array(
      'name' => t('Liftup'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Otsikko'),
      'help' => '',
    ),
  );
  return $items;
}
