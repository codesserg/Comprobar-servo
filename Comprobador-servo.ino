#include <Servo.h>

Servo servo;  // Crea un objeto servo para controlar el servo
int angle;

void setup() {
  Serial.begin(9600);
  servo.attach(11);  // Conecta el servo al pin 9 (cambia el pin si es necesario)

    servo.write(0);  // Mueve el servo al ángulo deseado
    delay(1500);  // Espera un poco para que el servo se mueva
  
  delay(1000);  // Pausa antes de probar el rango más allá de 180 grados
  
  servo.write(90);
  delay(2000);
  servo.write(180);

  delay(5000);
  servo.write(360);
  delay(5000);

 
}

void loop() {
  // El loop está vacío porque todo se realiza en el setup
}
