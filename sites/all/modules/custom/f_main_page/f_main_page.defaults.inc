<?php

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _f_main_page_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_menu_default_items().
 */
function _f_main_page_menu_default_items() {
  $items = array();

  $items[] = array(
    'title' => 'Main',
    'path' => 'main',
    'weight' => '-50',
    'description' => 'Main Page',
  );
  // Translatables
  array(
    t('Main'),
    t('Main Page'),
  );


  return $items;
}

/**
 * Helper to implementation of hook_default_page_manager_pages().
 */
function _f_main_page_default_page_manager_pages() {
  $page = new stdClass;
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'main_page';
  $page->task = 'page';
  $page->admin_title = 'Main page';
  $page->admin_description = 'This is the main page of the site, that appears after a user logs in.';
  $page->path = 'main';
  $page->access = array(
    'plugins' => array(
      '0' => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            '0' => 2,
          ),
        ),
        'context' => 'logged-in-user',
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_main_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'main_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      '0' => array(
        'name' => 'user',
        'id' => 1,
        'identifier' => 'Teacher',
        'keyword' => 'teacher',
        'context_settings' => array(
          'type' => 'select',
          'user' => 'Károlyi Péter (tanár)',
          'uid' => '12',
        ),
      ),
    ),
    'relationships' => array(),
  );
  $display = new panels_display;
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          '0' => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          '0' => 3,
          '1' => 'main-row',
          '2' => 1,
          '3' => 2,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          '0' => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Top',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      '1' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          '0' => 'left',
          '1' => 'right',
        ),
        'parent' => 'main',
      ),
      'left' => array(
        'type' => 'region',
        'title' => 'Left',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
      ),
      '2' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          '0' => 'bootm',
        ),
        'parent' => 'main',
      ),
      'bootm' => array(
        'type' => 'region',
        'title' => 'Bottom',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
      '3' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          '0' => 'highlighted',
        ),
        'parent' => 'main',
      ),
      'highlighted' => array(
        'type' => 'region',
        'title' => 'Highlighted',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
      ),
    ),
  );
  $display->panel_settings = array(
    'highlighted' => array(
      'style' => 'rounded_corners',
    ),
    'style_settings' => array(
      'highlighted' => array(
        'corner_location' => 'panel',
      ),
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'bootm';
    $pane->type = 'views';
    $pane->subtype = 'videos';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 1,
      'use_pager' => 0,
      'nodes_per_page' => '4',
      'pager_id' => '',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 1,
      'args' => '',
      'url' => '',
      'display' => 'panel_pane_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['bootm'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'bootm';
    $pane->type = 'views';
    $pane->subtype = 'photos';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 1,
      'use_pager' => 0,
      'nodes_per_page' => '3',
      'pager_id' => '',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 1,
      'args' => '',
      'url' => '',
      'display' => 'panel_pane_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-2'] = $pane;
    $display->panels['bootm'][1] = 'new-2';
    $pane = new stdClass;
    $pane->pid = 'new-3';
    $pane->panel = 'highlighted';
    $pane->type = 'views';
    $pane->subtype = 'blogs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 1,
      'use_pager' => 0,
      'nodes_per_page' => '3',
      'pager_id' => '',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 1,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-3'] = $pane;
    $display->panels['highlighted'][0] = 'new-3';
    $pane = new stdClass;
    $pane->pid = 'new-4';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'comment-0';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-4'] = $pane;
    $display->panels['left'][0] = 'new-4';
    $pane = new stdClass;
    $pane->pid = 'new-5';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'forum-0';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-5'] = $pane;
    $display->panels['right'][0] = 'new-5';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['main_page'] = $page;

 return $pages;

}
