<?php
/**
 * @file
 * provider_search_infrastructure.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function provider_search_infrastructure_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'vnsny';
  $feeds_importer->config = array(
    'name' => 'vnsny',
    'description' => 'provider search import',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml html htm',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'PROVIDER_TYPE',
          'xpathparser:1' => 'SPECIALTY1',
          'xpathparser:2' => 'SPECIALTY2',
          'xpathparser:3' => 'SPECIALTY3',
          'xpathparser:4' => 'PRACTICE_OFFICE_PROV_ID',
          'xpathparser:5' => 'PROVIDER_LAST_NAME',
          'xpathparser:6' => 'PROVIDER_FIRST_NAME',
          'xpathparser:7' => 'PROVIDER_MI',
          'xpathparser:8' => 'DEGREE',
          'xpathparser:9' => 'HOSP_PRIVILEGE1',
          'xpathparser:10' => 'HOSP_PRIVILEGE2',
          'xpathparser:11' => 'HOSP_PRIVILEGE3',
          'xpathparser:12' => 'HOSP_PRIVILEGE4',
          'xpathparser:13' => 'PRACTICE_NAME',
          'xpathparser:14' => 'ADDRESS_LINE1',
          'xpathparser:15' => 'ADDRESS_LINE2',
          'xpathparser:16' => 'CITY',
          'xpathparser:17' => 'STATE',
          'xpathparser:18' => 'ZIP',
          'xpathparser:20' => 'PHONE',
          'xpathparser:21' => 'HANDICAP_ACCESS',
          'xpathparser:22' => 'PANEL_STATUS',
          'xpathparser:23' => 'AFTER_HOURS_NUMBER',
          'xpathparser:24' => 'BOARD_CERT',
          'xpathparser:25' => 'PROVIDER_LANGUAGE1',
          'xpathparser:27' => 'PROVIDER_LANGUAGE3',
          'xpathparser:28' => 'PROVIDER_LANGUAGE4',
          'xpathparser:29' => 'PROVIDER_LANGUAGE5',
          'xpathparser:30' => 'PROVIDER_LANGUAGE6',
          'xpathparser:31' => 'PROVIDER_LANGUAGE7',
          'xpathparser:32' => 'PROVIDER_LANGUAGE8',
          'xpathparser:33' => 'PROVIDER_LANGUAGE9',
          'xpathparser:34' => 'PROVIDER_LANGUAGE10',
          'xpathparser:35' => 'PROVIDER_LANGUAGE11',
          'xpathparser:36' => 'PROVIDER_LANGUAGE12',
          'xpathparser:37' => 'PROVIDER_LANGUAGE13',
          'xpathparser:38' => 'PROVIDER_LANGUAGE14',
          'xpathparser:39' => 'PROVIDER_LANGUAGE15',
          'xpathparser:40' => 'PROVIDER_LANGUAGE16',
          'xpathparser:41' => 'PROVIDER_LANGUAGE17',
          'xpathparser:42' => 'PROVIDER_LANGUAGE18',
          'xpathparser:43' => 'PROVIDER_LANGUAGE19',
          'xpathparser:44' => 'PROVIDER_LANGUAGE20',
          'xpathparser:45' => 'HOME_VISITS',
          'xpathparser:46' => 'LOB',
          'xpathparser:47' => 'NPI',
          'xpathparser:48' => 'PROVIDER_ID',
          'xpathparser:49' => 'FAX',
          'xpathparser:50' => 'SERVICE_AREA',
          'xpathparser:51' => 'OFFICE_HOURS',
          'xpathparser:52' => 'LICENSE_INFO',
          'xpathparser:53' => 'PUBLIC_TRANS_ACCESS',
          'xpathparser:54' => 'ADA_ACCESSIBILITY',
          'xpathparser:55' => 'EXPERIENCE',
          'xpathparser:56' => 'PHYSICALLY_DISABLED',
          'xpathparser:57' => 'CHRONICE_ILLNESS_ANY',
          'xpathparser:58' => 'MENTAL_ILLNESS_ANY',
          'xpathparser:59' => 'HEARING_OR_VISUALLY_IMPAIRED',
          'xpathparser:60' => 'CO_OCCURRING_DISORDERS',
          'xpathparser:61' => 'END_STAGE_RENAL_DISORDERS',
          'xpathparser:62' => 'DESIGNATED_AIDS_CENTERS',
          'xpathparser:63' => 'COMMUNITY_HEALTH_CENTERS',
          'xpathparser:64' => 'PRIVATE_PRACTICE_OFFICES',
          'xpathparser:65' => 'NON_DAC_HOSPITALS',
          'xpathparser:66' => 'NON_ENGLISH_LANG_OFFERED',
          'xpathparser:67' => 'TRANSLATION_SERVICES',
          'xpathparser:68' => 'ELECTRONIC_PRESCRIBING',
          'xpathparser:69' => 'PROVIDER_URL',
          'xpathparser:70' => 'PROVIDER_EMAIL',
          'xpathparser:71' => 'COUNTY',
          'xpathparser:72' => 'PROVIDER_LANGUAGE2',
          'xpathparser:73' => 'LATITUDE',
          'xpathparser:74' => 'LONGITUDE',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:4' => 0,
          'xpathparser:5' => 0,
          'xpathparser:6' => 0,
          'xpathparser:7' => 0,
          'xpathparser:8' => 0,
          'xpathparser:9' => 0,
          'xpathparser:10' => 0,
          'xpathparser:11' => 0,
          'xpathparser:12' => 0,
          'xpathparser:13' => 0,
          'xpathparser:14' => 0,
          'xpathparser:15' => 0,
          'xpathparser:16' => 0,
          'xpathparser:17' => 0,
          'xpathparser:18' => 0,
          'xpathparser:20' => 0,
          'xpathparser:21' => 0,
          'xpathparser:22' => 0,
          'xpathparser:23' => 0,
          'xpathparser:24' => 0,
          'xpathparser:25' => 0,
          'xpathparser:27' => 0,
          'xpathparser:28' => 0,
          'xpathparser:29' => 0,
          'xpathparser:30' => 0,
          'xpathparser:31' => 0,
          'xpathparser:32' => 0,
          'xpathparser:33' => 0,
          'xpathparser:34' => 0,
          'xpathparser:35' => 0,
          'xpathparser:36' => 0,
          'xpathparser:37' => 0,
          'xpathparser:38' => 0,
          'xpathparser:39' => 0,
          'xpathparser:40' => 0,
          'xpathparser:41' => 0,
          'xpathparser:42' => 0,
          'xpathparser:43' => 0,
          'xpathparser:44' => 0,
          'xpathparser:45' => 0,
          'xpathparser:46' => 0,
          'xpathparser:47' => 0,
          'xpathparser:48' => 0,
          'xpathparser:49' => 0,
          'xpathparser:50' => 0,
          'xpathparser:51' => 0,
          'xpathparser:52' => 0,
          'xpathparser:53' => 0,
          'xpathparser:54' => 0,
          'xpathparser:55' => 0,
          'xpathparser:56' => 0,
          'xpathparser:57' => 0,
          'xpathparser:58' => 0,
          'xpathparser:59' => 0,
          'xpathparser:60' => 0,
          'xpathparser:61' => 0,
          'xpathparser:62' => 0,
          'xpathparser:63' => 0,
          'xpathparser:64' => 0,
          'xpathparser:65' => 0,
          'xpathparser:66' => 0,
          'xpathparser:67' => 0,
          'xpathparser:68' => 0,
          'xpathparser:69' => 0,
          'xpathparser:70' => 0,
          'xpathparser:71' => 0,
          'xpathparser:72' => 0,
          'xpathparser:73' => 0,
          'xpathparser:74' => 0,
        ),
        'context' => '//DATA_RECORD',
        'exp' => array(
          'errors' => 0,
          'debug' => array(
            'context' => 0,
            'xpathparser:0' => 0,
            'xpathparser:1' => 0,
            'xpathparser:2' => 0,
            'xpathparser:3' => 0,
            'xpathparser:4' => 0,
            'xpathparser:5' => 0,
            'xpathparser:6' => 0,
            'xpathparser:7' => 0,
            'xpathparser:8' => 0,
            'xpathparser:9' => 0,
            'xpathparser:10' => 0,
            'xpathparser:11' => 0,
            'xpathparser:12' => 0,
            'xpathparser:13' => 0,
            'xpathparser:14' => 0,
            'xpathparser:15' => 0,
            'xpathparser:16' => 0,
            'xpathparser:17' => 0,
            'xpathparser:18' => 0,
            'xpathparser:20' => 0,
            'xpathparser:21' => 0,
            'xpathparser:22' => 0,
            'xpathparser:23' => 0,
            'xpathparser:24' => 0,
            'xpathparser:25' => 0,
            'xpathparser:27' => 0,
            'xpathparser:28' => 0,
            'xpathparser:29' => 0,
            'xpathparser:30' => 0,
            'xpathparser:31' => 0,
            'xpathparser:32' => 0,
            'xpathparser:33' => 0,
            'xpathparser:34' => 0,
            'xpathparser:35' => 0,
            'xpathparser:36' => 0,
            'xpathparser:37' => 0,
            'xpathparser:38' => 0,
            'xpathparser:39' => 0,
            'xpathparser:40' => 0,
            'xpathparser:41' => 0,
            'xpathparser:42' => 0,
            'xpathparser:43' => 0,
            'xpathparser:44' => 0,
            'xpathparser:45' => 0,
            'xpathparser:46' => 0,
            'xpathparser:47' => 0,
            'xpathparser:48' => 0,
            'xpathparser:49' => 0,
            'xpathparser:50' => 0,
            'xpathparser:51' => 0,
            'xpathparser:52' => 0,
            'xpathparser:53' => 0,
            'xpathparser:54' => 0,
            'xpathparser:55' => 0,
            'xpathparser:56' => 0,
            'xpathparser:57' => 0,
            'xpathparser:58' => 0,
            'xpathparser:59' => 0,
            'xpathparser:60' => 0,
            'xpathparser:61' => 0,
            'xpathparser:62' => 0,
            'xpathparser:63' => 0,
            'xpathparser:64' => 0,
            'xpathparser:65' => 0,
            'xpathparser:66' => 0,
            'xpathparser:67' => 0,
            'xpathparser:68' => 0,
            'xpathparser:69' => 0,
            'xpathparser:70' => 0,
            'xpathparser:71' => 0,
            'xpathparser:72' => 0,
            'xpathparser:73' => 0,
            'xpathparser:74' => 0,
          ),
        ),
        'allow_override' => 1,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '3600',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'field_provider_type',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          1 => array(
            'source' => 'xpathparser:1',
            'target' => 'field_specialty1',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          2 => array(
            'source' => 'xpathparser:2',
            'target' => 'field_specialty1',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          3 => array(
            'source' => 'xpathparser:3',
            'target' => 'field_specialty1',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          4 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_practe_office_providerid',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:5',
            'target' => 'field_last_name',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_first_name',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'xpathparser:7',
            'target' => 'field_middle_initial',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'xpathparser:8',
            'target' => 'field_degree',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          9 => array(
            'source' => 'xpathparser:9',
            'target' => 'field_hospital_priv',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          10 => array(
            'source' => 'xpathparser:10',
            'target' => 'field_hospital_priv',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          11 => array(
            'source' => 'xpathparser:11',
            'target' => 'field_hospital_priv',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          12 => array(
            'source' => 'xpathparser:12',
            'target' => 'field_hospital_priv',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          13 => array(
            'source' => 'xpathparser:13',
            'target' => 'field_practice_name',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'xpathparser:14',
            'target' => 'field_address_1',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'xpathparser:15',
            'target' => 'field_address_2',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'xpathparser:16',
            'target' => 'field_city',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'xpathparser:17',
            'target' => 'field_state',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'xpathparser:18',
            'target' => 'field_zip',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'xpathparser:20',
            'target' => 'field_phone',
            'unique' => FALSE,
          ),
          20 => array(
            'source' => 'xpathparser:21',
            'target' => 'field_handicap_access',
            'unique' => FALSE,
          ),
          21 => array(
            'source' => 'xpathparser:22',
            'target' => 'field_panel_status',
            'unique' => FALSE,
          ),
          22 => array(
            'source' => 'xpathparser:23',
            'target' => 'field_after_hours_tel',
            'unique' => FALSE,
          ),
          23 => array(
            'source' => 'xpathparser:24',
            'target' => 'field_board_certified',
            'unique' => FALSE,
          ),
          24 => array(
            'source' => 'xpathparser:25',
            'target' => 'field_provider_lang',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          25 => array(
            'source' => 'xpathparser:27',
            'target' => 'field_provider_lang',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          26 => array(
            'source' => 'xpathparser:28',
            'target' => 'field_provider_lang',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          27 => array(
            'source' => 'xpathparser:29',
            'target' => 'field_provider_lang',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          28 => array(
            'source' => 'xpathparser:30',
            'target' => 'field_provider_lang',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          29 => array(
            'source' => 'xpathparser:31',
            'target' => 'field_provider_lang',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          30 => array(
            'source' => 'xpathparser:32',
            'target' => 'field_provider_lang',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          31 => array(
            'source' => 'xpathparser:33',
            'target' => 'field_provider_lang',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          32 => array(
            'source' => 'xpathparser:34',
            'target' => 'field_provider_lang',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          33 => array(
            'source' => 'xpathparser:35',
            'target' => 'field_provider_lang',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          34 => array(
            'source' => 'xpathparser:36',
            'target' => 'field_provider_lang',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          35 => array(
            'source' => 'xpathparser:37',
            'target' => 'field_provider_lang',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          36 => array(
            'source' => 'xpathparser:38',
            'target' => 'field_provider_lang',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          37 => array(
            'source' => 'xpathparser:39',
            'target' => 'field_provider_lang',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          38 => array(
            'source' => 'xpathparser:40',
            'target' => 'field_provider_lang',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          39 => array(
            'source' => 'xpathparser:41',
            'target' => 'field_provider_lang',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          40 => array(
            'source' => 'xpathparser:42',
            'target' => 'field_provider_lang',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          41 => array(
            'source' => 'xpathparser:43',
            'target' => 'field_provider_lang',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          42 => array(
            'source' => 'xpathparser:44',
            'target' => 'field_provider_lang',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          43 => array(
            'source' => 'xpathparser:45',
            'target' => 'field_home_visits',
            'unique' => FALSE,
          ),
          44 => array(
            'source' => 'xpathparser:46',
            'target' => 'field_line_of_business',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          45 => array(
            'source' => 'xpathparser:47',
            'target' => 'field_npi',
            'unique' => FALSE,
          ),
          46 => array(
            'source' => 'xpathparser:48',
            'target' => 'field_provider_id',
            'unique' => FALSE,
          ),
          47 => array(
            'source' => 'xpathparser:49',
            'target' => 'field_fax_number',
            'unique' => FALSE,
          ),
          48 => array(
            'source' => 'xpathparser:50',
            'target' => 'field_service_area',
            'unique' => FALSE,
          ),
          49 => array(
            'source' => 'xpathparser:51',
            'target' => 'field_office_hours',
            'unique' => FALSE,
          ),
          50 => array(
            'source' => 'xpathparser:52',
            'target' => 'field_license_info',
            'unique' => FALSE,
          ),
          51 => array(
            'source' => 'xpathparser:53',
            'target' => 'field_public_transportation_acce',
            'unique' => FALSE,
          ),
          52 => array(
            'source' => 'xpathparser:54',
            'target' => 'field_ada_accesibility',
            'unique' => FALSE,
          ),
          53 => array(
            'source' => 'xpathparser:55',
            'target' => 'field_experience',
            'unique' => FALSE,
          ),
          54 => array(
            'source' => 'xpathparser:56',
            'target' => 'field_physically_disabled',
            'unique' => FALSE,
          ),
          55 => array(
            'source' => 'xpathparser:57',
            'target' => 'field_chronic_illness',
            'unique' => FALSE,
          ),
          56 => array(
            'source' => 'xpathparser:58',
            'target' => 'field_mentall_illness',
            'unique' => FALSE,
          ),
          57 => array(
            'source' => 'xpathparser:59',
            'target' => 'field_hearing_visually_impaired',
            'unique' => FALSE,
          ),
          58 => array(
            'source' => 'xpathparser:60',
            'target' => 'field_coocurring_disorders',
            'unique' => FALSE,
          ),
          59 => array(
            'source' => 'xpathparser:61',
            'target' => 'field_end_stage_renal_disorders',
            'unique' => FALSE,
          ),
          60 => array(
            'source' => 'xpathparser:62',
            'target' => 'field_aids_center',
            'unique' => FALSE,
          ),
          61 => array(
            'source' => 'xpathparser:63',
            'target' => 'field_community_center',
            'unique' => FALSE,
          ),
          62 => array(
            'source' => 'xpathparser:64',
            'target' => 'field_private_practice_offices',
            'unique' => FALSE,
          ),
          63 => array(
            'source' => 'xpathparser:65',
            'target' => 'field_non_dac_hospital',
            'unique' => FALSE,
          ),
          64 => array(
            'source' => 'xpathparser:66',
            'target' => 'field_non_english_lang_offerred',
            'unique' => FALSE,
          ),
          65 => array(
            'source' => 'xpathparser:67',
            'target' => 'field_translation_services',
            'unique' => FALSE,
          ),
          66 => array(
            'source' => 'xpathparser:68',
            'target' => 'field_electronic_prescribing',
            'unique' => FALSE,
          ),
          67 => array(
            'source' => 'xpathparser:69',
            'target' => 'field_provider_url',
            'unique' => FALSE,
          ),
          68 => array(
            'source' => 'xpathparser:70',
            'target' => 'field_provider_email',
            'unique' => FALSE,
          ),
          69 => array(
            'source' => 'xpathparser:71',
            'target' => 'field_county',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          70 => array(
            'source' => 'xpathparser:72',
            'target' => 'field_provider_lang',
            'unique' => FALSE,
          ),
          71 => array(
            'source' => 'xpathparser:73',
            'target' => 'field_latitude',
            'unique' => FALSE,
          ),
          72 => array(
            'source' => 'xpathparser:74',
            'target' => 'field_longitude',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'provider',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '0',
    'expire_period' => 3600,
    'import_on_create' => 0,
    'process_in_background' => 1,
  );
  $export['vnsny'] = $feeds_importer;

  return $export;
}
