<?php
/**
 * @file
 * caching_and_varnish.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function caching_and_varnish_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer varnish'.
  $permissions['administer varnish'] = array(
    'name' => 'administer varnish',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'varnish',
  );

  // Exported permission: 'bypass advanced aggregation'.
  $permissions['bypass advanced aggregation'] = array(
    'name' => 'bypass advanced aggregation',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'advagg',
  );

  return $permissions;
}
