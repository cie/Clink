<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function f_blog_ctools_plugin_api() {
  module_load_include('inc', 'f_blog', 'f_blog.defaults');
  $args = func_get_args();
  return call_user_func_array('_f_blog_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function f_blog_user_default_permissions() {
  module_load_include('inc', 'f_blog', 'f_blog.defaults');
  $args = func_get_args();
  return call_user_func_array('_f_blog_user_default_permissions', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function f_blog_strongarm() {
  module_load_include('inc', 'f_blog', 'f_blog.defaults');
  $args = func_get_args();
  return call_user_func_array('_f_blog_strongarm', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function f_blog_views_default_views() {
  module_load_include('inc', 'f_blog', 'f_blog.features.views');
  $args = func_get_args();
  return call_user_func_array('_f_blog_views_default_views', $args);
}
