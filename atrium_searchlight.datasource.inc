<?php

/**
 * Implementation of hook_searchlight_default_datasources().
 */
function atrium_searchlight_searchlight_default_datasources() {
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
    'group_nid' => array(
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
      'table' => 'og_ancestry',
      'field' => 'nid',
      'name' => 'group_nid',
      'usage' => 'multivalue',
    ),
  );
  $searchlight_datasource->filters = array();
  $searchlight_datasource->options = array(
    'node_access' => 1,
  );

  $export['search_node'] = $searchlight_datasource;
  $searchlight_datasource = new SearchlightDatasource;
  $searchlight_datasource->disabled = FALSE; /* Edit this to true to make a default searchlight_datasource disabled initially */
  $searchlight_datasource->api_version = 1;
  $searchlight_datasource->name = 'search_users';
  $searchlight_datasource->base_table = 'users';
  $searchlight_datasource->fields = array(
    'users_name' => array(
      'label' => 'User: Name (name)',
      'datatype' => 'text',
      'table' => 'users',
      'field' => 'name',
      'name' => 'users_name',
      'usage' => 'content',
    ),
    'users_language' => array(
      'label' => 'User: Language (language)',
      'datatype' => 'text',
      'table' => 'users',
      'field' => 'language',
      'name' => 'users_language',
      'usage' => 'attribute',
    ),
    'users_mail' => array(
      'label' => 'User: E-mail (mail)',
      'datatype' => 'text',
      'table' => 'users',
      'field' => 'mail',
      'name' => 'users_mail',
      'usage' => 'content',
    ),
    'users_created' => array(
      'label' => 'User: Created date (created)',
      'datatype' => 'timestamp',
      'table' => 'users',
      'field' => 'created',
      'name' => 'users_created',
      'usage' => 'attribute',
    ),
    'users_status' => array(
      'label' => 'User: Active (status)',
      'datatype' => 'int',
      'table' => 'users',
      'field' => 'status',
      'name' => 'users_status',
      'usage' => 'attribute',
    ),
  );
  $searchlight_datasource->filters = array();
  $searchlight_datasource->options = array(
    'node_access' => TRUE,
  );

  $export['search_users'] = $searchlight_datasource;
  return $export;
}
