#ifndef Naufal_h
#define Naufal_h
#include <stdio.h>

float Celsius, Kelvin, Fahrenheit;
int choice;

float CtoK(float Kelvin)
{
	Celsius = (Kelvin - 273.15);	
	//rumus
	return Celcius;
}

float FtoK(float Kelvin)
{
	Fahrenheit = 1.8 *(Kelvin -273.15) + 32.0;
	return Fahrenheit;
}

float KtoC(float Celsius)
{
	Kelvin = (Celsius + 273.15);
	return Kelvin;
}

float FtoC(float Celsius)
{
	Fahrenheit = (Celsius * 1.8) + 32.0;
	return Fahrenheit;
}

float KtoF(float Fahrenheit)
{
	Kelvin = (Fahrenheit - 32.0) * 5/9 +273.15;
	return Kelvin;
}

float CtoF(float Fahrenheit)
{
	Celsius = (Fahrenheit - 32.0) * 5/9;
	return Celsius;
}

#endif
