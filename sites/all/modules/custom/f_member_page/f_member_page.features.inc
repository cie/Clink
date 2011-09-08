<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function f_member_page_ctools_plugin_api() {
  module_load_include('inc', 'f_member_page', 'f_member_page.defaults');
  $args = func_get_args();
  return call_user_func_array('_f_member_page_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_default_page_manager_handlers().
 */
function f_member_page_default_page_manager_handlers() {
  module_load_include('inc', 'f_member_page', 'f_member_page.defaults');
  $args = func_get_args();
  return call_user_func_array('_f_member_page_default_page_manager_handlers', $args);
}
