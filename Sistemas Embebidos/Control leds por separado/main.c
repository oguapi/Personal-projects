#include "config.h"
#include "funciones.h"
unsigned int estado1=0;
unsigned int estado2=0;
unsigned int estado3=0;

int main(void) 
//Andres Guapi Mora P101
{
conf();
while(1)
{
//   estado1=0;
//   estado2=0;
//   estado3=0;
   blin(&estado1, &estado2, &estado3);
} 
return 0; 
}