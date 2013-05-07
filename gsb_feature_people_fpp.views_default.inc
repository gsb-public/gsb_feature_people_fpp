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
  $view->base_table = 'fieldable_panels_panes';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Fieldable panel pane: People (field_person_description) */
  $handler->display->display_options['relationships']['field_person_description_value']['id'] = 'field_person_description_value';
  $handler->display->display_options['relationships']['field_person_description_value']['table'] = 'field_data_field_person_description';
  $handler->display->display_options['relationships']['field_person_description_value']['field'] = 'field_person_description_value';
  $handler->display->display_options['relationships']['field_person_description_value']['delta'] = '-1';
  /* Field: Field collection item: Speaker */
  $handler->display->display_options['fields']['field_person_ref']['id'] = 'field_person_ref';
  $handler->display->display_options['fields']['field_person_ref']['table'] = 'field_data_field_person_ref';
  $handler->display->display_options['fields']['field_person_ref']['field'] = 'field_person_ref';
  $handler->display->display_options['fields']['field_person_ref']['relationship'] = 'field_person_description_value';
  $handler->display->display_options['fields']['field_person_ref']['label'] = '';
  $handler->display->display_options['fields']['field_person_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_ref']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_person_ref']['settings'] = array(
    'view_mode' => 'teaser',
    'links' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Contextual filter: Fieldable pane: Fieldable pane ID */
  $handler->display->display_options['arguments']['fpid']['id'] = 'fpid';
  $handler->display->display_options['arguments']['fpid']['table'] = 'fieldable_panels_panes';
  $handler->display->display_options['arguments']['fpid']['field'] = 'fpid';
  $handler->display->display_options['arguments']['fpid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['fpid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['fpid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['fpid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['fpid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Fieldable pane: Bundle */
  $handler->display->display_options['filters']['bundle']['id'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['table'] = 'fieldable_panels_panes';
  $handler->display->display_options['filters']['bundle']['field'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['value'] = array(
    'people' => 'people',
  );

  /* Display: EVA Field - List */
  $handler = $view->new_display('entity_view', 'EVA Field - List', 'list');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'people-list';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Speaker */
  $handler->display->display_options['fields']['field_person_ref']['id'] = 'field_person_ref';
  $handler->display->display_options['fields']['field_person_ref']['table'] = 'field_data_field_person_ref';
  $handler->display->display_options['fields']['field_person_ref']['field'] = 'field_person_ref';
  $handler->display->display_options['fields']['field_person_ref']['relationship'] = 'field_person_description_value';
  $handler->display->display_options['fields']['field_person_ref']['label'] = '';
  $handler->display->display_options['fields']['field_person_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_ref']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_person_ref']['settings'] = array(
    'view_mode' => 'people_fpp',
    'links' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Field: Description */
  $handler->display->display_options['fields']['field_body']['id'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['table'] = 'field_data_field_body';
  $handler->display->display_options['fields']['field_body']['field'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['relationship'] = 'field_person_description_value';
  $handler->display->display_options['fields']['field_body']['label'] = '';
  $handler->display->display_options['fields']['field_body']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_body']['element_class'] = 'person-quote';
  $handler->display->display_options['fields']['field_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_body']['settings'] = array(
    'trim_length' => '600',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['entity_type'] = 'fieldable_panels_pane';
  $handler->display->display_options['bundles'] = array(
    0 => 'people',
  );

  /* Display: EVA Field - Grid */
  $handler = $view->new_display('entity_view', 'EVA Field - Grid', 'grid');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'people-grid';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Speaker */
  $handler->display->display_options['fields']['field_person_ref']['id'] = 'field_person_ref';
  $handler->display->display_options['fields']['field_person_ref']['table'] = 'field_data_field_person_ref';
  $handler->display->display_options['fields']['field_person_ref']['field'] = 'field_person_ref';
  $handler->display->display_options['fields']['field_person_ref']['relationship'] = 'field_person_description_value';
  $handler->display->display_options['fields']['field_person_ref']['label'] = '';
  $handler->display->display_options['fields']['field_person_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_ref']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_person_ref']['settings'] = array(
    'view_mode' => 'teaser',
    'links' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['entity_type'] = 'fieldable_panels_pane';
  $handler->display->display_options['bundles'] = array(
    0 => 'people',
  );
  $export['people_fpp_view'] = $view;

  return $export;
}
