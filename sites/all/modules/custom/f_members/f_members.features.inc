<?php

/**
 * Implementation of hook_views_default_views().
 */
function f_members_views_default_views() {
  module_load_include('inc', 'f_members', 'f_members.features.views');
  $args = func_get_args();
  return call_user_func_array('_f_members_views_default_views', $args);
}
