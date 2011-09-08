<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function f_main_page_ctools_plugin_api() {
  module_load_include('inc', 'f_main_page', 'f_main_page.defaults');
  $args = func_get_args();
  return call_user_func_array('_f_main_page_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_menu_default_items().
 */
function f_main_page_menu_default_items() {
  module_load_include('inc', 'f_main_page', 'f_main_page.defaults');
  $args = func_get_args();
  return call_user_func_array('_f_main_page_menu_default_items', $args);
}

/**
 * Implementation of hook_default_page_manager_pages().
 */
function f_main_page_default_page_manager_pages() {
  module_load_include('inc', 'f_main_page', 'f_main_page.defaults');
  $args = func_get_args();
  return call_user_func_array('_f_main_page_default_page_manager_pages', $args);
}
