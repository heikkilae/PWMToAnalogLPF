int pwmPin = 9; // output pin supporting PWM
int inPin = 3;  // voltage connected to analog pin 3, e.g. a potentiometer

void setup()
{
  pinMode(pwmPin, OUTPUT); // sets the pin as output
  Serial.begin(9600); 
  Serial.print("Please enter voltage: ");
}

void ConvertToAnalog(float valueIn) {
  int val = 0;    // variable to store the read value
  float volt = 0; // variable to hold the voltage read
  int x = 0;
  
  if (valueIn >= 0 && valueIn <= 5)
  { 
      x = (valueIn/5) * 255;             // volts to digital value 
      analogWrite(pwmPin, (int)x);          // write digital value
      delay(1000);                          // wait until measuring
      int analogVal = analogRead(inPin);    // read the input pin after filtering
      volt = 5 * (float)analogVal / 1023;   // analog to volts
   
      Serial.println("PWMOut\t\tAnalog\t\tAnalogV");
      Serial.print(x);
      Serial.print("\t\t");
      Serial.print(analogVal);
      Serial.print("\t\t");
      Serial.println(volt);
   }
}
  
void loop()
{
  //waiting for input
  while (Serial.available() == 0); 
  float val = Serial.parseFloat();
  
  if(val >= 0 && val <= 5)
  {
    Serial.println();
    Serial.print("Your input: ");
    Serial.println(val);
    
    ConvertToAnalog(val);
    val = 0;
  }
  else
  {
    Serial.println("Invalid voltage! Only 0-5V is allowed");
  }
}

