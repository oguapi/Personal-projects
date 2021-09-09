import RPi.GPIO as GPIO #para poder controlar los pines
from time import sleep
#Andres Guapi Mora Presiono boton se prenden los leds

GPIO.setmode(GPIO.BCM)#controlar los nombres de los pines como BCM (GPIO)

led1 = 6
Bt1 = 5
led2= 12
GPIO.setup(Bt1, GPIO.IN, GPIO.PUD_DOWN)#Ademas ponemos internamente la resistencia pull down de raspberry
GPIO.setup(led1, GPIO.OUT)
GPIO.setup(led2, GPIO.OUT)

# Main function
def main () :
#Para que el led se prenda y apage 10 veces
# for count in range(10):
#  GPIO.output(led1,True)
 # sleep(1)
#  GPIO.output(led1,False)
 # sleep(1)
 
 while 1:
  if GPIO.input(Bt1):
   GPIO.output(led1,True)
   GPIO.output(led2,True)
   sleep(1)
  else:
   GPIO.output(led2,False)
   GPIO.output(led1,False)
   sleep(1)
  
# Command line execution
if __name__ == '__main__' :
   main()