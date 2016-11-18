<?php
/**
 * @file
 * bibsdb_seo.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function bibsdb_seo_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'metatags_noindex_follow';
  $context->description = '';
  $context->tag = 'metatags';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'search/*' => 'search/*',
        'ting/collection/*' => 'ting/collection/*',
        'tags/*' => 'tags/*',
      ),
    ),
  );
  $context->reactions = array(
    'metatag_context_reaction' => array(
      'metatags' => array(
        'und' => array(
          'robots' => array(
            'value' => array(
              'follow' => 'follow',
              'noindex' => 'noindex',
              'index' => 0,
              'nofollow' => 0,
              'noarchive' => 0,
              'nosnippet' => 0,
              'noodp' => 0,
              'noydir' => 0,
              'noimageindex' => 0,
              'notranslate' => 0,
            ),
          ),
        ),
      ),
      'metatag_admin' => 1,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('metatags');
  $export['metatags_noindex_follow'] = $context;

  return $export;
}
