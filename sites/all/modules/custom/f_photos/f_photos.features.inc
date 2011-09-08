<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function f_photos_ctools_plugin_api() {
  module_load_include('inc', 'f_photos', 'f_photos.defaults');
  $args = func_get_args();
  return call_user_func_array('_f_photos_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function f_photos_user_default_permissions() {
  module_load_include('inc', 'f_photos', 'f_photos.defaults');
  $args = func_get_args();
  return call_user_func_array('_f_photos_user_default_permissions', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function f_photos_strongarm() {
  module_load_include('inc', 'f_photos', 'f_photos.defaults');
  $args = func_get_args();
  return call_user_func_array('_f_photos_strongarm', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function f_photos_views_default_views() {
  module_load_include('inc', 'f_photos', 'f_photos.features.views');
  $args = func_get_args();
  return call_user_func_array('_f_photos_views_default_views', $args);
}
