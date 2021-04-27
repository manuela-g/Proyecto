#ifndef LED_H
#define LED_H
void led (int media){
if (media > 35)
  {
    digitalWrite(led , HIGH);   
    delay(500);                   
    if (media <= 35)
    {
      digitalWrite(led , LOW);    
      delay(500);                  
    }
  }
}
#endif