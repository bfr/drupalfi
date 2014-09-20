<?php
/**
 * @file
 * social_media_share.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function social_media_share_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer easy social'.
  $permissions['administer easy social'] = array(
    'name' => 'administer easy social',
    'roles' => array(),
    'module' => 'easy_social',
  );

  // Exported permission: 'use easy social wizard'.
  $permissions['use easy social wizard'] = array(
    'name' => 'use easy social wizard',
    'roles' => array(),
    'module' => 'easy_social',
  );

  return $permissions;
}
