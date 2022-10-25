#define led1 5
int potVal = 0;
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(115200);
  pinMode (led1,OUTPUT);
  
}

// the loop routine runs over and over again forever:
void loop() {
  for (int i=255;i>=0;i-=5){
   analogWrite(led1,i);
   delay(50);
}
 delay(500);
 
// for(int i =0;i<=255;i+=5){
//  analogWrite(led1,i);
//  delay(50);
  
 }
