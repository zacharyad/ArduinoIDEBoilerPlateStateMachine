//  Coded by Zach Droge for use within Locked Manhattan LLC's business interests.
//
//  available pins: 2 3 4 5 6 7 8 9 10 11 12 13 A0 A1 A2 A3 A4 A5 A6 A7
//

//  Global Constants
const int example1 = 2;
const int example2 = 3;
const int example3 = 4;
const int example4 = 5;

//  Global vars

int state = 0;

//  Funcs
int onSuccess(){
  
}

void lightLeds(){
  
}

void setup() {
  Serial.begin(9600);
  pinMode(example1, INPUT_PULLUP);
  pinMode(example2, INPUT_PULLUP);
  pinMode(example3, INPUT);
  pinMode(example4, OUTPUT);
}

void loop() {
  SM();
}

void SM(){
  Serial.println("");
  switch(state){
    case 0:
      //Reset things
      
    break;
    
    case 1:
    
    break;
    
    case 2:
    
    break;
    
    case 3:
    
    break;
    
    case 4:
    //Success
    state = 0;
    break;
    
    default:
        Serial.println("State was changed without a case written for it.");
    break;
  }
}
