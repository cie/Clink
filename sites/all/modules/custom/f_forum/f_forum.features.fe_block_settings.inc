<?php

/**
 * Helper to implementation of hook_default_fe_block_settings().
 */
function _f_forum_default_fe_block_settings() {
  $export = array();

  // bluemarine
  $theme = array();

  $theme['forum-1'] = array(
    'module' => 'forum',
    'delta' => '1',
    'theme' => 'bluemarine',
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

  $export['bluemarine'] = $theme;

  // chameleon
  $theme = array();

  $theme['forum-1'] = array(
    'module' => 'forum',
    'delta' => '1',
    'theme' => 'chameleon',
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

  $export['chameleon'] = $theme;

  // garland
  $theme = array();

  $theme['forum-1'] = array(
    'module' => 'forum',
    'delta' => '1',
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

  $export['garland'] = $theme;

  // greenNblack
  $theme = array();

  $theme['forum-1'] = array(
    'module' => 'forum',
    'delta' => '1',
    'theme' => 'greenNblack',
    'status' => 0,
    'weight' => '-3',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $export['greenNblack'] = $theme;

  // marvin
  $theme = array();

  $theme['forum-1'] = array(
    'module' => 'forum',
    'delta' => '1',
    'theme' => 'marvin',
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

  $export['marvin'] = $theme;

  // minnelli
  $theme = array();

  $theme['forum-1'] = array(
    'module' => 'forum',
    'delta' => '1',
    'theme' => 'minnelli',
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

  $export['minnelli'] = $theme;

  // pushbutton
  $theme = array();

  $theme['forum-1'] = array(
    'module' => 'forum',
    'delta' => '1',
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
