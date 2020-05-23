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
      case '0':PORTD=B01111110;break;
      case '1':PORTD=B00001100;break;     
      case '2':PORTD=B10110110;break;     
      case '3':PORTD=B10011110;break;
      case '4':PORTD=B11001100;break;
      case '5':PORTD=B11011010;break;
      case '6':PORTD=B11111010;break;
      case '7':PORTD=B00001110;break;
      case '8':PORTD=B11111110;break;
      case '9':PORTD=B11011110;break;
    }  
    PORTB=~byte(1<<(smedicion.length()-i-1));
    delay(5);
    PORTB=B111111;
  }
}
