// C++ code
//

// IN1 > 2
// IN2 > 3
// IN3 > 4
// IN4 > 5

const byte pins[4] = {2,4,3,5}; // IN1,IN3,IN2,IN4
void setup()
{
  for (byte i=0;i<4;i++)pinMode(i,1);
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available()){char x=Serial.read();
  for (byte i=0;i<4;i++)digitalWrite(*(pins+i),x&1<<i);}
}  
  	  // A --> Right
  	  // B --> Left
	  // C --> Forward
  	  // L --> Backward
  	  // P --> Stop