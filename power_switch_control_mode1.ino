// C++ code
//
int led=13;
  int button=8;
  int Reading=0;
void setup()
{
  pinMode(led,OUTPUT);
  pinMode(button,INPUT);
  
}

void loop()
{
  Reading =digitalRead(button);
  if (Reading == HIGH)
  {
    digitalWrite (led,HIGH);
  }
   else
   { 
         digitalWrite (led,LOW);
   }

    
  
}