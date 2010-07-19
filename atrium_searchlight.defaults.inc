<?php

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _atrium_searchlight_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'search_global_facets';
  $context->description = '';
  $context->tag = 'Search';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'atrium_search' => 'atrium_search',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'searchlight-facets_search_global_facets' => array(
          'module' => 'searchlight',
          'delta' => 'facets_search_global_facets',
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  $translatables['search_global_facets'] = array(
    t('Search'),
  );

  $export['search_global_facets'] = $context;
  return $export;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _atrium_searchlight_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "searchlight" && $api == "datasource") {
    return array("version" => 1);
  }
  elseif ($module == "searchlight" && $api == "environment") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_searchlight_default_datasources().
 */
function _atrium_searchlight_searchlight_default_datasources() {
  $export = array();
  $searchlight_datasource = new SearchlightDatasource;
  $searchlight_datasource->disabled = FALSE; /* Edit this to true to make a default searchlight_datasource disabled initially */
  $searchlight_datasource->api_version = 1;
  $searchlight_datasource->name = 'search_node';
  $searchlight_datasource->base_table = 'node';
  $searchlight_datasource->fields = array(
    'node_title' => array(
      'label' => 'Node: Title (title)',
      'datatype' => 'text',
      'table' => 'node',
      'field' => 'title',
      'name' => 'node_title',
      'usage' => 'content',
    ),
    'node_revisions_body' => array(
      'label' => 'Node: Body (body)',
      'datatype' => 'text',
      'table' => 'node_revisions',
      'field' => 'body',
      'name' => 'node_revisions_body',
      'usage' => 'content',
    ),
    'node_status' => array(
      'label' => 'Node: Published (status)',
      'datatype' => 'int',
      'table' => 'node',
      'field' => 'status',
      'name' => 'node_status',
      'usage' => 'attribute',
    ),
    'node_created' => array(
      'label' => 'Node: Post date (created)',
      'datatype' => 'timestamp',
      'table' => 'node',
      'field' => 'created',
      'name' => 'node_created',
      'usage' => 'attribute',
    ),
    'users_name' => array(
      'label' => 'User: Name (name)',
      'datatype' => 'text',
      'table' => 'users',
      'field' => 'name',
      'name' => 'users_name',
      'usage' => 'attribute',
    ),
    'users_uid' => array(
      'label' => 'User: Name (uid)',
      'datatype' => 'int',
      'table' => 'users',
      'field' => 'uid',
      'name' => 'users_uid',
      'usage' => 'attribute',
    ),
    'node_type' => array(
      'label' => 'Node: Type (type)',
      'datatype' => 'text',
      'table' => 'node',
      'field' => 'type',
      'name' => 'node_type',
      'usage' => 'attribute',
    ),
    'node_og_ancestry_nid' => array(
      'label_field' => array(
        'label' => 'Node: Title (title)',
        'datatype' => 'text',
        'table' => 'node',
        'field' => 'title',
        'name' => 'node_og_ancestry_title',
        'usage' => 'multivalue',
      ),
      'base_table' => 'node',
      'view' => 'searchlight_og_ancestry:searchlight_multivalue_og',
      'label' => 'Organic Groups',
      'datatype' => 'int',
      'table' => 'node',
      'field' => 'nid',
      'name' => 'node_og_ancestry_nid',
      'usage' => 'multivalue',
    ),
    'casetracker_case_assign_to' => array(
      'label' => 'Case Tracker: Assigned to (assign_to)',
      'datatype' => 'int',
      'table' => 'casetracker_case',
      'field' => 'assign_to',
      'name' => 'casetracker_case_assign_to',
      'usage' => 'attribute',
    ),
    'casetracker_case_case_priority_id' => array(
      'label' => 'Case Tracker: Case priority (case_priority_id)',
      'datatype' => 'int',
      'table' => 'casetracker_case',
      'field' => 'case_priority_id',
      'name' => 'casetracker_case_case_priority_id',
      'usage' => 'attribute',
    ),
    'casetracker_case_case_status_id' => array(
      'label' => 'Case Tracker: Case status (case_status_id)',
      'datatype' => 'int',
      'table' => 'casetracker_case',
      'field' => 'case_status_id',
      'name' => 'casetracker_case_case_status_id',
      'usage' => 'attribute',
    ),
    'casetracker_case_case_type_id' => array(
      'label' => 'Case Tracker: Case type (case_type_id)',
      'datatype' => 'int',
      'table' => 'casetracker_case',
      'field' => 'case_type_id',
      'name' => 'casetracker_case_case_type_id',
      'usage' => 'attribute',
    ),
    'casetracker_case_pid' => array(
      'label' => 'Case Tracker: Project (pid)',
      'datatype' => 'int',
      'table' => 'casetracker_case',
      'field' => 'pid',
      'name' => 'casetracker_case_pid',
      'usage' => 'attribute',
    ),
    'node_comment_statistics_last_updated' => array(
      'label' => 'Node: Updated/commented date (last_updated)',
      'datatype' => 'timestamp',
      'table' => 'node_comment_statistics',
      'field' => 'last_updated',
      'name' => 'node_comment_statistics_last_updated',
      'usage' => 'attribute',
    ),
  );
  $searchlight_datasource->filters = array();
  $searchlight_datasource->options = array(
    'node_access' => 1,
  );

  $export['search_node'] = $searchlight_datasource;
  return $export;
}

/**
 * Helper to implementation of hook_searchlight_default_environments().
 */
function _atrium_searchlight_searchlight_default_environments() {
  $export = array();
  $searchlight_environment = new SearchlightEnvironment;
  $searchlight_environment->disabled = FALSE; /* Edit this to true to make a default searchlight_environment disabled initially */
  $searchlight_environment->api_version = 1;
  $searchlight_environment->name = 'search_global_facets';
  $searchlight_environment->view_display = 'atrium_search:page_1';
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

  $export['search_global_facets'] = $searchlight_environment;
  return $export;
}

/**
 * Helper to implementation of hook_strongarm().
 */
function _atrium_searchlight_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'searchlight_datasource_node';
  $strongarm->value = 'search_node';

  $export['searchlight_datasource_node'] = $strongarm;
  return $export;
}
