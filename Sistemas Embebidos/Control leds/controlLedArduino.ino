//Nombre: Andres Guapi Mora

void setup () { 

pinMode(2, INPUT);  // pin 2 como entrada 
pinMode(9, OUTPUT); // pin 3 como salida

}

void loop() {

if (digitalRead(2) == HIGH) // evaluo si la entrada esta en nivel alto(presionado)
{ 
  digitalWrite(9,HIGH); // pulsador presionado, encender LED azul
} 
else 
{ 
  digitalWrite(9,LOW);  // pulsador no presionado, apagar LED azul
}

}
