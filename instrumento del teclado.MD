1-Montar proyecto :
He empezado a montar los primeros cables con las resistencias,los cuatros botones y el piezo.
He conectacto los interruptores en la photoboard, el orden de la conexion ha sido el primer interuptor conectado directamente a la corriente, el segundo,tercero y cuarto
interruptor a la corriente a traves de resistencies de 220 ohm , 10 kOhm y 1MegOhm, despues he conectado todas las salidas de los interruptores en un solo punto de union.
Tambien he conectado a la entrada analogica 0.Cada uno de ellos actua como un divisor de voltaje.

Errores :
He tenido problemas con los interruptores que he puesto en el sitio equivocado,     


Funcion Tone() = La funcion Tone es para generar sonidos, solo puede crear ondas cuadradas, no suaves ondas sinusoidales,

Codigo Instrumento de teclado :

Void setup (){
       Serial.begin(9600);
       }
       
 Void loop (){
     int keyval = analogRead(A0);
     Serial.println(keyVal);
 if(keyval == 1023){
     tone (8,notes [0]);
     }
     else if (keyVal >= 990 & keyVal <=1010){
            tone(8,notes[1]);
     else if (keyVal >= 505 && keyVal <=515 ){
    }
    else if (keyVal >= 5 && keyVal <=10){
    tone (8,notes [3]);
    }
    else{noTone (8);
      }
   }
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
