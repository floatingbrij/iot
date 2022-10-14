#define ir 13
#define led 10
void setup(){
    Serial.begin(9600);
    pinMode(led,OUTPUT);
}
void loop(){
    int a = digitalRead(ir);
    if (a==0){
        digitalWrite(led,HIGH);
    }
    else{
        digitalWrite(led,LOW);
    }
}