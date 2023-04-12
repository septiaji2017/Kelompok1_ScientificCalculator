#include "Mutia.h"
#include "pi.h"
#include "Ridha.h"
 
//Perhitungan Faktorial

int factorial(int n){
	int i;
	double result = 1;
    for (i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

//program trigonometri

//mencari nilai dari radian trigonometri

double sin(double x) {
	int terms = 10;
    double radians = x; // Konversi derajat ke radian
    double result = radians; // Nilai awal deret Maclaurin untuk sinus
    double sign = -1;
    int n;
    for (n = 1; n <= terms; n++) {
        double term = f_pangkat(radians, 2*n+1) / factorial(2*n+1); // Rumus deret Maclaurin untuk sinus
        result += sign * term;
        sign *= -1;
    }
    return result;
}

// Fungsi untuk menghitung nilai kosinus menggunakan deret Maclaurin
double cos(double x) {
	int terms = 10;
	double radians = x; // Konversi derajat ke radian
    double result = 1;
    double sign = -1;
    int n;
    for (n = 1; n <= terms; n++) {
        double term = f_pangkat(radians, 2*n) / factorial(2*n); // Rumus deret Maclaurin untuk kosinus
        result += sign * term;
        sign *= -1;
    }
    return result;
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

double sine(double x) {
	int terms = 10;
    double radians = x * pi / 180; // Konversi derajat ke radian
    double result = radians; // Nilai awal deret Maclaurin untuk sinus
    double sign = -1;
    int n;
    for (n = 1; n <= terms; n++) {
        double term = f_pangkat(radians, 2*n+1) / factorial(2*n+1); // Rumus deret Maclaurin untuk sinus
        result += sign * term;
        sign *= -1;
    }
    return result;
}

// Fungsi untuk menghitung nilai kosinus menggunakan deret Maclaurin
double cosine(double x) {
	int terms = 10;
	double radians = x * pi / 180; // Konversi derajat ke radian
    double result = 1;
    double sign = -1;
    int n;
    for (n = 1; n <= terms; n++) {
        double term = f_pangkat(radians, 2*n) / factorial(2*n); // Rumus deret Maclaurin untuk kosinus
        result += sign * term;
        sign *= -1;
    }
    return result;
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

