<?php
/**
 * @file
 * service_links_social_sharing.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function service_links_social_sharing_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access service links'.
  $permissions['access service links'] = array(
    'name' => 'access service links',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'service_links',
  );

  return $permissions;
}
