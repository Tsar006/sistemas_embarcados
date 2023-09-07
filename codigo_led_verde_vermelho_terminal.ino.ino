int led_vermelho = 13;
char valor_usuario = 0;
int led_verde = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(led_vermelho, OUTPUT);
  pinMode(led_verde, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  valor_usuario = Serial.read();
  if (valor_usuario == 'r'){
    digitalWrite(led_vermelho, HIGH);
    delay(700);
  }
  if (valor_usuario == 'v') {
    digitalWrite(led_verde, HIGH);
    delay(700);
  }
if(valor_usuario != "v" & valor_usuario != "r") {
  digitalWrite(led_vermelho, LOW);
  digitalWrite(led_verde, LOW);
  }
}
