<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function f_locale_ctools_plugin_api() {
  module_load_include('inc', 'f_locale', 'f_locale.defaults');
  $args = func_get_args();
  return call_user_func_array('_f_locale_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function f_locale_strongarm() {
  module_load_include('inc', 'f_locale', 'f_locale.defaults');
  $args = func_get_args();
  return call_user_func_array('_f_locale_strongarm', $args);
}
