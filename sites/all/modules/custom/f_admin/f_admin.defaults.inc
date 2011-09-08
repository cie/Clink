<?php

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _f_admin_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _f_admin_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration menu
  $permissions[] = array(
    'name' => 'access administration menu',
    'roles' => array(),
  );

  // Exported permission: display drupal links
  $permissions[] = array(
    'name' => 'display drupal links',
    'roles' => array(),
  );

  // Exported permission: masquerade as admin
  $permissions[] = array(
    'name' => 'masquerade as admin',
    'roles' => array(),
  );

  // Exported permission: masquerade as user
  $permissions[] = array(
    'name' => 'masquerade as user',
    'roles' => array(),
  );

  return $permissions;
}

/**
 * Helper to implementation of hook_strongarm().
 */
function _f_admin_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_margin_top';
  $strongarm->value = 1;

  $export['admin_menu_margin_top'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_position_fixed';
  $strongarm->value = 1;

  $export['admin_menu_position_fixed'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_tweak_modules';
  $strongarm->value = 1;

  $export['admin_menu_tweak_modules'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_tweak_tabs';
  $strongarm->value = 1;

  $export['admin_menu_tweak_tabs'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wipe';
  $strongarm->value = 'Wipe and rebuild';

  $export['wipe'] = $strongarm;
  return $export;
}
