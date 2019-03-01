#include <PS3BT.h>
#include <usbhub.h>
#include "PS3Con.h"
#include "Motor.h"
#include "Mecanum.h"

USB Usb;
BTD Btd(&Usb);
PS3BT PS3(&Btd);
PS3Con ps3con = PS3Con();
Mecanum mecanum = Mecanum(44,46,9,6,5,4,3,2,1);

//
//
void setup() {
  Serial.begin(115200);
  while (!Serial); // Wait for serial port to connect - used on Leonardo, Teensy and other boards with built-in USB CDC serial connection
  if (Usb.Init() == -1) {
    Serial.print(F("\r\nOSC did not start"));
    while (1); //halt
  }
  Serial.print(F("\r\nPS3 Bluetooth Library Started"));

}
void loop() {
  Usb.Task();
  if (PS3.PS3Connected) {
    if (PS3.getButtonClick(PS)){//各ボタンの中にモーターを動かしたりトランジスタを動かしたりサーボを動かす処理をかいてください
      Serial.print(F("\r\nPS"));
    }
    else{
    }
    
    if (PS3.getButtonPress(TRIANGLE)){
      Serial.print(F("\r\nTraingle"));
    }
   else if (PS3.getButtonPress(CIRCLE)){
      Serial.print(F("\r\nCircle"));
    }
   else if (PS3.getButtonPress(CROSS)){
      Serial.print(F("\r\nCross"));
    }
    else if (PS3.getButtonPress(SQUARE)){
      Serial.print(F("\r\nSquare"));
    }
    else if (PS3.getButtonPress(UP)) {
      Serial.print(F("\r\nUp"));

    }
    else  if (PS3.getButtonPress(RIGHT)) {
      Serial.print(F("\r\nRight"));

    }
    else  if (PS3.getButtonPress(DOWN)) {
      Serial.print(F("\r\nDown"));
    }
    else  if (PS3.getButtonPress(LEFT)) {
      Serial.print(F("\r\nLeft"));

    }
    else if (PS3.getButtonPress(L1)){
      Serial.print(F("\r\nL1"));
      mecanum.TurnL();
    }else if (PS3.getButtonPress(L2)) {
      Serial.print(F("\r\nL2"));
      mecanum.DriftL();
    }
    else if (PS3.getButtonPress(L3)){
      Serial.print(F("\r\nL3"));
    }
    else if (PS3.getButtonPress(R1)){
      Serial.print(F("\r\nR1"));
      mecanum.TurnR();
    }
    else if (PS3.getButtonPress(R2)){
      Serial.print(F("\r\nR2"));
      mecanum.DriftR();
    }      
    else if (PS3.getButtonPress(R3)){
      Serial.print(F("\r\nR3"));
    }
    else if (PS3.getButtonPress(SELECT)) {
      Serial.print(F("\r\nSelect"));
    }
    else if (PS3.getButtonPress(START)) {
      Serial.print(F("\r\nStart"));
    }
    else{
    my_left_analog_pad(ps3con.AnalogPadDirection(PS3.getAnalogHat(LeftHatX), PS3.getAnalogHat(LeftHatY)));
    Serial.print(F("\r"));
    }
  }
  
}





void my_left_analog_pad(int n){
  switch(n){
    case ps3con.AnaFront:
          Serial.print(F("\r\nfront"));
          mecanum.Front();
          break;
    case ps3con.AnaFRight:
          Serial.print(F("\r\nfront_right"));
          mecanum.FRight();
          break;
    case ps3con.AnaRight:
          Serial.print(F("\r\nright"));
          mecanum.Right();
          break;
    case ps3con.AnaBRight:
          Serial.print(F("\r\nback_right"));
          mecanum.BRight();
          break;
    case ps3con.AnaBack:
          Serial.print(F("\r\nback"));
          mecanum.Back();
          break;
    case ps3con.AnaBLeft:
          Serial.print(F("\r\nback_left"));
          mecanum.BLeft();
          break;
    case ps3con.AnaLeft:
          Serial.print(F("\r\nleft"));
          mecanum.Left();
          break;
    case ps3con.AnaFLeft:
          Serial.print(F("\r\nfront_left"));
          mecanum.FLeft();
          break;
    case ps3con.AnaNeutral:
          Serial.print(F("\r\nstop"));
          mecanum.Stop();
          break;
    default:
      Serial.print(F("\r\nstop1"));
  } 
}