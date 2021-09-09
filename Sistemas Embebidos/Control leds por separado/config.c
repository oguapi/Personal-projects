#include "config.h"

void conf(){
   //Registro DDR
DDRB |= ((1 << DDB5)); //asignar a puerto b5 como salida//pin 13 de arduino(1es salida, 0 es entrada)
DDRB |= ((1 << DDB3)); //asignar a puerto b3 como salida//pin 11 de arduino
DDRB |= ((1 << DDB2)); //asignar a puerto b2 como salida//pin 10 de arduino
//|= modificamos directamente la asignacion para mantener la asignacion previa
DDRB&= ~(1 << DDB1);
DDRB&= ~(1 << DDB6);
DDRB&= ~(1 << DDB7);

//int estado1=0;
//int estado2=0;
//int estado3=0;
}