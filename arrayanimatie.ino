//Definiëren van de uitganspinnen
const int shiftClockPin = 10;  //SH
const int latchClockPin = 11;  //ST
const int serialInputPin = 12; //DS
const int switch6 = 9;
const int switch5 = 8;
const int switch4 = 7;
const int switch3 = 6;
const int switch2 = 5;
const int switch1 = 4;

byte smiley1 [8][8] = {
  {0,0,1,1,1,1,0,0},
  {0,1,0,0,0,0,1,0},
  {1,0,1,0,0,1,0,1},
  {1,0,0,0,0,0,0,1},
  {1,0,1,0,0,1,0,1},
  {1,0,0,1,1,0,0,1},
  {0,1,0,0,0,0,1,0},
  {0,0,1,1,1,1,0,0}
};

byte smiley2 [8][8] = {
  {0,0,1,1,1,1,0,0},
  {0,1,0,0,0,0,1,0},
  {1,0,1,0,0,1,0,1},
  {1,0,0,0,0,0,0,1},
  {1,0,1,1,1,1,0,1},
  {1,0,0,0,0,0,0,1},
  {0,1,0,0,0,0,1,0},
  {0,0,1,1,1,1,0,0}
};

byte smiley3 [8][8] = {
  {0,0,1,1,1,1,0,0},
  {0,1,0,0,0,0,1,0},
  {1,0,1,0,0,1,0,1},
  {1,0,0,0,0,0,0,1},
  {1,0,0,1,1,0,0,1},
  {1,0,1,0,0,1,0,1},
  {0,1,0,0,0,0,1,0},
  {0,0,1,1,1,1,0,0}
};

word clearScreen =0b0000000000000000;

word led[9][9];

void displayBericht(byte bericht[8][8]) {
  for(int x=0; x<8; x++){
  for(int y=0; y<8; y++){
  if(bericht[x][y] == 1){
  displayData(led[x+1][y+1]);
  }}}}

void displayData(word message) {
  // put your main code here, to run repeatedly:
  for (int i = 0; i <= 15; i++) {
    digitalWrite(serialInputPin, bitRead(message, i));
    digitalWrite(shiftClockPin, HIGH);
    digitalWrite(shiftClockPin, LOW);
  }
  digitalWrite(latchClockPin, HIGH);
  digitalWrite(latchClockPin, LOW);

}

void init()
{
//R1 R2 K2 R8 K4 R3 R5 K1 K5 K3 K6 R4 K8 R6 R7 K7
//                  1228435153648677
//                  RRKRKRRKKKKRKRRK
led[1][1] = 0b0101011100010110;
led[1][2] = 0b0111011000010110;
led[1][3] = 0b0101011001010110;
led[1][4] = 0b0101111000010110;
led[1][5] = 0b0101011010010110;
led[1][6] = 0b0101011000110110;
led[1][7] = 0b0101011000010111;
led[1][8] = 0b0101011000011110;

//R1 R2 K2 R8 K4 R3 R5 K1 K5 K3 K6 R4 K8 R6 R7 K7
//                  1228435153648677
//                  RRKRKRRKKKKRKRRK
led[2][1] = 0b1001011100010110;
led[2][2] = 0b1011011000010110;
led[2][3] = 0b1001011001010110;
led[2][4] = 0b1001111000010110;
led[2][5] = 0b1001011010010110;
led[2][6] = 0b1001011000110110;
led[2][7] = 0b1001011000010111;
led[2][8] = 0b1001011000011110;

//R1 R2 K2 R8 K4 R3 R5 K1 K5 K3 K6 R4 K8 R6 R7 K7
//                  1228435153648677
//                  RRKRKRRKKKKRKRRK
led[3][1] = 0b1101001100010110;
led[3][2] = 0b1111001000010110;
led[3][3] = 0b1101001001010110;
led[3][4] = 0b1101101000010110;
led[3][5] = 0b1101001010010110;
led[3][6] = 0b1101001000110110;
led[3][7] = 0b1101001000010111;
led[3][8] = 0b1101001000011110;

//R1 R2 K2 R8 K4 R3 R5 K1 K5 K3 K6 R4 K8 R6 R7 K7
//                  1228435153648677
//                  RRKRKRRKKKKRKRRK
led[4][1] = 0b1101011100000110;
led[4][2] = 0b1111011000000110;
led[4][3] = 0b1101011001000110;
led[4][4] = 0b1101111000000110;
led[4][5] = 0b1101011010000110;
led[4][6] = 0b1101011000100110;
led[4][7] = 0b1101011000000111;
led[4][8] = 0b1101011000001110;

//R1 R2 K2 R8 K4 R3 R5 K1 K5 K3 K6 R4 K8 R6 R7 K7
//                  1228435153648677
//                  RRKRKRRKKKKRKRRK
led[5][1] = 0b1101010100010110;
led[5][2] = 0b1111010000010110;
led[5][3] = 0b1101010001010110;
led[5][4] = 0b1101110000010110;
led[5][5] = 0b1101010010010110;
led[5][6] = 0b1101010000110110;
led[5][7] = 0b1101010000010111;
led[5][8] = 0b1101010000011110;

//R1 R2 K2 R8 K4 R3 R5 K1 K5 K3 K6 R4 K8 R6 R7 K7
//                  1228435153648677
//                  RRKRKRRKKKKRKRRK
led[6][1] = 0b1101011100010010;
led[6][2] = 0b1111011000010010;
led[6][3] = 0b1101011001010010;
led[6][4] = 0b1101111000010010;
led[6][5] = 0b1101011010010010;
led[6][6] = 0b1101011000110010;
led[6][7] = 0b1101011000010011;
led[6][8] = 0b1101011000011010;

//R1 R2 K2 R8 K4 R3 R5 K1 K5 K3 K6 R4 K8 R6 R7 K7
//                  1228435153648677
//                  RRKRKRRKKKKRKRRK
led[7][1] = 0b1101011100010100;
led[7][2] = 0b1111011000010100;
led[7][3] = 0b1101011001010100;
led[7][4] = 0b1101111000010100;
led[7][5] = 0b1101011010010100;
led[7][6] = 0b1101011000110100;
led[7][7] = 0b1101011000010101;
led[7][8] = 0b1101011000011100;

//R1 R2 K2 R8 K4 R3 R5 K1 K5 K3 K6 R4 K8 R6 R7 K7
//                  1228435153648677
//                  RRKRKRRKKKKRKRRK
led[8][1] = 0b1100011100010110;
led[8][2] = 0b1110011000010110;
led[8][3] = 0b1100011001010110;
led[8][4] = 0b1100111000010110;
led[8][5] = 0b1100011010010110;
led[8][6] = 0b1100011000110110;
led[8][7] = 0b1100011000010111;
led[8][8] = 0b1100011000011110;
}


boolean shiftLeftRight = false;

void setup() {
  //Instelen van de uitgangspinnen
  pinMode(shiftClockPin, OUTPUT);
  pinMode(latchClockPin, OUTPUT);
  pinMode(serialInputPin, OUTPUT);
  pinMode(switch6, INPUT);       
  pinMode(switch5, INPUT);    
  pinMode(switch4, INPUT);    
  pinMode(switch3, INPUT);
  pinMode(switch2, INPUT); 
  pinMode(switch1, INPUT); 

  init();

  Serial.begin(9600);
  
}

void loop(){

  if(digitalRead(switch3) == 1)
  {
    for(int a = 0; a < 20; a++){
    displayBericht(smiley1);
    }    
    for(int a = 0; a < 20; a++){
    displayBericht(smiley2);
    }}
    
   else{
    displayData(clearScreen);
   }}
