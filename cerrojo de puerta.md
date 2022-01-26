## Cerrojo de Puerta

### Contruir el circuito paso a paso:

1- Conecta la corriente y la toma de tierra a ambos lados del protoboard.Coloca el pulsador en el protoboard y conecta un lado a la toma de 5V.En el otro lado del interruptor,
conecta a la toma de tierra a traves de una resistencia de 10 KiloOhm.Conecta esta junta a la clavija digital 2 en el arduino.

2- Conecta los cables del piezo al protoboard .Conecta un cable a la toma de corriente.Si tu piezo tiene un cable rojo, o uno marcado con un "+",este es el cable que hay
que conectar a la toma de corriente.
Si tu piezo no indica polaridad , entonces puedes conectarlo de cualquier manera.Conecta el otro lado del piezo a la clavija analogica 0 de tu arduino.Coloca una resistencia 
de 1 MegaOhm entre la toma de tierra y el otro cable.Valores de resistencia mas bajos haran que el piezo sea menos sensible a las vibraciones.

3- Conecta los LEDs,conectados a los catodos (el pie mas corto) a la toma de tierra,y colocando una resistencia de 220 Ohm en serie con los anodos.A traves de sus respectivas 
resistencias, conecta el LED amarillo a la clavija digital 3 del Arduino, el LED verde a la clavija digital 4,y el LED rojo a la clavija digital 5.

4-Conecta las cubiertas de contacto en los cables del servomotor .Conecta el calbe rojo a la toma de corriente , y el cable negro a la toma de tierra. Coloca un condensador
electrolitico de 100 uF entre la toma de corriente y la toma de tierra para suavizar cualquier irregularidad de voltaje ,asegurandote de leer correctamente la polaridad del condensador.Conecta el cable de datos del servomotor a la clavija 9 en tu arduino. 


## Codigo 
![codigo cerrojo de puerta](https://github.com/aRnAu1012/arduino./blob/main/codigo%20cerrojo.1)

He tenido un pequeño bug con el codigo, que cuando le daba un golpe se abria y se cerraba automaticamente sin que yo le dijera nada,y eso no tiene que pasar.

He añadido esto para que no pase este bug y se quede cerrado:

    }
    if (numberOfKnocks >= 3 ){
      locked = false;
      numberOfKnocks = 0;
      myServo.write(0);
      delay(20);
      digitalWrite(greenLed,HIGH);
      digitalWrite(redLed,LOW);
      Serial.println("La caja esta abierta");
    }
 }
 
 
## Fallos en el Montaje. 
-He conectado con los leds, resistencias que no son correctas para los leds , siempre que se conecte resistencias con los leds hay que usar las resistencias azules.

-En el codigo he tenido problemas con un bug porque se cerraba automaticamente.


