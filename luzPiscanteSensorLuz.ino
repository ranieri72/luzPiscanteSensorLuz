const int pinoSensor = A0;

const int vermelho1 = 12;
const int amarelo1 = 11;
const int verde1 = 10;

const int vermelho2 = 9;
const int amarelo2 = 8;
const int verde2 = 7;

int espera = 0;
int sensorValue = 0;
int outputValue = 0;

void setup() {

  pinMode(vermelho1, OUTPUT);
  pinMode(amarelo1, OUTPUT);
  pinMode(verde1, OUTPUT);

  pinMode(vermelho2, OUTPUT);
  pinMode(amarelo2, OUTPUT);
  pinMode(verde2, OUTPUT);
}

void loop() {

  sensorValue = analogRead(pinoSensor);
  espera = map(sensorValue, 0, 650, 10, 500);

  digitalWrite(verde1, HIGH);
  delay(espera);
  digitalWrite(verde1, LOW);
  digitalWrite(amarelo1, HIGH);
  delay(espera);
  digitalWrite(amarelo1, LOW);
  digitalWrite(vermelho1, HIGH);
  delay(espera);

  digitalWrite(vermelho1, LOW);
  digitalWrite(verde2, HIGH);
  delay(espera);
  digitalWrite(verde2, LOW);
  digitalWrite(amarelo2, HIGH);
  delay(espera);

  digitalWrite(amarelo2, LOW);
  digitalWrite(vermelho2, HIGH);
  delay(espera);
  digitalWrite(vermelho2, LOW);

}
