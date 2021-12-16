#ifndef DIYBMSWebServer_Json_Post_H_
#define DIYBMSWebServer_Json_Post_H_

//#include <stdio.h>
//#include <esp_http_server.h>
//#include <WiFi.h>

#include "settings.h"
//#include "FS.h"
//#include <LITTLEFS.h>
//#include "SD.h"
//#include <SPIFFS.h>
//#include "time.h"
//#include "defines.h"
//#include "Rules.h"
//#include "settings.h"
//#include "ArduinoJson.h"
#include "PacketRequestGenerator.h"
//#include "PacketReceiveProcessor.h"
//#include "EmbeddedFiles_AutoGenerated.h"
//#include "EmbeddedFiles_Integrity.h"
//#include "HAL_ESP32.h"

esp_err_t post_savebankconfig_json_handler(httpd_req_t *req);
esp_err_t post_saventp_json_handler(httpd_req_t *req);
esp_err_t post_saveglobalsetting_json_handler(httpd_req_t *req);
esp_err_t post_savemqtt_json_handler(httpd_req_t *req);
esp_err_t post_saveinfluxdbsetting_json_handler(httpd_req_t *req);

extern diybms_eeprom_settings *_mysettings;
extern PacketRequestGenerator *_prg;

#endif
