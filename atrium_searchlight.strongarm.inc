<?php

/**
 * Implementation of hook_strongarm().
 */
function atrium_searchlight_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'searchlight_datasource_node';
  $strongarm->value = 'search_node';

  $export['searchlight_datasource_node'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'searchlight_datasource_users';
  $strongarm->value = 'search_users';

  $export['searchlight_datasource_users'] = $strongarm;
  return $export;
}
