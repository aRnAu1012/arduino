## Declaracion de Variable.

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
 
### Primer Interfaz:
 
 int switchState = 0;

void setup() {

pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(2,INPUT);

}

void loop(){

switchState = digitalRead(2);
// esto es un comentario

if (switchState == HIGH) {
// el boton no esta pulsado

digitalWrite(3, HIGH); // LED verde
digitalWrite(4, LOW); // LED rojos
digitalWrite(5, LOW); // LED rojos

}

else { // the button is pressed
digitalWrite(3, LOW);
digitalWrite(4, LOW);
digitalWrite(5, HIGH);

delay(250); // espera un cuarto de segundo
// permuta les LEDs
digitalWrite(4, HIGH);
digitalWrite(5, LOW);
delay(250); // espera un cuarto de segundo

}

} // vuelve al inicio del bucle

Hemos hecho el primer proyecto de interfaz de nave escrito que hemos puesto todos los cables en su sitio y el boton , el libro nos ha ayudado al principo para cojer ritmo en el codigo.







