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

float inversSec(float x){
	double value;
	value = round(acos(1/x)*180/pi);
	return value;	
}

float inversCotan(float x){
	double value;
	value = round(atan(1/x)*180/pi);	
	return value;
}

float inversCosec(float x){
	double value;
	value = round(asin(1/x)*180/pi);		
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
  return 3*x*x + 2*x + 1;
}

float trapezoid(float bawah, float atas, int n, float (*fungsi)(float)) {
  int i;
  float ax = (atas - bawah) / n;
  float sum = 0.5 * (fungsi(bawah) + fungsi(atas));
  for (i = 1; i < n; i++) {
    sum += fungsi(bawah + i * ax);
  }
  return (ax * sum);
}

float polinomial(float coef[11], int derajat, float x){
	int i;
	float y = 0.0;
	for(i = 0; i <= derajat; i++){
		y += coef[i] * pow(x, i); 
	}
	return y;
}

float operasiFaktorPositif(float coef[11], float akarPositif, float denom, float nilaiPositif){
	akarPositif = (-coef[1] + sqrt(coef[1]*coef[1]- 4*coef[2]*coef[0]));
	denom = 2*coef[2];
	nilaiPositif = akarPositif/denom;
	return nilaiPositif;
}

float operasiFaktorNegatif(float coef[11], float akarNegatif, float denom, float nilaiNegatif){
	akarNegatif = (-coef[1] - sqrt(coef[1]*coef[1] - 4*coef[2]*coef[0]));
	denom = 2*coef[2]; 
	nilaiNegatif = akarNegatif/denom;
	return nilaiNegatif;
}

double limit(float coef[11], int derajat, double inf){
	int i;
	double l = 0.0;
	for(i = 1; i <= derajat; i++){
			l = coef[i] * pow(inf, i);
	}
	return l;
}


#endif