<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _f_videos_node_info() {
  $items = array(
    'videos' => array(
      'name' => t('Video'),
      'module' => 'features',
      'description' => t('Embed <em>videos</em> from youtube, videa, eg.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => t('Add a description of your <em>video</em>.'),
    ),
  );
  return $items;
}
