#define wet 209
#define dry  550
void setup(){
  Serial.begin(9600);
}
void loop(){
  int sensor_value=analogRead(A0);
  float moisture=map(sensor_value,wet,dry,100,0);
  Serial.println("moisture1:"+String(moisture));
  delay(100);
  sensor_value=analogRead(A1);
  moisture=map(sensor_value,wet,dry,100,0);
  Serial.println("moisture2:"+String(moisture));
  delay(100);
  delay(4000);
  
  
}
