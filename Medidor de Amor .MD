# Plantilla

# Introduccion
Este es un programa que mide temperatura de y enciende LEDS 

-Comunicacion SERIAL 

- Variable
 
- int SwitchState = 0;

 Switch State = digitalRead (2);
 
 Si tengo el boton pulsado esto hara 1 , si no tengo el boton pulsado esto hace 0.
 
## Constantes
Int sensorPin = A0 ;

Cada vez que yo ponga sernsor Pin esto pondra = A0 ;

Const float;

baseline Temp =20.0;

Float = ( Numero decimal )

baseline temp = Temperatura base

ANTES DEL SETUP; 

Setup (){

## Serial.Begin(9600)

Serial.begin(9600);

Serail. es un objeto (cosa) entonces tenemos que definir con esa (cosa)

 begin= Crear (instancia)
 
 9600 = baudios
 
 Inicia la comunicacio por via USB 
 
 ## For
for (int pinNumber = 2 ; pinNumber < 5  ; pinNumber ++){
         variable 
 pinNumber ++ = Suma 1 a pinNumber
 
PinMode (pinNumber, OUTPUT);

digitalWrite (pinMode,LOW);
  
 
 PinMode (2,OUTPUT);
 
 DigitalWrite(2,LOW);
 
 PinMode (3,OUTPUT);
 
 digitalWrite (3,Low);
 
 PinMode(4,OUTPUt);
 
 digitalWrite (4,LOW);
 
 For= REPETIR COSAS
 
 ## LOOP
 Declara una variable que cada vez que se cicle se volvera a declarar.
 
 Int SensorVal= analogRead (SensorPin) = A0
 
 Esta linea lee el voltaje que tiene el pin sensorPin(En este caso A0 )
 
 y lo mapea a valores entre 0 y 1023 . 0 significa 0 voltios o GND.
 
 Y 1023 significa 5 voltios.
 
 
 


 
 
 

