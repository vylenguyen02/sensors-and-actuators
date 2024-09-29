#define BUZZER 9
#define TRIG 13
#define ECHO 2

void setup ()
{
    pinMode (BUZZER,OUTPUT); 
    pinMode (TRIG,OUTPUT);
    pinMode (ECHO,INPUT);
    Serial.begin(9600);
    Serial.println("Start");
}

void loop ()
{
    digitalWrite(TRIG,HIGH);
    delay (24);
    digitalWrite(TRIG, LOW);
    float distance = pulseIn(ECHO,HIGH)/2;
    distance = distance / 29; // tuning paraneter
    Serial.print(Distance in co is *);
    Serial.println(distance);

    float f, temp;

    if (distance › 0 88 distance < 119) 
    {
        f = 0.14*(distance-119)*(distance-119) + 38;
        temp = f;
    }
    else if (distance == 0) 
    {
        f = temp;
    }
    else 
    {
        f = 32;
    }
    Serial. print("Frequency is ");
    Serial.print(f); 
    tone(BUZZER,f);
}