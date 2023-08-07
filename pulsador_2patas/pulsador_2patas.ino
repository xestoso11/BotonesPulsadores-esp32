// Indicamos el pin de la placa en el que conectamos el boton
const int botonPin12 = 12;
// definimos la variable que va a recibir los valores del boton para sabes si esta activo o apagado
int boton1 = 0;


void setup() {
  Serial.begin(115200);
  Serial.println("Iniciado");
  // pinMode indicamos el pin que se va a leer y gracias a INPUT_PULLUP nos permite no tener que usar resistencias para que funcionen los botones
  pinMode(botonPin12, INPUT_PULLUP);
}

void loop() {
  //leemos el pin en el que está el boton y le asignamos el valor a la variable que creamos al principio
  boton1 = digitalRead(botonPin12);
  if (boton1 == 0) {
    Serial.println("boton1 activo");
    Serial.println(boton1);
  }
  delay(1000);

}
