//Sitio Web con Practicas de Arduino, FPGA, MATLAB y 
//temas sobre Electrónica Digital, Analogica, Procesamiento Digital de Señales, 
//Comunicaciones, etc.
//www.slideshare.net/FerMarcos2

//Sitio Web Curriculum
//www.linkedin.com/in/FerMarcos2

//Canal Youtube
//www.youtube.com/channel/UCLGgLo5SKhDz3cae4YOQosg

void setup(){
  DDRD=B11111111;
  DDRB=B111111;}
void loop(){
  String smedicion=String(map(analogRead(A0),0,1023,0,123456));
  for(int i=0;i<smedicion.length();i++){
    switch(smedicion[i]){
      case '0':PORTD=B10000001;break;
      case '1':PORTD=B11110011;break;     
      case '2':PORTD=B01001001;break;     
      case '3':PORTD=B01100001;break;
      case '4':PORTD=B00110011;break;
      case '5':PORTD=B00100101;break;
      case '6':PORTD=B00000101;break;
      case '7':PORTD=B11110001;break;
      case '8':PORTD=B00000001;break;
      case '9':PORTD=B00100001;break;
    }  
    PORTB=byte(1<<(smedicion.length()-i-1));
    delay(5);
    PORTB=B000000;
  }
}
