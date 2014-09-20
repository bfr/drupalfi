<?php
/**
 * @file
 * footer_block_variables.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function footer_block_variables_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupalfi_footer_block_content';
  $strongarm->value = '<div class="footer-left">
<p>Copyright Suomen Drupal -yhdistys © 2014. Kaikki oikeudet pidätetään. Drupal on <a href="http://drupal.com/trademark">Dries Buytaertin</a> <a href="http://drupal.com/trademark">rekisteröity tavaramerkki.</a></p>
</div>';
  $export['drupalfi_footer_block_content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupalfi_footer_block_title';
  $strongarm->value = '<none>';
  $export['drupalfi_footer_block_title'] = $strongarm;

  return $export;
}
