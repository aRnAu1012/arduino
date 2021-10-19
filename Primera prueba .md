
https://github.com/d-prieto

# 1 Trimestre

Primeras porgramaciones de arduino 
# Circuitos Electricos 
## Error de programacion
 
Intentamos programar , el programa de ejemplo blink.ing, lo que ocurrio fue,
que el programa , con el USB no daba permiso.


## Erorres y exepciones 
-BUG:Es un tipo de error pero no esperado ( el programa deberia hacer una cosa y hace otra cosa totalmente diferente). 
-GLITCH: Es un tipo de Bug grafico , cualquier comportamiento grafico no esperado.                                       
-ERROR : Operacion no permitida.
-Excepcion: Son errores que estan controloados por el mismo programa.
-Lag: Es un retraso en las comunicaciones.

## Primeros circuitos 
Esto pese a funcionar y dar luz genera dos problemas:
El primero se calienta y es incomodo de tocar. 
El segundo puede fundir el led.
 +5 voltios ----LED1----LED2----LED3----LED4
 
 En los circuitos en serie ----> Si desconectamos una parte todo se apaga
 
 ## Primera prueba con boton
 
 ![imagen](https://user-images.githubusercontent.com/90753272/137865286-424499cd-6f6f-4f85-b709-84e09d1b6365.png)

 
 ## Apuntes sobre electricidad :
 Voltaje ---> Altura (Diferencia de potencial)
  Intensidad o Amperaje ---> Cantidad de agua a rotuladores
  Resistencia ----> Resistencia al paso del agua a rotuladores
  Intensidad = Voltaje /resistencia ---> Ley de Ohm
 
 Voltaje = Intensidad * Resistencia
 
 Resistencia = Voltaje/Intensidad
  
### Por que necesitamos ressistencias con los Leds ?  
  Tenemos 2 circuitos 
  5V le ponemso un led  Y VAMOS A GND
  5V le ponemos una resistencia y vamos a GND
  
  El voltaje de los dos circuitos es de 5V
  
  ¿La resistencia?
  1 OHM 
  
  I = V(V)/R(OHM)
  
  5V/441 OHM = 11'33 mA
  
  5V/1 OHM = 5 Amperios 
  
  Cortocircuito Evitar:
  5V / 0 ohm = INFINITO A 
  
  ### Primera "Prueba.md"
  Lenguaje:
  
 descodificador de señales extraterrestres 
 Lenguaje maquina 
 Lenguaje de programacion :
 C
 C++
 Python
 JAVA
 
1010---->
  
### Lenguaje de programacion :

### C++:
2 FUNCIONES:
(Preparacion)SETUP()----> LO QUE SE PONE AL PRINCIPIO SE EJECUTA UNA SOLA VEZ : HACER UN PASTEL()
(Bucle)LOOP()----->Se ejecuta despues y se repite indefinidamente : HACER UNA TORTILLA()

## ejemplo:
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}



## Probando diferentes numeros  

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(50);                       // wait for a second
}
 Lo que ha pasado es que se enciende mas de 1 segundo pero al apagarse se apaga muy rapido para que se vuelva a encender-se 
 
 void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(150);                      
  digitalWrite(LED_BUILTIN, LOW);    
  delay(200); 


  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(250);
}

## codigo morse nombre:


void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

Morse 1
 
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(300);                       // wait for a second

   digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second

   digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(500);                       // wait for a second
}


 [enlace]("file:///home/usuario/Escritorio/morse_2") Morse 2 
 
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop(){
  
  punto();
  raya();
  punto();
  raya();
  punto();
  raya();
  punto();
  punto();
  raya();
  punto();
  punto();
  raya();
  delay(2000);
}

// the loop function runs over and over again forever
  void punto  () {
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(100);                      
  digitalWrite(LED_BUILTIN, LOW);    
  delay(300); 
  }

void raya (){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(800);
  digitalWrite(LED_BUILTIN, LOW);
  delay(300);
}

  




[enlace]("file:///home/usuario/Escritorio/morse_3") morse 3

void loop(){
  //A
  punto();
  raya();
  //R
  punto();
  raya();
  punto();
  //N
  raya();
  punto();
  //A
  punto();
  raya();
  //U
  punto();
  punto();
  raya();
  delay(2000);
}

// the loop function runs over and over again forever
  void punto  () {
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(100);                      
  digitalWrite(LED_BUILTIN, LOW);    
  delay(300); 
  }

void raya (){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(800);
  digitalWrite(LED_BUILTIN, LOW);
  delay(300);
}

 ### Primera Prueba
  
  ## Protoboard 
  
[imajen]("https://raw.githubusercontent.com/miguelamgel1107/Arduino/main/unknown1")
  
 Imagen de Miguel Angel
  
 [imajen](https://raw.githubusercontent.com/miguelamgel1107/Arduino/main/arduino.png)
 
 Imagen de Miguel Angel
   
 [imajen](https://raw.githubusercontent.com/miguelamgel1107/Arduino/main/unknown.png)
   
 Imagen de Miguel Angel
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  

