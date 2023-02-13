#ifndef Marshya_h
#define Marshya_h
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

float flr(float x)
{
	float result;
	printf("Masukkan angka: ");
	scanf("%f", &x);
	result = floor(x);
	
	printf("Floor dari %f adalah %f", x, result);
}

float cl(float y)
{
	float result;
	printf("Masukan angka: ");
	scanf("%f", &y);
	result = ceil(y);
	
	printf("Ceil dari %f adalah %f", y, result);
}

float rnd(float z)
{
	float result;
	printf("Masukan angka: ");
	scanf("%f", &z);
	result = round(z);
	
	printf("Round dari %f adalah %f", z, result);
}

int absolute(int w)
{
	int result;
	printf("Masukan angka: ");
	scanf("%d", &w);
	result = abs(w);
	
	printf("Absolute dari %d adalah %d", w, result);
}

float phi = 3.141592654;

#endif
