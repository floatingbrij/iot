#define lm35 35
#define adcvref_mv 3300.0
#define adcres 4096.0
void setup(){
    Serial.begin(9600);
}
void loop(){
    int adc = analogRead(lm35);
    float mv = adc*(adcvref_mv/adcres);
    float tempc = mv/10;
    float tempf = tempc * 9/5 +32;
    Serial.print(tempc);
    Serial.print(tempf);
}
