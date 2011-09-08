<?php

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _f_forum_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_menu_default_items().
 */
function _f_forum_menu_default_items() {
  $items = array();

  $items[] = array(
    'title' => 'Forum',
    'path' => 'forum/1',
    'weight' => '-44',
    'description' => 'View or write into the forums of the page',
  );
  // Translatables
  array(
    t('Forum'),
    t('View or write into the forums of the page'),
  );


  return $items;
}

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _f_forum_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer advanced forum
  $permissions[] = array(
    'name' => 'administer advanced forum',
    'roles' => array(),
  );

  // Exported permission: administer forums
  $permissions[] = array(
    'name' => 'administer forums',
    'roles' => array(),
  );

  // Exported permission: create forum topics
  $permissions[] = array(
    'name' => 'create forum topics',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'manager',
    ),
  );

  // Exported permission: delete any forum topic
  $permissions[] = array(
    'name' => 'delete any forum topic',
    'roles' => array(
      '0' => 'manager',
    ),
  );

  // Exported permission: delete own forum topics
  $permissions[] = array(
    'name' => 'delete own forum topics',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'manager',
    ),
  );

  // Exported permission: edit any forum topic
  $permissions[] = array(
    'name' => 'edit any forum topic',
    'roles' => array(
      '0' => 'manager',
    ),
  );

  // Exported permission: edit own forum topics
  $permissions[] = array(
    'name' => 'edit own forum topics',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'manager',
    ),
  );

  // Exported permission: view forum statistics
  $permissions[] = array(
    'name' => 'view forum statistics',
    'roles' => array(
      '0' => 'manager',
    ),
  );

  return $permissions;
}

/**
 * Helper to implementation of hook_strongarm().
 */
function _f_forum_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advanced_forum_button_links';
  $strongarm->value = 1;

  $export['advanced_forum_button_links'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advanced_forum_get_new_comments';
  $strongarm->value = 0;

  $export['advanced_forum_get_new_comments'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advanced_forum_hide_created';
  $strongarm->value = 0;

  $export['advanced_forum_hide_created'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advanced_forum_image_directory';
  $strongarm->value = '';

  $export['advanced_forum_image_directory'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advanced_forum_style';
  $strongarm->value = 'blue_lagoon';

  $export['advanced_forum_style'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advanced_forum_theme_all_comments';
  $strongarm->value = 1;

  $export['advanced_forum_theme_all_comments'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advanced_forum_time_ago_cutoff';
  $strongarm->value = '48';

  $export['advanced_forum_time_ago_cutoff'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advanced_forum_topic_pager_max';
  $strongarm->value = '5';

  $export['advanced_forum_topic_pager_max'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advanced_forum_topic_title_length';
  $strongarm->value = '15';

  $export['advanced_forum_topic_title_length'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advanced_forum_use_topic_navigation';
  $strongarm->value = 0;

  $export['advanced_forum_use_topic_navigation'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_forum';
  $strongarm->value = 0;

  $export['comment_anonymous_forum'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_forum';
  $strongarm->value = '3';

  $export['comment_controls_forum'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_forum';
  $strongarm->value = '2';

  $export['comment_default_mode_forum'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_forum';
  $strongarm->value = '2';

  $export['comment_default_order_forum'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_forum';
  $strongarm->value = '50';

  $export['comment_default_per_page_forum'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_forum';
  $strongarm->value = '1';

  $export['comment_form_location_forum'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_forum';
  $strongarm->value = '2';

  $export['comment_forum'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_forum';
  $strongarm->value = '0';

  $export['comment_preview_forum'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_forum';
  $strongarm->value = '0';

  $export['comment_subject_field_forum'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_upload_forum';
  $strongarm->value = '1';

  $export['comment_upload_forum'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_upload_images_forum';
  $strongarm->value = 'none';

  $export['comment_upload_images_forum'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commentformsettings_anonymoushomepage_forum';
  $strongarm->value = '0';

  $export['commentformsettings_anonymoushomepage_forum'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commentformsettings_anonymousmail_forum';
  $strongarm->value = '0';

  $export['commentformsettings_anonymousmail_forum'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commentformsettings_anonymousname_forum';
  $strongarm->value = '0';

  $export['commentformsettings_anonymousname_forum'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commentformsettings_author_forum';
  $strongarm->value = '0';

  $export['commentformsettings_author_forum'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commentformsettings_inputformat_forum';
  $strongarm->value = '0';

  $export['commentformsettings_inputformat_forum'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commentformsettings_preview_forum';
  $strongarm->value = '0';

  $export['commentformsettings_preview_forum'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commentformsettings_size_forum';
  $strongarm->value = '10';

  $export['commentformsettings_size_forum'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commentformsettings_submit_forum';
  $strongarm->value = 'Save';

  $export['commentformsettings_submit_forum'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commentformsettings_title_forum';
  $strongarm->value = '0';

  $export['commentformsettings_title_forum'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'form_build_id_forum';
  $strongarm->value = 'form-6446f817325e3c968341e7f1341a3f71';

  $export['form_build_id_forum'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'forum_containers';
  $strongarm->value = array();

  $export['forum_containers'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'forum_nav_vocabulary';
  $strongarm->value = '1';

  $export['forum_nav_vocabulary'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hidetitle_forum';
  $strongarm->value = '0';

  $export['hidetitle_forum'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_forum';
  $strongarm->value = array(
    '0' => 'status',
    '1' => 'promote',
  );

  $export['node_options_forum'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformsettings_cancel_forum';
  $strongarm->value = '1';

  $export['nodeformsettings_cancel_forum'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformsettings_inputformat_forum';
  $strongarm->value = '0';

  $export['nodeformsettings_inputformat_forum'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformsettings_preview_forum';
  $strongarm->value = 0;

  $export['nodeformsettings_preview_forum'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformsettings_revisionlog_forum';
  $strongarm->value = '0';

  $export['nodeformsettings_revisionlog_forum'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformsettings_splitsummary_forum';
  $strongarm->value = '0';

  $export['nodeformsettings_splitsummary_forum'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformsettings_submit_forum';
  $strongarm->value = 'Save';

  $export['nodeformsettings_submit_forum'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'submission_body_rows_forum';
  $strongarm->value = '20';

  $export['submission_body_rows_forum'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_forum';
  $strongarm->value = '1';

  $export['upload_forum'] = $strongarm;
  return $export;
}
