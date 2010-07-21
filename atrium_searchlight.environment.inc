<?php

/**
 * Implementation of hook_searchlight_default_environments().
 */
function atrium_searchlight_searchlight_default_environments() {
  $export = array();
  $searchlight_environment = new SearchlightEnvironment;
  $searchlight_environment->disabled = FALSE; /* Edit this to true to make a default searchlight_environment disabled initially */
  $searchlight_environment->api_version = 1;
  $searchlight_environment->name = 'search_global';
  $searchlight_environment->view_display = 'search_listing:page_1';
  $searchlight_environment->facets = array(
    'node_status' => array(
      'enabled' => 0,
      'weight' => '-2',
      'label' => '',
      'items' => '5',
    ),
    'node_created' => array(
      'enabled' => 1,
      'weight' => '-9',
      'label' => '',
      'items' => '10',
      'granularity' => 'month',
      'date_format' => 'F, Y',
    ),
    'users_name' => array(
      'enabled' => 1,
      'weight' => '-7',
      'label' => '',
      'items' => '10',
    ),
    'users_uid' => array(
      'enabled' => 0,
      'weight' => '-3',
      'label' => '',
      'items' => '5',
    ),
    'node_type' => array(
      'enabled' => 1,
      'weight' => '-8',
      'label' => '',
      'items' => '10',
    ),
    'node_og_ancestry_nid' => array(
      'enabled' => 0,
      'weight' => '-1',
      'label' => '',
      'items' => '5',
    ),
    'casetracker_case_assign_to' => array(
      'enabled' => 0,
      'weight' => '2',
      'label' => '',
      'items' => '5',
    ),
    'casetracker_case_case_priority_id' => array(
      'enabled' => 0,
      'weight' => '1',
      'label' => '',
      'items' => '5',
    ),
    'casetracker_case_case_status_id' => array(
      'enabled' => 0,
      'weight' => '0',
      'label' => '',
      'items' => '5',
    ),
    'casetracker_case_case_type_id' => array(
      'enabled' => 0,
      'weight' => '-4',
      'label' => '',
      'items' => '5',
    ),
    'casetracker_case_pid' => array(
      'enabled' => 0,
      'weight' => '-5',
      'label' => '',
      'items' => '5',
    ),
    'node_comment_statistics_last_updated' => array(
      'enabled' => 0,
      'weight' => '-6',
      'label' => '',
      'items' => '5',
      'granularity' => 'month',
      'date_format' => 'F, Y',
    ),
    'search_query' => array(
      'enabled' => 1,
      'weight' => '-10',
      'label' => '',
      'items' => 1,
    ),
  );
  $searchlight_environment->options = array(
    'facets_label' => 'Search facets',
  );

  $export['search_global'] = $searchlight_environment;
  return $export;
}
