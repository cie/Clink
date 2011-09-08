<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function f_login_ctools_plugin_api() {
  module_load_include('inc', 'f_login', 'f_login.defaults');
  $args = func_get_args();
  return call_user_func_array('_f_login_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_default_fe_block_boxes().
 */
function f_login_default_fe_block_boxes() {
  module_load_include('inc', 'f_login', 'f_login.features.fe_block_boxes');
  $args = func_get_args();
  return call_user_func_array('_f_login_default_fe_block_boxes', $args);
}

/**
 * Implementation of hook_default_fe_block_settings().
 */
function f_login_default_fe_block_settings() {
  module_load_include('inc', 'f_login', 'f_login.features.fe_block_settings');
  $args = func_get_args();
  return call_user_func_array('_f_login_default_fe_block_settings', $args);
}

/**
 * Implementation of hook_default_page_manager_pages().
 */
function f_login_default_page_manager_pages() {
  module_load_include('inc', 'f_login', 'f_login.defaults');
  $args = func_get_args();
  return call_user_func_array('_f_login_default_page_manager_pages', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function f_login_user_default_permissions() {
  module_load_include('inc', 'f_login', 'f_login.defaults');
  $args = func_get_args();
  return call_user_func_array('_f_login_user_default_permissions', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function f_login_strongarm() {
  module_load_include('inc', 'f_login', 'f_login.defaults');
  $args = func_get_args();
  return call_user_func_array('_f_login_strongarm', $args);
}
