/*
 * Funktion:        LEDs sollen im Laufmuster aufleuchten
 * Programierer:    Eric Junker
 * letzte Änderung: 15.09.2020
 * Version:         1.0
 * Hardware:        Pin 2-5 rote LEDs im Laufmuster
 */
#define roteLED_1 2   // pin 2 wird als grüne LED deklariert
#define roteLED_2 3   // pin 3 wird als rote LED deklariert
#define roteLED_3 4   // pin 4 wird als rote LED deklariert
#define roteLED_4 5   // pin 5 wird als rote LED deklariert
#define Laufzeit 150  // Verzögerung in ms zwischen den LEDs wir eingestellt

void setup()
{
  /******Pinbelegung********/
  
  pinMode(roteLED_1, OUTPUT);
  pinMode(roteLED_2, OUTPUT);
  pinMode(roteLED_3, OUTPUT);
  pinMode(roteLED_4, OUTPUT);
  
}

void loop() 
{
  digitalWrite(roteLED_1, HIGH);
  digitalWrite(roteLED_4, LOW);
  delay(Laufzeit);
  digitalWrite(roteLED_2, HIGH);
  digitalWrite(roteLED_1, LOW);
  delay(Laufzeit);
  digitalWrite(roteLED_3, HIGH);
  digitalWrite(roteLED_2, LOW);
  delay(Laufzeit);
  digitalWrite(roteLED_4, HIGH);
  digitalWrite(roteLED_3, LOW);
  delay(Laufzeit);
  
}
