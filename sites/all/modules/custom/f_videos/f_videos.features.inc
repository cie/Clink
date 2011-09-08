<?php

/**
 * Implementation of hook_content_default_fields().
 */
function f_videos_content_default_fields() {
  module_load_include('inc', 'f_videos', 'f_videos.defaults');
  $args = func_get_args();
  return call_user_func_array('_f_videos_content_default_fields', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function f_videos_ctools_plugin_api() {
  module_load_include('inc', 'f_videos', 'f_videos.defaults');
  $args = func_get_args();
  return call_user_func_array('_f_videos_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_node_info().
 */
function f_videos_node_info() {
  module_load_include('inc', 'f_videos', 'f_videos.features.node');
  $args = func_get_args();
  return call_user_func_array('_f_videos_node_info', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function f_videos_user_default_permissions() {
  module_load_include('inc', 'f_videos', 'f_videos.defaults');
  $args = func_get_args();
  return call_user_func_array('_f_videos_user_default_permissions', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function f_videos_strongarm() {
  module_load_include('inc', 'f_videos', 'f_videos.defaults');
  $args = func_get_args();
  return call_user_func_array('_f_videos_strongarm', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function f_videos_views_default_views() {
  module_load_include('inc', 'f_videos', 'f_videos.features.views');
  $args = func_get_args();
  return call_user_func_array('_f_videos_views_default_views', $args);
}
