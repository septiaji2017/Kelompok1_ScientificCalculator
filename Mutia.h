#ifndef Mutia_h
#define Mutia_h
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "pi.h"
#include "Ridha.h"
 
//Perhitungan Faktorial

int factorial(int n){
	double result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}


//program trigonometri

//mencari nilai dari derajat trigonometri

double sine(double x) {
	int terms = 10;
    double radians = x * pi / 180; // Konversi derajat ke radian
    double result = radians; // Nilai awal deret Maclaurin untuk sinus
    double sign = -1;
    for (int n = 1; n <= terms; n++) {
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
    for (int n = 1; n <= terms; n++) {
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

#endif
