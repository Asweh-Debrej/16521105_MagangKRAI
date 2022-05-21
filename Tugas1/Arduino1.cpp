// C++ code
//
#define pinKananMundur 4
#define pinKiriMundur 6
#define pinKananMaju 5
#define pinKiriMaju 7
#define pinKanan 8
#define pinMundur 9
#define pinMaju 10
#define pinKiri 11

bool picking;

void setup()
{
    pinMode(pinKanan, INPUT);
    pinMode(pinMundur, INPUT);
    pinMode(pinMaju, INPUT);
    pinMode(pinKiri, INPUT);
    pinMode(pinKananMundur, OUTPUT);
    pinMode(pinKananMaju, OUTPUT);
    pinMode(pinKiriMundur, OUTPUT);
    pinMode(pinKiriMaju, OUTPUT);
}

void pick()
{

}

void loop()
{
    if (!picking){
        if (digitalRead(pinKanan) == HIGH || digitalRead(pinMaju) == HIGH) {
            digitalWrite(pinKiriMaju, HIGH);
        } else {
            digitalWrite(pinKiriMaju, LOW);
        }
        if (digitalRead(pinKiri) == HIGH || digitalRead(pinMaju) == HIGH) {
            digitalWrite(pinKananMaju, HIGH);
        } else {
            digitalWrite(pinKananMaju, LOW);
        }
        if (digitalRead(pinKanan) == HIGH || digitalRead(pinMundur) == HIGH) {
            digitalWrite(pinKananMundur, HIGH);
        } else {
            digitalWrite(pinKananMundur, LOW);
        }
        if (digitalRead(pinKiri) == HIGH || digitalRead(pinMundur) == HIGH) {
            digitalWrite(pinKiriMundur, HIGH);
        } else {
            digitalWrite(pinKiriMundur, LOW);
        }
        delay(100);
    }
}