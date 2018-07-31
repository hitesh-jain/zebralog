<?php
/**
 * @file
 * zebralog_shoutbox.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function zebralog_shoutbox_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function zebralog_shoutbox_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function zebralog_shoutbox_node_info() {
  $items = array(
    'questions' => array(
      'name' => t('Questions'),
      'base' => 'node_content',
      'description' => t('Use <em> questions </em> for creating question contents.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
