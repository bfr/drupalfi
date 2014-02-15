<?php
/**
 * @file
 * drupal_company.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupal_company_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function drupal_company_node_info() {
  $items = array(
    'company' => array(
      'name' => t('Company'),
      'base' => 'node_content',
      'description' => t('Drupal company content type'),
      'has_title' => '1',
      'title_label' => t('Otsikko'),
      'help' => '',
    ),
  );
  return $items;
}
