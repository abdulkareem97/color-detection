int OutPut = 10;  //naming pin10 of uno as output


unsigned int frequency = 0;





// #include <LiquidCrystal.h>


// initialize the library with the numbers of the interface pins


// LiquidCrystal Serial(8, 9, 7, 11, 12, 13);  //RS,EN,D4,D5,D6,D7





void setup()


{

  Serial.begin(9600);

  // set up the Serial's number of columns and rows


  // lcd.begin(16, 2);




    Serial.begin(9600);

  pinMode(2, OUTPUT);


  pinMode(3, OUTPUT);  //PINS 2, 3,4,5 as OUTPUT


  pinMode(4, OUTPUT);


  pinMode(5, OUTPUT);


  pinMode(10, INPUT);  //PIN 10 as input





  digitalWrite(2, HIGH);


  digitalWrite(3, LOW);  //setting frequency selection to 20%
}


void loop()


{


  Serial.println("R=");  //printlning name


  digitalWrite(4, LOW);


  digitalWrite(5, LOW);  //setting for RED color sensor


  frequency = pulseIn(OutPut, LOW);  //reading frequency


  Serial.println(frequency);  //printlning RED color frequency


  Serial.println("  ");


  // Serial.setCursor(7, 0);  //moving courser to position 7


  delay(500);





  Serial.println("B=");  // printlning name


  digitalWrite(4, LOW);


  digitalWrite(5, HIGH);  // setting for BLUE color sensor


  frequency = pulseIn(OutPut, LOW);  // reading frequency


  Serial.println(frequency);  // printlning BLUE color frequency


  Serial.println("  ");


  // Serial.setCursor(0, 1);


  delay(500);





  Serial.println("G=");  // printlning name


  digitalWrite(4, HIGH);


  digitalWrite(5, HIGH);  // setting for GREEN color sensor


  frequency = pulseIn(OutPut, LOW);  // reading frequency


  Serial.println(frequency);  // printlning GREEN color frequency


  Serial.println("    ");


  // Serial.setCursor(0, 0);


  delay(500);
}