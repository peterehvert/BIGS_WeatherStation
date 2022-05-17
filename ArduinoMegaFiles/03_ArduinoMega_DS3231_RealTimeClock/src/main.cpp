/*
* Arduino DS3231 Real Time Clock Module Tutorial
*
* Crated by Dejan Nedelkovski,
* www.HowToMechatronics.com
*
* DS3231 Library made by Henning Karlsen which can be found and downloaded from his website, www.rinkydinkelectronics.com.
*
*/
#include <DS3231.h>
#include <Serial.h>

DS3231  rtc(A4, A5);

void setup() { 
 rtc.begin(); // Initialize the rtc object
}

void loop() { 
 Serial.print("Time:  ");
 Serial.print(rtc.getTimeStr());
 
 Serial.print("Date: ");
 Serial.print(rtc.getDateStr());
 
 delay(1000); 
}