
int Gotime = 6000; // 5 seconds
int waitTime = 2000; // 5 seconds
int Lane1[] = {11,10,9}; // Lane 1 Red, Yellow and Green
int Lane2[] = {8,7,6}; // Lane 2 Red, Yellow and Green
int Lane3[] = {5,4,3}; // Lane 3 Red, Yellow and Green
int Lane4[] = {2,1,0}; // Lane 4 Red, Yellow and Green

void setup() {
  for (int i = 0; i < 3; i++)
  {
    pinMode(Lane1[i], OUTPUT);
    pinMode(Lane2[i], OUTPUT);
    pinMode(Lane3[i], OUTPUT);
    pinMode(Lane4[i], OUTPUT);
  }
  for (int i = 0; i < 3; i++)
  {
    digitalWrite(Lane1[i], LOW);
    digitalWrite(Lane2[i], LOW);
    digitalWrite(Lane3[i], LOW);
    digitalWrite(Lane4[i], LOW);
  }
}

void loop()  
  {
    digitalWrite(Lane1[2], HIGH);
    digitalWrite(Lane3[0], HIGH);
    digitalWrite(Lane4[0], HIGH);
    digitalWrite(Lane2[0], HIGH);
    delay(Gotime);
    digitalWrite(Lane1[2], LOW);
    digitalWrite(Lane3[0], LOW);
    digitalWrite(Lane1[1], HIGH);
    digitalWrite(Lane3[1], HIGH);
    delay(waitTime);
    digitalWrite(Lane1[1], LOW);
    digitalWrite(Lane3[1], LOW);
    digitalWrite(Lane1[0], HIGH);
    digitalWrite(Lane3[2], HIGH);
    delay(Gotime);
    digitalWrite(Lane3[2], LOW);
    digitalWrite(Lane4[0], LOW);
    digitalWrite(Lane3[1], HIGH);
    digitalWrite(Lane4[1], HIGH);
    delay(waitTime);
    digitalWrite(Lane3[1], LOW);
    digitalWrite(Lane4[1], LOW);
    digitalWrite(Lane3[0], HIGH);
    digitalWrite(Lane4[2], HIGH);
    delay(Gotime);
    digitalWrite(Lane4[2], LOW);
    digitalWrite(Lane2[0], LOW);
    digitalWrite(Lane4[1], HIGH);
    digitalWrite(Lane2[1], HIGH);
    delay(waitTime);
    digitalWrite(Lane4[1], LOW);
    digitalWrite(Lane2[1], LOW);
    digitalWrite(Lane4[0], HIGH);
    digitalWrite(Lane2[2], HIGH);
    delay(Gotime);
    digitalWrite(Lane1[0], LOW);
    digitalWrite(Lane2[2], LOW);
    digitalWrite(Lane1[1], HIGH);
    digitalWrite(Lane2[1], HIGH);
    delay(waitTime);
    digitalWrite(Lane2[1], LOW);
    digitalWrite(Lane1[1], LOW);
}
