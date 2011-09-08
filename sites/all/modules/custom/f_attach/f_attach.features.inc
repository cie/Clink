<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function f_attach_user_default_permissions() {
  module_load_include('inc', 'f_attach', 'f_attach.defaults');
  $args = func_get_args();
  return call_user_func_array('_f_attach_user_default_permissions', $args);
}
