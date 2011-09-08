<?php

/**
 * Helper to implementation of hook_default_fe_block_settings().
 */
function _f_global_default_fe_block_settings() {
  $export = array();

  // bluemarine
  $theme = array();

  $theme['menu-features'] = array(
    'module' => 'menu',
    'delta' => 'features',
    'theme' => 'bluemarine',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Menu',
    'cache' => '-1',
  );

  $theme['menu-menu-create-content-menu'] = array(
    'module' => 'menu',
    'delta' => 'menu-create-content-menu',
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
  );

  $theme['menu-primary-links'] = array(
    'module' => 'menu',
    'delta' => 'primary-links',
    'theme' => 'bluemarine',
    'status' => '1',
    'weight' => '-5',
    'region' => 'left',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['menu-secondary-links'] = array(
    'module' => 'menu',
    'delta' => 'secondary-links',
    'theme' => 'bluemarine',
    'status' => 0,
    'weight' => '-3',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['user-1'] = array(
    'module' => 'user',
    'delta' => '1',
    'theme' => 'bluemarine',
    'status' => '1',
    'weight' => '-5',
    'region' => 'left',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['user-2'] = array(
    'module' => 'user',
    'delta' => '2',
    'theme' => 'bluemarine',
    'status' => 0,
    'weight' => '-2',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['user-3'] = array(
    'module' => 'user',
    'delta' => '3',
    'theme' => 'bluemarine',
    'status' => '1',
    'weight' => '-5',
    'region' => 'right',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $export['bluemarine'] = $theme;

  // chameleon
  $theme = array();

  $theme['menu-features'] = array(
    'module' => 'menu',
    'delta' => 'features',
    'theme' => 'chameleon',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Menu',
    'cache' => '-1',
  );

  $theme['menu-menu-create-content-menu'] = array(
    'module' => 'menu',
    'delta' => 'menu-create-content-menu',
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
  );

  $theme['menu-primary-links'] = array(
    'module' => 'menu',
    'delta' => 'primary-links',
    'theme' => 'chameleon',
    'status' => '1',
    'weight' => '-5',
    'region' => 'left',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['menu-secondary-links'] = array(
    'module' => 'menu',
    'delta' => 'secondary-links',
    'theme' => 'chameleon',
    'status' => 0,
    'weight' => '-3',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['user-1'] = array(
    'module' => 'user',
    'delta' => '1',
    'theme' => 'chameleon',
    'status' => '1',
    'weight' => '-5',
    'region' => 'left',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['user-2'] = array(
    'module' => 'user',
    'delta' => '2',
    'theme' => 'chameleon',
    'status' => 0,
    'weight' => '-2',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['user-3'] = array(
    'module' => 'user',
    'delta' => '3',
    'theme' => 'chameleon',
    'status' => '1',
    'weight' => '-5',
    'region' => 'right',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $export['chameleon'] = $theme;

  // garland
  $theme = array();

  $theme['menu-features'] = array(
    'module' => 'menu',
    'delta' => 'features',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Menu',
    'cache' => '-1',
  );

  $theme['menu-menu-create-content-menu'] = array(
    'module' => 'menu',
    'delta' => 'menu-create-content-menu',
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
  );

  $theme['menu-primary-links'] = array(
    'module' => 'menu',
    'delta' => 'primary-links',
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
  );

  $theme['menu-secondary-links'] = array(
    'module' => 'menu',
    'delta' => 'secondary-links',
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
  );

  $theme['user-1'] = array(
    'module' => 'user',
    'delta' => '1',
    'theme' => 'garland',
    'status' => '1',
    'weight' => '0',
    'region' => 'left',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['user-2'] = array(
    'module' => 'user',
    'delta' => '2',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['user-3'] = array(
    'module' => 'user',
    'delta' => '3',
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
  );

  $export['garland'] = $theme;

  // greenNblack
  $theme = array();

  $theme['menu-features'] = array(
    'module' => 'menu',
    'delta' => 'features',
    'theme' => 'greenNblack',
    'status' => 0,
    'weight' => '-11',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Menu',
    'cache' => '-1',
  );

  $theme['menu-menu-create-content-menu'] = array(
    'module' => 'menu',
    'delta' => 'menu-create-content-menu',
    'theme' => 'greenNblack',
    'status' => 0,
    'weight' => '-10',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['menu-primary-links'] = array(
    'module' => 'menu',
    'delta' => 'primary-links',
    'theme' => 'greenNblack',
    'status' => 0,
    'weight' => '-7',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['menu-secondary-links'] = array(
    'module' => 'menu',
    'delta' => 'secondary-links',
    'theme' => 'greenNblack',
    'status' => 0,
    'weight' => '-6',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['user-1'] = array(
    'module' => 'user',
    'delta' => '1',
    'theme' => 'greenNblack',
    'status' => '1',
    'weight' => '-12',
    'region' => 'left',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['user-2'] = array(
    'module' => 'user',
    'delta' => '2',
    'theme' => 'greenNblack',
    'status' => 0,
    'weight' => '-5',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['user-3'] = array(
    'module' => 'user',
    'delta' => '3',
    'theme' => 'greenNblack',
    'status' => '1',
    'weight' => '-11',
    'region' => 'left',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $export['greenNblack'] = $theme;

  // marvin
  $theme = array();

  $theme['menu-features'] = array(
    'module' => 'menu',
    'delta' => 'features',
    'theme' => 'marvin',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Menu',
    'cache' => '-1',
  );

  $theme['menu-menu-create-content-menu'] = array(
    'module' => 'menu',
    'delta' => 'menu-create-content-menu',
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
  );

  $theme['menu-primary-links'] = array(
    'module' => 'menu',
    'delta' => 'primary-links',
    'theme' => 'marvin',
    'status' => '1',
    'weight' => '-5',
    'region' => 'left',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['menu-secondary-links'] = array(
    'module' => 'menu',
    'delta' => 'secondary-links',
    'theme' => 'marvin',
    'status' => 0,
    'weight' => '-3',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['user-1'] = array(
    'module' => 'user',
    'delta' => '1',
    'theme' => 'marvin',
    'status' => '1',
    'weight' => '-5',
    'region' => 'left',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['user-2'] = array(
    'module' => 'user',
    'delta' => '2',
    'theme' => 'marvin',
    'status' => 0,
    'weight' => '-2',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['user-3'] = array(
    'module' => 'user',
    'delta' => '3',
    'theme' => 'marvin',
    'status' => '1',
    'weight' => '-5',
    'region' => 'right',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $export['marvin'] = $theme;

  // minnelli
  $theme = array();

  $theme['menu-features'] = array(
    'module' => 'menu',
    'delta' => 'features',
    'theme' => 'minnelli',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Menu',
    'cache' => '-1',
  );

  $theme['menu-menu-create-content-menu'] = array(
    'module' => 'menu',
    'delta' => 'menu-create-content-menu',
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
  );

  $theme['menu-primary-links'] = array(
    'module' => 'menu',
    'delta' => 'primary-links',
    'theme' => 'minnelli',
    'status' => '1',
    'weight' => '-5',
    'region' => 'left',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['menu-secondary-links'] = array(
    'module' => 'menu',
    'delta' => 'secondary-links',
    'theme' => 'minnelli',
    'status' => 0,
    'weight' => '-3',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['user-1'] = array(
    'module' => 'user',
    'delta' => '1',
    'theme' => 'minnelli',
    'status' => '1',
    'weight' => '-5',
    'region' => 'left',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['user-2'] = array(
    'module' => 'user',
    'delta' => '2',
    'theme' => 'minnelli',
    'status' => 0,
    'weight' => '-2',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['user-3'] = array(
    'module' => 'user',
    'delta' => '3',
    'theme' => 'minnelli',
    'status' => '1',
    'weight' => '-5',
    'region' => 'right',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $export['minnelli'] = $theme;

  // pushbutton
  $theme = array();

  $theme['menu-features'] = array(
    'module' => 'menu',
    'delta' => 'features',
    'theme' => 'pushbutton',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Menu',
    'cache' => '-1',
  );

  $theme['menu-menu-create-content-menu'] = array(
    'module' => 'menu',
    'delta' => 'menu-create-content-menu',
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
  );

  $theme['menu-primary-links'] = array(
    'module' => 'menu',
    'delta' => 'primary-links',
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
  );

  $theme['menu-secondary-links'] = array(
    'module' => 'menu',
    'delta' => 'secondary-links',
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
  );

  $theme['user-1'] = array(
    'module' => 'user',
    'delta' => '1',
    'theme' => 'pushbutton',
    'status' => '1',
    'weight' => '0',
    'region' => 'left',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['user-2'] = array(
    'module' => 'user',
    'delta' => '2',
    'theme' => 'pushbutton',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['user-3'] = array(
    'module' => 'user',
    'delta' => '3',
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
