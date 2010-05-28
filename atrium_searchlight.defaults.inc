<?php

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _atrium_searchlight_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'searchlight_sitewide';
  $context->description = '';
  $context->tag = 'Searchlight';
  $context->conditions = array();
  $context->reactions = array();
  $context->condition_mode = 0;

  $translatables['searchlight_sitewide'] = array(
    t('Searchlight'),
  );

  $export['searchlight_sitewide'] = $context;
  return $export;
}
