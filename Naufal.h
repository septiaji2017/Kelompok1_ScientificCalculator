#ifndef Naufal_h
#define Naufal_h
#include <stdio.h>

float CtoK(float Kelvin)
{
	float Celsius;
	Celsius = (Kelvin - 273.15);	
	return Celsius;
}

float FtoK(float Kelvin)
{
	float Fahrenheit;
	Fahrenheit = 1.8 *(Kelvin -273.15) + 32.0;
	return Fahrenheit;
}

float KtoC(float Celsius)
{
	float Kelvin;
	Kelvin = (Celsius + 273.15);
	return Kelvin;
}

float FtoC(float Celsius)
{
	float Fahrenheit;
	Fahrenheit = (Celsius * 1.8) + 32.0;
	return Fahrenheit;
}

float KtoF(float Fahrenheit)
{
	float Kelvin;
	Kelvin = (Fahrenheit - 32.0) * 5/9 +273.15;
	return Kelvin;
}

float CtoF(float Fahrenheit)
{
	float Celsius;
	Celsius = (Fahrenheit - 32.0) * 5/9;
	return Celsius;
}

int pertambahan(int x, int y){
	int z;
	z=x+y;
	return z;
}

int pengurangan(int x, int y){
	int z;
	z=x-y;
	return z;
}

int perkalian(int x, int y){
	int z;
	z=x*y;
	return z;
}

float pembagian(float x, float y){
	int z;
	z=x/y;
	return z;
}
#endif
