#include "config.h"

void conf(){
   //Registro DDR
   DDRD=0xFF; //como salidas digitales
   DDRB &= ~(1 << 0); //PIN 8 DE ARDUINO COMO ENTRADA
   DDRB |= (1 << 3); //pin 11 del Arduino como salida
}