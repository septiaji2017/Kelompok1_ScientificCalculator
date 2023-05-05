#include "Mutia.h"
#include "pi.h"
#include "Ridha.h"
#include "Agam.h"
#define EPSILON .0000000000001
 
//Perhitungan Faktorial

int factorial(int n){
	int i;
	double result = 1;
    for (i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}


double my_fmod(double x, double y)
{
    if (y == 0.0) {
        return x;
    }
    double q = x / y;
    double n = q > 0 ? floorr(q) : ceil1(q);
    double r = x - n * y;
    if ((y > 0 && r < 0) || (y < 0 && r > 0)) {
        r += y;
    }
    return r;
}

//program trigonometri

//mencari nilai dari radian trigonometri
// RADIAN
double sin(double x) {
	const double PI = pi;
    const double TWO_PI = 2 * pi;
    const double PI_OVER_TWO = pi / 2;
    
    // Reduce x to the range [-2pi, 2pi]
    x = my_fmod(x, TWO_PI);
    
    // Reduce x to the range [-pi/2, pi/2]
    if (x > PI_OVER_TWO) {
        x = pi - x;
    } else if (x < -PI_OVER_TWO) {
        x = -pi - x;
    }
    
    double result = x;
    double term = x;
    double denominator = 1;
    double numerator = x;
    int k = 1;
    
    while (term > EPSILON || term < -EPSILON)
    {
        numerator *= -x * x;
        denominator *= (k + 1) * (k + 2);
        term = numerator / denominator;
        result += term;
        k += 2;
    }
    
    return result;
}

// Fungsi untuk menghitung nilai kosinus menggunakan deret Maclaurin
double cos(double x) {
	const double PI = pi;
    const double TWO_PI = 2 * pi;
    const double PI_OVER_TWO = pi / 2;
    
    // Reduce x to the range [-2pi, 2pi]
    x = my_fmod(x, TWO_PI);
    
    // Reduce x to the range [-pi, pi]
    if (x > PI || x < -PI) {
        x = my_fmod(x, PI);
    }
    
    // Compute cosine using sine formula
    double sin_x;
    if (x < 0) {
        sin_x = sin(-x);
    } else {
        sin_x = sin(x);
    }
    double cos_x = f_akar(1 - sin_x * sin_x);
    if (x > PI_OVER_TWO && x < 3 * PI_OVER_TWO) {
        cos_x = -cos_x;
    }
    return cos_x;
}

//tangent
double tangen(double x) {
    return (sin(x) / cos(x));
}

//Cosecant
double cosecan(double x) {
   return (1/sin(x));
}

//Secant
double secan(double x) {
   return (1/cos(x));
}

//Cotan
double cot(double x) {
   return (1/tangen(x));
}


//program trigonometri

//mencari nilai dari derajat trigonometri
// degree
double sine(double x) {
	return sin(x*pi/180);
}

// Fungsi untuk menghitung nilai kosinus menggunakan deret Maclaurin
double cosine(double x) {
    return cos(x*pi/180);
}

//tangent
double tangent(double x) {
    return (sine(x) / cosine(x));
}

//Cosecant
double cosecant(double x) {
   return (1/sine(x));
}

//Secant
double secant(double x) {
   return (1/cosine(x));
}

//Cotan
double cotan(double x) {
   return (1/tangent(x));
}

