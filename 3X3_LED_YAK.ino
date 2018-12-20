int gelen;
int Led1=10;
int Led2=2;
int Led3=3;
int Led4=4;
int Led5=5;
int Led6=6;
int Led7=7;
int Led8=8;
int Led9=9;
void setup() {

Serial.begin(9600);
pinMode(Led1,OUTPUT);
pinMode(Led2,OUTPUT);
pinMode(Led3,OUTPUT);
pinMode(Led4,OUTPUT);
pinMode(Led5,OUTPUT);
pinMode(Led6,OUTPUT);
pinMode(Led7,OUTPUT);
pinMode(Led8,OUTPUT);
pinMode(Led9,OUTPUT);
}
void loop() 
{
  if(Serial.available() >0) // Serial haberleşmenin aktif olup olmadığının kontrolü
    { 
      gelen = Serial.read(); // Serialden gelen veri "gelen" değişkenine yazılır
      if(gelen == '1')  // Gelen verilerin kontrolü yapılarak ilgili ledler yakılır.
      {
        digitalWrite(Led1,HIGH);
      }
      if(gelen == 'a')
      {
        digitalWrite(Led1,LOW);
      }
      if(gelen == '2')
      {
        digitalWrite(Led2,HIGH);
      }
      if(gelen == 'b')
      {
        digitalWrite(Led2,LOW);
      }
      if(gelen == '3')
      {
        digitalWrite(Led3,HIGH);
      }
      if(gelen == 'c')
      {
        digitalWrite(Led3,LOW);
      }
      if(gelen == '4')
      {
        digitalWrite(Led4,HIGH);
      }
      if(gelen == 'd')
      {
        digitalWrite(Led4,LOW);
      }
          if(gelen == '5')  // Gelen verilerin kontrolü yapılarak ilgili ledler yakılır.
      {
        digitalWrite(Led5,HIGH);
      }
      if(gelen == 'e')
      {
        digitalWrite(Led5,LOW);
      }
      if(gelen == '6')
      {
        digitalWrite(Led6,HIGH);
      }
      if(gelen == 'f')
      {
        digitalWrite(Led6,LOW);
      }
      if(gelen == '7')
      {
        digitalWrite(Led7,HIGH);
      }
       if(gelen == 'g')
      {
        digitalWrite(Led7,LOW);
      }
      if(gelen == '8')
      {
        digitalWrite(Led8,HIGH);
      }
      if(gelen == 'h')
      {
        digitalWrite(Led8,LOW);
      }
      if(gelen == '9')
      {
        digitalWrite(Led9,HIGH);
      }
      if(gelen == 'j')
      {
        digitalWrite(Led9,LOW);
      }
    }
}


  
