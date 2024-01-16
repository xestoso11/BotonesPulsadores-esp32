# Botones_en_arduino_esp32
En este repositorio se explica como usar diferentes pulsadores con una placa esp32, todos los ejemplos de código están hechos en arduino ide

## Pulsadores_2patas
Cómo usar un pulsador de tan solo 2 patas, para el funcionamiento del pulsador solo necesitaremos conectar 1 pata del pulsador a GND y la otra pata a uno de nuestros pins de nuestra placa, y ya podemos comprobar cómo funciona nuestro pulsador, no es necesario usar resistencias ya que se usa INPUT_PULLDOWN esto nos permite usar las resistencias internas de la placa también podríamos optar por usar INPUT_PULLUP usando éste dejaríamos de usar GND y usamos el puerto de 3.3V.

## Pulsador_3patas
Para conectar un pulsador de tres patas podemos usar el mismo código que el de dos patas, en una de las patas conectamos gnd y en la pata de en medio se conecta el pin por donde vamos a recibir si el pulsador, está pulsado o no pulsado, normalmente una pata es normalmente abierta esto significa que sin pulsar está pulsada, y la otra sería la normalmente cerrada, que mientras no se pulse no está pulsada.

## Pulsador_4patas
Para conectar un pulsador de cuatro patas lo hay que conectar en diagonal para que cuando se pulse pase electricidad y mientra no se pulse no pase, si se quiere que esté pasando todo el tiempo electricidad y no pase cuando lo pulsemos lo que tendríamos que hacer es conectarlo en línea, las patas que estén una enfrente de la otra
