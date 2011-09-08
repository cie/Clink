<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function f_statistics_ctools_plugin_api() {
  module_load_include('inc', 'f_statistics', 'f_statistics.defaults');
  $args = func_get_args();
  return call_user_func_array('_f_statistics_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function f_statistics_user_default_permissions() {
  module_load_include('inc', 'f_statistics', 'f_statistics.defaults');
  $args = func_get_args();
  return call_user_func_array('_f_statistics_user_default_permissions', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function f_statistics_strongarm() {
  module_load_include('inc', 'f_statistics', 'f_statistics.defaults');
  $args = func_get_args();
  return call_user_func_array('_f_statistics_strongarm', $args);
}
