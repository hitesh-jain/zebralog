<?php
/**
 * @file
 * zebralog_shoutbox.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function zebralog_shoutbox_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_questions:questions.
  $menu_links['main-menu_questions:questions'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'questions',
    'router_path' => 'questions',
    'link_title' => 'Questions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_questions:questions',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Questions');

  return $menu_links;
}
