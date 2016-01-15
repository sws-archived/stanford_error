<?php
/**
 * @file
 * stanford_error.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function stanford_error_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'noblocks_403_404';
  $context->description = 'Disables blocks on 403 and 404 pages.';
  $context->tag = 'No Blocks';
  $context->conditions = array(
    'error' => array(
      'values' => array(
        403 => 403,
        404 => 404,
      ),
    ),
  );
  $context->reactions = array(
    'region' => array(
      'bartik' => array(
        'disable' => array(
          'header' => 0,
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'highlighted' => 0,
          'featured' => 0,
          'content' => 0,
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'triptych_first' => 0,
          'triptych_middle' => 0,
          'triptych_last' => 0,
          'footer_firstcolumn' => 0,
          'footer_secondcolumn' => 0,
          'footer_thirdcolumn' => 0,
          'footer_fourthcolumn' => 0,
          'footer' => 0,
        ),
      ),
      'open_framework' => array(
        'disable' => array(
          'admin_shortcuts' => 0,
          'site_login' => 0,
          'header' => 0,
          'navigation' => 0,
          'search_box' => 0,
          'fullwidth_top' => 0,
          'main_top' => 0,
          'main_upper' => 0,
          'sidebar_first' => 0,
          'highlighted' => 0,
          'help' => 0,
          'content_top' => 0,
          'content_upper' => 0,
          'content' => 0,
          'content_row2' => 0,
          'content_col2-1' => 0,
          'content_col2-2' => 0,
          'content_row3' => 0,
          'content_col3-1' => 0,
          'content_col3-2' => 0,
          'content_col3-3' => 0,
          'content_row4' => 0,
          'content_col4-1' => 0,
          'content_col4-2' => 0,
          'content_col4-3' => 0,
          'content_col4-4' => 0,
          'content_lower' => 0,
          'content_bottom' => 0,
          'sidebar_second' => 0,
          'main_lower' => 0,
          'main_bottom' => 0,
          'fullwidth_bottom' => 0,
          'footer' => 0,
        ),
      ),
      'seven' => array(
        'disable' => array(
          'content' => 0,
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'sidebar_first' => 0,
        ),
      ),
      'stanford_framework' => array(
        'disable' => array(
          'main_top' => 'main_top',
          'main_upper' => 'main_upper',
          'sidebar_first' => 'sidebar_first',
          'content_top' => 'content_top',
          'content_upper' => 'content_upper',
          'content_row2' => 'content_row2',
          'content_col2-1' => 'content_col2-1',
          'content_col2-2' => 'content_col2-2',
          'content_row3' => 'content_row3',
          'content_col3-1' => 'content_col3-1',
          'content_col3-2' => 'content_col3-2',
          'content_col3-3' => 'content_col3-3',
          'content_row4' => 'content_row4',
          'content_col4-1' => 'content_col4-1',
          'content_col4-2' => 'content_col4-2',
          'content_col4-3' => 'content_col4-3',
          'content_col4-4' => 'content_col4-4',
          'content_lower' => 'content_lower',
          'content_bottom' => 'content_bottom',
          'sidebar_second' => 'sidebar_second',
          'main_lower' => 'main_lower',
          'main_bottom' => 'main_bottom',
          'admin_shortcuts' => 0,
          'global_header' => 0,
          'header' => 0,
          'navigation' => 0,
          'search_box' => 0,
          'highlighted' => 0,
          'help' => 0,
          'content' => 0,
          'page_bottom' => 0,
          'footer' => 0,
        ),
      ),
      'stanford_seven' => array(
        'disable' => array(
          'admin_shortcuts' => 0,
          'help' => 0,
          'page_top' => 0,
          'main_top' => 0,
          'content_top' => 0,
          'content' => 0,
          'content_bottom' => 0,
          'main_bottom' => 0,
          'page_bottom' => 0,
          'sidebar_second' => 0,
          'sidebar_first' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Disables blocks on 403 and 404 pages.');
  t('No Blocks');
  $export['noblocks_403_404'] = $context;

  return $export;
}
