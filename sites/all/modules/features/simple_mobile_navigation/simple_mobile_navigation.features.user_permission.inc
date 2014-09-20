<?php
/**
 * @file
 * simple_mobile_navigation.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function simple_mobile_navigation_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer mobile navigation'.
  $permissions['administer mobile navigation'] = array(
    'name' => 'administer mobile navigation',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'mobile_navigation',
  );

  return $permissions;
}
