Fototransitor ---> es una resistencia que varia segun la luz,es un transistor sensible a la luz, 

normalmente a los infrarrojos.

La luz incide sobre la región de base,

generando portadores en ella. Esta carga de base lleva el transistor al estado de conducción

Piezoelectrico ---> describe la propiedad de determinados sólidos para generar una carga eléctrica bajo tensión mecánica.

Electroiman si le paso corriente se movera de un lado para otro . 

Piezo ---> Es un pequeño elemento que vibra cuando recibe corriente electrica.

Al moverse desplaza el aire a su alrededor, creando ondas sonoras.

Un theremin tradicional puede controlar la frecuencia y el volumen del sonido.

## Codigo theremin 

int sensorValue;

int sensorLow = 1023;

int sensorHigh = 0;

const int ledPin = 13 ;

void setup() {
  PinMode (ledPin, OUTPUT);
  digitalWrite (ledPin, HIGH );
  
  while (millis () < 5000) {
  
  sensorValue = analogRead(A0);
  if ( sensorValue > sensorHigh ) {
  
  sensorHigh = sensorValue :
  }
  if ( sensorValue > sensorLow ) {
  sensorLow = sensorValue :
}
}
digitalWrite (ledPin,Low);
}

void loop (){
sensorValue = analogRead(A0);
int pitch = 
map (sensorValue, sensorLow,sensorHigh, 50 , 4000);

tone(8,pitch,20);

delay(10);
}





map = La extension de la funcion map que determina el tono es bastante amplia,
prueba a canbiar las frecuencias para dar con algunas que se ajusten mejor a tu estilo musical.

Tone = La funcion Tone opera de manera bastante similar a la PWM en analogWrite(),

pero con una diferencia importante.En analogWrite () la frecuencia es fija; cambias el promedio de pulsos en este periodo de tiempo para variar el ciclo de trabajo.

Con tone , sigues enviando pulsos, pero cambiando su frecuencia tone () siempre emite pulsos a un ciclo de trabajo del 50 %.

En definitiva .

La funcion tone() de ta la posibilidad de generar diferentes frecuencias cuando hace pulsar un altavoz o un piezo. 
Al usar sensores en un circuito de division de voltaje,entre 0 y 1023. Calibrando los sensores es posible mapear tus entrades a una extension usable.

##  Que hace el codigo 

El codigo empieza con un sensor de variable , luego crea variables para los valores minimos y maximos.Su valor maximo sera 1023 

LedPin 13 es el led que esta integrado ;

La funcion setup = se ejecutara una vez ;

While = Mientras ;

millis = milsegundos , numero de milisegundos desde que enciendes el arduino;

voidloop = infinitas veces;

sensorvalue = analogRead(A0)----> Leer 

pitch = numero 

LOOP (){
Plitch = map (sensorValue , sensorLow, sensor HIGH , 50 , 400 ----> TRANSFORMAR 

TONE (8,PLITCH , 20 );

## Variacion 1 

boton por hardware

## Variacion 2 
boton por sotware  (como la interfazz de nieve )

map(sensorvalue,sensorhigh, 50 , 4000);
tone 8, pitch,20  );
delay (10);

void loop () {

int etadoboton = digitalRead (2); 

if ( estadoBoton == HIGH ){

tocarTheremin();

}
else {

noTone (8);

delay(10);

 }
}


































