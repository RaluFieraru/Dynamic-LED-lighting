char labview;
String data; 

void setup(){
  Serial.begin(9600);
  for(int i=2; i<14; i++)
    {pinMode(i, OUTPUT);}
}

void loop(){
   if(Serial.available())
  {
    labview = Serial.read();
    delay(2);
    data += labview;
    if(labview=='\n')
    {
      if(data[0]=='a')
      {digitalWrite(2,HIGH);}
      if(data[0]=='*')
      {digitalWrite(2,LOW);}
      
      if(data[1]=='b')
      {digitalWrite(3,HIGH);}
      if(data[1]=='*')
      {digitalWrite(3,LOW);}
      
      if(data[2]=='c')
      {digitalWrite(4,HIGH);}
      if(data[2]=='*')
      {digitalWrite(4,LOW);}
      
      if(data[3]=='d')
      {digitalWrite(5,HIGH);}
      if(data[3]=='*')
      {digitalWrite(5,LOW);}

      if(data[4]=='e')
      {digitalWrite(6,HIGH);}
      if(data[4]=='*')
      {digitalWrite(6,LOW);}

      if(data[5]=='f')
      {digitalWrite(7,HIGH);}
      if(data[5]=='*')
      {digitalWrite(7,LOW);}

      if(data[6]=='g')
      {digitalWrite(8,HIGH);}
      if(data[6]=='*')
      {digitalWrite(8,LOW);}

      if(data[7]=='h')
      {digitalWrite(9,HIGH);}
      if(data[7]=='*')
      {digitalWrite(9,LOW);}

      if(data[8]=='i')
      {digitalWrite(10,HIGH);}
      if(data[8]=='*')
      {digitalWrite(10,LOW);}

      if(data[9]=='j')
      {digitalWrite(11,HIGH);}
      if(data[9]=='*')
      {digitalWrite(11,LOW);}

      if(data[10]=='k')
      {digitalWrite(12,HIGH);}
      if(data[10]=='*')
      {digitalWrite(12,LOW);}

      if(data[11]=='l')
      {digitalWrite(13,HIGH);}
      if(data[11]=='*')
      {digitalWrite(13,LOW);}

      data="";
      
      delay(50);      
      
    }
  }
}
