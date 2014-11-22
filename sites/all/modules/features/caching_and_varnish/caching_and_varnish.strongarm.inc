<?php
/**
 * @file
 * caching_and_varnish.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function caching_and_varnish_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_bundler_active';
  $strongarm->value = 1;
  $export['advagg_bundler_active'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_bundler_info';
  $strongarm->value = 'Array
(
    [public://languages/fi_v6EkGXxQj6KXbfQ3y64HuWCorTp9-Xc6Y4iVOTJseYM.js] => Array
        (
            [group_hash] => 00000009 kGS2m8V0mLSm3UR1Ozq77aB5PPrZCQUBpa-y7bEIWYY
            [mtime] => 1411224613
            [filesize] => 2266
            [linecount] => 0
            [changes] => 4
        )

    [misc/jquery.js] => Array
        (
            [group_hash] => 00000009 kGS2m8V0mLSm3UR1Ozq77aB5PPrZCQUBpa-y7bEIWYY
            [mtime] => 1407345243
            [filesize] => 78602
            [linecount] => 168
            [changes] => 1
        )

    [misc/drupal.js] => Array
        (
            [group_hash] => 00000009 kGS2m8V0mLSm3UR1Ozq77aB5PPrZCQUBpa-y7bEIWYY
            [mtime] => 1407345243
            [filesize] => 14544
            [linecount] => 433
            [changes] => 1
        )

    [misc/jquery.once.js] => Array
        (
            [group_hash] => 00000009 kGS2m8V0mLSm3UR1Ozq77aB5PPrZCQUBpa-y7bEIWYY
            [mtime] => 1407345243
            [filesize] => 2974
            [linecount] => 79
            [changes] => 1
        )

    [sites/all/modules/contrib/date/date_api/date.css] => Array
        (
            [group_hash] => 00000009 X-HdBXFIb7rSzByOKVQWOp7ft2EQKSSqrMow5xfq8rk
            [mtime] => 1411223709
            [filesize] => 3528
            [linecount] => 48
            [changes] => 1
        )

    [profiles/drupalfi/modules/views/css/views.css] => Array
        (
            [group_hash] => 00000009 X-HdBXFIb7rSzByOKVQWOp7ft2EQKSSqrMow5xfq8rk
            [mtime] => 1411223709
            [filesize] => 707
            [linecount] => 11
            [changes] => 1
        )

    [profiles/drupalfi/modules/ctools/css/ctools.css] => Array
        (
            [group_hash] => 00000009 X-HdBXFIb7rSzByOKVQWOp7ft2EQKSSqrMow5xfq8rk
            [mtime] => 1411223709
            [filesize] => 509
            [linecount] => 7
            [changes] => 1
        )

    [sites/all/modules/contrib/ckeditor/css/ckeditor.css] => Array
        (
            [group_hash] => 00000009 X-HdBXFIb7rSzByOKVQWOp7ft2EQKSSqrMow5xfq8rk
            [mtime] => 1411223709
            [filesize] => 431
            [linecount] => 10
            [changes] => 1
        )

    [modules/system/system.base.css] => Array
        (
            [group_hash] => 00000009 X-HdBXFIb7rSzByOKVQWOp7ft2EQKSSqrMow5xfq8rk
            [mtime] => 1407345243
            [filesize] => 5350
            [linecount] => 45
            [changes] => 1
        )

    [modules/system/system.theme.css] => Array
        (
            [group_hash] => 00000009 X-HdBXFIb7rSzByOKVQWOp7ft2EQKSSqrMow5xfq8rk
            [mtime] => 1407345243
            [filesize] => 3711
            [linecount] => 54
            [changes] => 1
        )

    [modules/system/system.menus.css] => Array
        (
            [group_hash] => 00000009 X-HdBXFIb7rSzByOKVQWOp7ft2EQKSSqrMow5xfq8rk
            [mtime] => 1407345243
            [filesize] => 2035
            [linecount] => 23
            [changes] => 1
        )

    [modules/user/user.css] => Array
        (
            [group_hash] => 00000009 X-HdBXFIb7rSzByOKVQWOp7ft2EQKSSqrMow5xfq8rk
            [mtime] => 1407345243
            [filesize] => 1827
            [linecount] => 25
            [changes] => 1
        )

    [modules/system/system.messages.css] => Array
        (
            [group_hash] => 00000009 X-HdBXFIb7rSzByOKVQWOp7ft2EQKSSqrMow5xfq8rk
            [mtime] => 1407345243
            [filesize] => 961
            [linecount] => 19
            [changes] => 1
        )

    [modules/field/theme/field.css] => Array
        (
            [group_hash] => 00000009 X-HdBXFIb7rSzByOKVQWOp7ft2EQKSSqrMow5xfq8rk
            [mtime] => 1407345243
            [filesize] => 550
            [linecount] => 8
            [changes] => 1
        )

    [modules/comment/comment.css] => Array
        (
            [group_hash] => 00000009 X-HdBXFIb7rSzByOKVQWOp7ft2EQKSSqrMow5xfq8rk
            [mtime] => 1407345243
            [filesize] => 184
            [linecount] => 4
            [changes] => 1
        )

    [modules/node/node.css] => Array
        (
            [group_hash] => 00000009 X-HdBXFIb7rSzByOKVQWOp7ft2EQKSSqrMow5xfq8rk
            [mtime] => 1407345243
            [filesize] => 144
            [linecount] => 3
            [changes] => 1
        )

    [profiles/drupalfi/modules/admin_menu/admin_menu.js] => Array
        (
            [group_hash] => 00000008 5MXa6qSdzF9YugUkdN3MrtLovQnslPlBVtyEjM9GkYE
            [mtime] => 1411223709
            [filesize] => 12540
            [linecount] => 397
            [changes] => 1
        )

    [profiles/drupalfi/modules/admin_menu/admin_menu.css] => Array
        (
            [group_hash] => 00000006 15du4QZqowEBOKBqNGy0rnZG7bcWDYnnLZV529utXs0
            [mtime] => 1411223709
            [filesize] => 5977
            [linecount] => 73
            [changes] => 1
        )

    [misc/form.js] => Array
        (
            [group_hash] => 00000005 SPVQb5Sd7XKfkyG5QjITNOddmdARN6DGFfHD01A8Mh4
            [mtime] => 1407345243
            [filesize] => 2460
            [linecount] => 78
            [changes] => 1
        )

    [modules/system/system.admin.css] => Array
        (
            [group_hash] => 00000005 4vx2PpGuvaT2Q0D7Akgnjwy2Iac8sNjRKVX9z13pCwo
            [mtime] => 1407345243
            [filesize] => 5117
            [linecount] => 67
            [changes] => 1
        )

    [modules/shortcut/shortcut.css] => Array
        (
            [group_hash] => 00000005 4vx2PpGuvaT2Q0D7Akgnjwy2Iac8sNjRKVX9z13pCwo
            [mtime] => 1407345243
            [filesize] => 2408
            [linecount] => 24
            [changes] => 1
        )

    [profiles/drupalfi/themes/drupalfi/css/style.css] => Array
        (
            [group_hash] => 00000004 mFwYBFG_fSXIGHhKFihCc2RB6BzEE31zpRvbSZDUV48
            [mtime] => 1411223709
            [filesize] => 8452
            [linecount] => 111
            [changes] => 1
        )

    [profiles/drupalfi/themes/drupalfi/css/normalize.css] => Array
        (
            [group_hash] => 00000004 mFwYBFG_fSXIGHhKFihCc2RB6BzEE31zpRvbSZDUV48
            [mtime] => 1411223709
            [filesize] => 7044
            [linecount] => 74
            [changes] => 1
        )

    [profiles/drupalfi/themes/drupalfi/css/layout.css] => Array
        (
            [group_hash] => 00000004 mFwYBFG_fSXIGHhKFihCc2RB6BzEE31zpRvbSZDUV48
            [mtime] => 1411223709
            [filesize] => 5783
            [linecount] => 57
            [changes] => 1
        )

    [sites/all/modules/contrib/mobile_navigation/mobile_navigation.css] => Array
        (
            [group_hash] => 00000004 mFwYBFG_fSXIGHhKFihCc2RB6BzEE31zpRvbSZDUV48
            [mtime] => 1411223709
            [filesize] => 5277
            [linecount] => 54
            [changes] => 1
        )

    [profiles/drupalfi/themes/drupalfi/css/default.css] => Array
        (
            [group_hash] => 00000004 mFwYBFG_fSXIGHhKFihCc2RB6BzEE31zpRvbSZDUV48
            [mtime] => 1411223709
            [filesize] => 2185
            [linecount] => 33
            [changes] => 1
        )

    [profiles/drupalfi/themes/drupalfi/css/tabs.css] => Array
        (
            [group_hash] => 00000004 mFwYBFG_fSXIGHhKFihCc2RB6BzEE31zpRvbSZDUV48
            [mtime] => 1411223709
            [filesize] => 1851
            [linecount] => 15
            [changes] => 1
        )

    [misc/collapse.js] => Array
        (
            [group_hash] => 00000004 1wWY8l5cFCzBudmUzmGbfm2u-It1sA3BBv5R7epOWBY
            [mtime] => 1407345243
            [filesize] => 3323
            [linecount] => 103
            [changes] => 1
        )

    [profiles/drupalfi/modules/admin_menu/admin_menu.uid1.css] => Array
        (
            [group_hash] => 00000003 rhT0hpXGX8QY1mgRcu_tc_qHan5KzHfaUuNNw8fj5dU
            [mtime] => 1411223709
            [filesize] => 174
            [linecount] => 1
            [changes] => 1
        )

    [misc/states.js] => Array
        (
            [group_hash] => 00000002 YYD3DC65dpm92mQbmY02AyIAb_7t-dcYrFMDsOiHKqw
            [mtime] => 1407345243
            [filesize] => 17354
            [linecount] => 544
            [changes] => 1
        )

    [misc/tableheader.js] => Array
        (
            [group_hash] => 00000002 NKh1px2LWcwBPnciJTDT-u36ivsiKgNPQcTqt9LJt0I
            [mtime] => 1407345243
            [filesize] => 5330
            [linecount] => 133
            [changes] => 1
        )

    [sites/all/modules/contrib/easy_social/css/easy_social.css] => Array
        (
            [group_hash] => 00000002 K8GrZ0evEtOQhg0ItBBtH51n6YWJBw0_AEdumWm_f1o
            [mtime] => 1411223709
            [filesize] => 558
            [linecount] => 7
            [changes] => 1
        )

    [themes/seven/style.css] => Array
        (
            [group_hash] => 00000002 J95rXSdPnlTBy-CfX5OBLldePWr7dDxau8bXYLg2zbE
            [mtime] => 1407345243
            [filesize] => 18585
            [linecount] => 271
            [changes] => 1
        )

    [themes/seven/reset.css] => Array
        (
            [group_hash] => 00000002 J95rXSdPnlTBy-CfX5OBLldePWr7dDxau8bXYLg2zbE
            [mtime] => 1407345243
            [filesize] => 2947
            [linecount] => 144
            [changes] => 1
        )

    [themes/seven/jquery.ui.theme.css] => Array
        (
            [group_hash] => 00000001 zD3Nny_FK9fD4HQKjIb0aUknhnrBiunp_-RDHNogQBA
            [mtime] => 1407345243
            [filesize] => 15234
            [linecount] => 231
            [changes] => 1
        )

    [misc/ui/jquery.ui.button.css] => Array
        (
            [group_hash] => 00000001 zD3Nny_FK9fD4HQKjIb0aUknhnrBiunp_-RDHNogQBA
            [mtime] => 1407345243
            [filesize] => 2471
            [linecount] => 35
            [changes] => 1
        )

    [misc/ui/jquery.ui.core.css] => Array
        (
            [group_hash] => 00000001 zD3Nny_FK9fD4HQKjIb0aUknhnrBiunp_-RDHNogQBA
            [mtime] => 1407345243
            [filesize] => 1459
            [linecount] => 12
            [changes] => 1
        )

    [misc/ui/jquery.ui.dialog.css] => Array
        (
            [group_hash] => 00000001 zD3Nny_FK9fD4HQKjIb0aUknhnrBiunp_-RDHNogQBA
            [mtime] => 1407345243
            [filesize] => 1363
            [linecount] => 14
            [changes] => 1
        )

    [misc/ui/jquery.ui.resizable.css] => Array
        (
            [group_hash] => 00000001 zD3Nny_FK9fD4HQKjIb0aUknhnrBiunp_-RDHNogQBA
            [mtime] => 1407345243
            [filesize] => 1172
            [linecount] => 13
            [changes] => 1
        )

    [profiles/drupalfi/themes/drupalfi/js/modernizr.js] => Array
        (
            [group_hash] => 00000001 v26RGz-Y2lkFwJVP5pExHw-8swP5T5-A3ATzEunrxQQ
            [mtime] => 1411223709
            [filesize] => 15406
            [linecount] => 3
            [changes] => 1
        )

    [sites/all/modules/contrib/addressfield/addressfield.css] => Array
        (
            [group_hash] => 00000001 uUxCFGP2mcaaf4RBoDFSKjMPY6evGpPZYUX2dezDSnI
            [mtime] => 1411223709
            [filesize] => 769
            [linecount] => 7
            [changes] => 1
        )

    [sites/all/modules/contrib/metatag/metatag.admin.css] => Array
        (
            [group_hash] => 00000001 q0iRVyydAuAiG5PFbejdLURDd0jYALOyH_QuDap4vR8
            [mtime] => 1411223709
            [filesize] => 1684
            [linecount] => 20
            [changes] => 1
        )

    [misc/progress.js] => Array
        (
            [group_hash] => 00000001 pPEZl2ER6LI5SqnK-tbmED2L-kPMFHzj_2k9Oi4OfXw
            [mtime] => 1407345243
            [filesize] => 3112
            [linecount] => 106
            [changes] => 1
        )

    [sites/all/modules/contrib/metatag/metatag.admin.js] => Array
        (
            [group_hash] => 00000001 lMDC6QNOlk6pZKjsGX7gEoh8ziFAnjlxQHC0efxO2Jg
            [mtime] => 1411223709
            [filesize] => 1434
            [linecount] => 48
            [changes] => 1
        )

    [profiles/drupalfi/modules/views/js/views-contextual.js] => Array
        (
            [group_hash] => 00000001 e7FXAWO39oxEgaGG-_7B4vNeZBg0IyDJYZ7JDfGMYCw
            [mtime] => 1411223709
            [filesize] => 490
            [linecount] => 16
            [changes] => 1
        )

    [modules/contextual/contextual.js] => Array
        (
            [group_hash] => 00000001 e7FXAWO39oxEgaGG-_7B4vNeZBg0IyDJYZ7JDfGMYCw
            [mtime] => 1407345243
            [filesize] => 1804
            [linecount] => 52
            [changes] => 1
        )

    [modules/contextual/contextual.css] => Array
        (
            [group_hash] => 00000001 PwRTy1qSB5AVvO-VYaidYDuV0MljNab-BPreSYOu__0
            [mtime] => 1407345243
            [filesize] => 2340
            [linecount] => 16
            [changes] => 1
        )

    [sites/all/modules/contrib/google_analytics/googleanalytics.js] => Array
        (
            [group_hash] => 00000001 LTFah8eoGJmMreFxFD9S2W7KHBkHBQvSrJGMOodg00I
            [mtime] => 1411223709
            [filesize] => 3411
            [linecount] => 93
            [changes] => 1
        )

    [profiles/drupalfi/themes/drupalfi/css/print.css] => Array
        (
            [group_hash] => 00000001 JTR_b6bEfMoFbcz13aFRHU9WH68_NKjMLnDy7dxPtzs
            [mtime] => 1411223709
            [filesize] => 573
            [linecount] => 21
            [changes] => 1
        )

    [sites/all/modules/contrib/token/token.js] => Array
        (
            [group_hash] => 00000001 F0-hXbrmtntLfqB6U58pc9RBz3hDvusqt5fmrCAxOiY
            [mtime] => 1411223709
            [filesize] => 2893
            [linecount] => 87
            [changes] => 1
        )

    [profiles/drupalfi/modules/views/js/jquery.ui.dialog.patch.js] => Array
        (
            [group_hash] => 00000001 F0-hXbrmtntLfqB6U58pc9RBz3hDvusqt5fmrCAxOiY
            [mtime] => 1411223709
            [filesize] => 1132
            [linecount] => 27
            [changes] => 1
        )

    [misc/ui/jquery.ui.draggable.min.js] => Array
        (
            [group_hash] => 00000001 F0-hXbrmtntLfqB6U58pc9RBz3hDvusqt5fmrCAxOiY
            [mtime] => 1407345243
            [filesize] => 18552
            [linecount] => 51
            [changes] => 1
        )

    [misc/ui/jquery.ui.resizable.min.js] => Array
        (
            [group_hash] => 00000001 F0-hXbrmtntLfqB6U58pc9RBz3hDvusqt5fmrCAxOiY
            [mtime] => 1407345243
            [filesize] => 17366
            [linecount] => 48
            [changes] => 1
        )

    [misc/ui/jquery.ui.dialog.min.js] => Array
        (
            [group_hash] => 00000001 F0-hXbrmtntLfqB6U58pc9RBz3hDvusqt5fmrCAxOiY
            [mtime] => 1407345243
            [filesize] => 11521
            [linecount] => 41
            [changes] => 1
        )

    [misc/ui/jquery.ui.button.min.js] => Array
        (
            [group_hash] => 00000001 F0-hXbrmtntLfqB6U58pc9RBz3hDvusqt5fmrCAxOiY
            [mtime] => 1407345243
            [filesize] => 6664
            [linecount] => 26
            [changes] => 1
        )

    [misc/ui/jquery.ui.core.min.js] => Array
        (
            [group_hash] => 00000001 F0-hXbrmtntLfqB6U58pc9RBz3hDvusqt5fmrCAxOiY
            [mtime] => 1407345243
            [filesize] => 4325
            [linecount] => 18
            [changes] => 1
        )

    [misc/ui/jquery.ui.position.min.js] => Array
        (
            [group_hash] => 00000001 F0-hXbrmtntLfqB6U58pc9RBz3hDvusqt5fmrCAxOiY
            [mtime] => 1407345243
            [filesize] => 3613
            [linecount] => 17
            [changes] => 1
        )

    [misc/ui/jquery.ui.widget.min.js] => Array
        (
            [group_hash] => 00000001 F0-hXbrmtntLfqB6U58pc9RBz3hDvusqt5fmrCAxOiY
            [mtime] => 1407345243
            [filesize] => 3274
            [linecount] => 16
            [changes] => 1
        )

    [misc/ui/jquery.ui.mouse.min.js] => Array
        (
            [group_hash] => 00000001 F0-hXbrmtntLfqB6U58pc9RBz3hDvusqt5fmrCAxOiY
            [mtime] => 1407345243
            [filesize] => 2733
            [linecount] => 18
            [changes] => 1
        )

    [misc/textarea.js] => Array
        (
            [group_hash] => 00000001 F0-hXbrmtntLfqB6U58pc9RBz3hDvusqt5fmrCAxOiY
            [mtime] => 1407345243
            [filesize] => 920
            [linecount] => 32
            [changes] => 1
        )

)
';
  $export['advagg_bundler_info'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_bundler_max_css';
  $strongarm->value = '1';
  $export['advagg_bundler_max_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_bundler_max_js';
  $strongarm->value = '1';
  $export['advagg_bundler_max_js'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_cache_level';
  $strongarm->value = '1';
  $export['advagg_cache_level'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_combine_css_media';
  $strongarm->value = 1;
  $export['advagg_combine_css_media'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_core_groups';
  $strongarm->value = FALSE;
  $export['advagg_core_groups'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_cron_frequency';
  $strongarm->value = '86400';
  $export['advagg_cron_frequency'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_cron_timestamp';
  $strongarm->value = 1416581233;
  $export['advagg_cron_timestamp'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_css_compressor';
  $strongarm->value = '2';
  $export['advagg_css_compressor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_css_fix_type';
  $strongarm->value = 1;
  $export['advagg_css_fix_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_css_inline_compressor';
  $strongarm->value = '2';
  $export['advagg_css_inline_compressor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_css_inline_compress_if_not_cacheable';
  $strongarm->value = 0;
  $export['advagg_css_inline_compress_if_not_cacheable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_enabled';
  $strongarm->value = 1;
  $export['advagg_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_gzip';
  $strongarm->value = 1;
  $export['advagg_gzip'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_ie_css_selector_limiter';
  $strongarm->value = 1;
  $export['advagg_ie_css_selector_limiter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_ie_css_selector_limiter_value';
  $strongarm->value = '4095';
  $export['advagg_ie_css_selector_limiter_value'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_js_compressor';
  $strongarm->value = '1';
  $export['advagg_js_compressor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_js_compress_packer';
  $strongarm->value = 0;
  $export['advagg_js_compress_packer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_js_fix_type';
  $strongarm->value = 1;
  $export['advagg_js_fix_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_js_inline_compressor';
  $strongarm->value = '1';
  $export['advagg_js_inline_compressor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_js_inline_compress_if_not_cacheable';
  $strongarm->value = 0;
  $export['advagg_js_inline_compress_if_not_cacheable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_mod_css_adjust_sort_browsers';
  $strongarm->value = 1;
  $export['advagg_mod_css_adjust_sort_browsers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_mod_css_adjust_sort_external';
  $strongarm->value = 1;
  $export['advagg_mod_css_adjust_sort_external'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_mod_css_adjust_sort_inline';
  $strongarm->value = 1;
  $export['advagg_mod_css_adjust_sort_inline'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_mod_css_defer';
  $strongarm->value = 0;
  $export['advagg_mod_css_defer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_mod_css_head_extract';
  $strongarm->value = 1;
  $export['advagg_mod_css_head_extract'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_mod_css_preprocess';
  $strongarm->value = 1;
  $export['advagg_mod_css_preprocess'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_mod_inline_pages';
  $strongarm->value = '';
  $export['advagg_mod_inline_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_mod_inline_settings';
  $strongarm->value = '1';
  $export['advagg_mod_inline_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_mod_js_adjust_sort_browsers';
  $strongarm->value = 1;
  $export['advagg_mod_js_adjust_sort_browsers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_mod_js_adjust_sort_external';
  $strongarm->value = 1;
  $export['advagg_mod_js_adjust_sort_external'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_mod_js_adjust_sort_inline';
  $strongarm->value = 1;
  $export['advagg_mod_js_adjust_sort_inline'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_mod_js_async';
  $strongarm->value = 0;
  $export['advagg_mod_js_async'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_mod_js_async_shim';
  $strongarm->value = 1;
  $export['advagg_mod_js_async_shim'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_mod_js_defer';
  $strongarm->value = 1;
  $export['advagg_mod_js_defer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_mod_js_footer';
  $strongarm->value = '2';
  $export['advagg_mod_js_footer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_mod_js_footer_inline_alter';
  $strongarm->value = 1;
  $export['advagg_mod_js_footer_inline_alter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_mod_js_head_extract';
  $strongarm->value = 1;
  $export['advagg_mod_js_head_extract'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_mod_js_preprocess';
  $strongarm->value = 1;
  $export['advagg_mod_js_preprocess'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_mod_js_remove_unused';
  $strongarm->value = 1;
  $export['advagg_mod_js_remove_unused'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_mod_unified_multisite_dir';
  $strongarm->value = '';
  $export['advagg_mod_unified_multisite_dir'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_remove_missing_files_from_db_time';
  $strongarm->value = '1209600';
  $export['advagg_remove_missing_files_from_db_time'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_remove_old_unused_aggregates_time';
  $strongarm->value = '3888000';
  $export['advagg_remove_old_unused_aggregates_time'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_use_httprl';
  $strongarm->value = FALSE;
  $export['advagg_use_httprl'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_lifetime';
  $strongarm->value = '1800';
  $export['cache_lifetime'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_cache_maximum_age';
  $strongarm->value = '3600';
  $export['page_cache_maximum_age'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_compression';
  $strongarm->value = 1;
  $export['page_compression'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'preprocess_css';
  $strongarm->value = 1;
  $export['preprocess_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'preprocess_js';
  $strongarm->value = 1;
  $export['preprocess_js'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'varnish_bantype';
  $strongarm->value = '1';
  $export['varnish_bantype'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'varnish_cache_clear';
  $strongarm->value = '1';
  $export['varnish_cache_clear'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'varnish_control_key';
  $strongarm->value = '';
  $export['varnish_control_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'varnish_control_terminal';
  $strongarm->value = '127.0.0.1:6082';
  $export['varnish_control_terminal'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'varnish_flush_cron';
  $strongarm->value = '0';
  $export['varnish_flush_cron'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'varnish_socket_timeout';
  $strongarm->value = 100;
  $export['varnish_socket_timeout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'varnish_version';
  $strongarm->value = '3';
  $export['varnish_version'] = $strongarm;

  return $export;
}
