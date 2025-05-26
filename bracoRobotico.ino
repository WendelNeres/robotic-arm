#include <Servo.h>

#define pinServoBase A0
#define pinServoLadoDireito A1
#define pinServoLadoEsquerdo A2
#define pinServoGarra A3

Servo servoBase;
Servo servoLadoDireito;
Servo servoLadoEsquerdo;
Servo servoGarra;

int mediaAnalogica(int pino) {
  return (analogRead(pino) + analogRead(pino) + analogRead(pino)) / 3;
}

void setup() {
  servoBase.attach(3);
  servoLadoDireito.attach(5);
  servoLadoEsquerdo.attach(6);
  servoGarra.attach(9);
}

void loop() {

}
