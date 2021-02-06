volatile int contador =0;

void setup() {
Serial.begin(57600);
attachInterrupt(0,interrupcion0,RISING);
}

void loop() {
  delay(999);
  Serial.print(contador*30);
  Serial.println(" RPM");
  contador=0;
}

void interrupcion0()
{
  contador++;
}
