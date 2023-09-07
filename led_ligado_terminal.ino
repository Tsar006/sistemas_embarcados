int led_vermelho = 13;
char valor_usuario = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(led_vermelho, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  valor_usuario = Serial.read();
  if (valor_usuario == 'r'){
    digitalWrite(led_vermelho, HIGH);
    delay(500);
  }
  if (valor_usuario != 'r') {
    digitalWrite(led_vermelho, LOW);
    delay(500);
  }
}
