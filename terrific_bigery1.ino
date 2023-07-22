void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);

}
void loop() {
  // put your main code here, to run repeatedly:
char reading;
if(Serial.available()>0){
reading=Serial.read();
switch(reading) {
 
 case 'F':

digitalWrite(2,HIGH);
digitalWrite(3,LOW);
digitalWrite(4,HIGH);
digitalWrite(5,LOW);
break;
 
 case 'R':
 
   digitalWrite(2,HIGH);
digitalWrite(3,LOW);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
break;
 
  case 'L':
  
   digitalWrite(2,LOW);
digitalWrite(3,LOW);
digitalWrite(4,HIGH);
digitalWrite(5,LOW);
  break;
   
    case 'B':
  
   digitalWrite(2,LOW);
digitalWrite(3,HIGH);
digitalWrite(4,LOW);
digitalWrite(5,HIGH);

 case 'S':
  
   digitalWrite(2,LOW);
digitalWrite(3,LOW);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
   }
}
}