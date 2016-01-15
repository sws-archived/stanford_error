<?php
/**
 * @file
 * stanford_error.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function stanford_error_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
