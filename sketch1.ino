#define A0 5
#define D0 6 

int analog;
int digital; 

void setup()
{
  Serial.begin(9600);
  pinMode(analog,INPUT);
  pinMode(digital,INPUT);
}

void loop()
{
  analog = analogRead(analog);
  Serial.print("Analog value is ");
  Serial.println(analog);
  digital = digitalRead(digital);
  Serial.print("Digital value is ");
  Serial.println(digital);
}