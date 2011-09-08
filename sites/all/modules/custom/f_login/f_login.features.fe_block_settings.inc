<?php

/**
 * Helper to implementation of hook_default_fe_block_settings().
 */
function _f_login_default_fe_block_settings() {
  $export = array();

  // bluemarine
  $theme = array();

  $theme['block-user_info'] = array(
    'module' => 'block',
    'theme' => 'bluemarine',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
    'machine_name' => 'user_info',
  );

  $export['bluemarine'] = $theme;

  // chameleon
  $theme = array();

  $theme['block-user_info'] = array(
    'module' => 'block',
    'theme' => 'chameleon',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
    'machine_name' => 'user_info',
  );

  $export['chameleon'] = $theme;

  // garland
  $theme = array();

  $theme['block-user_info'] = array(
    'module' => 'block',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
    'machine_name' => 'user_info',
  );

  $export['garland'] = $theme;

  // greenNblack
  $theme = array();

  $theme['block-user_info'] = array(
    'module' => 'block',
    'theme' => 'greenNblack',
    'status' => '1',
    'weight' => '0',
    'region' => 'subheader',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
    'machine_name' => 'user_info',
  );

  $export['greenNblack'] = $theme;

  // marvin
  $theme = array();

  $theme['block-user_info'] = array(
    'module' => 'block',
    'theme' => 'marvin',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
    'machine_name' => 'user_info',
  );

  $export['marvin'] = $theme;

  // minnelli
  $theme = array();

  $theme['block-user_info'] = array(
    'module' => 'block',
    'theme' => 'minnelli',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
    'machine_name' => 'user_info',
  );

  $export['minnelli'] = $theme;

  // pushbutton
  $theme = array();

  $theme['block-user_info'] = array(
    'module' => 'block',
    'theme' => 'pushbutton',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
    'machine_name' => 'user_info',
  );

  $export['pushbutton'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export[$theme_key]);
    }
  }
  return $export;
}
