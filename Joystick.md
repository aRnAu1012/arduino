## Modulo de Joystick

### Informacion sobre el modulo de Joystick 
En el Arduino la funcion que ha hecho el joystick a sido que cuando tu giras el joystick en el monitor serie de arduino hace que te diga exactamente en que eje x,y esta exactamente.




![Imagen](https://github.com/Samael696/arduino/blob/main/IMG_20220126_133159.jpg?raw=true)
esta imagen esta sacada de Andree


![codigo joystick](https://github.com/aRnAu1012/arduino./blob/main/codigo%20joystick)


 
### Conexiones del modulo 
El módulo tiene varias salidas y con su nombre indican hacia donde deberían ir. Os las enumero:

GND. -> Ground, toma tierra, 0V de potencial eléctrico.

5V -> Voltaje de 5V. Esto hay que conectarlo a los 5 voltios de potencia para que pueda ser leído correctamente.

VRx -> Este es el Voltaje Regulado en el eje X horizontal. Hay que conectarlo a un pin analógico para que pueda leerse.

VRy -> Este es el Voltaje Regulado en el eje Y vertical. Hay que conectarlo a un pin de lectura analógica para que pueda leerse.

SW -> Switch. Este es el botón. Al estar ya integrado se puede conectar directamente a un pin digital sin tener que incluir la resistencia. Sin embargo este es un botón PULL UP en vez de un botón PULL DOWN (que es lo que hemos realizado en el resto del curso). Esto significa que cuando está sin pulsar leerá 1 (o HIGH) y cuando esté pulsado leerá 0 (o LOW).
 
Informacion sacada de ![Clase de joystick]("https://github.com/d-prieto/arduinoCourse/blob/main/Clase_de_Joystick.md")



### enlace de documentacion del modulo de Joystick de David Prieto

![informacio de David Prieto](https://github.com/d-prieto/arduinoCourse/blob/main/Clase_de_Joystick.md)
