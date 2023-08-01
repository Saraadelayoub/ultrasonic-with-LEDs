# define trig 8 
# define echo 7
# define led1 9
# define led2 10
# define led3 11
# define led4 6
  long duration;
  int distance ;
int x;
void setup() {
  for(int i=8 ; i<=11 ; i++){
   pinMode(i,OUTPUT); 
  }
  pinMode(led4,OUTPUT);
  pinMode(echo,INPUT);
}
void loop() 
{  
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  duration = pulseIn(echo, HIGH);
   distance = duration * 0.034 / 2;
  if(distance>=10 && distance<=400)
  {
 x=map(distance,5,400,0,255);
analogWrite(led4,x);
  }
  else{analogWrite(led4,0);}
  
  if(distance>=100 && distance<=400)
  {
 x=map(distance,5,400,0,255);
analogWrite(led3,x);
  }
  else{analogWrite(led3,0);}
  
  if(distance>=200 && distance<=400)
  {
  x=map(distance,5,400,0,255);
analogWrite(led2,x);
  }
  else{analogWrite(led2,0);}
  
    if(distance>=300 && distance<=400)
  {
 x=map(distance,5,400,0,255);
analogWrite(led1,x);
  }
  else{analogWrite(led1,0);} 
  
}