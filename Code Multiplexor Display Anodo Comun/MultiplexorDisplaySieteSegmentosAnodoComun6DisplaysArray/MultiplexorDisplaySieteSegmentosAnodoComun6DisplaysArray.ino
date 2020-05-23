//Sitio Web con Practicas de Arduino, FPGA, MATLAB y 
//temas sobre Electrónica Digital, Analogica, Procesamiento Digital de Señales, 
//Comunicaciones, etc.
//www.slideshare.net/FerMarcos2

//Sitio Web Curriculum
//www.linkedin.com/in/FerMarcos2

//Canal Youtube
//www.youtube.com/channel/UCLGgLo5SKhDz3cae4YOQosg

char num[]={0x81,0xF3,0x49,0x61,0x33,0x25,0x05,0xF1,0x01,0x21};
String snum="";
void setup(){
  DDRD=B11111111;
  DDRB=B111111;}
void loop(){
  long imedicion=map(analogRead(A0),0,1023,0,123456);
  String smedicion=String(imedicion);
  for(int i=0;i<smedicion.length();i++){
    snum=smedicion[i];
    PORTD=num[snum.toInt()];
    int n=pow(2,smedicion.length()-i-1)+.5;
    PORTB=byte(n);
    delay(5);
    PORTB=B000000;
  }
}
