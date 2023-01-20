int pin = 12;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(pin) == 1){
    Serial.println("Hello World!");
  }else{
    Serial.println("It's 2023");
  }
  delay(1000);
}
