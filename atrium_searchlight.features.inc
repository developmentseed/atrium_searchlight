<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function atrium_searchlight_context_default_contexts() {
  module_load_include('inc', 'atrium_searchlight', 'atrium_searchlight.defaults');
  $args = func_get_args();
  return call_user_func_array('_atrium_searchlight_context_default_contexts', $args);
}
