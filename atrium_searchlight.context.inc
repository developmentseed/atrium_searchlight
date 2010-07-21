<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function atrium_searchlight_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'search_global';
  $context->description = '';
  $context->tag = 'Search';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'search_listing' => 'search_listing',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'searchlight-facets_search_global' => array(
          'module' => 'searchlight',
          'delta' => 'facets_search_global',
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  $translatables['search_global'] = array(
    t('Search'),
  );

  $export['search_global'] = $context;
  return $export;
}
