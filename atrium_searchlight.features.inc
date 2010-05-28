<?php

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
