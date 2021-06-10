int pirsensor = 0;
int pirsensor2 = 0;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(2, INPUT);
  pinMode(4, INPUT);
 
}

int count = 0;
int count2 = 0;
void loop()
{
  
  pirsensor = digitalRead(2);
  pirsensor2 = digitalRead(4);
  
  if (pirsensor == HIGH)
  { 
    digitalWrite(13, HIGH);
    count++;  
  }
  
  if(pirsensor2 == HIGH)
    {	
      count2++;
      if(count - count2 == 0)
      {	
        digitalWrite(13, LOW);
      }
     }

  delay(10);
}