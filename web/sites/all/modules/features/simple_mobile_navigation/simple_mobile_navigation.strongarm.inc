<?php
/**
 * @file
 * simple_mobile_navigation.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function simple_mobile_navigation_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mobile_navigation_breakpoint';
  $strongarm->value = 'all and (min-width: 768px)';
  $export['mobile_navigation_breakpoint'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mobile_navigation_expand_active_trail';
  $strongarm->value = 0;
  $export['mobile_navigation_expand_active_trail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mobile_navigation_mainPageSelector';
  $strongarm->value = '#page';
  $export['mobile_navigation_mainPageSelector'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mobile_navigation_menuselector';
  $strongarm->value = '#primary';
  $export['mobile_navigation_menuselector'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mobile_navigation_menu_label';
  $strongarm->value = 'Menu';
  $export['mobile_navigation_menu_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mobile_navigation_plugin';
  $strongarm->value = 'basic';
  $export['mobile_navigation_plugin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mobile_navigation_showEffect';
  $strongarm->value = 'expand_down';
  $export['mobile_navigation_showEffect'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mobile_navigation_showitems';
  $strongarm->value = 'all';
  $export['mobile_navigation_showitems'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mobile_navigation_special_classes';
  $strongarm->value = 0;
  $export['mobile_navigation_special_classes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mobile_navigation_tabhandler';
  $strongarm->value = 1;
  $export['mobile_navigation_tabhandler'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mobile_navigation_useMask';
  $strongarm->value = 0;
  $export['mobile_navigation_useMask'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mobile_navigation_width';
  $strongarm->value = '65';
  $export['mobile_navigation_width'] = $strongarm;

  return $export;
}
