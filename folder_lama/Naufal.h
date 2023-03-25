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

float pertambahan(float x, float y){
	float z;
	z=x+y;
	return z;
}

float pengurangan(float x, float y){
	float z;
	z=x-y;
	return z;
}

float perkalian(float a, float b) {
	float hasil = 0;  // inisialisasi hasil dengan 0
    int i;
    for (i = 0; i < b; i++) {
        hasil += a;  // tambahkan nilai a sebanyak b kali ke dalam hasil
    }

    return hasil;
}

float pembagian(float dividend, float divisor)
{
    float quotient = 0;
    while (dividend >= divisor) {
        dividend -= divisor;
        quotient++;
    }
    
    return quotient;
}
#endif
