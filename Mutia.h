#ifndef Mutia_h
#define Mutia_h
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "pi.h"
 
//Perhitungan Faktorial

int Faktorial1(int input){
	int i, hasil = 1;	
	for(i=input; i>=1; i--){
		printf(" %d ", i);
		if((i <= input) && (i!=1)){		
			printf ("x");
		}
		hasil *= i;
	}
	return (hasil);
}


//Faktorial untuk permutasi dan kombinasi

int faktorial2(int f){
	if(f==0){
		return 1;
	}else{
		return f*faktorial2(f-1);
	}		
}

//Perhitungan Permutasi

int permutasi(int n, int r){
	int HslPermutasi;
	HslPermutasi = faktorial2(n)/faktorial2(n-r);
	return HslPermutasi;
}

//Perhitungan Kombinasi

int kombinasi(int n, int r){
	int HslKombinasi;
	HslKombinasi = faktorial2(n)/(faktorial2 (r) * faktorial2(n-r));
	return HslKombinasi;
}
 

//program trigonometri

//mencari nilai dari derajat trigonometri

//Sinus

double Sinus(double x) {
	
   double sinval; 
   sinval = sin(x * pi / 180.0); // hitung sin
   return (sinval);
}

//Cosinus

double Cosinus(double x) {
	
   double cosval;
   
   cosval = cos(x * pi / 180.0); // hitung cos
   return (cosval);
}

//Tangent

double Tangent(double x) {
	
   double tanval;
   
   tanval = tan(x * pi / 180.0); // hitung tan
   return (tanval);
}

//Cosecant

double Cosecant(double x) {
	
   double cosecval;
   
   cosecval = 1 / (sin(x * pi / 180.0)); // hitung cosec
   return (cosecval);
}

//Secant

double Secant(double x) {
	
   double secanval;
   
   secanval = 1 / (cos(x * pi / 180.0)); // hitung sec
   return (secanval);
}

//Cotangent

double Cotangent(double x) {
	
   double cotanval;
   
   cotanval = 1 / (tan(x * pi / 180.0)); // hitung cot
   return (cotanval);
}



//menentukan bilangan prima

int Prima(int n) {
   int i, flag = 0;
   for (i = 2; i <= n/2; ++i) {
      if (n%i == 0) {
         flag = 1;      
      }
   }
   return (flag);
}

//Perhitungan Metrik

//Kilo

//Kilo ke Centi
float KilotoCenti(float inputangka){
	float firstRes;
	firstRes = inputangka * 100000; 
	return (firstRes);
}

//Kilo ke Metrik
float KilotoMetrik(float inputangka){
	float secondRes;
	secondRes = inputangka * 1000; 
	return (secondRes);
}

//Kilo ke Mili
float KilotoMili(float inputangka){
	float thirdRes;
	thirdRes = inputangka * 1000000; 
	return (thirdRes);
}

//Kilo ke Deka
float KilotoDeka(float inputangka){
	float fourRes;
	fourRes = inputangka * 100; 
	return (fourRes);
}

//Kilo ke Hekto
float KilotoHekto(float inputangka){
	float fivRes;
	fivRes = inputangka * 10; 
	return (fivRes);
}

//Kilo ke Desi
float KilotoDesi(float inputangka){
	float sixRes;
	sixRes = inputangka * 10000; 
	return (sixRes);
}

//Hekto

//Hekto ke Centi
float HektotoCenti(float inputangka){
	float firstRes;
	firstRes = inputangka * 10000; 
	return (firstRes);
}

//Hekto ke Metrik
float HektotoMetrik(float inputangka){
	float secondRes;
	secondRes = inputangka * 100; 
	return (secondRes);
}

//Hekto ke Kilo
float HektotoKilo(float inputangka){
	float thirdRes;
	thirdRes = inputangka / 10; 
	return (thirdRes);
}

//Hekto ke Deka
float HektotoDeka(float inputangka){
	float fourRes;
	fourRes = inputangka * 10; 
	return (fourRes);
}

//Hekto ke Mili
float HektotoMili(float inputangka){
	float fivRes;
	fivRes = inputangka * 100000; 
	return (fivRes);
}

//Hekto ke Desi
float HektotoDesi(float inputangka){
	float sixRes;
	sixRes = inputangka * 1000; 
	return (sixRes);
}

//Deka

//Deka ke Centi
float DekatoCenti(float inputangka){
	float firstRes;
	firstRes = inputangka * 1000; 
	return (firstRes);
}

//Deka ke Metrik
float DekatoMetrik(float inputangka){	
	float secondRes;
	secondRes = inputangka * 10; 
	return (secondRes);
}

//Deka ke Kilo
float DekatoKilo(float inputangka){
	float thirdRes;
	thirdRes = inputangka / 100; 
	return (thirdRes);
}

//Deka ke Mili
float DekatoMili(float inputangka){
	float fourRes;
	fourRes = inputangka * 10000; 
	return (fourRes);
}

//Deka ke Hekto
float DekatoHekto(float inputangka){
	float fivRes;
	fivRes = inputangka / 10; 
	return (fivRes);
}

//Deka ke Desi
float DekatoDesi(float inputangka){
	float sixRes;
	sixRes = inputangka * 100; 
	return (sixRes);
}

//Metrik

//Metrik ke Centi
float MetriktoCenti(float inputangka){
	float firstRes;
	firstRes = inputangka * 100; 
	return (firstRes);
}

//Metrik ke Kilo
float MetriktoKilo(float inputangka){
	float secondRes;
	secondRes = inputangka / 1000; 
	return (secondRes);
}

//Metrik ke Mili
float MetriktoMili(float inputangka){
	float thirdRes;
	thirdRes = inputangka * 1000; 
	return (thirdRes);
}

//Metrik ke Deka
float MetriktoDeka(float inputangka){
	float fourRes;
	fourRes = inputangka / 10;
	return (fourRes);
}

//Metrik ke Hekto
float MetriktoHekto(float inputangka){
	float fivRes;
	fivRes = inputangka / 100; 
	return (fivRes);
}

//Metrik ke Desi
float MetriktoDesi(float inputangka){
	float sixRes;
	sixRes = inputangka * 10; 
	return (sixRes);
}

//Desi

//Desi ke Centi
float DesitoCenti(float inputangka){
	float firstRes;
	firstRes = inputangka * 10; 
	return (firstRes);
}

//Desi ke Metrik
float DesitoMetrik(float inputangka){
	float secondRes;
	secondRes = inputangka / 10;
	return (secondRes);
}

//Desi ke Kilo
float DesitoKilo(float inputangka){
	float thirdRes;
	thirdRes = inputangka / 10000; 
	return (thirdRes);
}

//Desi ke Mili
float DesitoMili(float inputangka){
	float fourRes;
	fourRes = inputangka * 100; 
	return (fourRes);
}

//Desi ke Hekto
float DesitoHekto(float inputangka){
	float fivRes;
	fivRes = inputangka / 1000; 
	return (fivRes);
}

//Desi ke Deka
float DesitoDeka(float inputangka){
	float sixRes;
	sixRes = inputangka / 100; 
	return (sixRes);
}

//Centi

//Centi ke Metrik
float CentitoMetrik(float inputangka){	
	float firstRes;
	firstRes = inputangka / 100; 
	return (firstRes);
}

//Centi ke Kilo
float CentitoKilo(float inputangka){
	float secondRes;
	secondRes = inputangka / 100000; 
	return (secondRes);
}

//Centi ke Mili
float CentitoMili(float inputangka){
	float thirdRes;
	thirdRes = inputangka * 10; 
	return (thirdRes);
}

//Centi ke Deka
float CentitoDeka(float inputangka){
	float fourRes;
	fourRes = inputangka / 1000; 
	return (fourRes);
}

//Centi ke Hekto
float CentitoHekto(float inputangka){
	float fivRes;
	fivRes = inputangka / 10000; 
	return (fivRes);
}

//Centi ke Desi
float CentitoDesi(float inputangka){
	float sixRes;
	sixRes = inputangka / 10; 
	return (sixRes);
}

//Mili

//Mili ke Centi
float MilitoCenti(float inputangka){
	float firstRes;
	firstRes = inputangka / 10;
	return (firstRes);
}

//Mili ke Metrik
float MilitoMetrik(float inputangka){
	float secondRes;
	secondRes = inputangka / 1000; 
	return (secondRes);
}

//Mili ke Kilo
float MilitoKilo(float inputangka){
	float thirdRes;
	thirdRes = inputangka / 1000000; 
	return (thirdRes);
}

//Mili ke Deka
float MilitoDeka(float inputangka){
	float fourRes;
	fourRes = inputangka / 10000; 
	return (fourRes);
}

//Mili ke Hekto
float MilitoHekto(float inputangka){
	float fivRes;	
	fivRes = inputangka / 100000; 
	return (fivRes);
}

//Mili ke Desi
float MilitoDesi(float inputangka){	
	float sixRes;
	sixRes = inputangka / 100; 
	return (sixRes);
}

#endif
