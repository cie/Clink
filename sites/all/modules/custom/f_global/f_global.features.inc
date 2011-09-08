<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function f_global_ctools_plugin_api() {
  module_load_include('inc', 'f_global', 'f_global.defaults');
  $args = func_get_args();
  return call_user_func_array('_f_global_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_default_fe_block_settings().
 */
function f_global_default_fe_block_settings() {
  module_load_include('inc', 'f_global', 'f_global.features.fe_block_settings');
  $args = func_get_args();
  return call_user_func_array('_f_global_default_fe_block_settings', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function f_global_user_default_permissions() {
  module_load_include('inc', 'f_global', 'f_global.defaults');
  $args = func_get_args();
  return call_user_func_array('_f_global_user_default_permissions', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function f_global_strongarm() {
  module_load_include('inc', 'f_global', 'f_global.defaults');
  $args = func_get_args();
  return call_user_func_array('_f_global_strongarm', $args);
}
