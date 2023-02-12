#ifndef Ridha_h
#define Ridha_h
#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>
#include<math.h>

int f_operasiBitwiseAnd(int op1, int op2){
	op1 = op1 & op2;
	return op1;
}

div_t f_div(int x, int y){
	div_t output;
	output=div(x,y);
	return output;
}

int f_mod(int x, int y){
	x=x%y;
	return x;
}

float f_pangkat(float x, float y){
	x=pow(x,y);
	return x;
}

float f_akar(float x){
	x=sqrt(x);
	return x;
}

#endif
