/**
 * @file pages.c
 * @author Beat Sturzenegger
 * @brief 
 * @version 1.1
 * @date 14.02.2022
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/********************************************************************************************
*** Includes
********************************************************************************************/
#include "pages.h"

/********************************************************************************************
*** Variables
********************************************************************************************/
/// The pages can be preset here 
page_t pages_array[] = 
{
// Page 0
  {
    "Testseite",  
    { 
      //Name            | Typ     | Wert    | Textwert/Einheit  | Einstellung
      { "Textausgabe",    TEXT,     0,        "HELLO",            DEFAULT},           // Line 0
      { "Bargraph",       BAR,      50,       "",                 BAR_SHOW_VALUE},    // Line 1
      { "Zahlausgabe",    NUMERIC,  50,       "",                 DECIMAL_PLACES_1},  // Line 2
      { "Prozent",        NUMERIC,  24,       "%",                DEFAULT},           // Line 3
      { "Zeit",           TIME,     221645,   "",                 TIME_HH_MM},        // Line 4
      { "RSSI",           NUMERIC,  0,        "dB",               DEFAULT}            // Line 5
    }
  },
// Page 1
  {
    "Fenster",  
    { 
      //Name            | Typ     | Wert    | Textwert/Einheit  | Einstellung
      { "Fenster",        TEXT,     0,        "offen",                 DEFAULT},           // Line 0
      { "Zustand",        TEXT,     0,        "GUT",              DEFAULT},           // Line 1
    }
  },
// Page 2
  {
    "NULL"
  }
};
