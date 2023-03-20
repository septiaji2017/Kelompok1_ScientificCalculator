#ifndef rico_h
#define rico_h
#include <stdio.h>
#include "pi.h"
#define INFINITY (1.0/0.0)
#define UNDEFINED (0.0/0.0)
#include "Ridha.h"

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
    double result = 0.0;
    if(x < 0){
    	return 0;
	}
    while (x > 1) {
        result++;
        x /= 2.0;
    }
    while (x < 0.5) {
        result--;
        x *= 2.0;
    }
    return result;
}

double log10(double x) {
    double result = log2(x) / log2(10);
    return result;
}

#endif
