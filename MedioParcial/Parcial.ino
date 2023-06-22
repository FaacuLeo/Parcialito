#include <LiquidCrystal.h> //Incluimos libreria LCD
#include <IRremote.h>
#include <Servo.h>




LiquidCrystal lcd(11, 10, 5, 4, 3, 2); //Inicializamos la libreria LCD con sus respectivos puertos de configuracion
int Sensor = A0;  //Asignamos el PIN analogico A0 para el sensor LM35
int ValorSensor = 0; //Variable para el almacenamiento del valor del sensor
float Temperatura = 0; //Variable para almacenar el valor de la temperatura
int PinBlanco = 13;  //Asignacion del puerto digital 6 para el color rojo
int PinAzul = 12; //Asignacion del puerto digital 7 para el color Verde
int some_limit = 9;


Servo servoMotor;
int sensorTemperatura = A0;



void setup() {
  lcd.begin(16,2);  //Configuramos la pantalla LCD para el numero de columnas y filas (16x2)
  delay(1000);  //Esperamos un segundo
  //Configuramos los puertos digitales 6, 7, 8 y 10 como salidas
  pinMode(PinBlanco,OUTPUT);
  pinMode(PinAzul,OUTPUT);
  
  
  servoMotor.attach(9); // Asigna el pin 9 al servo motor
  servoMotor.write(0);
 
  
}

void loop() {
  
  
  
  int lecturaSensor = analogRead(sensorTemperatura); // Lee el valor del sensor de temperatura
  float temperatura = lecturaSensor * 5.0 / 1023 * 100.0; // Convierte la lectura a temperatura
  if (temperatura >= 60) { // Si la temperatura es alta
  
  
    
  ValorSensor = analogRead(Sensor); //Leemos el valor del sensor
  Temperatura = map(ValorSensor,20,358,-40,125); //Obtener valor sensor en voltios
   //Limpiamos la pantalla LCD de cualquier caracter
  lcd.setCursor(0,0); //Configuramos en la columna y fila a presentar el valor y el mensaje de temperatura
  lcd.print(Temperatura); //Presentamos el valor de la temperatura en la pantalla
  lcd.print("'C");  //Presentamos un mensaje en la pantalla

  moverServo();  
    
  }  
    
  else if(Temperatura <0){ //Si la temperatura es menor a 20 grados
    	lcd.setCursor(0,1); //Configuramos en la primera columna y segunda fila el mensaje de temperatura baja
    	lcd.print("INVIERNO");  //Presentamos el mensaje Temperatura Baja
    	digitalWrite(PinBlanco, LOW);  //Apaga el led Blanco
    	digitalWrite(PinAzul, HIGH);  //Enciende el led Azul
    	delay(300); //Esperamos 0.1 segundos
  
  		digitalWrite(PinAzul,LOW);
    
    }
    else if(Temperatura < 10){  //Si la temperatura es mayor a 30 grados
      lcd.setCursor(0,1); //Configuramos en la primera columna y segunda fila el mensaje de temperatura baja
      lcd.print("OTONEO");  //Presentamos el mensaje Temperatura Alta
      delay(300); //Esperamos 0.1 segundos
     
      }
   
  else if(Temperatura < 25){//Si no se cumple con las condiciones anteriores
      lcd.setCursor(0,1); //Configuramos en la primera columna y segunda fila el mensaje de temperatura baja
      lcd.print("PRIMAVERA");  //Presentamos el mensaje Temperatura normal
      delay(300); //Esperamos 0.1 segundos
   
  }
  	else if(Temperatura < 50){
      
      lcd.setCursor(0,1); //Configuramos en la primera columna y segunda fila el mensaje de temperatura baja
      lcd.print("VERANO");  //Presentamos el mensaje Temperatura normal
      digitalWrite(PinAzul, LOW);  //Apaga el led Azul
      digitalWrite(PinBlanco, HIGH);  //Enciende el led Blanco
		
      delay(300); //Esperamos 0.1 segundos
      
       digitalWrite(PinBlanco,LOW);

      
      lcd.clear(); 
    }
}

void moverServo(){
  for (int i = 0; i <= 180; i++){
    // Desplazamos al ángulo correspondiente
    servoMotor.write(i);
    delay(25);

 } 
}

