<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function f_search_user_default_permissions() {
  module_load_include('inc', 'f_search', 'f_search.defaults');
  $args = func_get_args();
  return call_user_func_array('_f_search_user_default_permissions', $args);
}
