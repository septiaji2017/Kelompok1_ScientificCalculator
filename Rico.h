#ifndef rico_h
#define rico_h
#include <stdio.h>
#include "pi.h"
#define INFINITY (1.0/0.0)
#define UNDEFINED (0.0/0.0)
#include "Ridha.h"

double fabs(double x) {
    if (x < 0.0f) {
        return -x;
    }
    return x;
}

float sekuerut(float x){
	float y = x;
   	float z = (y + (x / y)) / 2;
    while (fabs(y - z) >= 0.00001) {
        y = z;
        z = (y + (x / y)) / 2;
    }
    return z;
}

double round_num(double num) {
    int sign = (num >= 0) ? 1 : -1;
    double abs_num = num * sign;
    int int_part = (int) abs_num;
    double frac_part = abs_num - int_part;

    if (frac_part >= 0.5) {
        return sign * (int_part + 1);
    } else {
        return sign * int_part;
    }
}

double arcsin(double x) {
    if (x < -1.0 || x > 1.0) {
        return UNDEFINED;
    }
    if (x == -1.0) {
        return -pi/2.0;
    }
    if (x == 1.0) {
        return pi/2.0;
    }
    double sum = x;
    double term = x;
    int n = 1;
    while (n < 1000 && term != 0.0) {
        term *= x*x*(2.0*n-1)/(2.0*n*(2.0*n+1));
        sum += term;
        n++;
    }
    return sum;
}

double arccos(double x) {
    if (x < -1.0 || x > 1.0) {
        return UNDEFINED;
    }
    if (x == -1.0) {
        return pi;
    }
    if (x == 1.0) {
        return 0.0;
    }
    return pi/2.0 - arcsin(x);
}

double arctan(double x) {
    if (x == 0.0) {
        return 0.0;
    }
    if (x > 1.0) {
        return pi/2.0 - arctan(1.0/x);
    }
    if (x < -1.0) {
        return -pi/2.0 - arctan(1.0/x);
    }
    double sum = x;
    double term = x;
    int n = 1;
    while (n < 1000 && term != 0.0) {
        term *= -x*x*(2.0*n-1)/(2.0*n+1);
        sum += term;
        n++;
    }
    return sum;
}

double arcsec(double x){
	if(x == 0){
		return UNDEFINED;
	}
	return arccos(1.0/x);
}

double arccsc(double x){
	if(x == 0){
		return UNDEFINED;
	}
	return arcsin(1.0/x);
}

double arccot(double x){
	return arctan(1.0/x);
}

double invsTrigonometri(char *invsTrigo){
double x;
	if (strstr(invsTrigo, "arcsin")){
		sscanf(invsTrigo,"arcsin%lf",&x);
		return arcsin(x);
	}
	if (strstr(invsTrigo, "arccos")){
		sscanf(invsTrigo,"arccos%lf",&x);
		return arccos(x);
	}
	if (strstr(invsTrigo, "arctan")){
		sscanf(invsTrigo,"arctan%lf",&x);
		return arctan(x);
	}
	if (strstr(invsTrigo, "arccsc")){
		sscanf(invsTrigo,"arccsc%lf",&x);
		return arccsc(x);
	}
	if (strstr(invsTrigo, "arcsec")){
		sscanf(invsTrigo,"arcsec%lf",&x);
		return arccsc(x);
	}
	if (strstr(invsTrigo, "arccot")){
		sscanf(invsTrigo,"arccot%lf",&x);
		return arccot(x);
	}
}

double log2(double x) {
    double result = 0;
    while (x >= 2) {
        x /= 2;
        result++;
    }
    while (x < 1) {
        x *= 2;
        result--;
    }
    double y = x - 1;
    double y2 = y * y;
    double y3 = y * y2;
    double y4 = y2 * y2;
    double y5 = y3 * y2;
    double y6 = y3 * y3;
    double a = 0.99999999999999999976;
    double b = 0.69314718055994530942;
    double c = 0.24022650784536362018;
    double d = 0.05550410866482188054;
    double e = 0.00961815321966582332;
    double f = 0.00133224126731971265;
    double g = 0.00015097960966287089;
    result += y * (a + y2 * (b + y2 * (c + y2 * (d + y2 * (e + y2 * (f + y2 * g))))));
    return result;
}

double log10(double x) {
    double result = log2(x) / log2(10);
    return result;
}

float polinomial(float coef[11], int derajat, float x){
	int i;
	float y = 0.0;
	for(i = 0; i <= derajat; i++){
		y += coef[i] * powa(x, i); 
	}
	return y;
}

float operasiFaktorPositif(float coef[11], float akarPositif, float denom, float nilaiPositif){
	akarPositif = (-coef[1] + sekuerut(coef[1]*coef[1]- 4*coef[2]*coef[0]));
	denom = 2*coef[2];
	nilaiPositif = akarPositif/denom;
	return nilaiPositif;
}

float operasiFaktorNegatif(float coef[11], float akarNegatif, float denom, float nilaiNegatif){
	akarNegatif = (-coef[1] - sekuerut(coef[1]*coef[1] - 4*coef[2]*coef[0]));
	denom = 2*coef[2]; 
	nilaiNegatif = akarNegatif/denom;
	return nilaiNegatif;
}

double limit(float coef[11], int derajat, double inf){
	int i;
	double l = 0.0;
	for(i = 1; i <= derajat; i++){
		l = coef[i] * powa(inf, i);
	}
	return l;
}

double limitBagiNum(float coefa[11], int derajata){
	int i;
	float l = 0.0;
	for(i = 1; i <= derajata; i++){
		l = coefa[i];
	}
	return l;
}

double limitBagiDen(float coefb[11], int derajatb){
	int i;
	float l = 0.0;
	for(i = 1; i <= derajatb; i++){
		l = coefb[i];
	}
	return l;
}


float operasiIntegral (int n, float bawah, float coef[11], int derajat, float p, float q[101], float r[101], float trapesium[100]){
	int i, j;
	float jumlah = 0.0;
		for(i = 0; i<= n; i++){
			q[i] = bawah + i * p;
			r[i] = 0.0;
			
			for(j = 0; j <=	 derajat; j++){
				r[i] += coef[j] * powa(q[i], j);
			}
		};
		
		for(i = 0; i < n; i++){
			trapesium[i] = 0.5*p*(r[i]+r[i+1]);
		}
		
		for(i = 0; i < n; i++){
			jumlah += trapesium[i];
		}
	return jumlah;
}


#endif
