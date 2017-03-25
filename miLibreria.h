#ifndef miLibreria_h
#define miLibreria_h
#include "arduino.h"

class miLibreria
{

	private:
		int _pin;
	public:
		miLibreria(int pin_led,int baudios);
		void prender_led(int tiempo);
		void escribir_serial(float valor);
		float conversion_voltaje(int pwm);


};

#endif