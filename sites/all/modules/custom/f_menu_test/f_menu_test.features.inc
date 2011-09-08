<?php

/**
 * Implementation of hook_exportable_menus_default_menus().
 */
function f_menu_test_exportable_menus_default_menus() {
  module_load_include('inc', 'f_menu_test', 'f_menu_test.defaults');
  $args = func_get_args();
  return call_user_func_array('_f_menu_test_exportable_menus_default_menus', $args);
}
