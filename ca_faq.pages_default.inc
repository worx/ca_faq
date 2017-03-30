<?php
/**
 * @file
 * ca_faq.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function ca_faq_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_faq_add_faq';
  $page->task = 'page';
  $page->admin_title = 'CA FAQ: Add FAQ';
  $page->admin_description = '';
  $page->path = 'faq-page/add';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 95728846,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Add FAQ',
    'name' => 'navigation',
    'weight' => '20',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_faq_add_faq_menu_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_faq_add_faq';
  $handler->handler = 'menu_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Context Admin',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'context_admin_options' => 'node_create_menu',
    'context_admin_options_items' => 'faq',
    'context_admin_use_node_edit' => 0,
    'submitted_context' => 'empty',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_faq_add_faq'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_faq_administration';
  $page->task = 'page';
  $page->admin_title = 'CA FAQ: Administration';
  $page->admin_description = '';
  $page->path = 'faq-page/administration';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 95728846,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Administer',
    'name' => 'navigation',
    'weight' => '40',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_faq_administration_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_faq_administration';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'FAQ';
  $display->uuid = 'cd06f758-1be5-45b8-94f6-013302bfc4f5';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_ca_faq_administration_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b005fe6a-5431-4529-8cd7-f623e314983d';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'ca_faq_admin-ca_faq_admin';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b005fe6a-5431-4529-8cd7-f623e314983d';
  $display->content['new-b005fe6a-5431-4529-8cd7-f623e314983d'] = $pane;
  $display->panels['middle'][0] = 'new-b005fe6a-5431-4529-8cd7-f623e314983d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-b005fe6a-5431-4529-8cd7-f623e314983d';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_faq_administration'] = $page;

  return $pages;

}
