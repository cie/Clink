<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _f_manage_node_info() {
  $items = array(
    'management_page' => array(
      'name' => t('Management Page'),
      'module' => 'features',
      'description' => t('A link to a management page with an icon an a description.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
