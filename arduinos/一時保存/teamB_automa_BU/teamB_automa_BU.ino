#include<Servo.h>


#define p1 8//motor1
#define p2 7//motor1
#define p3 6//motor1
#define p4 24
#define p5 25
#define p6 26
#define p7 27
#define p8 28
#define p9 29
#define p10 30
#define p11 31
#define p12 32
#define p13 33
#define p14 34
#define p15 35
#define p16 36
#define trPin1 A1//trace1
#define trPin2 A2//trace2
#define ServoPin 9

#define p16 37
#define p17 38
#define p18 39
#define p19 40

#define servo_val_0 90
#define servo_val_1 60

#define servo_val_2 120

Servo myservo1;
Servo myservo2;

/*
int my_direction(int x, int y){
  double deg, rad;
  int pattern = 0;
  x -= 128;
  y = abs(y - 256) - 128;
  rad = atan2((double)y,(double)x);
  deg = rad * 180.0 / (atan(1.0)*4.0);
  if(abs(x) > 16 || abs(y) > 16)
  {
    pattern = 8;
    deg += 180.0;
    for(int i = 0; i < 7; i++){
      
      if(deg >= 22.5 + (i * 45.0) && deg < 67.5 + (i * 45.0)){
        pattern = i + 1;
           
      }
    }
    Serial.print(deg);
  }
  return pattern;
}
*/

int closs_count = 0;

void my_right(){
  motor1(1);
  motor2(1);
  motor3(-1);
  motor4(-1);
}

void my_upper_right(){
  motor1(0);
  motor2(1);
  motor3(0);
  motor4(-1);
}

void my_front(){
  motor1(-1);
  motor2(1);
  motor3(1);
  motor4(-1);
}


void my_upper_left(){
  motor1(-1);
  motor2(0);
  motor3(1);
  motor4(0);
}

void my_left(){
  motor1(-1);
  motor2(-1);
  motor3(1);
  motor4(1);
}

void my_lower_left(){
  motor1(0);
  motor2(-1);
  motor3(0);
  motor4(1);
}

void my_back(){
  motor1(1);
  motor2(-1);
  motor3(-1);
  motor4(1);
}

void my_lower_right(){
  motor1(1);
  motor2(0);
  motor3(-1);
  motor4(0);
}

void my_turn_right(){
  motor1(1);
  motor2(1);
  motor3(1);
  motor4(1);
}

void my_turn_left(){
  motor1(-1);
  motor2(-1);
  motor3(-1);
  motor4(-1);
}

void my_steer_right_F(){
  motor1(1);
  motor2(1);
  motor3(0);
  motor4(0);
}

void my_steer_right_B(){
  motor1(0);
  motor2(0);
  motor3(-1);
  motor4(-1);
}

void my_steer_left_F(){
  motor1(-1);
  motor2(-1);
  motor3(0);
  motor4(0);
}

void my_steer_left_B(){
  motor1(0);
  motor2(0);
  motor3(1);
  motor4(1);
}

void  my_stop(){
  motor1(0);
  motor2(0);
  motor3(0);
  motor4(0);
}
/*
void my_left_analog_pad(int n){
  switch(n){
    case 6:
          my_front();
          Serial.print(F("\r\nup"));
          break;
    case 5:
          my_upper_right();
          Serial.print(F("\r\nupper_right"));
          break;
    case 4:
          my_right();
          Serial.print(F("\r\nright"));
          break;
    case 3:
          my_lower_right();
          Serial.print(F("\r\nlower_right"));
          break;
    case 2:
          my_back();
          Serial.print(F("\r\ndown"));
          break;
    case 1:
          my_lower_left();
          Serial.print(F("\r\nlower_left"));
          break;
    case 8:
          my_left();
          Serial.print(F("\r\nleft"));
          break;
    case 7:
          my_upper_left();
          Serial.print(F("\r\nupper_right"));
          break;
    case 0:
          my_stop();
          Serial.print(F("\r\nstop"));
          break;
    default:
      my_stop();
      Serial.print(F("\r\nstop"));
  }
}
*/

int mod_val = 0;

void motor1(int n){//モーターを扱うための関数　これを使ってもよいし作り直してもよいです
  if(n>0){
    digitalWrite(p1,HIGH);
    digitalWrite(p2,LOW);
    analogWrite(p3,mod_val);
  }
  else if(n<0){
    digitalWrite(p1,LOW);
    digitalWrite(p2,HIGH);
    analogWrite(p3,mod_val);
  }
  else{
    digitalWrite(p1,LOW);
    digitalWrite(p2,LOW);
    analogWrite(p3,mod_val);
  }
}


void motor2(int n){//モーターを扱うための関数　これを使ってもよいし作り直してもよいです
  if(n>0){
    digitalWrite(p4,HIGH);
    digitalWrite(p5,LOW);
    analogWrite(p6,mod_val);
  }
  else if(n<0){
    digitalWrite(p4,LOW);
    digitalWrite(p5,HIGH);
    analogWrite(p6,mod_val);
  }
  else{
    digitalWrite(p4,LOW);
    digitalWrite(p5,LOW);
    analogWrite(p6,mod_val);
  }
}


void motor3(int n){//モーターを扱うための関数　これを使ってもよいし作り直してもよいです
  if(n>0){
    digitalWrite(p7,HIGH);
    digitalWrite(p8,LOW);
    analogWrite(p9,mod_val);
  }
  else if(n<0){
    digitalWrite(p7,LOW);
    digitalWrite(p8,HIGH);
    analogWrite(p9,mod_val);
  }
  else{
    digitalWrite(p7,LOW);
    digitalWrite(p8,LOW);
    analogWrite(p9,mod_val);
  }
}


void motor4(int n){//モーターを扱うための関数　これを使ってもよいし作り直してもよいです
  if(n>0){
    digitalWrite(p10,HIGH);
    digitalWrite(p11,LOW);
    analogWrite(p12,mod_val);
  }
  else if(n<0){
    digitalWrite(p10,LOW);
    digitalWrite(p11,HIGH);
    analogWrite(p12,mod_val);
  }
  else{
    digitalWrite(p10,LOW);
    digitalWrite(p11,LOW);
    analogWrite(p12,mod_val);
  }
}
/*
void my_front( int n){
  if(n > 0){
    mod_val = 255;
    motor1(1);
  }else if( n < 0){
    mod_val = 127;
    motor1(1);
  }else{
    mod_val = 168;
    motor1(1);
  }
  Serial.print(F("PWM"));
  Serial.print(  mod_val);
}

void my_stop(){
  mod_val = 0;
  motor1(0);
  Serial.print(F("PWM"));
  Serial.print(mod_val);
}

void steer( int n){
  if( n > 0 ){
    myservo1.write(servo_val_1);
   // myservo2.write(servo_val_1);
   //Serial.print(F("right\n"));
  }else if( n < 0){
    myservo1.write(servo_val_2);
    //myservo2.write(servo_val_2);
    //Serial.print(F("left\n"));
  }else{
    myservo1.write(servo_val_0);
    //myservo2.write(servo_val_0);
    //Serial.print(F("straight\n"));
  }
}
*/
int trace_a(){
  int n;
  n = analogRead( trPin1);
  if(n > 524){
    n = 1;
  }else{
    n = 0;
  }
  return n;
}

int trace_b(){
  int n;
  n = analogRead( trPin1);
  if(n > 524){
    n = 1;
  }else{
    n = 0;
  }
  return n;
}

int trace_c(){
  int n;
  n = analogRead( trPin2);
  if(n > 524){
    n = 1;
  }else{
    n = 0;
  }
  return n;
}

int trace_d(){
  int n;
  n = analogRead( p18);
  return n;
}

int trace_e(){
  int n;
  n = analogRead( p19);
  return n;
}

int trace_f(){
  int n;
  n = analogRead( trPin1);
  if(n > 524){
    n = 1;
  }else{
    n = 0;
  }
  return n;
}

int trace_g(){
  int n;
  n = analogRead( trPin1);
  if(n > 524){
    n = 1;
  }else{
    n = 0;
  }
  return n;
}

int trace_h(){
  int n;
  n = analogRead( trPin1);
  if(n > 524){
    n = 1;
  }else{
    n = 0;
  }
  return n;
}

void my_catch_SUN(){
  
}

void my_catch_STAND(){
  
}

void my_release_TOWER(){
  
}

 void my_rotation(){
  
 }
/*
void my_motion(int a, int b)
{
  Serial.print(F("SENSOR"));
  if(a ==0 && b == 0){
    Serial.print(F("00\n"));
    steer(0);
    my_front(1);
  }else if(a == 0 && b == 1){
    Serial.print(F("01\n"));
    steer(-1);
    my_front(-1);
  }else if(a == 1 && b == 0){
    Serial.print(F("10\n"));
    steer(1);
    my_front(-1);
  }else if(a == 1 && b ==1){
    Serial.print(F("11\n"));
    my_stop();
  }
}
*/

void my_motion_A(int h, int g, int f, int e, int d, int c, int b, int a){
  if(h == 0 && g ==0 && f == 0 && e ==0 && d == 0 && c == 0 && b == 0 && a == 0){
    my_stop();
    Serial.print(F("00000000\n"));
  }else if(h == 0 && g ==0 && f == 0 && e ==0 && d == 0 && c == 0 && b == 0 && a == 1){
    Serial.print(F("00000001\n"));
  }else if(h == 0 && g ==0 && f == 0 && e ==0 && d == 0 && c == 0 && b == 1 && a == 0){
    Serial.print(F("00000010\n"));
  }else if(h == 0 && g ==0 && f == 0 && e ==0 && d == 0 && c == 0 && b == 1 && a == 1){
    Serial.print(F("00000011\n"));
  }else if(h == 0 && g ==0 && f == 0 && e ==0 && d == 0 && c == 1 && b == 0 && a == 0){
    
    Serial.print(F("00000100\nn"));
  }else if(h == 0 && g ==0 && f == 0 && e ==0 && d == 0 && c == 1 && b == 0 && a == 1){
    Serial.print(F("00000101\n"));
  }else if(h == 0 && g ==0 && f == 0 && e ==0 && d == 0 && c == 1 && b == 1 && a == 0){
    Serial.print(F("00000110\n"));
  }else if(h == 0 && g ==0 && f == 0 && e ==0 && d == 0 && c == 1 && b == 1 && a == 1){
    Serial.print(F("00000111\n"));
  }else if(h == 0 && g ==0 && f == 0 && e ==0 && d == 1 && c == 0 && b == 0 && a == 0){
    Serial.print(F("00001000\n"));
  }else if(h == 0 && g ==0 && f == 0 && e ==0 && d == 1 && c == 0 && b == 0 && a == 1){
    Serial.print(F("00001001\n"));
  }else if(h == 0 && g ==0 && f == 0 && e ==0 && d == 1 && c == 0 && b == 1 && a == 0){
    Serial.print(F("00001010\n"));
  }else if(h == 0 && g ==0 && f == 0 && e ==0 && d == 1 && c == 0 && b == 1 && a == 1){
    Serial.print(F("00001011\n"));
  }else if(h == 0 && g ==0 && f == 0 && e ==0 && d == 1 && c == 1 && b == 0 && a == 0){
    Serial.print(F("00001100\n"));
  }else if(h == 0 && g ==0 && f == 0 && e ==0 && d == 1 && c == 1 && b == 0 && a == 1){
    Serial.print(F("00001101\n"));
  }else if(h == 0 && g ==0 && f == 0 && e ==0 && d == 1 && c == 1 && b == 1 && a == 0){
    Serial.print(F("00001110\n"));
  }else if(h == 0 && g ==0 && f == 0 && e ==0 && d == 1 && c == 1 && b == 1 && a == 1){
    Serial.print(F("00001111\n"));
  }else if(h == 0 && g ==0 && f == 0 && e ==1 && d == 0 && c == 0 && b == 0 && a == 0){
    Serial.print(F("00010000\n"));
  }else if(h == 0 && g ==0 && f == 0 && e ==1 && d == 0 && c == 0 && b == 0 && a == 1){
    Serial.print(F("00010001\n"));
  }else if( h== 0 && g ==0 && f == 0 && e ==1 && d == 0 && c == 0 && b == 1 && a == 0){
    Serial.print(F("00010010\n"));
  }else if(h == 0 && g ==0 && f == 0 && e ==1 && d == 0 && c == 0 && b == 1 && a == 1){
    Serial.print(F("00010011\n"));
  }else if(h == 0 && g ==0 && f == 0 && e ==1 && d == 0 && c == 1 && b == 0 && a == 0){
    Serial.print(F("00010100\n"));
  }else if(h == 0 && g ==0 && f == 0 && e ==1 && d == 0 && c == 1 && b == 0 && a == 1){
    Serial.print(F("00010101\n"));
  }else if(h == 0 && g ==0 && f == 0 && e ==1 && d == 0 && c == 1 && b == 1 && a == 0){
    Serial.print(F("00010110\n"));
  }else if(h == 0 && g ==0 && f == 0 && e ==1 && d == 0 && c == 1 && b == 1 && a == 1){
    Serial.print(F("00010111\n"));
  }else if(h == 0 && g ==0 && f == 0 && e ==1 && d == 1 && c == 0 && b == 0 && a == 0){
    Serial.print(F("00011000\n"));
  }else if(h == 0 && g ==0 && f == 0 && e ==1 && d == 1 && c == 0 && b == 0 && a == 1){
    Serial.print(F("00011001\n"));
  }else if(h == 0 && g ==0 && f == 0 && e ==1 && d == 1 && c == 0 && b == 1 && a == 0){
    Serial.print(F("00011010\n"));
  }else if(h == 0 && g ==0 && f == 0 && e ==1 && d == 1 && c == 0 && b == 1 && a == 1){
    Serial.print(F("00011011\n"));
  }else if(h == 0 && g ==0 && f == 0 && e ==1 && d == 1 && c == 1 && b == 0 && a == 0){
    Serial.print(F("00011100\n"));
  }else if(h == 0 && g ==0 && f == 0 && e ==1 && d == 1 && c == 1 && b == 0 && a == 1){
    Serial.print(F("00011101\n"));
  }else if(h == 0 && g ==0 && f == 0 && e ==1 && d == 1 && c == 1 && b == 1 && a == 0){
    Serial.print(F("00011110\n"));
  }else if(h == 0 && g ==0 && f == 0 && e ==1 && d == 1 && c == 1 && b == 1 && a == 1){
    Serial.print(F("00011111\n"));
  }else if(h == 0 && g ==0 && f == 1 && e ==0 && d == 0 && c == 0 && b == 0 && a == 0){
    Serial.print(F("00100000\n"));
  }else if(h == 0 && g ==0 && f == 1 && e ==0 && d == 0 && c == 0 && b == 0 && a == 1){
    Serial.print(F("00100001\n"));
  }else if(h == 0 && g ==0 && f == 1 && e ==0 && d == 0 && c == 0 && b == 1 && a == 0){
    Serial.print(F("00100010\n"));
    my_turn_right();
  }else if(h == 0 && g ==0 && f == 1 && e ==0 && d == 0 && c == 0 && b == 1 && a == 1){
    Serial.print(F("00100011\n"));
  }else if(h == 0 && g ==0 && f == 1 && e ==0 && d == 0 && c == 1 && b == 0 && a == 0){
    Serial.print(F("00100100\n"));
  }else if(h == 0 && g ==0 && f == 1 && e ==0 && d == 0 && c == 1 && b == 0 && a == 1){
    Serial.print(F("00100101\n"));
  }else if(h == 0 && g ==0 && f == 1 && e ==0 && d == 0 && c == 1 && b == 1 && a == 0){
    Serial.print(F("00100110\n"));
    my_steer_right_B();
  }else if(h == 0 && g ==0 && f == 1 && e ==0 && d == 0 && c == 1 && b == 1 && a == 1){
    Serial.print(F("00100111\n"));
  }else if(h == 0 && g ==0 && f == 1 && e ==0 && d == 1 && c == 0 && b == 0 && a == 0){
    Serial.print(F("00101000\n"));
  }else if(h == 0 && g ==0 && f == 1 && e ==0 && d == 1 && c == 0 && b == 0 && a == 1){
    Serial.print(F("00101001\n"));
  }else if(h == 0 && g ==0 && f == 1 && e ==0 && d == 1 && c == 0 && b == 1 && a == 0){
    Serial.print(F("00101010\n"));
  }else if(h == 0 && g ==0 && f == 1 && e ==0 && d == 1 && c == 0 && b == 1 && a == 1){
    Serial.print(F("00101011\n"));
  }else if(h == 0 && g ==0 && f == 1 && e ==0 && d == 1 && c == 1 && b == 0 && a == 0){
    Serial.print(F("00101100\n"));
  }else if(h == 0 && g ==0 && f == 1 && e ==0 && d == 1 && c == 1 && b == 0 && a == 1){
    Serial.print(F("00101101\n"));
  }else if(h == 0 && g ==0 && f == 1 && e ==0 && d == 1 && c == 1 && b == 1 && a == 0){
    Serial.print(F("00101110\n"));
  }else if(h == 0 && g ==0 && f == 1 && e ==0 && d == 1 && c == 1 && b == 1 && a == 1){
    Serial.print(F("00101111\n"));
  }else if(h == 0 && g ==0 && f == 1 && e ==1 && d == 0 && c == 0 && b == 0 && a == 0){
    Serial.print(F("00110000\n"));
  }else if(h == 0 && g ==0 && f == 1 && e ==1 && d == 0 && c == 0 && b == 0 && a == 1){
    Serial.print(F("00110001\n"));
  }else if(h == 0 && g ==0 && f == 1 && e ==1 && d == 0 && c == 0 && b == 1 && a == 0){
    Serial.print(F("00110010\n"));
  }else if(h == 0 && g ==0 && f == 1 && e ==1 && d == 0 && c == 0 && b == 1 && a == 1){
    Serial.print(F("00110011\n"));
  }else if(h == 0 && g ==0 && f == 1 && e ==1 && d == 0 && c == 1 && b == 0 && a == 0){
    Serial.print(F("00110100\n"));
  }else if(h == 0 && g ==0 && f == 1 && e ==1 && d == 0 && c == 1 && b == 0 && a == 1){
    Serial.print(F("00110101\n"));
  }else if(h == 0 && g ==0 && f == 1 && e ==1 && d == 0 && c == 1 && b == 1 && a == 0){
    Serial.print(F("00110110\n"));
  }else if(h == 0 && g ==0 && f == 1 && e ==1 && d == 0 && c == 1 && b == 1 && a == 1){
    Serial.print(F("00110111\n"));
  }else if(h == 0 && g ==0 && f == 1 && e ==1 && d == 1 && c == 0 && b == 0 && a == 0){
    Serial.print(F("00111000\n"));
  }else if(h == 0 && g ==0 && f == 1 && e ==1 && d == 1 && c == 0 && b == 0 && a == 1){
    Serial.print(F("00111001\n"));
  }else if(h == 0 && g ==0 && f == 1 && e ==1 && d == 1 && c == 0 && b == 1 && a == 0){
    Serial.print(F("00111010\n"));
  }else if(h == 0 && g ==0 && f == 1 && e ==1 && d == 1 && c == 0 && b == 1 && a == 1){
    Serial.print(F("00111011\n"));
  }else if(h == 0 && g ==0 && f == 1 && e ==1 && d == 1 && c == 1 && b == 0 && a == 0){
    Serial.print(F("00111100\n"));
  }else if(h == 0 && g ==0 && f == 1 && e ==1 && d == 1 && c == 1 && b == 0 && a == 1){
    Serial.print(F("00111101\n"));
  }else if(h == 0 && g ==0 && f == 1 && e ==1 && d == 1 && c == 1 && b == 1 && a == 0){
    Serial.print(F("00111110\n"));
  }else if(h == 0 && g ==0 && f == 1 && e ==1 && d == 1 && c == 1 && b == 1 && a == 1){
    Serial.print(F("00111111\n"));
  }else if(h == 0 && g ==1 && f == 0 && e ==0 && d == 0 && c == 0 && b == 0 && a == 0){
    Serial.print(F("01000000\n"));
  }else if(h == 0 && g ==1 && f == 0 && e ==0 && d == 0 && c == 0 && b == 0 && a == 1){
    Serial.print(F("01000001\n"));
  }else if(h == 0 && g ==1 && f == 0 && e ==0 && d == 0 && c == 0 && b == 1 && a == 0){
    Serial.print(F("01000010\n"));
  }else if(h == 0 && g ==1 && f == 0 && e ==0 && d == 0 && c == 0 && b == 1 && a == 1){
    Serial.print(F("01000011\n"));
  }else if(h == 0 && g ==1 && f == 0 && e ==0 && d == 0 && c == 1 && b == 0 && a == 0){
    Serial.print(F("01000100\n"));
    my_turn_left();
  }else if(h == 0 && g ==1 && f == 0 && e ==0 && d == 0 && c == 1 && b == 0 && a == 1){
    Serial.print(F("01000101\n"));
  }else if(h == 0 && g ==1 && f == 0 && e ==0 && d == 0 && c == 1 && b == 1 && a == 0){
    Serial.print(F("01000110\n"));
    my_steer_left_B();
  }else if(h == 0 && g ==1 && f == 0 && e ==0 && d == 0 && c == 1 && b == 1 && a == 1){
    Serial.print(F("01000111\n"));
  }else if(h == 0 && g ==1 && f == 0 && e ==0 && d == 1 && c == 0 && b == 0 && a == 0){
    Serial.print(F("01001000\n"));
  }else if(h == 0 && g ==1 && f == 0 && e ==0 && d == 1 && c == 0 && b == 0 && a == 1){
    Serial.print(F("01001001\n"));
  }else if(h == 0 && g ==1 && f == 0 && e ==0 && d == 1 && c == 0 && b == 1 && a == 1){
    Serial.print(F("01001011\n"));
  }else if(h == 0 && g ==1 && f == 0 && e ==0 && d == 1 && c == 1 && b == 0 && a == 0){
    Serial.print(F("01001100\n"));
  }else if(h == 0 && g ==1 && f == 0 && e ==0 && d == 1 && c == 1 && b == 0 && a == 1){
    Serial.print(F("01001101\n"));
  }else if(h == 0 && g ==1 && f == 0 && e ==0 && d == 1 && c == 1 && b == 1 && a == 0){
    Serial.print(F("01001110\n"));
  }else if(h == 0 && g ==1 && f == 0 && e ==0 && d == 1 && c == 1 && b == 1 && a == 1){
    Serial.print(F("01001111\n"));
  }else if(h == 0 && g ==1 && f == 0 && e ==1 && d == 0 && c == 0 && b == 0 && a == 0){
    Serial.print(F("01010000\n"));
  }else if(h == 0 && g ==1 && f == 0 && e ==1 && d == 0 && c == 0 && b == 0 && a == 1){
    Serial.print(F("01010001\n"));
  }else if(h == 0 && g ==1 && f == 0 && e ==1 && d == 0 && c == 0 && b == 1 && a == 0){
    Serial.print(F("01010010\n"));
  }else if(h == 0 && g ==1 && f == 0 && e ==1 && d == 0 && c == 0 && b == 1 && a == 1){
    Serial.print(F("01010011\n"));
  }else if(h == 0 && g ==1 && f == 0 && e ==1 && d == 0 && c == 1 && b == 0 && a == 0){
    Serial.print(F("01010100\n"));
  }else if(h == 0 && g ==1 && f == 0 && e ==1 && d == 0 && c == 1 && b == 0 && a == 1){
    Serial.print(F("01010101\n"));
  }else if(h == 0 && g ==1 && f == 0 && e ==1 && d == 0 && c == 1 && b == 1 && a == 0){
    Serial.print(F("01010110\n"));
  }else if(h == 0 && g ==1 && f == 0 && e ==1 && d == 0 && c == 1 && b == 1 && a == 1){
    Serial.print(F("01010111\n"));
  }else if(h == 0 && g ==1 && f == 0 && e ==1 && d == 1 && c == 0 && b == 0 && a == 0){
    Serial.print(F("01011000\n"));
  }else if(h == 0 && g ==1 && f == 0 && e ==1 && d == 1 && c == 0 && b == 0 && a == 1){
    Serial.print(F("01011001\n"));
  }else if(h == 0 && g ==1 && f == 0 && e ==1 && d == 1 && c == 0 && b == 1 && a == 0){
    Serial.print(F("01011010\n"));
  }else if(h == 0 && g ==1 && f == 0 && e ==1 && d == 1 && c == 0 && b == 1 && a == 1){
    Serial.print(F("01011011\n"));
  }else if(h == 0 && g ==1 && f == 0 && e ==1 && d == 1 && c == 1 && b == 0 && a == 0){
    Serial.print(F("01011100\n"));
  }else if(h == 0 && g ==1 && f == 0 && e ==1 && d == 1 && c == 1 && b == 0 && a == 1){
    Serial.print(F("01011101\n"));
  }else if(h == 0 && g ==1 && f == 0 && e ==1 && d == 1 && c == 1 && b == 1 && a == 0){
    Serial.print(F("01011110\n"));
  }else if(h == 0 && g ==1 && f == 0 && e ==1 && d == 1 && c == 1 && b == 1 && a == 1){
    Serial.print(F("01011111\n"));
  }else if(h == 0 && g ==1 && f == 1 && e ==0 && d == 0 && c == 0 && b == 0 && a == 0){
    Serial.print(F("01100000\n"));
  }else if(h == 0 && g ==1 && f == 1 && e ==0 && d == 0 && c == 0 && b == 0 && a == 1){
    Serial.print(F("01100001\n"));
  }else if(h == 0 && g ==1 && f == 1 && e ==0 && d == 0 && c == 0 && b == 1 && a == 0){
    Serial.print(F("01100010\n"));
    my_steer_right_F();
  }else if(h == 0 && g ==1 && f == 1 && e ==0 && d == 0 && c == 0 && b == 1 && a == 1){
    Serial.print(F("01100011\n"));
    my_front();
  }else if(h == 0 && g ==1 && f == 1 && e ==0 && d == 0 && c == 1 && b == 0 && a == 0){
    Serial.print(F("01100100\n"));
    my_steer_left_F();
  }else if(h == 0 && g ==1 && f == 1 && e ==0 && d == 0 && c == 1 && b == 0 && a == 1){
    Serial.print(F("01100101\n"));
  }else if(h == 0 && g ==1 && f == 1 && e ==0 && d == 0 && c == 1 && b == 1 && a == 0){
    Serial.print(F("01100110\n"));
  }else if(h == 0 && g ==1 && f == 1 && e ==0 && d == 0 && c == 1 && b == 1 && a == 1){
    Serial.print(F("01100111\n"));
  }else if(h == 0 && g ==1 && f == 1 && e ==0 && d == 1 && c == 0 && b == 0 && a == 0){
    Serial.print(F("01101000\n"));
  }else if(h == 0 && g ==1 && f == 1 && e ==0 && d == 1 && c == 0 && b == 0 && a == 1){
    Serial.print(F("01101001\n"));
  }else if(h == 0 && g ==1 && f == 1 && e ==0 && d == 1 && c == 0 && b == 1 && a == 0){
    Serial.print(F("01101010\n"));
  }else if(h == 0 && g ==1 && f == 1 && e ==0 && d == 1 && c == 0 && b == 1 && a == 1){
    Serial.print(F("01101011\n"));
  }else if(h == 0 && g ==1 && f == 1 && e ==0 && d == 1 && c == 1&& b == 0 && a == 0){
    Serial.print(F("01101100\n"));
  }else if(h == 0 && g ==1 && f == 1 && e ==0 && d == 1 && c == 1 && b == 0 && a == 1){
    Serial.print(F("01101101\n"));
  }else if(h == 0 && g ==1 && f == 1 && e ==0 && d == 1 && c == 1 && b == 1 && a == 0){
    Serial.print(F("01101110\n"));
  }else if(h == 0 && g ==1 && f == 1 && e ==0 && d == 1 && c == 1 && b == 1 && a == 1){
    Serial.print(F("01101111\n"));
  }else if(h == 0 && g ==1 && f == 1 && e ==1 && d == 0 && c == 0 && b == 0 && a == 0){
    Serial.print(F("01110000\n"));
  }else if(h == 0 && g ==1 && f == 1 && e ==1 && d == 0 && c == 0 && b == 0 && a == 1){
    Serial.print(F("01110001\n"));
  }else if(h == 0 && g ==1 && f == 1 && e ==1 && d == 0 && c == 0 && b == 1 && a == 0){
    Serial.print(F("01110010\n"));
  }else if(h == 0 && g ==1 && f == 1 && e ==1 && d == 0 && c == 0 && b == 1 && a == 1){
    Serial.print(F("01110011\n"));
  }else if(h == 0 && g ==1 && f == 1 && e ==1 && d == 0 && c == 1 && b == 0 && a == 0){
    Serial.print(F("01110100\n"));
  }else if(h == 0 && g ==1 && f == 1 && e ==1 && d == 0 && c == 1 && b == 0 && a == 1){
    Serial.print(F("01110101\n"));
  }else if(h == 0 && g ==1 && f == 1 && e ==1 && d == 0 && c == 1 && b == 1 && a == 0){
    Serial.print(F("01110110\n"));
  }else if(h == 0 && g ==1 && f == 1 && e ==1 && d == 0 && c == 1 && b == 1 && a == 1){
    Serial.print(F("01110111\n"));
  }else if(h == 0 && g ==1 && f == 1 && e ==1 && d == 1 && c == 0 && b == 0 && a == 0){
    Serial.print(F("01111000\n"));
  }else if(h == 0 && g ==1 && f == 1 && e ==1 && d == 1 && c == 0 && b == 0 && a == 1){
    Serial.print(F("01111001\n"));
  }else if(h == 0 && g ==1 && f == 1 && e ==1 && d == 1 && c == 0 && b == 1 && a == 0){
    Serial.print(F("01111010\n"));
  }else if(h == 0 && g ==1 && f == 1 && e ==1 && d == 1 && c == 0 && b == 1 && a == 1){
    Serial.print(F("01111011\n"));
  }else if(h == 0 && g ==1 && f == 1 && e ==1 && d == 1 && c == 1 && b == 0 && a == 0){
    Serial.print(F("01111100\n"));
  }else if(h == 0 && g ==1 && f == 1 && e ==1 && d == 1 && c == 1 && b == 0 && a == 1){
    Serial.print(F("01111101\n"));
  }else if(h == 0 && g ==1 && f == 1 && e ==1 && d == 1 && c == 1 && b == 1 && a == 0){
    Serial.print(F("01111110\n"));
  }else if(h == 0 && g ==1 && f == 1 && e ==1 && d == 1 && c == 1 && b == 1 && a == 1){
    Serial.print(F("01111111\n"));
  }else if(h == 1 && g ==0 && f == 0 && e ==0 && d == 0 && c == 0 && b == 0 && a == 0){
    Serial.print(F("10000000\n"));
  }else if(h == 1 && g ==0 && f == 0 && e ==0 && d == 0 && c == 0 && b == 0 && a == 1){
    Serial.print(F("10000001\n"));
  }else if(h == 1 && g ==0 && f == 0 && e ==0 && d == 0 && c == 0 && b == 1 && a == 0){
    Serial.print(F("10000010\n"));
  }else if(h == 1 && g ==0 && f == 0 && e ==0 && d == 0 && c == 0 && b == 1 && a == 1){
    Serial.print(F("10000011\n"));
  }else if(h == 1 && g ==0 && f == 0 && e ==0 && d == 0 && c == 1 && b == 0 && a == 0){
    Serial.print(F("10000100\n"));
  }else if(h == 1 && g ==0 && f == 0 && e ==0 && d == 0 && c == 1 && b == 0 && a == 1){
    Serial.print(F("10000101\n"));
  }else if(h == 1 && g ==0 && f == 0 && e ==0 && d == 0 && c == 1 && b == 1 && a == 0){
    Serial.print(F("10000110\n"));
  }else if(h == 1 && g ==0 && f == 0 && e ==0 && d == 0 && c == 1 && b == 1 && a == 1){
    Serial.print(F("10000111\n"));
  }else if(h == 1 && g ==0 && f == 0 && e ==0 && d == 1 && c == 0 && b == 0 && a == 0){
    Serial.print(F("10001000\n"));
  }else if(h == 1 && g ==0 && f == 0 && e ==0 && d == 1 && c == 0 && b == 0 && a == 1){
    Serial.print(F("10001001\n"));
  }else if(h == 1 && g ==0 && f == 0 && e ==0 && d == 1 && c == 0 && b == 1 && a == 0){
    Serial.print(F("10001010\n"));
  }else if(h == 1 && g ==0 && f == 0 && e ==0 && d == 1 && c == 0 && b == 1 && a == 1){
    Serial.print(F("10001011\n"));
  }else if(h == 1 && g ==0 && f == 0 && e ==0 && d == 1 && c == 1 && b == 0 && a == 0){
    Serial.print(F("10001100\n"));
  }else if(h == 1 && g ==0 && f == 0 && e ==0 && d == 1 && c == 1 && b == 0 && a == 1){
    Serial.print(F("10001101\n"));
  }else if(h == 1 && g ==0 && f == 0 && e ==0 && d == 1 && c == 1 && b == 1 && a == 0){
    Serial.print(F("10001110\n"));
  }else if(h == 1 && g ==0 && f == 0 && e ==0 && d == 1 && c == 1 && b == 1 && a == 1){
    Serial.print(F("10001111\n"));
  }else if(h == 1 && g ==0 && f == 0 && e ==1 && d == 0 && c == 0 && b == 0 && a == 0){
    Serial.print(F("10010000\n"));
  }else if(h == 1 && g ==0 && f == 0 && e ==1 && d == 0 && c == 0 && b == 0 && a == 1){
    Serial.print(F("10010001\n"));
  }else if(h == 1 && g ==0 && f == 0 && e ==1 && d == 0 && c == 0 && b == 1 && a == 0){
    Serial.print(F("10010010\n"));
  }else if(h == 1 && g ==0 && f == 0 && e ==1 && d == 0 && c == 0 && b == 1 && a == 1){
    Serial.print(F("10010011\n"));
  }else if(h == 1 && g ==0 && f == 0 && e ==1 && d == 0 && c == 1 && b == 0 && a == 0){
    Serial.print(F("10010100\n"));
  }else if(h == 1 && g ==0 && f == 0 && e ==1 && d == 0 && c == 1 && b == 0 && a == 1){
    Serial.print(F("10010101\n"));
  }else if(h == 1 && g ==0 && f == 0 && e ==1 && d == 0 && c == 1 && b == 1 && a == 0){
    Serial.print(F("10010110\n"));
  }else if(h == 1 && g ==0 && f == 0 && e ==1 && d == 0 && c == 1 && b == 1 && a == 1){
    Serial.print(F("10010111\n"));
  }else if(h == 1 && g ==0 && f == 0 && e ==1 && d == 1 && c == 0 && b == 0 && a == 0){
    Serial.print(F("10011000\n"));
  }else if(h == 1 && g ==0 && f == 0 && e ==1 && d == 1 && c == 0 && b == 0 && a == 1){
    Serial.print(F("10011001\n"));
  }else if(h == 1 && g ==0 && f == 0 && e ==1 && d == 1 && c == 0 && b == 1 && a == 0){
    Serial.print(F("10011010\n"));
  }else if(h == 1 && g ==0 && f == 0 && e ==1 && d == 1 && c == 0 && b == 1 && a == 1){
    Serial.print(F("10011011\n"));
  }else if(h == 1 && g ==0 && f == 0 && e ==1 && d == 1 && c == 1 && b == 0 && a == 0){
    Serial.print(F("10011100\n"));
  }else if(h == 1 && g ==0 && f == 0 && e ==1 && d == 1 && c == 1 && b == 0 && a == 1){
    Serial.print(F("10011101\n"));
  }else if(h == 1 && g ==0 && f == 0 && e ==1 && d == 1 && c == 1 && b == 1 && a == 0){
    Serial.print(F("10011110\n"));
  }else if(h == 1 && g ==0 && f == 0 && e ==1 && d == 1 && c == 1 && b == 1 && a == 1){
    Serial.print(F("10011111\n"));
  }else if(h == 1 && g ==0 && f == 1 && e ==0 && d == 0 && c == 0 && b == 0 && a == 0){
    Serial.print(F("10100000\n"));
  }else if(h == 1 && g ==0 && f == 1 && e ==0 && d == 0 && c == 0 && b == 0 && a == 1){
    Serial.print(F("10100001\n"));
  }else if(h == 1 && g ==0 && f == 1 && e ==0 && d == 0 && c == 0 && b == 1 && a == 0){
    Serial.print(F("10100010\n"));
  }else if(h == 1 && g ==0 && f == 1 && e ==0 && d == 0 && c == 0 && b == 1 && a == 1){
    Serial.print(F("10100011\n"));
  }else if(h == 1 && g ==0 && f == 1 && e ==0 && d == 0 && c == 1 && b == 0 && a == 0){
    Serial.print(F("10100100\n"));
  }else if(h == 1 && g ==0 && f == 1 && e ==0 && d == 0 && c == 1 && b == 0 && a == 1){
    Serial.print(F("10100101\n"));
  }else if(h == 1 && g ==0 && f == 1 && e ==0 && d == 0 && c == 1 && b == 1 && a == 0){
    Serial.print(F("10100110\n"));
  }else if(h == 1 && g ==0 && f == 1 && e ==0 && d == 0 && c == 1 && b == 1 && a == 1){
    Serial.print(F("10100111\n"));
  }else if(h == 1 && g ==0 && f == 1 && e ==0 && d == 1 && c == 0 && b == 0 && a == 0){
    Serial.print(F("10101000\n"));
  }else if(h == 1 && g ==0 && f == 1 && e ==0 && d == 1 && c == 0 && b == 0 && a == 1){
    Serial.print(F("10101001\n"));
  }else if(h == 1 && g ==0 && f == 1 && e ==0 && d == 1 && c == 0 && b == 1 && a == 0){
    Serial.print(F("10101010\n"));
  }else if(h == 1 && g ==0 && f == 1 && e ==0 && d == 1 && c == 0 && b == 1 && a == 1){
    Serial.print(F("10101011\n"));
  }else if(h == 1 && g ==0 && f == 1 && e ==0 && d == 1 && c == 1 && b == 0 && a == 0){
    Serial.print(F("10101100\n"));
  }else if(h == 1 && g ==0 && f == 1 && e ==0 && d == 1 && c == 1 && b == 0 && a == 1){
    Serial.print(F("10101101\n"));
  }else if(h == 1 && g ==0 && f == 1 && e ==0 && d == 1 && c == 1 && b == 1 && a == 0){
    Serial.print(F("10101110\n"));
  }else if(h == 1 && g ==0 && f == 1 && e ==0 && d == 1 && c == 1 && b == 1 && a == 1){
    Serial.print(F("10101111\n"));
  }else if(h == 1 && g ==0 && f == 1 && e ==1 && d == 0 && c == 0 && b == 0 && a == 0){
    Serial.print(F("10110000\n"));
  }else if(h == 1 && g ==0 && f == 1 && e ==1 && d == 0 && c == 0 && b == 0 && a == 1){
    Serial.print(F("10110001\n"));
  }else if(h == 1 && g ==0 && f == 1 && e ==1 && d == 0 && c == 0 && b == 1 && a == 0){
    Serial.print(F("10110010\n"));
  }else if(h == 1 && g ==0 && f == 1 && e ==1 && d == 0 && c == 0 && b == 1 && a == 1){
    Serial.print(F("10110011\n"));
  }else if(h == 1 && g ==0 && f == 1 && e ==1 && d == 0 && c == 1 && b == 0 && a == 0){
    Serial.print(F("10110100\n"));
  }else if(h == 1 && g ==0 && f == 1 && e ==1 && d == 0 && c == 1 && b == 0 && a == 1){
    Serial.print(F("10110101\n"));
  }else if(h == 1 && g ==0 && f == 1 && e ==1 && d == 0 && c == 1 && b == 1 && a == 0){
    Serial.print(F("10110110\n"));
  }else if(h == 1 && g ==0 && f == 1 && e ==1 && d == 0 && c == 1 && b == 1 && a == 1){
    Serial.print(F("10110111\n"));
  }else if(h == 1 && g ==0 && f == 1 && e ==1 && d == 1 && c == 0 && b == 0 && a == 0){
    Serial.print(F("10111000\n"));
  }else if(h == 1 && g ==0 && f == 1 && e ==1 && d == 1 && c == 0 && b == 0 && a == 1){
    Serial.print(F("10111001\n"));
  }else if(h == 1 && g ==0 && f == 1 && e ==1 && d == 1 && c == 0 && b == 1 && a == 0){
    Serial.print(F("10111010\n"));
  }else if(h == 1 && g ==0 && f == 1 && e ==1 && d == 1 && c == 0 && b == 1 && a == 1){
    Serial.print(F("10111011\n"));
  }else if(h == 1 && g ==0 && f == 1 && e ==1 && d == 1 && c == 1 && b == 0 && a == 0){
    Serial.print(F("10111100\n"));
  }else if(h == 1 && g ==0 && f == 1 && e ==1 && d == 1 && c == 1 && b == 0 && a == 1){
    Serial.print(F("10111101\n"));
  }else if(h == 1 && g ==0 && f == 1 && e ==1 && d == 1 && c == 1 && b == 1 && a == 0){
    Serial.print(F("10111110\n"));
  }else if(h == 1 && g ==0 && f == 1 && e ==1 && d == 1 && c == 1 && b == 1 && a == 1){
    Serial.print(F("10111111\n"));
  }else if(h == 1 && g ==1 && f == 0 && e ==0 && d == 0 && c == 0 && b == 0 && a == 0){
    Serial.print(F("11000000\n"));
  }else if(h == 1 && g ==1 && f == 0 && e ==0 && d == 0 && c == 0 && b == 0 && a == 1){
    Serial.print(F("11000001\n"));
  }else if(h == 1 && g ==1 && f == 0 && e ==0 && d == 0 && c == 0 && b == 1 && a == 0){
    Serial.print(F("11000010\n"));
  }else if(h == 1 && g ==1 && f == 0 && e ==0 && d == 0 && c == 0 && b == 1 && a == 1){
    Serial.print(F("11000011\n"));
  }else if(h == 1 && g ==1 && f == 0 && e ==0 && d == 0 && c == 1 && b == 0 && a == 0){
    Serial.print(F("11000100\n"));
  }else if(h == 1 && g ==1 && f == 0 && e ==0 && d == 0 && c == 1 && b == 0 && a == 1){
    Serial.print(F("11000101\n"));
  }else if(h == 1 && g ==1 && f == 0 && e ==0 && d == 0 && c == 1 && b == 1 && a == 0){
    Serial.print(F("11000110\n"));
  }else if(h == 1 && g ==1 && f == 0 && e ==0 && d == 0 && c == 1 && b == 1 && a == 1){
    Serial.print(F("11000111\n"));
  }else if(h == 1 && g ==1 && f == 0 && e ==0 && d == 1 && c == 0 && b == 0 && a == 0){
    Serial.print(F("11001000\n"));
  }else if(h == 1 && g ==1 && f == 0 && e ==0 && d == 1 && c == 0 && b == 0 && a == 1){
    Serial.print(F("11001001\n"));
  }else if(h == 1 && g ==1 && f == 0 && e ==0 && d == 1 && c == 0 && b == 1 && a == 0){
    Serial.print(F("11001010\n"));
  }else if(h == 1 && g ==1 && f == 0 && e ==0 && d == 1 && c == 0 && b == 1 && a == 1){
    Serial.print(F("11001011\n"));
  }else if(h == 1 && g ==1 && f == 0 && e ==0 && d == 1 && c == 1 && b == 0 && a == 0){
    Serial.print(F("11001100\n"));
  }else if(h == 1 && g ==1 && f == 0 && e ==0 && d == 1 && c == 1 && b == 0 && a == 1){
    Serial.print(F("11001101\n"));
  }else if(h == 1 && g ==1 && f == 0 && e ==0 && d == 1 && c == 1 && b == 1 && a == 0){
    Serial.print(F("11001110\n"));
  }else if(h == 1 && g ==1 && f == 0 && e ==0 && d == 1 && c == 1 && b == 1 && a == 1){
    Serial.print(F("11001111\n"));
  }else if(h == 1 && g ==1 && f == 0 && e ==1 && d == 0 && c == 0 && b == 0 && a == 0){
    Serial.print(F("11010000\n"));
  }else if(h == 1 && g ==1 && f == 0 && e ==1 && d == 0 && c == 0 && b == 0 && a == 1){
    Serial.print(F("11010001\n"));
  }else if(h == 1 && g ==1 && f == 0 && e ==1 && d == 0 && c == 0 && b == 1 && a == 0){
    Serial.print(F("11010010\n"));
  }else if(h == 1 && g ==1 && f == 0 && e ==1 && d == 0 && c == 0 && b == 1 && a == 1){
    Serial.print(F("11010011\n"));
  }else if(h == 1 && g ==1 && f == 0 && e ==1 && d == 0 && c == 1 && b == 0 && a == 0){
    Serial.print(F("11010100\n"));
  }else if(h == 1 && g ==1 && f == 0 && e ==1 && d == 0 && c == 1 && b == 0 && a == 1){
    Serial.print(F("11010101\n"));
  }else if(h == 1 && g ==1 && f == 0 && e ==1 && d == 0 && c == 1 && b == 1 && a == 0){
    Serial.print(F("11010110\n"));
  }else if(h == 1 && g ==1 && f == 0 && e ==1 && d == 0 && c == 1 && b == 1 && a == 1){
    Serial.print(F("11010111\n"));
  }else if(h == 1 && g ==1 && f == 0 && e ==1 && d == 1 && c == 0 && b == 0 && a == 0){
    Serial.print(F("11011000\n"));
  }else if(h == 1 && g ==1 && f == 0 && e ==1 && d == 1 && c == 0 && b == 0 && a == 1){
    Serial.print(F("11011001\n"));
  }else if(h == 1 && g ==1 && f == 0 && e ==1 && d == 1 && c == 0 && b == 1 && a == 0){
    Serial.print(F("11011010\n"));
  }else if(h == 1 && g ==1 && f == 0 && e ==1 && d == 1 && c == 0 && b == 1 && a == 1){
    Serial.print(F("11011011\n"));
  }else if(h == 1 && g ==1 && f == 0 && e ==1 && d == 1 && c == 1 && b == 0 && a == 0){
    Serial.print(F("11011100\n"));
  }else if(h == 1 && g ==1 && f == 0 && e ==1 && d == 1 && c == 1 && b == 0 && a == 1){
    Serial.print(F("11011101\n"));
  }else if(h == 1 && g ==1 && f == 0 && e ==1 && d == 1 && c == 1 && b == 1 && a == 0){
    Serial.print(F("11011110\n"));
  }else if(h == 1 && g ==1 && f == 0 && e ==1 && d == 1 && c == 1 && b == 1 && a == 1){
    Serial.print(F("11011111\n"));
  }else if(h == 1 && g ==1 && f == 1 && e ==0 && d == 0 && c == 0 && b == 0 && a == 0){
    Serial.print(F("11100000\n"));
  }else if(h == 1 && g ==1 && f == 1 && e ==0 && d == 0 && c == 0 && b == 0 && a == 1){
    Serial.print(F("11100001\n"));
  }else if(h == 1 && g ==1 && f == 1 && e ==0 && d == 0 && c == 0 && b == 1 && a == 0){
    Serial.print(F("11100010\n"));
  }else if(h == 1 && g ==1 && f == 1 && e ==0 && d == 0 && c == 0 && b == 1 && a == 1){
    Serial.print(F("11100011\n"));
  }else if(h == 1 && g ==1 && f == 1 && e ==0 && d == 0 && c == 1 && b == 0 && a == 0){
    Serial.print(F("11100100\n"));
  }else if(h == 1 && g ==1 && f == 1 && e ==0 && d == 0 && c == 1 && b == 0 && a == 1){
    Serial.print(F("11100101\n"));
  }else if(h == 1 && g ==1 && f == 1 && e ==0 && d == 0 && c == 1 && b == 1 && a == 0){
    Serial.print(F("11100110\n"));
  }else if(h == 1 && g ==1 && f == 1 && e ==0 && d == 0 && c == 1 && b == 1 && a == 1){
    Serial.print(F("11100111\n"));
  }else if(h == 1 && g ==1 && f == 1 && e ==0 && d == 1 && c == 0 && b == 0 && a == 0){
    Serial.print(F("11101000\n"));
  }else if(h == 1 && g ==1 && f == 1 && e ==0 && d == 1 && c == 0 && b == 0 && a == 1){
    Serial.print(F("11101001\n"));
  }else if(h == 1 && g ==1 && f == 1 && e ==0 && d == 1 && c == 0 && b == 1 && a == 0){
    Serial.print(F("11101010\n"));
  }else if(h == 1 && g ==1 && f == 1 && e ==0 && d == 1 && c == 0 && b == 1 && a == 1){
    Serial.print(F("11101011\n"));
  }else if(h == 1 && g ==1 && f == 1 && e ==0 && d == 1 && c == 1 && b == 0 && a == 0){
    Serial.print(F("11101100\n"));
  }else if(h == 1 && g ==1 && f == 1 && e ==0 && d == 1 && c == 1 && b == 0 && a == 1){
    Serial.print(F("11101101\n"));
  }else if(h == 1 && g ==1 && f == 1 && e ==0 && d == 1 && c == 1 && b == 1 && a == 0){
    Serial.print(F("11101110\n"));
  }else if(h == 1 && g ==1 && f == 1 && e ==0 && d == 1 && c == 1 && b == 1 && a == 1){
    Serial.print(F("11101111\n"));
  }else if(h == 1 && g ==1 && f == 1 && e ==1 && d == 0 && c == 0 && b == 0 && a == 0){
    Serial.print(F("11110000\n"));
  }else if(h == 1 && g ==1 && f == 1 && e ==1 && d == 0 && c == 0 && b == 0 && a == 1){
    Serial.print(F("11110001\n"));
  }else if(h == 1 && g ==1 && f == 1 && e ==1 && d == 0 && c == 0 && b == 1 && a == 0){
    Serial.print(F("11110010\n"));
  }else if(h == 1 && g ==1 && f == 1 && e ==1 && d == 0 && c == 0 && b == 1 && a == 1){
    Serial.print(F("11110011\n"));
  }else if(h == 1 && g ==1 && f == 1 && e ==1 && d == 0 && c == 1 && b == 0 && a == 0){
    Serial.print(F("11110100\n"));
  }else if(h == 1 && g ==1 && f == 1 && e ==1 && d == 0 && c == 1 && b == 0 && a == 1){
    Serial.print(F("11110101\n"));
  }else if(h == 1 && g ==1 && f == 1 && e ==1 && d == 0 && c == 1 && b == 1 && a == 0){
    Serial.print(F("11110110\n"));
  }else if(h == 1 && g ==1 && f == 1 && e ==1 && d == 0 && c == 1 && b == 1 && a == 1){
    Serial.print(F("11110111\n"));
  }else if(h == 1 && g ==1 && f == 1 && e ==1 && d == 1 && c == 0 && b == 0 && a == 0){
    Serial.print(F("11111000\n"));
  }else if(h == 1 && g ==1 && f == 1 && e ==1 && d == 1 && c == 0 && b == 0 && a == 1){
    Serial.print(F("11111001\n"));
  }else if(h == 1 && g ==1 && f == 1 && e ==1 && d == 1 && c == 0 && b == 1 && a == 0){
    Serial.print(F("11111010\n"));
  }else if(h == 1 && g ==1 && f == 1 && e ==1 && d == 1 && c == 0 && b == 1 && a == 1){
    Serial.print(F("11111011\n"));
  }else if(h == 1 && g ==1 && f == 1 && e ==1 && d == 1 && c == 1 && b == 0 && a == 0){
    Serial.print(F("11111100\n"));
  }else if(h == 1 && g ==1 && f == 1 && e ==1 && d == 1 && c == 1 && b == 0 && a == 1){
    Serial.print(F("11111101\n"));
  }else if(h == 1 && g ==1 && f == 1 && e ==1 && d == 1 && c == 1 && b == 1 && a == 0){
    Serial.print(F("11111110\n"));
  }else if(h == 1 && g ==1 && f == 1 && e ==1 && d == 1 && c == 1 && b == 1 && a == 1){
    Serial.print(F("11111111\n"));
    closs_point++;
  }
  
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  
  pinMode(p1,OUTPUT);//モーター１
  pinMode(p2,OUTPUT);
  pinMode(p3,OUTPUT);
  pinMode(p4,OUTPUT);//モーター２
  pinMode(p5,OUTPUT);
  pinMode(p6,OUTPUT);
  pinMode(p7,OUTPUT);//モーター３
  pinMode(p8,OUTPUT);
  pinMode(p9,OUTPUT);
  pinMode(p10,OUTPUT);//モーター４
  pinMode(p11,OUTPUT);
  pinMode(p12,OUTPUT);
  pinMode(p13,OUTPUT);//モーター５
  pinMode(p14,OUTPUT);
  pinMode(p15,OUTPUT);
  pinMode(trPin1,INPUT);
  pinMode(trPin2,INPUT);
  pinMode(ServoPin,OUTPUT);

  myservo1.attach(ServoPin);

}

void loop() {
  // put your main code here, to run repeatedly:
  switch(closs_point){
    case 0:
      my_motion_A( trace_a, trace_b, trace_c, trace_d, trace_e, trace_f, trace_g, trace_h);
    case 1:
      my_motion_A( trace_a, trace_b, trace_c, trace_d, trace_e, trace_f, trace_g, trace_h);
    case 2:
      my_catch_SUN();
      my_motion_A( trace_e, trace_f, trace_g, trace_h, trace_a, trace_b, trace_c, trace_d);
    case 3:
      my_motion_A( trace_g, trace_h, trace_a, trace_b, trace_c, trace_d, trace_e, trace_f);
    case 4:
      my_motion_A( trace_a, trace_b, trace_c, trace_d, trace_e, trace_f, trace_g, trace_h);
    case 5:
      my_motion_A( trace_a, trace_b, trace_c, trace_d, trace_e, trace_f, trace_g, trace_h);
    case 6:
      my_motion_A( trace_c, trace_d, trace_e, trace_f, trace_g, trace_h, trace_a, trace_b);
    case 7:
      my_rotation(-1);
      my_motion_A( trace_c, trace_d, trace_e, trace_f, trace_g, trace_h, trace_a, trace_b);
      delay(500);
      my_catch_STAND();
      my_motion_A( trace_c, trace_d, trace_e, trace_f, trace_g, trace_h, trace_a, trace_b);
    case 8:
      my_catch_STAND();
      my_motion_A( trace_c, trace_d, trace_e, trace_f, trace_g, trace_h, trace_a, trace_b);
      delay(500);
      my_catch_STAND();
      my_motion_A( trace_g, trace_h, trace_a, trace_b, trace_c, trace_d,trace_e, trace_f);
    case 9:
      my_motion_A( trace_g, trace_h, trace_a, trace_b, trace_c, trace_d,trace_e, trace_f);
    case 10:
      my_rotation(1);
      my_motion_A( trace_g, trace_h, trace_a, trace_b, trace_c, trace_d,trace_e, trace_f);
    case 11:
      my_motion_A( trace_e, trace_f, trace_g, trace_h, trace_a, trace_b, trace_c, trace_d);
    case 12:
      my_motion_A( trace_e, trace_f, trace_g, trace_h, trace_a, trace_b, trace_c, trace_d);
    case 13:
      my_rotation(1);
       my_motion_A( trace_a, trace_b, trace_c, trace_d, trace_e, trace_f, trace_g, trace_h);
    case 14:
       my_motion_A( trace_a, trace_b, trace_c, trace_d, trace_e, trace_f, trace_g, trace_h);
    case 15:
       my_release_TOWER();
  }
}



