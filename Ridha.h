#ifndef Ridha_h
#define Ridha_h
#include<stdio.h>
#define MAX 30
#include<stdlib.h>
#include <stdbool.h>
#include<math.h>


int f_operasiBitwiseAnd(int op1, int op2){
	int op3;
	op3 = op1 & op2;
	return op3;
}

int f_operasiBitwiseOr(int op1, int op2){
	int op3;	
	op3 = op1 | op2;
	return op3;
}

int f_operasiBitwiseXor(int op1, int op2){
	int op3;
	op3 = op1 ^ op2;
	return op3;
}

int f_operasiBitwiseNot(int op1){
	int op2;	
	op2 = ~op1;
	return op2;
}

div_t f_div(int x, int y){
	div_t output;
	output=div(x,y);
	return output;
}

int f_mod(int x, int y){
	int z;	
	z=x%y;
	return z;
}

int f_pangkat(int x, int y){
	int z;	
	z=pow(x,y);
	return z;
}

float f_akar(float x){
	float y;
	y=sqrt(x);
	return y;
}

float f_PersenKeAngka(float x){
	float y;
	y = x/100;
	return y;
}

float f_AngkaKePersen(float x){
	float y;	
	y = x*100;
	return y;
}

float f_HitungDiskon(float x, float y){
	float z, hsl;
	z = y * x;
	hsl = x - z;
	return hsl;
}

float f_HitungBunga(float x, float y){
	float z, hsl;
	z = y * x;
	hsl = x + z;
	return hsl;
}

#endif
