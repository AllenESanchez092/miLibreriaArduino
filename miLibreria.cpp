#include "miLibreria.h"
#include "arduino.h"


miLibreria::miLibreria(int pin_led, int baudios)
{
	Serial.begin(baudios);
	pinMode(pin_led,OUTPUT);
	_pin = pin_led;
}
void miLibreria::prender_led(int tiempo)
{
	digitalWrite(_pin,1);
	delay(tiempo);
	digitalWrite(_pin,0);
	delay(tiempo);
}

void miLibreria::escribir_serial(float valor)
{
	Serial.print("valor:");
	Serial.print("\t");
	Serial.println(valor);
}

float miLibreria::conversion_voltaje(int pwm)
{
	float valor = float(pwm)*(5.0/1023.0);
	
	return valor; 
}