<?php
/**
 * @file
 * gsb_feature_people_fpp.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function gsb_feature_people_fpp_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'people_fpp';
  $ds_view_mode->label = 'People fpp';
  $ds_view_mode->entities = array(
    'fieldable_panels_pane' => 'fieldable_panels_pane',
    'field_collection_item' => 'field_collection_item',
    'node' => 'node',
  );
  $export['people_fpp'] = $ds_view_mode;

  return $export;
}
