<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function f_forum_ctools_plugin_api() {
  module_load_include('inc', 'f_forum', 'f_forum.defaults');
  $args = func_get_args();
  return call_user_func_array('_f_forum_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_default_fe_block_settings().
 */
function f_forum_default_fe_block_settings() {
  module_load_include('inc', 'f_forum', 'f_forum.features.fe_block_settings');
  $args = func_get_args();
  return call_user_func_array('_f_forum_default_fe_block_settings', $args);
}

/**
 * Implementation of hook_menu_default_items().
 */
function f_forum_menu_default_items() {
  module_load_include('inc', 'f_forum', 'f_forum.defaults');
  $args = func_get_args();
  return call_user_func_array('_f_forum_menu_default_items', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function f_forum_user_default_permissions() {
  module_load_include('inc', 'f_forum', 'f_forum.defaults');
  $args = func_get_args();
  return call_user_func_array('_f_forum_user_default_permissions', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function f_forum_strongarm() {
  module_load_include('inc', 'f_forum', 'f_forum.defaults');
  $args = func_get_args();
  return call_user_func_array('_f_forum_strongarm', $args);
}
