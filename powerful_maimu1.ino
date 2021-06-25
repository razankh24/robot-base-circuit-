//motor 1

int input1= 4;
int input2= 3;

//motor 2

int input4= 7;
int input3= 6;

void setup() {
  pinMode(input1,OUTPUT);
  pinMode(input2,OUTPUT);
  pinMode(input3,OUTPUT);
  pinMode(input4,OUTPUT);
  
}

void loop() {
  //for counter-clockwise rotation
  digitalWrite(input1, HIGH);
  digitalWrite(input4, HIGH);

delay(1000);
  //for anticlockwise rotation
  digitalWrite(input1, LOW);
  digitalWrite(input4, LOW);

delay(1000);

  digitalWrite(input2, HIGH);
  digitalWrite(input3, HIGH);

delay(1000);

  digitalWrite(input2, LOW);
  digitalWrite(input3, LOW);

delay(1000); 

}
  
  
  