<?php
/**
 * @file
 * aberdeen_block_content.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function aberdeen_block_content_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'aberdeen_logo';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'drupalfi_aberdeen_block-drupalfi_aberdeen_block' => array(
          'module' => 'drupalfi_aberdeen_block',
          'delta' => 'drupalfi_aberdeen_block',
          'region' => 'footer',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['aberdeen_logo'] = $context;

  return $export;
}
