//Pino conectado ao fio de saída
const int Sensor_Pin = 2;
//Pino conectado ao controle do relé
const int Reley_Pin = 4;

void setup() {
//Configurando o monitor serial
  Serial.begin(9600);
    Serial.println("HC-SR501 sensor com reley");
//Definindo como entrada do sensor
  pinMode(Sensor_Pin,INPUT);
//Definindo como saída para o relé
  pinMode(Reley_Pin,OUTPUT);
}

void loop() {
//Lê o pino do snsor e armazena na variável "Motion"
  int motion = digitalRead(Sensor_Pin);

  if(motion){
//Imprime algo que foi detectado
    Serial.println("Movimento detectado");
//Liga o relé
    digitalWrite(Reley_Pin,HIGH);
  }else{
//Imprime que nada foi detectado
    Serial.println("nenhum movimento detectado");
//Desliga o relé 
    digitalWrite(Reley_Pin,LOW);  
  }
  delay(500);
}
