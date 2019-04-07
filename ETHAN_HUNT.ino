 int rm1=5;
int rm2=6;
int lm1=10;
int lm2=11;
void setup()
{
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(A0,INPUT);
  pinMode(A2,INPUT);
  pinMode(A4,INPUT);
  Serial.begin(9600);
}
void loop()
{
  int d1=analogRead(A0);
  int d2=analogRead(A2);
  int d3=analogRead(A4);
  if(d1>550&&d2<550&&d3>550)
  {
    Serial.println("FORWARD");
    Serial.println(d1);
    Serial.println(d2);
    Serial.println(d3);
    analogWrite(rm1,180);
    analogWrite(rm2,0);
    analogWrite(lm1,180);
    analogWrite(lm2,0);
  }
  else if(d1<550&&d2<550&&d3>550)
  {
    Serial.println("LEFT");
    analogWrite(rm1,180);
    analogWrite(rm2,0);
    analogWrite(lm1,0);
    analogWrite(lm2,0);
  }
  else if(d1>550&&d2<550&&d2<550)
  {
    Serial.println("RIGHT");
    analogWrite(rm1,0);
    analogWrite(rm2,0);
    analogWrite(lm1,180);
    analogWrite(lm2,0);
  }
  else if(d1<550&&d2<550&&d3<550)
  {
    Serial.println("STOP");
    analogWrite(rm1,0);
    analogWrite(rm2,0);
    analogWrite(lm1,0);
    analogWrite(lm2,0);
  }
  else if(d1>550&&d2>550&d3>550)
  {
    Serial.println("BACK");
    Serial.println(d1);
    Serial.println(d2);
    Serial.println(d3);
    analogWrite(rm1,0);
    analogWrite(rm2,180);
    analogWrite(lm1,0);
    analogWrite(lm2,180);
  }
  else if(d1>550&&d2>550&&d3<550)
  {
    Serial.println("RIGHT");
    analogWrite(rm1,0);
    analogWrite(rm2,0);
    analogWrite(lm1,180);
    analogWrite(lm2,0);
  }
  else if(d1<550&&d2>550&&d3>550)
  {
    Serial.println("LEFT");
    analogWrite(rm1,180);
    analogWrite(rm2,0);
    analogWrite(lm1,0);
    analogWrite(lm2,0);
  }
  else
  {
    Serial.println("NHI CHALEGA");
    analogWrite(rm1,0);
    analogWrite(rm2,0);
    analogWrite(lm1,0);
    analogWrite(lm2,0);
  }
}
