## Introducion teorica 

-Delay y sus problemas:

 Cuando el Arduino inoca delay(), congela su estado actual durante la duracion del delay. Esto quiere decir que no puede haber ninguna otra entrada o salida mientras esta esperando. Los delays no son muy utiles para llevar la cuenta del tiempo. Si quieres hacer algo cada 10 segundos, tener un delay de 10 segundos seria un engorro.

-Millis () y lo que hace:

 La función millis() permite obtener la cantidad de milisegundos que han pasado desde que comenzó la ejecución del código, es decir, que toma el registro de pulsos generados por el contador y los emplea para calcular el tiempo en milisegundos.

La función millis de Arduino es capaz de contar hasta un valor de 4,294,967,296 y para llegar hasta ese valor es necesario que transcurran 49 días.

-Tipo int y tipo long como variable: 

Un int (numero entero) es un numero de 16 bits y contiene valores de entre -32.768 y 32.767, si el arduino cuenta 1000 veces por segundo con millis () , se quedaria sin espacio en menos de un minuto.

Tipo long :El formato de variable numérica de tipo extendido “long” se refiere a números enteros (tipo 32 bits = 4 bytes) sin decimales que se encuentran dentro del rango -2147483648 a 2147483647.

 -Tilt sensor:
 
 El interruptor de inclinacion funciona exactamente igual que un interruptor regular , lo que hace el interruptor de inclinacion es que detectan la orientacion. Suelen tener una pequeña cavidad en su interior que contiene una bola metalica.Al inclinarse el interruptor de cierta manera, la bola rueda a un lado de cavidad y conecta los dos contactos en tu protoboard, cerrando el interrupto.
 
 Los interruptores de inclinacion son herramientas fantasticas y baratas para determinar la orientacion de algo.Los acelerometros son otro tipo de sensor de inclinacion, pero proporcionan mucha mas informacion .
Si necesitas inclinacion hacia arriba o hacia abajo un sensor de inclinacion es perfecto .
 
 ## Montaje 
 -Foto : 
  ![jinhjyu7ub](https://github.com/aRnAu1012/arduino./blob/main/IMG-20220112-WA0007.jpeg?raw=true)
  
 - codigo [enlace codigo]
 
 ![codigo reloj arena digital](https://github.com/aRnAu1012/arduino./blob/main/reloj_de_arena_digital.ino)
 
 ## Variacion 
![codigo variacion](https://github.com/aRnAu1012/arduino./blob/main/reloj_de_arena_digital_variacion.ino)
