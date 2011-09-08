<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function f_admin_ctools_plugin_api() {
  module_load_include('inc', 'f_admin', 'f_admin.defaults');
  $args = func_get_args();
  return call_user_func_array('_f_admin_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function f_admin_user_default_permissions() {
  module_load_include('inc', 'f_admin', 'f_admin.defaults');
  $args = func_get_args();
  return call_user_func_array('_f_admin_user_default_permissions', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function f_admin_strongarm() {
  module_load_include('inc', 'f_admin', 'f_admin.defaults');
  $args = func_get_args();
  return call_user_func_array('_f_admin_strongarm', $args);
}
