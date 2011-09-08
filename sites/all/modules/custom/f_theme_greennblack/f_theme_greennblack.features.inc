<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function f_theme_greennblack_ctools_plugin_api() {
  module_load_include('inc', 'f_theme_greennblack', 'f_theme_greennblack.defaults');
  $args = func_get_args();
  return call_user_func_array('_f_theme_greennblack_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function f_theme_greennblack_strongarm() {
  module_load_include('inc', 'f_theme_greennblack', 'f_theme_greennblack.defaults');
  $args = func_get_args();
  return call_user_func_array('_f_theme_greennblack_strongarm', $args);
}
