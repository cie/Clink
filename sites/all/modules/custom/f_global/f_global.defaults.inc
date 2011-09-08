<?php

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _f_global_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _f_global_user_default_permissions() {
  $permissions = array();

  // Exported permission: Use PHP input for field settings (dangerous - grant with care)
  $permissions[] = array(
    'name' => 'Use PHP input for field settings (dangerous - grant with care)',
    'roles' => array(),
  );

  // Exported permission: access administration pages
  $permissions[] = array(
    'name' => 'access administration pages',
    'roles' => array(),
  );

  // Exported permission: access comments
  $permissions[] = array(
    'name' => 'access comments',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'manager',
    ),
  );

  // Exported permission: access content
  $permissions[] = array(
    'name' => 'access content',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'manager',
    ),
  );

  // Exported permission: access site reports
  $permissions[] = array(
    'name' => 'access site reports',
    'roles' => array(
      '0' => 'manager',
    ),
  );

  // Exported permission: access user profiles
  $permissions[] = array(
    'name' => 'access user profiles',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'manager',
    ),
  );

  // Exported permission: administer actions
  $permissions[] = array(
    'name' => 'administer actions',
    'roles' => array(),
  );

  // Exported permission: administer advanced pane settings
  $permissions[] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(),
  );

  // Exported permission: administer blocks
  $permissions[] = array(
    'name' => 'administer blocks',
    'roles' => array(),
  );

  // Exported permission: administer comments
  $permissions[] = array(
    'name' => 'administer comments',
    'roles' => array(
      '0' => 'manager',
    ),
  );

  // Exported permission: administer content types
  $permissions[] = array(
    'name' => 'administer content types',
    'roles' => array(),
  );

  // Exported permission: administer features
  $permissions[] = array(
    'name' => 'administer features',
    'roles' => array(),
  );

  // Exported permission: administer files
  $permissions[] = array(
    'name' => 'administer files',
    'roles' => array(),
  );

  // Exported permission: administer filters
  $permissions[] = array(
    'name' => 'administer filters',
    'roles' => array(),
  );

  // Exported permission: administer menu
  $permissions[] = array(
    'name' => 'administer menu',
    'roles' => array(
      '0' => 'manager',
    ),
  );

  // Exported permission: administer nodes
  $permissions[] = array(
    'name' => 'administer nodes',
    'roles' => array(
      '0' => 'manager',
    ),
  );

  // Exported permission: administer pane access
  $permissions[] = array(
    'name' => 'administer pane access',
    'roles' => array(),
  );

  // Exported permission: administer pane visibility
  $permissions[] = array(
    'name' => 'administer pane visibility',
    'roles' => array(),
  );

  // Exported permission: administer permissions
  $permissions[] = array(
    'name' => 'administer permissions',
    'roles' => array(
      '0' => 'manager',
    ),
  );

  // Exported permission: administer site configuration
  $permissions[] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      '0' => 'manager',
    ),
  );

  // Exported permission: administer users
  $permissions[] = array(
    'name' => 'administer users',
    'roles' => array(
      '0' => 'manager',
    ),
  );

  // Exported permission: change own username
  $permissions[] = array(
    'name' => 'change own username',
    'roles' => array(),
  );

  // Exported permission: delete revisions
  $permissions[] = array(
    'name' => 'delete revisions',
    'roles' => array(),
  );

  // Exported permission: manage features
  $permissions[] = array(
    'name' => 'manage features',
    'roles' => array(),
  );

  // Exported permission: post comments
  $permissions[] = array(
    'name' => 'post comments',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'manager',
    ),
  );

  // Exported permission: post comments without approval
  $permissions[] = array(
    'name' => 'post comments without approval',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'manager',
    ),
  );

  // Exported permission: revert revisions
  $permissions[] = array(
    'name' => 'revert revisions',
    'roles' => array(),
  );

  // Exported permission: select different theme
  $permissions[] = array(
    'name' => 'select different theme',
    'roles' => array(),
  );

  // Exported permission: use PHP for block visibility
  $permissions[] = array(
    'name' => 'use PHP for block visibility',
    'roles' => array(),
  );

  // Exported permission: use panels caching features
  $permissions[] = array(
    'name' => 'use panels caching features',
    'roles' => array(),
  );

  // Exported permission: use panels dashboard
  $permissions[] = array(
    'name' => 'use panels dashboard',
    'roles' => array(),
  );

  // Exported permission: view all panes
  $permissions[] = array(
    'name' => 'view all panes',
    'roles' => array(),
  );

  // Exported permission: view pane admin links
  $permissions[] = array(
    'name' => 'view pane admin links',
    'roles' => array(),
  );

  // Exported permission: view revisions
  $permissions[] = array(
    'name' => 'view revisions',
    'roles' => array(),
  );

  return $permissions;
}

/**
 * Helper to implementation of hook_strongarm().
 */
function _f_global_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'error_level';
  $strongarm->value = '0';

  $export['error_level'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_directory_temp';
  $strongarm->value = '/home/karolyipeti/public_html/clink/TMP';

  $export['file_directory_temp'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_downloads';
  $strongarm->value = '1';

  $export['file_downloads'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'genpass_algorithm';
  $strongarm->value = 'genpass';

  $export['genpass_algorithm'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'genpass_entropy';
  $strongarm->value = 'abcdefghjkmnpqrstuvwxyzMNPQRSTUVWXYZ23456789';

  $export['genpass_entropy'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'genpass_length';
  $strongarm->value = '6';

  $export['genpass_length'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'genpass_mode';
  $strongarm->value = '0';

  $export['genpass_mode'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_offline_message';
  $strongarm->value = 'Potter Commando is currently under maintenance. It should be back shortly. Thank you for your patience.';

  $export['site_offline_message'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_extensions_2';
  $strongarm->value = 'jpg jpeg gif png txt doc xls pdf ppt pps odt ods odp';

  $export['upload_extensions_2'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_extensions_3';
  $strongarm->value = 'jpg jpeg gif png txt doc xls pdf ppt pps odt ods odp';

  $export['upload_extensions_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_extensions_default';
  $strongarm->value = 'jpg jpeg gif png txt doc xls pdf ppt pps odt ods odp';

  $export['upload_extensions_default'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_list_default';
  $strongarm->value = '1';

  $export['upload_list_default'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_max_resolution';
  $strongarm->value = '0';

  $export['upload_max_resolution'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_uploadsize_2';
  $strongarm->value = '1';

  $export['upload_uploadsize_2'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_uploadsize_3';
  $strongarm->value = '8';

  $export['upload_uploadsize_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_uploadsize_default';
  $strongarm->value = '1';

  $export['upload_uploadsize_default'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_usersize_2';
  $strongarm->value = '10';

  $export['upload_usersize_2'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_usersize_3';
  $strongarm->value = '100';

  $export['upload_usersize_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_usersize_default';
  $strongarm->value = '10';

  $export['upload_usersize_default'] = $strongarm;
  return $export;
}
