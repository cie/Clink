<?php

/**
 * Implementation of hook_content_default_fields().
 */
function f_manage_content_default_fields() {
  module_load_include('inc', 'f_manage', 'f_manage.defaults');
  $args = func_get_args();
  return call_user_func_array('_f_manage_content_default_fields', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function f_manage_ctools_plugin_api() {
  module_load_include('inc', 'f_manage', 'f_manage.defaults');
  $args = func_get_args();
  return call_user_func_array('_f_manage_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_node_info().
 */
function f_manage_node_info() {
  module_load_include('inc', 'f_manage', 'f_manage.features.node');
  $args = func_get_args();
  return call_user_func_array('_f_manage_node_info', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function f_manage_user_default_permissions() {
  module_load_include('inc', 'f_manage', 'f_manage.defaults');
  $args = func_get_args();
  return call_user_func_array('_f_manage_user_default_permissions', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function f_manage_strongarm() {
  module_load_include('inc', 'f_manage', 'f_manage.defaults');
  $args = func_get_args();
  return call_user_func_array('_f_manage_strongarm', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function f_manage_views_default_views() {
  module_load_include('inc', 'f_manage', 'f_manage.features.views');
  $args = func_get_args();
  return call_user_func_array('_f_manage_views_default_views', $args);
}
