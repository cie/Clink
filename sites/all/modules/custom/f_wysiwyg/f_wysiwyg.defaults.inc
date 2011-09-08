<?php

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _f_wysiwyg_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_strongarm().
 */
function _f_wysiwyg_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'allowed_html_1';
  $strongarm->value = '<a> <em> <strong> <cite> <code> <ul> <ol> <li> <dl> <dt> <dd> <span> <p> <img> <blockquote>';

  $export['allowed_html_1'] = $strongarm;
  return $export;
}
