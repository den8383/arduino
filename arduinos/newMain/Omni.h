#ifndef Omni_h
#define Omni_h

#include "Motor.h"


class Omni
{
  public:
  Omni(int pin1A, int pin1B,int pin2A, int pin2B,int pin3A, int pin3B,int pin4A, int pin4B,int mode);
  void Front();
  void FRight();
  void Right();
  void BRight();
  void Back();
  void BLeft();
  void Left();
  void FLeft();
  void TurnR();
  void TurnL();
  void DriftR();
  void DriftL();
  void Stop();
  void Print();
  
  private:
  int m_pin1A;
  int m_pin1B;
  int m_pin2A;
  int m_pin2B;
  int m_pin3A;
  int m_pin3B;
  int m_pin4A;
  int m_pin4B;
  int m_mode;
  Motor *motor1;
  Motor *motor2;
  Motor *motor3;
  Motor *motor4;
};

#endif
