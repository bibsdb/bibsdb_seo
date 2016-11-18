<?php
/**
 * @file
 * bibsdb_seo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bibsdb_seo_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
