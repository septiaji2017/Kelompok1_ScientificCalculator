#ifndef Ridha_h
#define Ridha_h
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define false 0
#define true 1

float f_pangkat(float x, float y){
	x=pow(x,y);
	return x;
}

float f_akar(float x){
	x=sqrt(x);
	return x;
}

#endif
