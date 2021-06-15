int pirsensor = 0;
int pirsensor2 = 0;

void setup()
{
  //setup code which runs once
  pinMode(13, OUTPUT);
  pinMode(2, INPUT);
  pinMode(4, INPUT);
 
}
//counts the number of people who have entered the room through the entrance
int count = 0;
//counts the number of people who have left the room through the exit
int count2 = 0;
void loop()
{
  //main code which runs repeatedly
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
