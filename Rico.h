#ifndef rico_h
#define rico_h
#include <stdio.h>
#include <math.h>
#define pi 3.14159265

float inversSin(float x){
	double value;
	value = round(asin(x)*180/pi);		
	return value;
}

float inversCos(float x){
	double value;
	value = round(acos(x)*180/pi);
	return value;	
}

float inversTan(float x){
	double value;
	value = round(atan(x)*180/pi);	
	return value;
}

void menuInvers(){
	printf("1. Invers sinus\n");
	printf("2. Invers cosinus\n");
	printf("3. Invers tangent\n");
	printf("4. Integral\n\n");
}

float logaritmaNatural(float ln){
	float hasil;
	hasil = log(ln);
	return hasil;
}

float logaritma(float ln){
	float hasil;
	hasil = log10(ln);
	return hasil;
}

float fungsi(float x) {
  return x*x + 3*x - 5;
}

float trapezoid(float bawah, float atas, int n, float (*fungsi)(float)) {
  float ax = (atas - bawah) / n;
  float sum = 0.5 * (fungsi(bawah) + fungsi(atas));
  for (int i = 1; i < n; i++) {
    sum += fungsi(bawah + i * ax);
  }
  return (ax * sum);
}


#endif