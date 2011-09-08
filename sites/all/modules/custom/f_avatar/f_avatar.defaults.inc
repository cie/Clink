<?php

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _f_avatar_ctools_plugin_api() {
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
function _f_avatar_user_default_permissions() {
  $permissions = array();

  // Exported permission: Avatar crop
  $permissions[] = array(
    'name' => 'Avatar crop',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'manager',
    ),
  );

  // Exported permission: access avatars
  $permissions[] = array(
    'name' => 'access avatars',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'manager',
    ),
  );

  // Exported permission: administer avatar selection
  $permissions[] = array(
    'name' => 'administer avatar selection',
    'roles' => array(
      '0' => 'manager',
    ),
  );

  // Exported permission: upload avatar in profile
  $permissions[] = array(
    'name' => 'upload avatar in profile',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'manager',
    ),
  );

  return $permissions;
}

/**
 * Helper to implementation of hook_strongarm().
 */
function _f_avatar_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'avatar_selection_avatar_per_page';
  $strongarm->value = '30';

  $export['avatar_selection_avatar_per_page'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'avatar_selection_disable_user_upload';
  $strongarm->value = 0;

  $export['avatar_selection_disable_user_upload'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'avatar_selection_distinctive_avatars';
  $strongarm->value = 0;

  $export['avatar_selection_distinctive_avatars'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'avatar_selection_force_user_avatar';
  $strongarm->value = 0;

  $export['avatar_selection_force_user_avatar'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'avatar_selection_force_user_avatar_reg';
  $strongarm->value = 0;

  $export['avatar_selection_force_user_avatar_reg'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'avatar_selection_set_random_default';
  $strongarm->value = 0;

  $export['avatar_selection_set_random_default'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_default';
  $strongarm->value = 'themes/greenNblack/img/default_avatar.png';

  $export['user_picture_default'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_dimensions';
  $strongarm->value = '85x85';

  $export['user_picture_dimensions'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_file_size';
  $strongarm->value = '800';

  $export['user_picture_file_size'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_guidelines';
  $strongarm->value = '';

  $export['user_picture_guidelines'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_path';
  $strongarm->value = 'pictures';

  $export['user_picture_path'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_pictures';
  $strongarm->value = '1';

  $export['user_pictures'] = $strongarm;
  return $export;
}
