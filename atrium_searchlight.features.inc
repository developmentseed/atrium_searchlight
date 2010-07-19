<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function atrium_searchlight_context_default_contexts() {
  module_load_include('inc', 'atrium_searchlight', 'atrium_searchlight.defaults');
  $args = func_get_args();
  return call_user_func_array('_atrium_searchlight_context_default_contexts', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function atrium_searchlight_ctools_plugin_api() {
  module_load_include('inc', 'atrium_searchlight', 'atrium_searchlight.defaults');
  $args = func_get_args();
  return call_user_func_array('_atrium_searchlight_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_searchlight_default_datasources().
 */
function atrium_searchlight_searchlight_default_datasources() {
  module_load_include('inc', 'atrium_searchlight', 'atrium_searchlight.defaults');
  $args = func_get_args();
  return call_user_func_array('_atrium_searchlight_searchlight_default_datasources', $args);
}

/**
 * Implementation of hook_searchlight_default_environments().
 */
function atrium_searchlight_searchlight_default_environments() {
  module_load_include('inc', 'atrium_searchlight', 'atrium_searchlight.defaults');
  $args = func_get_args();
  return call_user_func_array('_atrium_searchlight_searchlight_default_environments', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function atrium_searchlight_strongarm() {
  module_load_include('inc', 'atrium_searchlight', 'atrium_searchlight.defaults');
  $args = func_get_args();
  return call_user_func_array('_atrium_searchlight_strongarm', $args);
}
