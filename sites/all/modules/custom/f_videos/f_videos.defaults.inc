<?php

/**
 * Helper to implementation of hook_content_default_fields().
 */
function _f_videos_content_default_fields() {
  $fields = array();

  // Exported field: field_video_embed
  $fields[] = array(
    'field_name' => 'field_video_embed',
    'type_name' => 'videos',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'emvideo',
    'required' => '1',
    'multiple' => '0',
    'module' => 'emvideo',
    'active' => '1',
    'widget' => array(
      'video_width' => '724',
      'video_height' => '510',
      'video_autoplay' => 1,
      'preview_width' => '212',
      'preview_height' => '175',
      'preview_autoplay' => 0,
      'thumbnail_width' => '120',
      'thumbnail_height' => '90',
      'thumbnail_default_path' => '',
      'thumbnail_link_title' => 'See video',
      'providers' => array(
        'dailymotion' => 'dailymotion',
        'google' => 'google',
        'livevideo' => 'livevideo',
        'metacafe' => 'metacafe',
        'myspace' => 'myspace',
        'revver' => 'revver',
        'sevenload' => 'sevenload',
        'twistage' => 'twistage',
        'vimeo' => 'vimeo',
        'yahoomusic' => 'yahoomusic',
        'youtube' => 'youtube',
        'zzz_custom_url' => 'zzz_custom_url',
        'archive' => 0,
        'bliptv' => 0,
        'guba' => 0,
        'imeem' => 0,
        'lastfm' => 0,
        'spike' => 0,
        'tudou' => 0,
        'ustream' => 0,
        'ustreamlive' => 0,
        'voicethread' => 0,
      ),
      'default_value' => array(
        '0' => array(
          'embed' => '',
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Embed',
      'weight' => '-3',
      'description' => 'Copy a <strong>link</strong> or <strong>embedding code</strong> from Youtube or another video broadcasting page.',
      'type' => 'emvideo_textfields',
      'module' => 'emvideo',
    ),
  );

  // Translatables
  array(
    t('Embed'),
  );

  return $fields;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _f_videos_ctools_plugin_api() {
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
function _f_videos_user_default_permissions() {
  $permissions = array();

  // Exported permission: bypass conversion video
  $permissions[] = array(
    'name' => 'bypass conversion video',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'manager',
    ),
  );

  // Exported permission: create videos content
  $permissions[] = array(
    'name' => 'create videos content',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'manager',
    ),
  );

  // Exported permission: delete any videos content
  $permissions[] = array(
    'name' => 'delete any videos content',
    'roles' => array(
      '0' => 'manager',
    ),
  );

  // Exported permission: delete own videos content
  $permissions[] = array(
    'name' => 'delete own videos content',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'manager',
    ),
  );

  // Exported permission: edit any videos content
  $permissions[] = array(
    'name' => 'edit any videos content',
    'roles' => array(
      '0' => 'manager',
    ),
  );

  // Exported permission: edit own videos content
  $permissions[] = array(
    'name' => 'edit own videos content',
    'roles' => array(),
  );

  // Exported permission: use default thumbnail
  $permissions[] = array(
    'name' => 'use default thumbnail',
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
function _f_videos_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_videos';
  $strongarm->value = 0;

  $export['comment_anonymous_videos'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_videos';
  $strongarm->value = '3';

  $export['comment_controls_videos'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_videos';
  $strongarm->value = '4';

  $export['comment_default_mode_videos'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_videos';
  $strongarm->value = '1';

  $export['comment_default_order_videos'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_videos';
  $strongarm->value = '50';

  $export['comment_default_per_page_videos'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_videos';
  $strongarm->value = '1';

  $export['comment_form_location_videos'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_videos';
  $strongarm->value = '0';

  $export['comment_preview_videos'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_videos';
  $strongarm->value = '1';

  $export['comment_subject_field_videos'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_upload_images_videos';
  $strongarm->value = 'none';

  $export['comment_upload_images_videos'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_upload_videos';
  $strongarm->value = '0';

  $export['comment_upload_videos'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_videos';
  $strongarm->value = '2';

  $export['comment_videos'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commentformsettings_anonymoushomepage_videos';
  $strongarm->value = '0';

  $export['commentformsettings_anonymoushomepage_videos'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commentformsettings_anonymousmail_videos';
  $strongarm->value = '0';

  $export['commentformsettings_anonymousmail_videos'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commentformsettings_anonymousname_videos';
  $strongarm->value = '0';

  $export['commentformsettings_anonymousname_videos'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commentformsettings_author_videos';
  $strongarm->value = '0';

  $export['commentformsettings_author_videos'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commentformsettings_inputformat_videos';
  $strongarm->value = '0';

  $export['commentformsettings_inputformat_videos'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commentformsettings_preview_videos';
  $strongarm->value = '0';

  $export['commentformsettings_preview_videos'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commentformsettings_size_videos';
  $strongarm->value = '15';

  $export['commentformsettings_size_videos'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commentformsettings_submit_videos';
  $strongarm->value = 'Save';

  $export['commentformsettings_submit_videos'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commentformsettings_title_videos';
  $strongarm->value = '0';

  $export['commentformsettings_title_videos'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_videos';
  $strongarm->value = array(
    'title' => '-2',
    'body_field' => '-1',
    'revision_information' => '1',
    'comment_settings' => '2',
    'menu' => '0',
    'attachments' => '3',
  );

  $export['content_extra_weights_videos'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_archive';
  $strongarm->value = 1;

  $export['emfield_emvideo_allow_archive'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_bliptv';
  $strongarm->value = 1;

  $export['emfield_emvideo_allow_bliptv'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_dailymotion';
  $strongarm->value = 1;

  $export['emfield_emvideo_allow_dailymotion'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_google';
  $strongarm->value = 1;

  $export['emfield_emvideo_allow_google'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_guba';
  $strongarm->value = 1;

  $export['emfield_emvideo_allow_guba'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_imeem';
  $strongarm->value = 1;

  $export['emfield_emvideo_allow_imeem'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_lastfm';
  $strongarm->value = 1;

  $export['emfield_emvideo_allow_lastfm'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_livevideo';
  $strongarm->value = 1;

  $export['emfield_emvideo_allow_livevideo'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_metacafe';
  $strongarm->value = 1;

  $export['emfield_emvideo_allow_metacafe'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_myspace';
  $strongarm->value = 1;

  $export['emfield_emvideo_allow_myspace'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_revver';
  $strongarm->value = 1;

  $export['emfield_emvideo_allow_revver'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_sevenload';
  $strongarm->value = 1;

  $export['emfield_emvideo_allow_sevenload'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_spike';
  $strongarm->value = 1;

  $export['emfield_emvideo_allow_spike'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_tudou';
  $strongarm->value = 1;

  $export['emfield_emvideo_allow_tudou'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_twistage';
  $strongarm->value = 1;

  $export['emfield_emvideo_allow_twistage'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_ustream';
  $strongarm->value = 1;

  $export['emfield_emvideo_allow_ustream'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_ustreamlive';
  $strongarm->value = 1;

  $export['emfield_emvideo_allow_ustreamlive'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_vimeo';
  $strongarm->value = 1;

  $export['emfield_emvideo_allow_vimeo'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_voicethread';
  $strongarm->value = 1;

  $export['emfield_emvideo_allow_voicethread'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_yahoomusic';
  $strongarm->value = 1;

  $export['emfield_emvideo_allow_yahoomusic'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_youtube';
  $strongarm->value = 1;

  $export['emfield_emvideo_allow_youtube'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_zzz_custom_url';
  $strongarm->value = 1;

  $export['emfield_emvideo_allow_zzz_custom_url'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_flvmediaplayer_url';
  $strongarm->value = '';

  $export['emfield_flvmediaplayer_url'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_imagerotator_url';
  $strongarm->value = '';

  $export['emfield_imagerotator_url'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_swfobject';
  $strongarm->value = 0;

  $export['emfield_swfobject'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_swfobject_location';
  $strongarm->value = '';

  $export['emfield_swfobject_location'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_thumbnail_overlay';
  $strongarm->value = 1;

  $export['emfield_thumbnail_overlay'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_bliptv_rss_format';
  $strongarm->value = 'flv';

  $export['emvideo_bliptv_rss_format'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_bliptv_rss_tag';
  $strongarm->value = 'flv';

  $export['emvideo_bliptv_rss_tag'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_google_domain';
  $strongarm->value = 'com';

  $export['emvideo_google_domain'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_imeem_api_key';
  $strongarm->value = '';

  $export['emvideo_imeem_api_key'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_imeem_api_secret';
  $strongarm->value = '';

  $export['emvideo_imeem_api_secret'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_livevideo_api_key';
  $strongarm->value = '';

  $export['emvideo_livevideo_api_key'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_revver_affiliate_id';
  $strongarm->value = '0';

  $export['emvideo_revver_affiliate_id'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_twistage_allowfullscreen';
  $strongarm->value = 1;

  $export['emvideo_twistage_allowfullscreen'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_twistage_playerprofile';
  $strongarm->value = '';

  $export['emvideo_twistage_playerprofile'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_ustream_api_key';
  $strongarm->value = '';

  $export['emvideo_ustream_api_key'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_ustreamlive_api_key';
  $strongarm->value = '';

  $export['emvideo_ustreamlive_api_key'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_vimeo_api_key';
  $strongarm->value = '';

  $export['emvideo_vimeo_api_key'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_vimeo_api_secret';
  $strongarm->value = '';

  $export['emvideo_vimeo_api_secret'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_vimeo_color';
  $strongarm->value = '#01AAEA';

  $export['emvideo_vimeo_color'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_vimeo_color_override';
  $strongarm->value = 0;

  $export['emvideo_vimeo_color_override'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_vimeo_full_screen';
  $strongarm->value = 1;

  $export['emvideo_vimeo_full_screen'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_vimeo_on_screen_info';
  $strongarm->value = array(
    'portrait' => 'portrait',
    'title' => 'title',
    'byline' => 'byline',
  );

  $export['emvideo_vimeo_on_screen_info'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_vimeo_thumb_size';
  $strongarm->value = '160';

  $export['emvideo_vimeo_thumb_size'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_yahoomusic_app_id';
  $strongarm->value = '';

  $export['emvideo_yahoomusic_app_id'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_yahoomusic_bandwidth';
  $strongarm->value = '';

  $export['emvideo_yahoomusic_bandwidth'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_yahoomusic_bgcolor';
  $strongarm->value = '#000000';

  $export['emvideo_yahoomusic_bgcolor'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_yahoomusic_close_enable';
  $strongarm->value = 0;

  $export['emvideo_yahoomusic_close_enable'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_yahoomusic_controls_enable';
  $strongarm->value = 1;

  $export['emvideo_yahoomusic_controls_enable'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_yahoomusic_event_handler';
  $strongarm->value = '';

  $export['emvideo_yahoomusic_event_handler'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_yahoomusic_full_screen';
  $strongarm->value = 1;

  $export['emvideo_yahoomusic_full_screen'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_yahoomusic_info_enable';
  $strongarm->value = 1;

  $export['emvideo_yahoomusic_info_enable'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_yahoomusic_locale';
  $strongarm->value = 'us';

  $export['emvideo_yahoomusic_locale'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_yahoomusic_now_playing_enable';
  $strongarm->value = 1;

  $export['emvideo_yahoomusic_now_playing_enable'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_yahoomusic_post_panel_enable';
  $strongarm->value = 1;

  $export['emvideo_yahoomusic_post_panel_enable'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_yahoomusic_pre_panel_enable';
  $strongarm->value = 1;

  $export['emvideo_yahoomusic_pre_panel_enable'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_yahoomusic_share_enable';
  $strongarm->value = 1;

  $export['emvideo_yahoomusic_share_enable'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_youtube_api_key';
  $strongarm->value = '';

  $export['emvideo_youtube_api_key'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_youtube_colors_color1';
  $strongarm->value = '#FFFFFF';

  $export['emvideo_youtube_colors_color1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_youtube_colors_color2';
  $strongarm->value = '#CCCCCC';

  $export['emvideo_youtube_colors_color2'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_youtube_display_info';
  $strongarm->value = 0;

  $export['emvideo_youtube_display_info'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_youtube_full_screen';
  $strongarm->value = 1;

  $export['emvideo_youtube_full_screen'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_youtube_high_quality';
  $strongarm->value = 1;

  $export['emvideo_youtube_high_quality'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_youtube_show_border';
  $strongarm->value = 0;

  $export['emvideo_youtube_show_border'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_youtube_show_colors';
  $strongarm->value = 0;

  $export['emvideo_youtube_show_colors'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_youtube_show_related_videos';
  $strongarm->value = 0;

  $export['emvideo_youtube_show_related_videos'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_youtube_use_jw_flv';
  $strongarm->value = 0;

  $export['emvideo_youtube_use_jw_flv'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_zzz_custom_url_supported_types';
  $strongarm->value = array(
    'wmv' => 'wmv',
    'wma' => 'wma',
    'swf' => 'swf',
    'flv' => 'flv',
    'mov' => 'mov',
    'mp4' => 'mp4',
    'm4v' => 'm4v',
    'rm' => 'rm',
  );

  $export['emvideo_zzz_custom_url_supported_types'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'form_build_id_videos';
  $strongarm->value = 'form-5ea4ab793cc666222977673f47d7b40b';

  $export['form_build_id_videos'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hidetitle_videos';
  $strongarm->value = '0';

  $export['hidetitle_videos'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mp4_play_in_flowplayer';
  $strongarm->value = 0;

  $export['mp4_play_in_flowplayer'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'no_of_video_thumbs';
  $strongarm->value = '5';

  $export['no_of_video_thumbs'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_videos';
  $strongarm->value = array(
    '0' => 'status',
    '1' => 'promote',
  );

  $export['node_options_videos'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_type_videos_access_settings';
  $strongarm->value = array(
    'per_node' => 1,
    'priority' => '10',
    'view' => array(
      '2' => 2,
    ),
    'update' => array(),
    'delete' => array(),
  );

  $export['node_type_videos_access_settings'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformsettings_cancel_videos';
  $strongarm->value = '1';

  $export['nodeformsettings_cancel_videos'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformsettings_inputformat_videos';
  $strongarm->value = '0';

  $export['nodeformsettings_inputformat_videos'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformsettings_preview_videos';
  $strongarm->value = 0;

  $export['nodeformsettings_preview_videos'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformsettings_revisionlog_videos';
  $strongarm->value = '0';

  $export['nodeformsettings_revisionlog_videos'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformsettings_splitsummary_videos';
  $strongarm->value = '0';

  $export['nodeformsettings_splitsummary_videos'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformsettings_submit_videos';
  $strongarm->value = 'Embed!';

  $export['nodeformsettings_submit_videos'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'submission_body_rows_videos';
  $strongarm->value = '5';

  $export['submission_body_rows_videos'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_videos';
  $strongarm->value = '0';

  $export['upload_videos'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vid_convertor';
  $strongarm->value = 'ffmpeg';

  $export['vid_convertor'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_autobuffering';
  $strongarm->value = 1;

  $export['video_autobuffering'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_autoplay';
  $strongarm->value = 0;

  $export['video_autoplay'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_cortado';
  $strongarm->value = 'http://home.fazekas.hu/~karolyipeti/drupal/cortado.jar';

  $export['video_cortado'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_ffmpeg_height';
  $strongarm->value = '480';

  $export['video_ffmpeg_height'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_ffmpeg_helper_auto_cvr_audio_bitrate';
  $strongarm->value = '64000';

  $export['video_ffmpeg_helper_auto_cvr_audio_bitrate'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_ffmpeg_helper_auto_cvr_options';
  $strongarm->value = '-y -i %videofile -f flv -ar 22050 -ab %audiobitrate -s %size -b %videobitrate -qscale 1 %convertfile';

  $export['video_ffmpeg_helper_auto_cvr_options'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_ffmpeg_helper_auto_cvr_video_bitrate';
  $strongarm->value = '200000';

  $export['video_ffmpeg_helper_auto_cvr_video_bitrate'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_ffmpeg_thumbnailer_options';
  $strongarm->value = '-i %videofile -an -y -f mjpeg -ss %seek -vframes 1 %thumbfile';

  $export['video_ffmpeg_thumbnailer_options'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_ffmpeg_width';
  $strongarm->value = '640';

  $export['video_ffmpeg_width'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_thumb_path';
  $strongarm->value = 'video_thumbs';

  $export['video_thumb_path'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'video_transcoder_path';
  $strongarm->value = '/usr/bin/ffmpeg';

  $export['video_transcoder_path'] = $strongarm;
  return $export;
}
