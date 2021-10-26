# Proyecto

## Resumen

Si aprieto el boton las luces parpadean 

## Introduccion teorica:

Ejemplo:
swichState = 0;

SwichState es de tipo "int" 
que significa que es un Numero Entero

Programacion Interfaz:
Void Setup(){
      PinMode (3,OUTPUT);
      PinMode(2,INPUT);
      }
      
Void loop (){ ASIGNAR SWICHSTATE = Digital Read (2);
(switchState== LOW)
 D.w (3,HIGH);
 d.w (4,LOW);
 D.w (5,LOW);
 HacerKebab
 
 }
 else (); 
 {PEDIR PIZZA }
 
 ## Proceso de Montaje
 
  - Materiales necesarios----->(leds,resistencies,boton)
   
  - Circuito
  
  - Foto del circuito

  ## Codigo 
   - Explicar:
   
   En tu protoboard , conecta las conexiones de 5V en tu arduino, colocar los leds en tu protoboard .Conectar (por el pie corto ) el led a traves de una resistencia 220 ohmios.Conectar (el pie largo ) del led en la clavija 3 . Conectar los anodos de los Leds en las clavijas 4 y 5.
   
   Colocar el interructor en el protoboard .Conecta un lado a la corriente , y el otro en la clavija digital 2 del arduino . Tambien tendras que añadir una resistencia de 10 K-ohm de la toma a la clavija del interructor que conecta con el arduino. Esta resistencia se conecta la clavija a la toma de la tierra cuando el interructor esta abierto.
   
   
   
   - Enlace codigo utilizado:

int switchState = 0 ;

void setup() {
 pinMode (3, OUTPUT);
 pinMode (4, OUTPUT);
 pinMode (5,OUTPUT);
 pinMode (2,INPUT);
}

void loop() {

switchState = digitalRead (2)


// esto es un comentario  

;if  (switchState == LOW ){
  // el boton no esta pulsado 





  digitalWrite (3, HIGH);
  digitalWrite (4,LOW );
  digitalWrite (5,LOW);
}
  else {
    digitalWrite (3, LOW);
    digitalWrite (4,LOW);
    digitalWrite(5,HIGH);
    delay (250);
    digitalWrite (4,HIGH);
    digitalWrite (5,LOW);
    delay (250);
  }
}

   
  
   ## Resultado 
  -Foto:
  
  -Video:
  
  -Funciona:
  
   ## Variaciones 
   
   # Añadir un boton por hardware 
   
   Vamos a añadir un boton conectado al pin 3 de tal forma que solo cuando se pulse el led 3 se encendera.
   El resto del proyecto (hardware y sotware ) es el mismo.
   
   Antes:
   pin 3 ----LED------- resistencia ------ GND.
   
   Despues:
   
   pin 3 ----led ------pulsador---------resistencia ------GND.
   
   
   
   

