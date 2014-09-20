<?php
/**
 * @file
 * wysiwyg.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function wysiwyg_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'use text format wysiwyg_profile'.
  $permissions['use text format wysiwyg_profile'] = array(
    'name' => 'use text format wysiwyg_profile',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
