## PWM ( Pulse Width modulation)

Problema tengo un arduino que suministra 5V a un led.

a mayor intensidad de corriente ,(A) =(amperios), el led brilla mas. 

A menor intensidad de corriente el led brilla menos (Ver Ley De Ohm)

I  = V/R

Si subimos o bajamos el voltaje , haremos lo mismo con la intensidad suponiendo que la resistencia del circuito es la misma.

Entonces:

Si conecto un led con su resistencia de 220 Ohmnios.

A un voltaje de 5 V o de 3'3 V 

El led brillara mas con 5 V 

y menos con 3'3 V.

Pulsos ----> Una señal electrica 

### Que es un pulso ?

Un pulso electrico es una señal de voltaje medida en el tiempo.

Los ojos humanos podemos detectar canbios hasta en torno a 12 herzios 

a partir de 24 o 30 herzios no somos capaces visualmente.

Los Pulsos modulados en ancho crean la ilusion de voltaje intermedios entre 0 y 5 V para ello usan pulsos muy cortos . 

que usaremos a traves de funcion AnalogWhite ( Pin , 0 255);

Esta funcion solo funciona en pines con PWN .

Los Pines con PWM estan marcados con el simbolo  ~ ( la tilde de la eñe )

La funcion nos pide dos cosas :

1- El numero de Pin 

2- Un numero entre 0 y 255 .

0 --->  Significa 0 % de voltaje .

255 ---> 100 % de voltaje (5 V).

int = Integer (numero entero ).

Significa que nuestra variable es un tipo de dato numerico no decimal.

Le asigna un espacio en memoria .

String ----> cadena de caracteres .

Bool ---> Booleano y es verdadera ( true ) o falso (false).

chaz ----> 1 unico caracter. 

float ---> numero decimales.

### codigo:

##### [Codigo de programacion](https://github.com/Baultek/Arduino/blob/be455e3ec709481f8e5f2d400fff8f7fe17e984f/imagenes%20arduino/lampara_de_varios_colores.ino)

#### circuito  :


 
 * Prueba 1
 
 Hemos comenzado copiando unos codigos en la pizzara de la version uno la cual seria esta en particular 
 
 [prueba 1 y principal](https://github.com/DavidMenCam/Arduino/tree/main/Arduino%20%20version%201)(imagen de david)
 
 * Prueba 2
 
 En la segunda prueba hemos echo que 'parpadease siempre  cuando le dabamos a un boton se encendia otro y al contrario.
 
 [prueba 2](https://github.com/DavidMenCam/Arduino/blob/main/arduino%20version%202/albedo_god_2.ino)(imagen de david)
 
 * Prueba 3
 
 lo que hemos hecho en la prueba 3 es que siempre esten parpadeando sin parar y cuando le das a un boton se enciende uno y cuando le das ah otro se enciende otro 
 
 [prueba 3](https://github.com/DavidMenCam/Arduino/blob/main/Arduino%20version%203/albedo_god_3.ino)(imagen de david)
 
 * Prueba 4
 
 En la prueba 4 Siempre estaban apagados y se encendian con cualquiera de losd os botones 
 
 [prueba 4](https://github.com/DavidMenCam/Arduino/blob/main/arduino_ver_4/arduino_ver_4.ino)(imagen de david)
 
 * prueba 5
 
 En la prueba 5 siempre estan parpadeando permanentemente, cuando aprietas el boton que esta conectado al pin dos brilla el led del pin 4 y el otro led se apaga , cuando el boton que esta conectado al pin 3 se aprieta se enciende el led que esta conectado al pin 5  el otro led se apaga y si oprimes los dos botones los dos leds se mantienen encendidos 
 
 [ prueba 5](https://github.com/DavidMenCam/Arduino/blob/main/arduino_ver_5/arduino_ver_5.ino)(imajen de david)
 
 * prueba 6
 
 Usamos este operador (!) este sirve para hacer la accion contraria de lo que se desea 
 
 [prueba 6](https://github.com/DavidMenCam/Arduino/tree/main/arduino_ver_6)(imagen de david)
 
 * prueba 7
 
  Lo que hicimos en el ultimo fue una variante de colores en cada led hcaiendo que cada uno tuviera un color diferente
 
 [prueba 7](https://github.com/DavidMenCam/Arduino/blob/main/arduino_ver_7.ino)(imagen de david)


### Errores

El error que hemos tenido ha sido que teniamos los potenciadores mal puestos, y un cable estaba con el ground cuando tenia que ir con el 5 V .

## Foto:

![](https://github.com/Baultek/Arduino/blob/main/imagenes%20arduino/circuito%20lampara.png?raw=true)




















































