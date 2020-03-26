const int g = 0;
const int f = 1;
const int a = 2;
const int b = 3;
const int dp = 4;
const int c = 5;
const int d = 6;
const int e = 7;


int code[] = {'0'};

int onSegment = 200;
int offSegment = 100;

void setup() {
  pinMode(g, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(dp, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
}

void loop() {
  for(int i=0;i<sizeof(code);i++){
    int newNum = code[i];
    segment(newNum);
  }

  delay(5000);

}

void zero(){
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    delay(onSegment);
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
}


void segment(int newNum){
  switch (newNum){
    case '0':
    zero();
    break;  
  }
}
