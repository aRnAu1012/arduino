Villancico.Nuevo

```C++
int switchStateKill = 0;
bool isTheButtonBeingPressed = false;
bool play = false;
// el pin 2 no sera siempre el boton
int buttonPin=6;
const int pinAltavoz = 8;
 const int freqs[] = {261.63, 293.66, 329.63, 349.23, 392, 440, 466.16, 523.25, 587.33, 587.33, 659.25,698.46, 783.99, 880, 932.33, 1046.50};
 const int duracionNegra = 667;
 
void setup() {
  
  Serial.begin(9600);
  
   pinMode(buttonPin, INPUT);
}


void loop(){

  tocarMelodia();
 

 
}

 
void tocarMelodia(){
  tocarNota(1,0.5);
  tocarNota(3,2);
  tocarNota(-1,1);
}


void tocarNota(int numeroNota,float duracionNota)  {
  checkButton();
    Serial.println("Valor boton");
  Serial.println(switchStateKill);
 if (play) {
                int pin = pinAltavoz;
                int duracionMilisegundos = duracionNegra * duracionNota;
                //
                if (numeroNota == -1){
                  // tocar un silencio
                   noTone(pin);
                delay(duracionMilisegundos);
              
                  
                }
              
                else{
                  // tocar una nota
                }
                int frecuencia = freqs [numeroNota];
              
                
               
                tone(pin,frecuencia,duracionMilisegundos);
                delay(duracionMilisegundos);
                
 }
 else{

 }
}


void checkButton(){
  switchStateKill = digitalRead(buttonPin);
  if (switchStateKill == LOW){
    if (isTheButtonBeingPressed == false){
      play = !play;
      isTheButtonBeingPressed = true;
  }
}
else{
  isTheButtonBeingPressed = false;
}
}
```

Villancico Campanas sobre campanas.
```c++
int switchStateKill = 0;
bool isTheButtonBeingPressed = false;
bool play = false;
// el pin 2 no sera siempre el boton
int buttonPin=6;
const int pinAltavoz = 8;
 const int freqs[] = {261.63, 293.66, 329.63, 349.23, 392, 440, 466.16, 523.25, 587.33, 587.33, 659.25,698.46, 783.99, 880, 932.33, 1046.50};
 const int duracionNegra = 667;
 
void setup() {
  
  Serial.begin(9600);
  
   pinMode(buttonPin, INPUT);
}


void loop(){

  tocarMelodia();
 

 
}

 
void tocarMelodia(){
  tocarNota(3,1);
  tocarNota(-1,1);
  tocarNota(2,1);
  tocarNota(4,1);
  tocarNota(2,1);
  tocarNota(-0,1);
  tocarNota(4,1);
  tocarNota(5,1);
  tocarNota(6,1);
  tocarNota(5,1);
  tocarNota(4,1);
  tocarNota(5,1);
  tocarNota(3,1);
  tocarNota(3,1);
  tocarNota(2,1);
  tocarNota(3,1);
  tocarNota(4,1);
  tocarNota(2,1);
  tocarNota(-0,1);
  tocarNota(4,1);
  tocarNota(5,1);
  tocarNota(6,1);
  tocarNota(5,1);
  tocarNota(4,1);
  tocarNota(5,1);
  tocarNota(4,1);
  tocarNota(3,1);
  tocarNota(5,1);
  tocarNota(-0,1);
  tocarNota(-0,1);
  tocarNota(-1,1);
  tocarNota(-0,1);
  tocarNota(6,1);
  tocarNota(-1,1);
  tocarNota(-0,1);
}


void tocarNota(int numeroNota,float duracionNota)  {
  checkButton();
    Serial.println("Valor boton");
  Serial.println(switchStateKill);
 if (play) {
                int pin = pinAltavoz;
                int duracionMilisegundos = duracionNegra * duracionNota;
                //
                if (numeroNota == -1){
                  // tocar un silencio
                   noTone(pin);
                delay(duracionMilisegundos);
              
                  
                }
              
                else{
                  // tocar una nota
                }
                int frecuencia = freqs [numeroNota];
              
                
               
                tone(pin,frecuencia,duracionMilisegundos);
                delay(duracionMilisegundos);
                
 }
 else{

 }
}


void checkButton(){
  switchStateKill = digitalRead(buttonPin);
  if (switchStateKill == LOW){
    if (isTheButtonBeingPressed == false){
      play = !play;
      isTheButtonBeingPressed = true;
  }
}
else{
  isTheButtonBeingPressed = false;
}
}
```









