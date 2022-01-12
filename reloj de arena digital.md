## Introducion teorica 

-Delay y sus problemas:
 Cuando el Arduino inoca delay(), congela su estado actual durante la duracion del delay. Esto quiere decir que no puede haber ninguna otra entrada o salida mientras esta esperando. Los delays no son muy utiles para llevar la cuenta del tiempo. Si quieres hacer algo cada 10 segundos, tener un delay de 10 segundos seria un engorro.

-Millis () y lo que hace:
 La función millis() permite obtener la cantidad de milisegundos que han pasado desde que comenzó la ejecución del código, es decir, que toma el registro de pulsos generados por el contador y los emplea para calcular el tiempo en milisegundos.

La función millis de Arduino es capaz de contar hasta un valor de 4,294,967,296 y para llegar hasta ese valor es necesario que transcurran 49 días.

- Tipo int y tipo long como variable: 
  Un int (numero entero) es un numero de 16 bits y contiene valores de entre -32.768 y 32.767, si el arduino cuenta 1000 veces por segundo con millis () , se quedaria sin espacio en menos de un minuto. 

 -Tilt sensor:
  Los interruptores de inclinacion son herramientas fantasticas y baratas para determinar la orientacion de algo.Los acelerometros son otro tipo de sensor de inclinacion, pero proporcionan mucha mas informacion .
Si necesitas inclinacion hacia arriba o hacia abajo un sensor de inclinacion es perfecto .
 
 ## Montaje 
 -Foto 
 - codigo [enlace codigo]
 

