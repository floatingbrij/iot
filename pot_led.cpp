#define potato 35
#define led 13
void setup(){
    Serial.begin(9600);
    ledcSetup(2,1000,12);
    ledcAttachPin(led,2);
}
void loop(){
    int a = anologRead(potato);
    int b = map(a,0,4095,0,255);
    ledcWrite(2,b);
}