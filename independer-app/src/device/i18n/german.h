void i18n_display_lang()
{
    Serial.println("Set to language: German");
}

// Global

const String I18N_ERROR_TITLE = "Fehler";
const String I18N_HINT_TITLE = "Hinweis";
const String I18N_INFO_TITLE = "Info";
const String I18N_WARNING_TITLE = "Warnung";
const String I18N_ANS_TITLE = "Antwort";
const String I18N_MENU_GO_BACK = "[zurück]";
const String I18N_MENU_ABORT = "[abbrechen]";

const String I18N_REWRITE_BOOL_ACTIV = "Aktiv";
const String I18N_REWRITE_BOOL_INACTIV = "Inaktiv";

const String I18N_APPLICATION_FROM = "'\nvon '";
const String I18N_APPLICATION_RS = "'\nRS=";
const String I18N_APPLICATION_PK = " PK=";

const String I18N_BOOT_DEV_ACTIVE = "Entwickler Modus\naktiv";

const String I18N_DIALOG_YES = "Ja";
const String I18N_DIALOG_NO = "Nein";
const String I18N_DIALOG_AGAIN = "[nochmal lesen]";

const String I18N_NOT_RG_ALERT = "Für diese Funktion muss dein Independer registriert sein. Besuche für mehr Infos " + TEMPLATE_WEBSITE_URL;

// Actor

const String I18N_ACTOR_MAIN_MENU_TITLE = "Independer";
const String I18N_ACTOR_MAIN_MENU_COMMUNICATIONS = "Kommunikation";
const String I18N_ACTOR_MAIN_MENU_ACTOR_FUNCTIONS = "Aktor Funktionen";
const String I18N_ACTOR_MAIN_MENU_GATEWAY_FUNCTIONS = "Gateway Funktionen";
const String I18N_ACTOR_MAIN_MENU_SETTINGS = "Einstellungen";
const String I18N_ACTOR_MAIN_MENU_INFO = "Info";
const String I18N_ACTOR_MAIN_MENU_ERR = "Auswahl nicht verfügbar.";

const String I18N_ACTOR_MAIN_MENU_INFO_PREFIX = "Info";
const String I18N_ACTOR_MAIN_MENU_INFO_VERSION = "Version: ";
const String I18N_ACTOR_MAIN_MENU_INFO_ACTOR_MODE = "Aktor Modus: ";
const String I18N_ACTOR_MAIN_MENU_INFO_BRIGHTNESS = "Helligkeit: ";
const String I18N_ACTOR_MAIN_MENU_INFO_BACKGROUND_SYNC = "Hintergrundempfang: ";
const String I18N_ACTOR_MAIN_MENU_INFO_TIME = "Zeit:\n";
const String I18N_ACTOR_MAIN_MENU_INFO_REG = "Registriert: ";
const String I18N_ACTOR_MAIN_MENU_INFO_BAND = "\nFrequenz: ";
const String I18N_ACTOR_MAIN_MENU_INFO_ID = "\nID: ";
const String I18N_ACTOR_MAIN_MENU_INFO_GID = "\nGateway ID: ";
const String I18N_ACTOR_MAIN_MENU_INFO_DEVELOPER = "\nEntwickler: ";
const String I18N_ACTOR_MAIN_MENU_INFO_LORA_GAIN = "\nLoRa Gain: ";
const String I18N_ACTOR_MAIN_MENU_INFO_WIFI = "\nWIFI: ";
const String I18N_ACTOR_MAIN_MENU_INFO_WIFI_T = "\nWIFI Timeout: ";
const String I18N_ACTOR_MAIN_MENU_INFO_AUTO_SLP = "\nAuto Schlaf: ";
const String I18N_ACTOR_MAIN_MENU_INFO_BATTERY = "\nBatterie: ";
const String I18N_ACTOR_MAIN_MENU_INFO_BATTERY_U = "mV";

const String I18N_ACTOR_SETTINGS_MENU_TITLE = "Einstellungen";
const String I18N_ACTOR_SETTINGS_MENU_GID = "Gateway ID";
const String I18N_ACTOR_SETTINGS_MENU_LORA_GAIN = "LoRa Gain";
const String I18N_ACTOR_SETTINGS_MENU_BRI = "Helligkeit";
const String I18N_ACTOR_SETTINGS_MENU_BACKGROUND_SYNC = "Hintergrundempfang";
const String I18N_ACTOR_SETTINGS_MENU_AUTO_SLP = "Auto Schlaf";
const String I18N_ACTOR_SETTINGS_MENU_WIFI = "WIFI";
const String I18N_ACTOR_SETTINGS_MENU_SERVER = "Server";
const String I18N_ACTOR_SETTINGS_MENU_RESET = "Werkseinstellungen";
const String I18N_ACTOR_SETTINGS_MENU_RESET_Q = "Möchten Sie wirklich alles zurücksetzen?";
const String I18N_ACTOR_SETTINGS_MENU_TIME = "Zeit";
const String I18N_ACTOR_SETTINGS_MENU_ERR_INV_ID = "Ungültige ID";

const String I18N_ACTOR_SETTINGS_MENU_TIME_SYNC_SHOW = "Zeit sync/anzeigen";
const String I18N_ACTOR_SETTINGS_MENU_TIME_SHOW = "Zeit anzeigen";
const String I18N_ACTOR_SETTINGS_MENU_TIME_S_NOW = "Frage Zeit\nab ...";
const String I18N_ACTOR_SETTINGS_MENU_TIME_S_RES = "Empfangen\n'";
const String I18N_ACTOR_SETTINGS_MENU_TIME_S_LOC = "Lokal\n'";

const String I18N_ACTOR_SETTINGS_MENU_SERVER_TIMEOUT = "Timeout";
const String I18N_ACTOR_SETTINGS_MENU_SERVER_TIMEOUT_EX = "Timeout (z.B. 5000)";

const String I18N_ACTOR_SETTINGS_MENU_WIFI_AUTOMATIC = "Automatisch";
const String I18N_ACTOR_SETTINGS_MENU_WIFI_TEST = "Testen";
const String I18N_ACTOR_SETTINGS_MENU_WIFI_MAN_SSID = "(Manuell) SSID";
const String I18N_ACTOR_SETTINGS_MENU_WIFI_MAN_PW = "(Manuell) Passwort";
const String I18N_ACTOR_SETTINGS_MENU_WIFI_TEST_WIFI = "Teste WIFI\n'";
const String I18N_ACTOR_SETTINGS_MENU_WIFI_TEST_WIFI_OK = "WIFI\nOk";
const String I18N_ACTOR_SETTINGS_MENU_WIFI_TEST_WIFI_ERR = "WIFI\nFehler";
const String I18N_ACTOR_SETTINGS_MENU_WIFI_SSID_TITLE = "SSID";
const String I18N_ACTOR_SETTINGS_MENU_WIFI_PW_TITLE = "Passwort";

const String I18N_ACTOR_SETTINGS_MENU_AUTO_SLP_ST = "Status";
const String I18N_ACTOR_SETTINGS_MENU_AUTO_SLP_ACT = "Aktivieren";
const String I18N_ACTOR_SETTINGS_MENU_AUTO_SLP_DEACT = "Deaktivieren";
const String I18N_ACTOR_SETTINGS_MENU_AUTO_SLP_ST_EX = "Status Auto Schlaf\n";
const String I18N_ACTOR_SETTINGS_MENU_AUTO_SLP_ST_EX_AC = "Aktiviere\nAuto Schlaf";
const String I18N_ACTOR_SETTINGS_MENU_AUTO_SLP_ST_EX_DEAC = "Deaktiviere\nAuto Schlaf";

const String I18N_ACTOR_SETTINGS_MENU_BACKGROUND_SYNC_ST = "Status";
const String I18N_ACTOR_SETTINGS_MENU_BACKGROUND_SYNC_ACT = "Aktivieren";
const String I18N_ACTOR_SETTINGS_MENU_BACKGROUND_SYNC_DEACT = "Deaktivieren";
const String I18N_ACTOR_SETTINGS_MENU_BACKGROUND_SYNC_ST_EX = "Status Hintergrundempfang\n";
const String I18N_ACTOR_SETTINGS_MENU_BACKGROUND_SYNC_ST_EX_AC = "Aktiviere\nHintergrundempfang";
const String I18N_ACTOR_SETTINGS_MENU_BACKGROUND_SYNC_ST_EX_DEAC = "Deaktiviere\nHintergrundempfang";

const String I18N_ACTOR_GATEWAY_FUNCTIONS_SLEEP_MODE = "Schlaf Modus";
const String I18N_ACTOR_GATEWAY_FUNCTIONS_UPDATE = "Update";
const String I18N_ACTOR_GATEWAY_FUNCTIONS_INIT = "Einrichtung";
const String I18N_ACTOR_GATEWAY_FUNCTIONS_RESET = "Werkseinstellungen";
const String I18N_ACTOR_GATEWAY_FUNCTIONS_Q = "Möchten Sie diese Aktion wirklich durchführen? Das Gateway muss danach manuell wieder angeschalten werden.";
const String I18N_ACTOR_GATEWAY_FUNCTIONS_IQ = "Möchten Sie diese Aktion wirklich durchführen? Das Gateway muss danach manuell wieder eingerichtet werden.";
const String I18N_ACTOR_GATEWAY_FUNCTIONS_FUN_SLP = "Aktiviere Schlafmodus\n(Gateway)";
const String I18N_ACTOR_GATEWAY_FUNCTIONS_FUN_UPD = "Aktiviere Update Modus\n(Gateway)";
const String I18N_ACTOR_GATEWAY_FUNCTIONS_FUN_S_SHOWED_ID = "Angezeigte ID (z.B.: 0g01)";
const String I18N_ACTOR_GATEWAY_FUNCTIONS_FUN_S_G_ID = "Gateway ID (z.B.: 0g01)";
const String I18N_ACTOR_GATEWAY_FUNCTIONS_ST_CHECK_ID = "Prüfe ID";
const String I18N_ACTOR_GATEWAY_FUNCTIONS_ST_SEND_CONFIG = "Sende Konfiguration";
const String I18N_ACTOR_GATEWAY_FUNCTIONS_ERR_NOT_OWNED = "Ungültige ID\n(nicht registriert)";
const String I18N_ACTOR_GATEWAY_FUNCTIONS_ERR_NO_VALID_ID = "Ungültige ID";
const String I18N_ACTOR_GATEWAY_FUNCTIONS_FUN_RESET = "Werkseinstellungen\n(Gateway)";

const String I18N_ACTOR_ACTOR_FUNCTIONS_STATE_MENU = "Status Menü";
const String I18N_ACTOR_ACTOR_FUNCTIONS_TEST_MENU = "Test Menü";
const String I18N_ACTOR_ACTOR_FUNCTIONS_STANDBY = "Bildschirm aus";
const String I18N_ACTOR_ACTOR_FUNCTIONS_SLP_MODE = "Schlaf Modus";
const String I18N_ACTOR_ACTOR_FUNCTIONS_ENV_SCAN = "Umgebungs Scan";
const String I18N_ACTOR_ACTOR_FUNCTIONS_SYNC = "Auto Sync (manuell)";
const String I18N_ACTOR_ACTOR_FUNCTIONS_UPD = "Update";
const String I18N_ACTOR_ACTOR_FUNCTIONS_FUN_ACT_SLP = "Aktiviere Schlafmodus\n(Aktor)";
const String I18N_ACTOR_ACTOR_FUNCTIONS_SYNC_ERR_NO_DATA = "Keine Daten";

const String I18N_ACTOR_ACTOR_FUNCTIONS_TEST_MENU_REACH_CH = "Erreichbar Check";
const String I18N_ACTOR_ACTOR_FUNCTIONS_TEST_MENU_TEST_OUT = "Test Ausgabe";
const String I18N_ACTOR_ACTOR_FUNCTIONS_TEST_MENU_TEST_SHARE = "Test Datenaustausch";
const String I18N_ACTOR_ACTOR_FUNCTIONS_TEST_MENU_RES_ID = "Empfänger (z.B.: 0x01)";
const String I18N_ACTOR_ACTOR_FUNCTIONS_TEST_MENU_ERR_INVALID_RES = "Ungültiger Empfänger";

const String I18N_ACTOR_ACTOR_FUNCTIONS_STATE_MENU_BAT_ST = "Batterie Status";
const String I18N_ACTOR_ACTOR_FUNCTIONS_STATE_MENU_SEND_QT = "Sendekontingent";
const String I18N_ACTOR_ACTOR_FUNCTIONS_STATE_MENU_EX_BAT_ST = "Batterie Status (mV)";
const String I18N_ACTOR_ACTOR_FUNCTIONS_STATE_MENU_EX_SEND_QT = "Sendekontingent (millis)";

const String I18N_ACTOR_COMMUNICATIONS_LETTER = "Briefe (Gateway)";
const String I18N_ACTOR_COMMUNICATIONS_LETTER_SHORT = "Briefe";
const String I18N_ACTOR_COMMUNICATIONS_MSGS = "Nachrichten (Aktor)";
const String I18N_ACTOR_COMMUNICATIONS_MSGS_SHORT = "Nachrichten";
const String I18N_ACTOR_COMMUNICATIONS_CHAT = "Chat (Internet)";
const String I18N_ACTOR_COMMUNICATIONS_CHAT_SHORT = "Chat";
const String I18N_ACTOR_COMMUNICATIONS_CONTACT_BOOK = "Kontakte";
const String I18N_ACTOR_COMMUNICATIONS_ERR_NOT_IMPL = "Leider ist die Funktion\nnoch nicht verfügbar.";

const String I18N_ACTOR_COMMUNICATIONS_CHAT_WRITE = "Nachricht schreiben";
const String I18N_ACTOR_COMMUNICATIONS_CHAT_GET = "Chat abrufen";
const String I18N_ACTOR_COMMUNICATIONS_CHAT_CLEAN = "Chat leeren";
const String I18N_ACTOR_COMMUNICATIONS_CHAT_RES = "Empfänger (z.B.: 0x01)";
const String I18N_ACTOR_COMMUNICATIONS_CHAT_CON = "Inhalt";
const String I18N_ACTOR_COMMUNICATIONS_CHAT_ST_SEND_MSG = "Nachricht wird\ngesendet";
const String I18N_ACTOR_COMMUNICATIONS_CHAT_ST_SENT_MSG = "Nachricht gesendet";
const String I18N_ACTOR_COMMUNICATIONS_CHAT_ERR_SEND_MSG = "Nachricht konnte\nnicht versendet werden";
const String I18N_ACTOR_COMMUNICATIONS_CHAT_ERR_INVAL_RES = "Ungültiger Empfänger";
const String I18N_ACTOR_COMMUNICATIONS_CHAT_CLEAN_FUN_NOW = "Chat wird\ngelöscht...";
const String I18N_ACTOR_COMMUNICATIONS_CHAT_CLEAN_FUN_CLEANED = "Chat wurde\ngelöscht.";
const String I18N_ACTOR_COMMUNICATIONS_CHAT_CLEAN_FUN_ERR = "Chat konnte nicht\ngelöscht werden.";

const String I18N_ACTOR_COMMUNICATIONS_MSGS_WRITE = "Nachricht schreiben";
const String I18N_ACTOR_COMMUNICATIONS_MSGS_READ = "Nachricht lesen";
const String I18N_ACTOR_COMMUNICATIONS_MSGS_CLEAN = "Nachricht leeren";
const String I18N_ACTOR_COMMUNICATIONS_MSGS_RESCUE_MENU = "Rettungsmenü";
const String I18N_ACTOR_COMMUNICATIONS_MSGS_RES = "Empfänger (z.B.: 0x01)";
const String I18N_ACTOR_COMMUNICATIONS_MSGS_CON = "Nachricht";
const String I18N_ACTOR_COMMUNICATIONS_MSGS_ERR_INV_RES = "Ungültiger Empfänger";
const String I18N_ACTOR_COMMUNICATIONS_MSGS_RESCUE_MENU_SEND_AGAIN = "Erneut senden";
const String I18N_ACTOR_COMMUNICATIONS_MSGS_RESCUE_MENU_CLEAN_MEM = "Speicher löschen";
const String I18N_ACTOR_COMMUNICATIONS_MSGS_RESCUE_MENU_ERR_NO_MSG = "Keine Nachrichten\ngespeichert";
const String I18N_ACTOR_COMMUNICATIONS_MSGS_RESCUE_MENU_CLEAN_NOW = "Nachrichten werden\ngelöscht";

const String I18N_ACTOR_COMMUNICATIONS_LETTER_WRITE = "Brief schreiben";
const String I18N_ACTOR_COMMUNICATIONS_LETTER_GET = "Briefe abrufen";
const String I18N_ACTOR_COMMUNICATIONS_LETTER_CLEAN = "Briefe leeren";
const String I18N_ACTOR_COMMUNICATIONS_LETTER_RESCUE_MENU = "Rettungsmenü";
const String I18N_ACTOR_COMMUNICATIONS_LETTER_RES = "Empfänger (z.B.: 0x01)";
const String I18N_ACTOR_COMMUNICATIONS_LETTER_CON = "Brief";
const String I18N_ACTOR_COMMUNICATIONS_LETTER_ERR_INV_RES = "Ungültiger Empfänger";
const String I18N_ACTOR_COMMUNICATIONS_LETTER_FUN_CLEAN = "Leere Briefe\n(Gateway)";
const String I18N_ACTOR_COMMUNICATIONS_LETTER_RESCUE_MENU_SEND_AGAIN = "Erneut senden";
const String I18N_ACTOR_COMMUNICATIONS_LETTER_RESCUE_MENU_CLEAN = "Speicher löschen";
const String I18N_ACTOR_COMMUNICATIONS_LETTER_ERR_NO_LETTERS = "Keine Briefe\ngespeichert";
const String I18N_ACTOR_COMMUNICATIONS_LETTER_FUN_CLEAN_NOW = "Briefe werden\ngelöscht";

const String I18N_ACTOR_AUTO_SYNC_BOOT_TITLE = "Auto Sync";
const String I18N_ACTOR_MULTI_ACTOR_NO_MSG_AVA = "keine Nachrichten\nvorhanden";
const String I18N_ACTOR_MULTI_ACTOR_TITLE = "Nachrichten";
const String I18N_ACTOR_MULTI_ACTOR_MSG = "Nachricht";
const String I18N_ACTOR_MULTI_ACTOR_CLEAN_MSG = "Leere Nachrichten";

const String I18N_ACTOR_APP_ENV_SCAN = "Umgebungs Scan";
const String I18N_ACTOR_APP_ENV_SCAN_RS = "' RS=";
const String I18N_ACTOR_APP_ENV_SCAN_OUTPUT_T = "Scan Ausgabe";
const String I18N_ACTOR_APP_ENV_SCAN_DETAIL_T = "Scan Detail";

const String I18N_ACTOR_APP_REACH_CH_ATTEMPT = "Erreichbar Check Versuch";
const String I18N_ACTOR_APP_REACH_ERR_NO_RES = "keine Antwort\nerhalten";

const String I18N_ACTOR_APP_SEND_TO_GATEWAY_ERR_GA_NOT_REACH = "Gateway ist\nnicht erreichbar";
const String I18N_ACTOR_APP_SEND_TO_GATEWAY_SEND_ATT = "Sende Versuch";
const String I18N_ACTOR_APP_SEND_TO_GATEWAY_SEND_SUC = "Brief wurde\ngesendet";
const String I18N_ACTOR_APP_SEND_TO_GATEWAY_SEND_ERR = "Brief konnte\nnicht gesendet werden";

const String I18N_ACTOR_APP_QUERY_GATEWAY_ATT = "Versuch";
const String I18N_ACTOR_APP_QUERY_GATEWAY_LETTERS = "Briefe";
const String I18N_ACTOR_APP_QUERY_GATEWAY_LETTER = "Brief";
const String I18N_ACTOR_APP_QUERY_GATEWAY_ER_NO_LETTER = "keine Briefe\nvorhanden";
const String I18N_ACTOR_APP_QUERY_GATEWAY_ER_NO_RES = "Briefe konnten\nnicht empfangen werden";

const String I18N_ACTOR_APP_SEND_TO_ACTOR_ATT = "Sende Versuch";
const String I18N_ACTOR_APP_SEND_TO_ACTOR_SEND_SUC = "Nachricht wurde\ngesendet";
const String I18N_ACTOR_APP_SEND_TO_ACTOR_SEND_ERR = "Nachricht konnte\nnicht gesendet werden";

const String I18N_ACTOR_APP_LARGE_DATA_MSG = "Nachricht";

const String I18N_ACTOR_APP_QUERY_INTERNET_GET_MSG = "Nachrichten werden\nabgerufen";
const String I18N_ACTOR_APP_QUERY_INTERNET_CHATS = "Chats";
const String I18N_ACTOR_APP_QUERY_INTERNET_CHAT = "Chat";
const String I18N_ACTOR_APP_QUERY_INTERNET_GET_NO_MSGS = "Keine Nachrichten\nvorhanden";
const String I18N_ACTOR_APP_QUERY_INTERNET_GET_ERR = "Chat konnte nicht\nabgerufen werden";

const String I18N_ACTOR_APP_AUTO_WIFI_SCAN_NOW = "Scanne...";
const String I18N_ACTOR_APP_AUTO_WIFI_SSIDS = "SSIDs";
const String I18N_ACTOR_APP_AUTO_WIFI_PW = "Passwort";
const String I18N_ACTOR_APP_AUTO_WIFI_SAVED = "Einstellungen\ngespeichert";
const String I18N_ACTOR_APP_AUTO_WIFI_NO_NETWORKS = "Keine Netzwerke\ngefunden";

// Gateway

const String I18N_GATEWAY_MENU_TITLE = "Independer Gateway";

const String I18N_GATEWAY_MENU_PACKETS = "Pakete: ";
const String I18N_GATEWAY_MENU_MSGS = " Nachrichten: ";
const String I18N_GATEWAY_MENU_DB_ITEMS = "\nDatenbank Einträge: ";

// Device

const String I18N_DEVICE_WIFI_AUTO_SYNC_PROC_NEW_UPDATE = "Neues Update verfügbar (";
const String I18N_DEVICE_WIFI_AUTO_SYNC_PROC_NEW_CHAT_MSGS = "Neue Chat Nachrichten verfügbar (";
const String I18N_DEVICE_WIFI_AUTO_SYNC_PROC_STATUS_MSG = "Status Nachricht: [";

const String I18N_DEVICE_WIFI_AUTO_SYNC_TITLE = "Auto Sync";
const String I18N_DEVICE_WIFI_AUTO_SYNC_NOW = "Gleiche Daten ab\n...";

const String I18N_DEVICE_UTILS_THX = "Danke, dass du dich\nfür den Independer\nentschieden hast!";

const String I18N_DEVICE_OTA_CONN_WITH = "Verbindet mit\n'";
const String I18N_DEVICE_OTA_UPDATE_TITLE = "Update";
const String I18N_DEVICE_OTA_BROWSER_GO = "Gehe im Browser auf\n'";

const String I18N_DEVICE_LORA_SEND_TITLE = "Senden";
const String I18N_DEVICE_LORA_RES_TITLE = "Empfangen";

const String I18N_DEVICE_GUI_ACTOR = " Aktor\n";
const String I18N_DEVICE_GUI_GATEWAY = " Gateway\n";
const String I18N_DEVICE_GUI_BY = " von ";
const String I18N_DEVICE_GUI_ENTER_OK = "[Enter] Ok";

const String I18N_DEVICE_DB_INIT_TITLE = "Independer";
const String I18N_DEVICE_DB_INIT_SUB_TITLE = "Einrichtungsmodus";
const String I18N_DEVICE_DB_INIT_DESC = "Nach dem Update oder beim ersten Starten muss der Independer konfiguriert werden. Dabei hilft dir der Konfigurationsassistent.";

const String I18N_DEVICE_DB_INIT_REG_TITLE = "Registriert?";
const String I18N_DEVICE_DB_INIT_REG_DESC = "Bist du breits registriert? Für einige Funktionen wie Online-Chat, Update-Check, WIFI, NTP-Zeit-Sync und für die Nutzung von Gateways muss der Independer registriert sein. Wenn Du nicht registriert bist, ist es nur möglich, mit anderen unregistrierten Independern zu kommunizieren. Besuche für mehr Infos " + TEMPLATE_WEBSITE_URL;

const String I18N_DEVICE_DB_INIT_WIFI_TITLE = "WIFI";
const String I18N_DEVICE_DB_INIT_WIFI_AUTO = "Automatisch";
const String I18N_DEVICE_DB_INIT_WIFI_MAN_SSID = "(Manuell) SSID";
const String I18N_DEVICE_DB_INIT_WIFI_MAN_PW = "(Manuell) Passwort";
const String I18N_DEVICE_DB_INIT_WIFI_OK = "[Bestätigen]";
const String I18N_DEVICE_DB_INIT_WIFI_OFF = "[Ausschalten]";
const String I18N_DEVICE_DB_INIT_WIFI_FUN_TEST = "Teste WIFI\n'";
const String I18N_DEVICE_DB_INIT_WIFI_ERR = "WIFI\nFehler";
const String I18N_DEVICE_DB_INIT_WIFI_SSID = "SSID";
const String I18N_DEVICE_DB_INIT_WIFI_PW = "Passwort";

const String I18N_DEVICE_DB_INIT_IACTOR_MY_ID = "Meine ID (z.B.: 0x01)";
const String I18N_DEVICE_DB_INIT_IACTOR_MY_PW = "Independer Passwort";
const String I18N_DEVICE_DB_INIT_IACTOR_FUN_CHECK_LOGIN = "Prüfe Anmeldung\nID\n'";
const String I18N_DEVICE_DB_INIT_IACTOR_FUN_GID = "Gateway ID (z.B.: 0g01)";
const String I18N_DEVICE_DB_INIT_IACTOR_ERR_INV_ID = "Ungültige ID";
const String I18N_DEVICE_DB_INIT_IACTOR_ERR_NO_L = "ID konnte nicht\nangemeldet werden.";
const String I18N_DEVICE_DB_INIT_IACTOR_SUC = "Einrichtung\nabgeschlossen!";

const String I18N_DEVICE_DB_INIT_IGAT_TITLE = "Einrichtungsmodus";
const String I18N_DEVICE_DB_INIT_IGAT_DESC = "Auf dem Aktor:\nG. Funktionen->Einrichtung\nID: '";
const String I18N_DEVICE_DB_INIT_IGAT_SUC = "Einrichtung\nabgeschlossen!";