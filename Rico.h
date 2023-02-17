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

float logaritmaNatural(float ln){
	float hasil;
	hasil = log(ln);
	return hasil;
}

float logaritma(float log){
	float hasil;
	hasil = log10(log);
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

float polinomial(float coef[11], int derajat, float x){
	float y = 0.0;
	for(int i = 0; i <= derajat; i++){
		y += coef[i] * pow(x, i); 
	}
	return y;
}


#endif