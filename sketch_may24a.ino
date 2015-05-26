//Funciones Digitales
#define ENCENDER(pin)     digitalWrite(pin,HIGH);
#define APAGAR(pin)       digitalWrite(pin,LOW);
#define LEER_DIGITAL(pin) digitalRead(pin);
#define ENTRADA           INPUT
#define SALIDA            OUTPUT
#define TIPO_PUERTO_DIGITAL(pin,tipo) pinMode(pin,tipo);
#define ENCENIDIDO        1
#define APAGADO           0
#define IGUAL             ==

//Funciones análogas
#define LEER_ANALOGO(pin) analogRead(pin);

//Función de espera o retardo
#define ESPERA(ms)        delay(ms);

//Funciones condicionales
#define SI(condicion1,operador,valor) if(condicion1,operador,valor){
#define SINO_HACER        else{
#define TERMINAR_SINO     }
#define TERMINAR_SI       }

int var;
void setup() {
  // put your setup code here, to run once:
  TIPO_PUERTO_DIGITAL(2,SALIDA)
}

void loop() {
  // put your main code here, to run repeatedly:
  ENCENDER(2)
  ESPERA(500)
  APAGAR(2)
  ESPERA(1000)
  ENCENDER(2)
  ESPERA(200)
  APAGAR(2)
  ESPERA(300)
  SI(LEER_DIGITAL(2),IGUAL,ENCENDIDO)
    ESPERA(500)
  SINO_HACER
    ESPERA(1000)
  TERMINAR _SINO 
  TERMINAR_SI
  
}
