// Indicamos el pin de la placa en el que conectamos el botón
const int botonPin12 = 12;
// definimos la variable que va a recibir los valores del botón para saber si esta activo o apagado
int boton1 = 0;


void setup() {
  // Inicializamos el puerto serial, para poder leer a través de el, entre los parétesis le indicaremos la velocidad
  Serial.begin(115200);
  // Nos mostrara al leer el puerto serial "Iniciado" cuando arranque nuestra placa
  Serial.println("Iniciado");
  // pinMode indicamos el pin que se va a leer y gracias a INPUT_PULLUP nos permite no tener que usar resistencias para que funcionen los botones, ya que usara la propias resistencias de la placa
  pinMode(botonPin12, INPUT_PULLUP);
}

void loop() {
  //leemos el pin en el que está el boton y le asignamos el valor a la variable que creamos al principio
  boton1 = digitalRead(botonPin12);
  // Éste if nos permite saber cuando se activa el botón, se iguala a 0 ya que usamos INPUT_PULLUP al inicial, si usáramos INPUT tendriamos que igualarlo a 1 para saber cuando se active
  if (boton1 == 0) {
    // Nos indica que el botón se activo por el puerto serial
    Serial.println("boton1 activo");
    // Nos indica el valor del botón que recibimos por el puerto serial, será siempre 0 ya que está dentro del if
    Serial.println(boton1);
  }
  delay(1000);

}
