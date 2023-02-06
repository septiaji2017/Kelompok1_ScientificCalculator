#ifndef rico_h
#define rico_h
#include <stdio.h>
#include <math.h>

float inversSin(float x){
	double ret;
	double value;
	printf("Masukkan nilai: ");
	scanf("%f", &x);
	if(x>= -1 && x<= 1){
		ret = asin(x);
		value = round(ret*180/pi);
		printf("Invers sinus dari %.2f adalah %.2lf, atau juga %.2lf derajat",x,ret,value);
	}else{
		printf("Input tidak valid");
	}
	return ret;
	return value;
}

float inversCos(float x){
	double ret;
	double value;
	printf("Masukkan nilai: ");
	scanf("%f", &x);
	if(x>= -1 && x<= 1){
		ret = acos(x);
		value = round(ret*180/pi);
		printf("Invers sinus dari %.2f adalah %.2lf, atau juga %.2lf derajat",x,ret,value);
	}else{
		printf("Input tidak valid");
	}
	return ret;
	return value;
	
}

float inversTan(float x){
	double ret;
	double value;
	printf("Masukkan nilai: ");
	scanf("%f", &x);
	ret = acos(x);
	value = round(ret*180/pi);
	printf("Invers sinus dari %.2f adalah %.2lf, atau juga %.2lf derajat",x,ret,value);
	
	return ret;
	return value;
}

void menuInvers(){
	printf("1. Invers sinus\n");
	printf("2. Invers cosinus\n");
	printf("3. Invers tangent\n\n");
}

#endif