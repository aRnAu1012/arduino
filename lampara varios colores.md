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

0 --->  Significa 0 % de voltaje 

255 ---> 100 % de voltaje (5 V)



























































