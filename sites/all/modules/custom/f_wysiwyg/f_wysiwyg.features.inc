<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function f_wysiwyg_ctools_plugin_api() {
  module_load_include('inc', 'f_wysiwyg', 'f_wysiwyg.defaults');
  $args = func_get_args();
  return call_user_func_array('_f_wysiwyg_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function f_wysiwyg_strongarm() {
  module_load_include('inc', 'f_wysiwyg', 'f_wysiwyg.defaults');
  $args = func_get_args();
  return call_user_func_array('_f_wysiwyg_strongarm', $args);
}
