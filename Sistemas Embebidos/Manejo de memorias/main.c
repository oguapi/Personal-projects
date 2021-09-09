#include "config.h"
#include "funciones.h"

uint8_t EEMEM dato0 = 0x0A; //creación de la variable dato de 8 bits en la EEPROM AVR
uint16_t EEMEM dato1 = 0xAABB;
uint8_t EEMEM dato2 = 0x55;
uint8_t EEMEM texto[] = "Hola Mundo";
uint8_t *valor;// variable en la data memori
uint8_t *direccion;

int main(void)
{
  conf();//llamamos a la funcion creada de configuraciones
  //PORTD=0x00; //se inicia a 0
  valor = eeprom_read_byte(&dato2); //en la variable dato de la EEPROM AVR
   //leemos lo de dato2 y guarda en valor
  //eeprom_write_byte(0xF0,0xAB);//le digo la direccion y el valor
  //eeprom_write_byte(&dato0,0x5);//la variable y le asignamos el valor
   nvalor(&direccion,&valor);
 
  while(1) //ciclo del programa
  {
    asm("NOP");
  }
}
//Andres Guapi Mora