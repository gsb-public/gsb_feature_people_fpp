<?php
/**
 * @file
 * gsb_feature_person.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gsb_feature_person_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function gsb_feature_person_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function gsb_feature_person_node_info() {
  $items = array(
    'gsb_person' => array(
      'name' => t('Person'),
      'base' => 'node_content',
      'description' => t('The GSB Public Person content type is used for person on the GSB Public web site.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
