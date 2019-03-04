

int LDRpin=A0;
int LDRvalor=0;
int LDRled=13;
float LDRvoltaje=0.0;
void setup(){
 pinMode(LDRpin,INPUT); 
 pinMode(LDRled,OUTPUT); 
 Serial.begin(9600);
}
void loop(){
  LDRvalor=analogRead(LDRpin);
  LDRvoltaje=LDRvalor*(5.0/1023.0);
  Serial.print("Voltaje LDR: ");
  Serial.println(LDRvoltaje);

  if(LDRvalor<=1.0){
    digitalWrite(LDRled,HIGH);
  }
  else digitalWrite(LDRled,LOW);
}
