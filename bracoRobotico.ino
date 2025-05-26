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
  int valorPotenciometroBase = map(mediaAnalogica(pinServoBase), 0, 1023, 0, 180);
  int valorPotenciometroDireito = map(mediaAnalogica(pinServoLadoDireito), 0, 1023, 0, 180);
  int valorPotenciometroEsquerdo = map(mediaAnalogica(pinServoLadoEsquerdo), 0, 1023, 0, 180);
  int valorPotenciometroGarra = map(mediaAnalogica(pinServoGarra), 0, 1023, 0, 180);

  servoBase.write(valorPotenciometroBase);
  servoLadoDireito.write(valorPotenciometroDireito);
  servoLadoEsquerdo.write(valorPotenciometroEsquerdo);
  servoGarra.write(valorPotenciometroGarra);

  delay(20); // Pequeno atraso geral para estabilidade
}
