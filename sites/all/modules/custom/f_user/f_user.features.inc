<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function f_user_ctools_plugin_api() {
  module_load_include('inc', 'f_user', 'f_user.defaults');
  $args = func_get_args();
  return call_user_func_array('_f_user_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function f_user_strongarm() {
  module_load_include('inc', 'f_user', 'f_user.defaults');
  $args = func_get_args();
  return call_user_func_array('_f_user_strongarm', $args);
}
