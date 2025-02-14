const int movPin = 2;
int g;
void setup() {   
  Serial.begin(9600); 
  pinMode(movPin, INPUT);   
  pinMode(12, OUTPUT); 
  pinMode(8, OUTPUT);  
  pinMode(13, OUTPUT); 
  } void loop(){
   int val = digitalRead(movPin);
   Serial.println(val); 
   if ((val==1)and(g==0)){
     digitalWrite(8, HIGH);
     digitalWrite(12, HIGH);    
     digitalWrite(13, HIGH);
     g=1;    
     delay(2000);
     val = digitalRead(movPin);   
     if ((val==1)and(g==1)){
      digitalWrite(8, LOW);    
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);     
      g=0;
      delay(2000);    
    }
   }
   delay(100); 
   }