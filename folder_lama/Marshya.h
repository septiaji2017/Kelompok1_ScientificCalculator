#ifndef Marshya_h
#define Marshya_h
#include <stdio.h>
#include <math.h>

float flr(float x);
float cl(float x);
float rnd(float x);
int absolute(int x);

float flr(float x)
{
	float result;
	result = floor(x);
	return result;
}

float cl(float x)
{
	float result;	
	result = ceil(x);
	return result;
}

float rnd(float x)
{
	float result;	
	result = round(x);	
	return result;
}

int absolute(int y)
{
	int result;	
	result = abs(y);	
	return result;
}

#endif
