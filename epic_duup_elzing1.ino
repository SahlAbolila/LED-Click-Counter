
int red = 10 ;
int yellow = 5 ;
int green = 2 ;
int button = 12 ;
int reading = 0 ;
int counter = 0 ;

void setup()
  
{
  
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(button,INPUT);
  
}

void loop()
  
{ 
  
  reading = digitalRead(button);
  
  if ( reading == HIGH )
  { 
    
    counter++;
    
    if ( counter == 1 )
    { digitalWrite(red,HIGH); }
    
    else if ( counter == 2 )
    { digitalWrite(yellow,HIGH); }
    
    else if ( counter == 3 )
    { digitalWrite(green,HIGH); }
    
    else
    { 
      
      digitalWrite(red,LOW);
      digitalWrite(yellow,LOW);
      digitalWrite(green,LOW);
      counter = 0 ;
      
    }
    
    delay (250);
    
  }
  
}