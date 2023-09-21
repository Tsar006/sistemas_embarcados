const int led_amarelo = 7;
char led;

void setup(){
  Serial.begin(9600);
  pinMode(led_amarelo, OUTPUT);
}

void loop()
{
    led = Serial.read();
    switch(led){
      case '1': 
      	digitalWrite(led_amarelo, HIGH);
        delay(100);
        digitalWrite(led_amarelo, LOW);
        delay(100);
        break;
      case '2': 
        digitalWrite(led_amarelo, HIGH);
        delay(200);
        digitalWrite(led_amarelo, LOW);
        delay(200);
        break;
      case'3':
        digitalWrite(led_amarelo, HIGH);
        delay(300);
        digitalWrite(led_amarelo, LOW);
        delay(300);
        break;
      case'4':
        digitalWrite(led_amarelo, HIGH);
        delay(400);
        digitalWrite(led_amarelo, LOW);
        delay(400);
        break;
      case'5':   
        digitalWrite(led_amarelo, HIGH);
        delay(500);
        digitalWrite(led_amarelo, LOW);
        delay(500);
        break;
      default: 
        Serial.println("Nenhum valor entre 1 e 5 inserido!");
        
    }
}