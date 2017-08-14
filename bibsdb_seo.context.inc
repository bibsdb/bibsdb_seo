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
  $context->name = 'alle_arrangementer_for_born';
  $context->description = '';
  $context->tag = 'Metatag';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'arrangementer/alle-arrangementer-born' => 'arrangementer/alle-arrangementer-born',
      ),
    ),
  );
  $context->reactions = array(
    'metatag_context_reaction' => array(
      'metatags' => array(
        'und' => array(
          'title' => array(
            'value' => 'Alle arrangementer for børn | Forår 2017 | [site:name]',
          ),
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
  t('Metatag');
  $export['alle_arrangementer_for_born'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'alle_arrangementer_for_voksne';
  $context->description = '';
  $context->tag = 'Metatag';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'arrangementer/alle-arrangementer-voksne' => 'arrangementer/alle-arrangementer-voksne',
      ),
    ),
  );
  $context->reactions = array(
    'metatag_context_reaction' => array(
      'metatags' => array(
        'und' => array(
          'title' => array(
            'value' => 'Alle arrangementer for voksne | Efterår 2017 | [site:name]',
          ),
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
  t('Metatag');
  $export['alle_arrangementer_for_voksne'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'arrangementer';
  $context->description = '';
  $context->tag = 'Metatag';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'arrangementer' => 'arrangementer',
      ),
    ),
  );
  $context->reactions = array(
    'metatag_context_reaction' => array(
      'metatags' => array(
        'und' => array(
          'title' => array(
            'value' => 'Det sker i Sønderborg - Oplevelser og aktiviteter 2017 | [site:name]',
          ),
        ),
      ),
      'metatag_admin' => 1,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Metatag');
  $export['arrangementer'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'arrangementer_filtreret_efter_bibliotek';
  $context->description = '';
  $context->tag = 'Metatag';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'bibliotek/*/arrangementer/*' => 'bibliotek/*/arrangementer/*',
        'bibliotek/*/arrangementer' => 'bibliotek/*/arrangementer',
      ),
    ),
  );
  $context->reactions = array(
    'metatag_context_reaction' => array(
      'metatags' => array(
        'und' => array(
          'title' => array(
            'value' => 'Arrangementer | [site:name]',
          ),
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
  t('Metatag');
  $export['arrangementer_filtreret_efter_bibliotek'] = $context;

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
