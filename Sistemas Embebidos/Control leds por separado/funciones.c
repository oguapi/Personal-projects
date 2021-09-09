#include "funciones.h"
#include "config.h"

//Andres Guapi Mora

void blin(int *estado1,int *estado2,int *estado3){

   if(PINB & (1<<PB1)){//verificamos si el pulsador del pin PB1 esta presionado
      if(*estado1 == 0){
      PORTB |= ((1 << PB2)); //asignar 1 (encender) al puerto b2 
      _delay_ms (1000);
      *estado1=1;//cambiamos el estado a 1(encendido) con un marcador para que se guarde
      } else{
	 PORTB&= ~((1<< PB2));
	 *estado1=0;//cambiamos el estado a 0(apagado)
	 _delay_ms(1000);
      }
   }
   if(PINB & (1<<PB6)){
      if( *estado2 == 0){
      PORTB |= ((1 << PB3)); //asignar 1 al puerto b3 (se apaga el B2 si no estuviera |)
      _delay_ms (1000);
      *estado2=1;
      } else{
	 PORTB &= ~(1<<PB3);
	 *estado2=0;
	 _delay_ms(1000);
      }
   }
   if(PINB &(1<<PB7)){
//      if(~(PINB & (1<<PB5))){
      if( *estado3 == 0){
      *estado3=1;//cambiamos el estado a encendido
      PORTB |= ((1 << PB5)); //asignar 1 al puerto b5 
      _delay_ms (1000);
      
      } else{
	 PORTB &= ~(1<<PB5);//apagamos el led del pin PB5
	 *estado3=0;//cambiamos el estado a apagado
	 _delay_ms(1000);//ponemos un delay para que no se prenda enseguida
      }
      
   }
}