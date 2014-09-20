<?php
/**
 * @file
 * social_media_share.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function social_media_share_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_easy-social-settings:admin/config/content/easy_social
  $menu_links['management_easy-social-settings:admin/config/content/easy_social'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/easy_social',
    'router_path' => 'admin/config/content/easy_social',
    'link_title' => 'Easy Social Settings',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure the social buttons and node types',
      ),
      'identifier' => 'management_easy-social-settings:admin/config/content/easy_social',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Exported menu link: management_easy-social-wizard:admin/config/content/easy_social_wizard
  $menu_links['management_easy-social-wizard:admin/config/content/easy_social_wizard'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/easy_social_wizard',
    'router_path' => 'admin/config/content/easy_social_wizard',
    'link_title' => 'Easy Social Wizard',
    'options' => array(
      'attributes' => array(
        'title' => 'Quickly enable Easy Social for your Content Types',
      ),
      'identifier' => 'management_easy-social-wizard:admin/config/content/easy_social_wizard',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Easy Social Settings');
  t('Easy Social Wizard');


  return $menu_links;
}
