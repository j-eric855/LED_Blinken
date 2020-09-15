/*
 * Funktion:        LED soll im Sekundentakt blinken
 * Programierer:    Eric Junker
 * letzte Änderung: 15.09.2020
 * Version:         0.1
 * Hardware:        Pin 3 Grüne LED; Pin 2 Rote LED
 */
#define grueneLED 3   // pin 3 wird als grüne LED deklariert
#define roteLED 2     // pin 2 wird als rote LED deklariert
void setup()
{
  pinMode(roteLED, OUTPUT);
  pinMode(grueneLED, OUTPUT);

}

void loop() 
{
  digitalWrite(roteLED, HIGH);
  delay(500);
  digitalWrite(grueneLED, HIGH);
  delay(500);
  digitalWrite(roteLED, LOW);
  delay(500);
  digitalWrite(grueneLED, LOW);
  delay(500);
  
}
