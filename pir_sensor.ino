int pir=9;
int led=13;
void setup()
{
  pinMode(led,OUTPUT);
  pinMode(pir,INPUT);
  Serial.begin(9600);
}
void loop()
{
  int a=digitalRead(pir);
  if(a==1)
  {
    digitalWrite(led,HIGH);
    delay(1000);
    Serial.println("Motion detected");
  }
  else
  {
    digitalWrite(led,LOW);
    Serial.println("Motion not detected");
  }
}
