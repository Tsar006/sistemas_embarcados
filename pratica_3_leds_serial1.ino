const int led_vermelho =5;
const int led_verde = 6;
const int led_amarelo =7;
char led;
void setup()
{
  Serial.begin(9600); //Definição da velocidade
  pinMode(led_vermelho, OUTPUT);
  pinMode(led_verde, OUTPUT);
  pinMode(led_amarelo, OUTPUT);
  

}

void loop()
{
 
    led = Serial.read();
    switch(led){
      case'R': 
      	digitalWrite(led_vermelho, HIGH); // Acende led
                            break;
      case'r': digitalWrite(led_vermelho, LOW); // Apaga led
                            break;
      case'G': digitalWrite(led_verde, HIGH); // Apaga led
                            break;
      case'g': digitalWrite(led_verde, LOW); // Apaga led
                            break;
      case'Y': digitalWrite(led_amarelo, HIGH); // Apaga led
                            break;
      case'y': digitalWrite(led_amarelo, LOW); // Apaga led
                            break;
      default: Serial.println("Nenhum led selecionado!!!");
    }
}