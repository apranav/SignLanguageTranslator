
const int a = A0;
const int b=A1;
const int c=A2;
const int d=A3;
const int e=A4;

int thumb;
int index;
int middle;
int ring;
int little;

void setup()
{
Serial.begin(9600);
}

void loop()
{
thumb=analogRead(a);
Serial.print("thumb:");
Serial.println(thumb);
index=analogRead(b);
Serial.print("index:");
Serial.println(index);
middle=analogRead(c);
Serial.print("middle:");
Serial.println(middle);
ring=analogRead(d);
Serial.print("ring:");
Serial.println(ring);
little=analogRead(e);
Serial.print("little:");
Serial.println(little);
delay(1000);
Serial.println("");
}
