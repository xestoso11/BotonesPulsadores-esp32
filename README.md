# Botones_en_arduino_esp32
En este repositorio se explica como usar diferentes pulsadores con una placa esp32, todos los ejemplos de código están hechos en arduino ide
## Pulsadores_2patas
Como usar un pulsador de tan solo 2 patas, para el funcionamiento del pulsador solo necesitaremos conectar 1 pata del pulsador a GND y la otra pata a uno de nuestros pins de nuestra placa, y ya podemos comprobar como funciona nuestro pulsador, no es necesario usar resitencias ya que se usa INPUT_PULLDOWN esto nos permite usar las resitencias internas de la placa tambien podríamos optar por usa INPUT_PULLUP usando éste dejariamos de usar GND y usariamos el puerto de 3.3V.
## Pulsador_3patas
Para conectar un pulsador de tres patas podemos usar el mismo código que el de dos patas, en una de las patas conectamos gnd y en la pata de en medio se conecta el pin por donde vamos a recibir si el pulsador, está pulsado o no pulsado, normalmente una pata es normalmente abierta esto significa que sin pulsar está pulsada, y la otra seria la normalmente cerrada, que mientres no se pulse no esta pulsada.
## Pulsador_4patas