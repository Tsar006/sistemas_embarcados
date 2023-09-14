const int led_amarelo = 7;
const int led_verde = 6;
const int led_vermelho = 5;
char led;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led_amarelo, OUTPUT);
  pinMode(led_verde, OUTPUT);
  pinMode(led_vermelho, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  led = Serial.read();
  if (led == 'R') {
    digitalWrite(led_vermelho, HIGH);
    digitalWrite(led_verde, LOW);
    digitalWrite(led_amarelo, LOW);

  } else{ if (led == 'r') {
    digitalWrite(led_vermelho, LOW);
  }
}
 if (led == 'Y') {
    digitalWrite(led_vermelho, LOW);
    digitalWrite(led_verde, LOW);
    digitalWrite(led_amarelo, HIGH);
 } else{ if(led == 'y'){digitalWrite(led_amarelo, LOW);}}

 if (led == 'G'){
   digitalWrite(led_verde, HIGH);
   digitalWrite(led_vermelho, LOW);
   digitalWrite(led_amarelo, LOW);
 } else{if(led == 'g'){digitalWrite(led_verde, LOW);}}

}
