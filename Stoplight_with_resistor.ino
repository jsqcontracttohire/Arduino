//Stoplight busy box with resistor info logger


//Set Pin Id's
int LED1 = 9;              //Set up green as a constant
int LED2 = 10;            //Set up yellow as a constant
int LED3 = 11;               //Set up red as a constant 
int LED4 = 2;               //Set up red as a constant
int LED5 = 4;               //Set up red as a constant
int LED6 = 8;               //Set up red as a constant
int LED7 = 7;               //Set up red as a constant
int LED8 = 12;               //Set up red as a constant
int LED9 = A1;               //Set up red as a constant
int LED10 = A2;               //Set up red as a constant
int LED11 = A3;               //Set up red as a constant
int LED12 = A4;               //Set up red as a constant
int analogPin = A5;

// Build Array List
int MasterPins[] = {9, 10, 11, 2, 4, 8, 7, 12, A1, A2, A3, A4};




//Set Params 
//int RanDelay = random(200, 2000);
int Maindelay = 30;          //Set delay value
//int delay1 = 30;          //Set delay value


int blue = A0;     //Hint A0 has a pin and a snap spot on the unit (white wire) 
int color = A1;
int color2 = A2;
int color3 = A3;
int color4 = 12;
//int A4 = A4;
//int A5 = A5;

int val = 0;  // variable to store the value read

int DadDelay = 500;    // Dad Delay

int counter = 1;

int loopCnt = 12;

void setup() {

pinMode(LED1, OUTPUT);       //Set digital pin red as an output
pinMode(LED2, OUTPUT);       //Set digital pin red as an output
pinMode(LED3, OUTPUT);       //Set digital pin red as an output
pinMode(LED4, OUTPUT);       //Set digital pin red as an output
pinMode(LED5, OUTPUT);       //Set digital pin red as an output
pinMode(LED6, OUTPUT);       //Set digital pin red as an output
pinMode(LED7, OUTPUT);       //Set digital pin red as an output
pinMode(LED8, OUTPUT);       //Set digital pin red as an output
pinMode(LED9, OUTPUT);       //Set digital pin red as an output
pinMode(LED10, OUTPUT);       //Set digital pin red as an output
pinMode(LED11, OUTPUT);       //Set digital pin red as an output
pinMode(LED12, OUTPUT);       //Set digital pin red as an output
pinMode(analogPin, INPUT);

Serial.begin(9600);



  /*
pinMode(red, OUTPUT);       //Set digital pin red as an output
pinMode(green, OUTPUT);     //Set digital pin green as an output
pinMode(yellow, OUTPUT);    //Set digital pin yellow as an output
pinMode(13, OUTPUT);  // Dad test using pin output
pinMode(blue, OUTPUT);  // Dad test using pin output
pinMode(color, OUTPUT);  // Dad test using pin output
pinMode(color2, OUTPUT);  // Dad test using pin output
pinMode(color3, OUTPUT);  // Dad test using pin output
pinMode(color4, OUTPUT);  // Dad test using pin 
pinMode(A4, OUTPUT);  // Dad test using pin 
pinMode(A5, OUTPUT);  // Dad test using pin 


int analogPin = A3; // potentiometer wiper (middle terminal) connected to analog pin 3
                    // outside leads to ground and +5V
int val = 0;  // variable to store the value read

void setup() {
  Serial.begin(9600);           //  setup serial
}

void loop() {
  val = analogRead(analogPin);  // read the input pin
  Serial.println(val);          // debug value
}

*/



}

void loop() {


  val = analogRead(analogPin);  // read the input pin
  Serial.println(val);          // debug value



int i;
//for (i = 0; i < 12; i = i + 1) {
//   digitalWrite(MasterPins[i], HIGH);
//       delay(100);
//}

//x = x - 7;
//for (i = 12; i < 1; i = i - 1) {
//  Serial.print(i);
//   digitalWrite(MasterPins[i], HIGH);
//       delay(1000);
//       digitalWrite(MasterPins[i], LOW);
//}

/*
do
{
        loopCnt = loopCnt - 1;  

      Serial.print(loopCnt);
       digitalWrite(MasterPins[loopCnt], HIGH);
       delay(1000);
       digitalWrite(MasterPins[loopCnt], LOW);

   
  } while (loopCnt > 1 );

*/
//String strLED = "LED" ;

//String intTemp = String(random(1, 13));

//String stringFour = "LED" + intTemp;

//digitalWrite(intTemp.toInt(), HIGH);
//digitalWrite(stringFour.toInt(), HIGH);

//int NewInt = strLED.concat(random(1,13)).toInt();
//myString.toInt()
//Serial.print(stringFour);
// Serial.print("\t");
//digitalWrite((stringFour.toInt()), HIGH);

//digitalWrite(int(strLED.concat(10)), HIGH);

//Serial.print(stringFour);
//Serial.print(stringThree);



//delay(5000);  
//delay(Maindelay); 

  

digitalWrite(LED1, HIGH);
delay(Maindelay);  
digitalWrite(LED1, LOW);
delay(Maindelay); 
digitalWrite(LED2, HIGH);
delay(Maindelay);  
digitalWrite(LED2, LOW);
delay(Maindelay); 
digitalWrite(LED3, HIGH);
delay(Maindelay);  
digitalWrite(LED3, LOW);
delay(Maindelay); 
digitalWrite(LED4, HIGH);
delay(Maindelay);  
digitalWrite(LED4, LOW);
delay(Maindelay); 
digitalWrite(LED5, HIGH);
delay(Maindelay);  
digitalWrite(LED5, LOW);
delay(Maindelay); 
digitalWrite(LED6, HIGH);
delay(Maindelay);  
digitalWrite(LED6, LOW);
delay(Maindelay);
digitalWrite(LED7, HIGH);
delay(Maindelay);  
digitalWrite(LED7, LOW);
delay(Maindelay);
digitalWrite(LED8, HIGH);
delay(Maindelay);  
digitalWrite(LED8, LOW);
delay(Maindelay);
digitalWrite(LED9, HIGH);
delay(Maindelay);  
digitalWrite(LED9, LOW);
delay(Maindelay);
digitalWrite(LED10, HIGH);
delay(Maindelay);  
digitalWrite(LED10, LOW);
delay(Maindelay);

digitalWrite(LED11, HIGH);
delay(Maindelay);  
digitalWrite(LED11, LOW);
delay(Maindelay);

digitalWrite(LED12, HIGH);
delay(Maindelay);  
digitalWrite(LED12, LOW);
delay(Maindelay);





// Serial.println("Lights RESET     ");
// Serial.print("\t\t\t");

// println




   if(counter >= 10) { //Switch to subrtact from counter.
    counter = 0;
    FireIt();  // Calls this function
    loopCnt = 0;   
    }
  if(counter < 50){        //Start adding to the counter.
    //counter = counter +1;
    ++counter;
    } 
 
    }


// this is a function - hit it is being passed a value
    void LEDRAND(int ranNum) {     

      digitalWrite(ranNum, HIGH);
          delay(50); 
          digitalWrite(ranNum, LOW);
       delay(50);
            
      }


//this is a function
void FireIt() {

  do
{
  
  ++ loopCnt;  // check the sensors



String intTemp = String(random(1, 13));
val = analogRead(analogPin);  // read the input pin
  Serial.println(val); 

switch (intTemp.toInt()) {
  case 2:
    LEDRAND(intTemp.toInt());  //<-- is calling a funciton, can you find it and figure out what its doing?
    break;
  case 4:
    LEDRAND(intTemp.toInt());
    break;
  case 7:
   LEDRAND(intTemp.toInt());
    break;
 case 8:
    LEDRAND(intTemp.toInt());
    break;
  case 9:
    LEDRAND(intTemp.toInt());
    break;
  case 10:
    LEDRAND(intTemp.toInt());
    break;
  case 11:
   LEDRAND(intTemp.toInt());
    break;
  case 12:
    LEDRAND(intTemp.toInt());
    break;
  default:
   LEDRAND(LED12);




   int IntCntRan = random(0,5) ;
     switch(IntCntRan){
       case 1:
          LEDRAND(LED9);
        break;
        case 2:
          LEDRAND(LED10);
        break;
        case 3:
          LEDRAND(LED11);
        break;
        case 4:
          LEDRAND(LED12);
        break;
          default:
            break;
      
      }
    
    break;
}



//digitalWrite(intTemp.toInt(), HIGH);
//delay(500); 
//digitalWrite(intTemp.toInt(), LOW);
//delay(500);
  


/*
digitalWrite(red, HIGH);    //Turn the red light on
digitalWrite(yellow, HIGH); //Turn the yellow light on
digitalWrite(green, HIGH);  //Turn the green light on
digitalWrite(13, HIGH);  //Turn the dadlight on

 delay(random(20,2000));          // wait for sensors to stabilize

digitalWrite(red, LOW);    //Turn the red light on
digitalWrite(yellow, LOW); //Turn the yellow light on
digitalWrite(green, LOW);  //Turn the green light on
digitalWrite(13, LOW);  //Turn the dadlight on

delay(random(100, 1800));          // wait for sensors to stabilize

*/

} while (loopCnt < 100);



}
