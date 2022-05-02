void setup()
{
  Serial.begin(9600);
  pinMode(10, OUTPUT);
  pinMode(10, OUTPUT);
  Serial.println("enter the number");
}

void loop()
{
  while(Serial.available()!=0)
  {
    
    int num=Serial.parseInt();
    double s=num*num; // s=sq(num)
    Serial.print("The number is ");
    Serial.print(num);
    Serial.print("Square of the Number");      
    Serial.print(s);
    
    
    
    
    for ( int i=1; i<=s;i++)
    {
      delay(500);
        digitalWrite(10,HIGH);
      delay(500);
        digitalWrite(10,LOW);
    }
    
    double c=num*num*num;
    Serial.print("The Number is");
    Serial.print(num);
    Serial.print("Cube of the number");      
    Serial.print(c);
    
    
    for ( int j=1; j<=c;j++)
    {
      delay(500);
        digitalWrite(5,HIGH);
      delay(500);
        digitalWrite(5,LOW);
    }
  }
}