#define IN1  5        // L298N #1 Pada 1 motor kanan
#define IN2  4        // L298N #1 Pada 2 motor kanan
#define IN3  6        // L298N #1 Pada 3 motor kiri
#define IN4  7        // L298N #1 Pada 4 motor kiri

void setup (){
 pinMode (IN1, OUTPUT);
 pinMode (IN2, OUTPUT);
 pinMode (IN3, OUTPUT);
 pinMode (IN4, OUTPUT);
 
}
void loop (){
  digitalWrite(IN3, HIGH); //MAJU MOTOR KIRI 
  digitalWrite(IN4, LOW); //MAJU MOTOR KIRI 
  digitalWrite(IN1, HIGH); //MAJU MOTOR KANAN
  digitalWrite(IN2, LOW); //MAJU MOTOR KANAN
} 
//BELOK KIRI
void loop(){
  digitalWrite(IN3, LOW); //DIAM MOTOR KIRI
  digitalWrite(IN4, LOW); //DIAM MOTOR KIRI
  digitalWrite(IN1, HIGH); //MAJU MOTOR KANAN
  digitalWrite(IN2, LOW); //MAJU MOTOR KANAN
}

//BELOK KANAN
vid loop (){
  digitalWrite(IN3, HIGH); //MAJU MOTOR KIRI 
  digitalWrite(IN4, LOW); //MAJU MOTOR KIRI 
  digitalWrite(IN1, LOW); //DIAM MOTOR KANAN
  digitalWrite(IN2, LOW);  //DIAM MOTOR KANAN
}
}
=
