<?php
/**
 * @file
 * gsb_feature_people_fpp.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gsb_feature_people_fpp_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'people_fpp_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'People FPP Displays';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['row_plugin'] = 'entity';
  /* Relationship: Field collection item: Entity with the People (field_person_description) */
  $handler->display->display_options['relationships']['field_person_description_fieldable_panels_pane']['id'] = 'field_person_description_fieldable_panels_pane';
  $handler->display->display_options['relationships']['field_person_description_fieldable_panels_pane']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_person_description_fieldable_panels_pane']['field'] = 'field_person_description_fieldable_panels_pane';
  $handler->display->display_options['relationships']['field_person_description_fieldable_panels_pane']['required'] = TRUE;
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  /* Contextual filter: Fieldable pane: Fieldable pane ID */
  $handler->display->display_options['arguments']['fpid']['id'] = 'fpid';
  $handler->display->display_options['arguments']['fpid']['table'] = 'fieldable_panels_panes';
  $handler->display->display_options['arguments']['fpid']['field'] = 'fpid';
  $handler->display->display_options['arguments']['fpid']['relationship'] = 'field_person_description_fieldable_panels_pane';
  $handler->display->display_options['arguments']['fpid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['fpid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['fpid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['fpid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['fpid']['summary_options']['items_per_page'] = '25';

  /* Display: EVA Field - List */
  $handler = $view->new_display('entity_view', 'EVA Field - List', 'list');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['entity_type'] = 'fieldable_panels_pane';
  $handler->display->display_options['bundles'] = array(
    0 => 'people',
  );

  /* Display: EVA Field - Grid */
  $handler = $view->new_display('entity_view', 'EVA Field - Grid', 'grid');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['entity_type'] = 'fieldable_panels_pane';
  $handler->display->display_options['bundles'] = array(
    0 => 'people',
  );
  $export['people_fpp_view'] = $view;

  return $export;
}
