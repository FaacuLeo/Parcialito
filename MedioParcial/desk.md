Segundo Parcial SPD  
 Tema: Exposicion de sistema de incendio con arduino


![Imagen del proyecto]()
## Alumno: Facundo Leonelli


## Consigna:
El objetivo de este proyecto es diseñar un sistema de incendio utilizando Arduino que sea iniciado por un control remoto, que pueda
detectar cambios de temperatura y activar un servo motor en caso de detectar un incendio.
Además, se mostrará la temperatura actual y la estación del año en un display LCD.

Componentes necesarios:
Arduino UNO
Sensor de temperatura
Control remoto IR (Infrarrojo)
Display LCD (16x2 caracteres)
Servo motor
Cables y resistencias según sea necesario
Protoboard para realizar las conexiones
Dos leds.


Funcionalidad requerida:
Conexiones:
Conecta el sensor de temperatura al pin analógico A0 de Arduino.
Conecta el control remoto IR al pin digital 11 de Arduino.
Conecta el display LCD utilizando los pines correspondientes de Arduino.
Conecta el servo motor a uno de los pines PWM de Arduino (por ejemplo, pin 9).

Control remoto:
Configura el control remoto IR para recibir señales.
Define los comandos necesarios para activar y desactivar el sistema de incendio.
Utiliza un algoritmo para determinar la estación del año (por ejemplo, rangos de temperatura
para cada estación).
Detección de temperatura:
Configura el sensor de temperatura y realiza la lectura de la temperatura ambiente.
Muestra la temperatura actual en el display LCD.

Sistema de Procesamiento de Datos

Sistema de alarma:
Define un umbral de temperatura a partir del cual se considera que hay un incendio (por
ejemplo, temperatura superior a 60 grados Celsius).
Cuando se detecta un incendio (temperatura por encima del umbral), se activa el servo
motor para simular una respuesta del sistema de incendio.
Mensajes en el display LCD:
Muestra la temperatura actual y la estación del año en el display LCD.
Cuando se detecta un incendio, muestra un mensaje de alarma en el display LCD.

Punto libre:
Se deberá agregar dos leds y darle una funcionalidad de su elección, acorde al
proyecto previamente detallado.

Recuerda proporcionar un diagrama de conexiones y el código necesario para implementar
cada una de las funcionalidades requeridas. Esto ayudará a comprender y construir el
sistema de incendio con Arduino.




## Descripcion:

Hice un código de arduino que tiene la funcion de mostrar por pantalla led la cantidad de grados que me marca el sensor de temperatura. Mientras gira un servo y encienden los luces. 


## Funcion Principal:


	 
 
 




```

```

## Link al proyecto en Tinkercad
[Link](https://www.tinkercad.com/things/j3dmJGS5dHN-fantabulous-gogo-krunk/editel?sharecode=KdEdTLb2fHwkJS2ZFWsC6Ug6mAaWPkmIhjMSVGbkXWE)

## Link al codigo completo en GDB Online
[Link](https://onlinegdb.com/VCs1Wl3hj)


