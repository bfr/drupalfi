<?php
/**
 * @file
 * user_roles_and_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function user_roles_and_permissions_user_default_roles() {
  $roles = array();

  // Exported role: Administrator.
  $roles['Administrator'] = array(
    'name' => 'Administrator',
    'weight' => 3,
  );

  // Exported role: Content creator.
  $roles['Content creator'] = array(
    'name' => 'Content creator',
    'weight' => 2,
  );

  return $roles;
}
