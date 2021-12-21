Villancico nuevo modificado .
## Campana sobre campana.
int switchStateKill = 0;
bool isTheButtonBeingPressed = false;
bool play = false;
// el pin 2 no sera siempre el boton
int buttonPin=6;
const int pinAltavoz = 8;
 const int freqs[] = {261.63, 293.66, 329.63, 349.23, 392, 440, 466.16, 523.25, 587.33, 587.33, 659.25,698.46, 783.99, 880, 932.33, 1046.50};
 const int duracionNegra = 500;
 
void setup() {
  
  Serial.begin(9600);
  
   pinMode(buttonPin, INPUT);
}


void loop(){

  tocarMelodia();
 

 
}
 tocarNota(3,4); //CAMPANA SO
 tocarNota(2,1); //BRE
  tocarNota(4,1); //CAMP
  tocarNota(5,1);  //PA
  tocarNota(0,1);  // A
  tocarNota(4,1);   //NA
  tocarNota(5,1);  // Y SO
  tocarNota(6,1);  //BRE
  tocarNota(5,1);  // CAMP
  tocarNota(4,1); //PA
  tocarNota(5,1);  //NA
  tocarNota(3,1);  //U
  tocarNota(3,1);  //U
  tocarNota(2,1);  //NA
  tocarNota(3,1);  //A SO
  tocarNota(4,1);  //MA TEA LA
  tocarNota(2,1);  //VEN 
  tocarNota(0,1);  //TA
  tocarNota(4,1);  //A
  tocarNota(5,1);  //NA
  tocarNota(6,1);  //VE RAS
  tocarNota(5,1);  //AL
  tocarNota(4,1);  //NI
  tocarNota(5,1);  //ÑO
  tocarNota(4,1);  //EN LA
  tocarNota(3,1);  //CU
  tocarNota(5,1);  //U 
  tocarNota(0,1);  //NA
  tocarNota(0,1);  //BE
  tocarNota(-1,1);  //LEN
  tocarNota(0,1);  //CAM 
  tocarNota(6,1);  //PA
  tocarNota(-1,1);  //NAS
  tocarNota(0,1);  // DE
  tocarNota(0,1);  //BE
  tocarNota(-1,1);  //LEN


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
