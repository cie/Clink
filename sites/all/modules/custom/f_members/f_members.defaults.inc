<?php

/**
 * Helper to implementation of hook_menu_default_items().
 */
function _f_members_menu_default_items() {
  $items = array();

  $items[] = array(
    'title' => 'Members',
    'path' => 'members',
    'weight' => '-47',
    'description' => 'Members of the page',
  );
  // Translatables
  array(
    t('Members'),
    t('Members of the page'),
  );


  return $items;
}
