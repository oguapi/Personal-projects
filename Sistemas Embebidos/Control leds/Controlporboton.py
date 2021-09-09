import RPi.GPIO as GPIO 
#para poder controlar los pines
from time import sleep
#Andres Guapi Mora

GPIO.setmode(GPIO.BCM)#controlar los nombres de los pines como BCM (GPIO)

led1 = 6
Bt1 = 5
led2= 12
GPIO.setup(Bt1, GPIO.IN, GPIO.PUD_DOWN)#Ademas ponemos internamente la resistencia pull down de raspberry
GPIO.setup(led1, GPIO.OUT)
GPIO.setup(led2, GPIO.OUT)

# Main function
def main () :
 estado= False
 while 1:
  
  while GPIO.input(Bt1):
   if ( estado == False):
    GPIO.output(led1,True)
    GPIO.output(led2,True)
    estado= True
    sleep(1)
   else:
    GPIO.output(led1, False)
    GPIO.output(led2, False)
    estado= False
    sleep(1)

# Command line execution
if __name__ == '__main__' :
   main()