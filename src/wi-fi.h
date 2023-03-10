// This framework originaly based on JeeUI2 lib used under MIT License Copyright (c) 2019 Marsel Akhkamov
// then re-written and named by (c) 2020 Anton Zolotarev (obliterator) (https://github.com/anton-zolotarev)
// also many thanks to Vortigont (https://github.com/vortigont), kDn (https://github.com/DmytroKorniienko)
// and others people

#ifndef _EMBUI_WIFI_H
#define _EMBUI_WIFI_H

#ifdef ESP8266
 #include <ESP8266WiFi.h>
#endif

#ifdef ESP32
 #include <WiFi.h>
#endif

#define EMBUI_WIFI_CONNECT_TIMEOUT    7       // timer for esp8266 STA connection attempt (depricated)
#define EMBUI_WIFI_RECONNECT_TIMER    30      // timer for esp8266, STA connect retry
#define EMBUI_WIFI_BEGIN_DELAY        3       // scheduled delay for STA begin() connection

#define EMBUI_WIFI_PSK_MIN_LENGTH     8

#endif