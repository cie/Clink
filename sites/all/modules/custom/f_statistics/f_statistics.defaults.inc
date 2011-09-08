<?php

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _f_statistics_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _f_statistics_user_default_permissions() {
  $permissions = array();

  // Exported permission: access statistics
  $permissions[] = array(
    'name' => 'access statistics',
    'roles' => array(
      '0' => 'manager',
    ),
  );

  // Exported permission: view post access counter
  $permissions[] = array(
    'name' => 'view post access counter',
    'roles' => array(
      '0' => 'manager',
    ),
  );

  return $permissions;
}

/**
 * Helper to implementation of hook_strongarm().
 */
function _f_statistics_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'statistics_count_content_views';
  $strongarm->value = '1';

  $export['statistics_count_content_views'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'statistics_day_timestamp';
  $strongarm->value = 1276865808;

  $export['statistics_day_timestamp'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'statistics_enable_access_log';
  $strongarm->value = '1';

  $export['statistics_enable_access_log'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'statistics_flush_accesslog_timer';
  $strongarm->value = '259200';

  $export['statistics_flush_accesslog_timer'] = $strongarm;
  return $export;
}
