<?php
/**
 * @file
 * simple_mobile_navigation.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function simple_mobile_navigation_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_mobile-navigation:admin/config/user-interface/mobile-navigation
  $menu_links['management_mobile-navigation:admin/config/user-interface/mobile-navigation'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/mobile-navigation',
    'router_path' => 'admin/config/user-interface/mobile-navigation',
    'link_title' => 'Mobile Navigation',
    'options' => array(
      'attributes' => array(
        'title' => 'Mobile Navigation configuration.',
      ),
      'identifier' => 'management_mobile-navigation:admin/config/user-interface/mobile-navigation',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_kyttliittym:admin/config/user-interface',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Mobile Navigation');


  return $menu_links;
}
