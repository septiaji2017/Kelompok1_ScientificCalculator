#include "Rico.h"
#include "Ridha.h"
#include "pi.h"

double arcsin(double x) 
{
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

double arccos(double x) 
{
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

double arctan(double x) 
{
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

double arcsec(double x)
{
	if(x == 0){
		return UNDEFINED;
	}
	return arccos(1.0/x);
}

double arccsc(double x)
{
	if(x == 0){
		return UNDEFINED;
	}
	return arcsin(1.0/x);
}

double arccot(double x)
{
	return arctan(1.0/x);
}

double log_2(double x) 
{
    double old_sum = 0.0;
    double xmlxpl = (x - 1) / (x + 1);
    double xmlxpl_2 = xmlxpl * xmlxpl;
    double denom = 1.0;
    double frac = xmlxpl;
    double term = frac;
    double sum = term;

    while ( sum != old_sum )
    {
        old_sum = sum;
        denom += 2.0;
        frac *= xmlxpl_2;
        sum += frac / denom;
    }
    return 2.0 * sum;
}

double log_10(double x) 
{
    return log_2(x) / LN10;
}

double log_b(double x, double b) {
    double result = 0.0;
    while (x >= b) {
        result += 1.0;
        x /= b;
    }
    if (x == 1) {
        return result;
    }
    double y = 1.0;
    while (x < 1.0) {
        y /= b;
        x *= b;
        result -= 1.0;
    }
    return result + y * (x - 1) / (x + 1);
}

