<?php
/**
 * @file
 * beer_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function beer_content_type_node_info() {
  $items = array(
    'beer' => array(
      'name' => t('Beer'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
