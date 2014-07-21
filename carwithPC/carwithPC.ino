int motorPinPwm = 13;// ServoMotor for test
int motor1PinPwm = 6;
int motor2PinPwm = 5;

byte startbyte;   // Where to store the Bytes read

void setup() {

// set the digitals pins as outputs:
pinMode(motorPinPwm, OUTPUT);
  // Open the serial connection, 9600 baud
  Serial.begin(9600);

}

void loop() {
    if (Serial.available() > 0) {
      //digitalWrite(motorPinPwm, HIGH);
    // Read the first byte
    startbyte = Serial.read();


    if (startbyte == 1) {digitalWrite(motorPinPwm, HIGH);
           analogWrite(motor1PinPwm, 50.0);
     analogWrite(motor2PinPwm, 50.0);}
      else if (startbyte == 2)
      {digitalWrite(motorPinPwm, LOW);
         analogWrite(motor1PinPwm, 0.0);
     analogWrite(motor2PinPwm, 0.0);}
    }
}

