#include "miLibreria.h"

int led =13;
int baudios = 115200;

miLibreria metodo(led,baudios);//configuracion inicial

float voltaje;
int valor_pwm;

void setup(){}//ya no va nada aqui!

void loop()
{
	metodo.prender_led(100);
	valor_pwm = 739;//para probar --> analogRead(A1);
	voltaje = metodo.conversion_voltaje(valor_pwm);
	metodo.escribir_serial(voltaje);
}
