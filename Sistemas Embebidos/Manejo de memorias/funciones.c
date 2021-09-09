#include "funciones.h"
#include "config.h"
//Andres Guapi

void nvalor(uint8_t *direccion, uint8_t *valor){
   int direccio, valo;
   //if(PINB & (1<<PORTD0)){//Verificamos si el pulsador esta presionado
      direccio= numeroAleatorio(1023);
      valo= numeroAleatorio(255);
      eeprom_write_byte(direccio,valo);
      *direccion= direccio;
      *valor= valo;
   //}
}

uint8_t numeroAleatorio(int cant){
 return random()%cant; //valor aleatorio entre [0-cant)
}