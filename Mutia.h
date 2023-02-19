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
   sinval = sin(x) * (pi / 180.0); // hitung sin
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
int KilotoCenti(float inputangka){
	float firstRes;
	firstRes = inputangka * 100000; 
	return (firstRes);
}

//Kilo ke Metrik
int KilotoMetrik(float inputangka){
	float secondRes;
	secondRes = inputangka * 1000; 
	return (secondRes);
}

//Kilo ke Mili
int KilotoMili(float inputangka){
	float thirdRes;
	thirdRes = inputangka * 1000000; 
	return (thirdRes);
}

//Kilo ke Deka
int KilotoDeka(float inputangka){
	float fourRes;
	fourRes = inputangka * 100; 
	return (fourRes);
}

//Kilo ke Hekto
int KilotoHekto(float inputangka){
	float fivRes;
	fivRes = inputangka * 10; 
	return (fivRes);
}

//Kilo ke Desi
int KilotoDesi(float inputangka){
	float sixRes;
	sixRes = inputangka * 10000; 
	return (sixRes);
}

//Hekto

//Hekto ke Centi
int HektotoCenti(float inputangka){
	float firstRes;
	firstRes = inputangka * 10000; 
	return (firstRes);
}

//Hekto ke Metrik
int HektotoMetrik(float inputangka){
	float secondRes;
	secondRes = inputangka * 100; 
	return (secondRes);
}

//Hekto ke Kilo
int HektotoKilo(float inputangka){
	float thirdRes;
	thirdRes = inputangka / 10; 
	return (thirdRes);
}

//Hekto ke Deka
int HektotoDeka(float inputangka){
	float fourRes;
	fourRes = inputangka * 10; 
	return (fourRes);
}

//Hekto ke Mili
int HektotoMili(float inputangka){
	float fivRes;
	fivRes = inputangka * 100000; 
	return (fivRes);
}

//Hekto ke Desi
int HektotoDesi(float inputangka){
	float sixRes;
	sixRes = inputangka * 1000; 
	return (sixRes);
}

//Deka

//Deka ke Centi
int DekatoCenti(float inputangka){
	float firstRes;
	firstRes = inputangka * 1000; 
	return (firstRes);
}

//Deka ke Metrik
int DekatoMetrik(float inputangka){	
	float secondRes;
	secondRes = inputangka * 10; 
	return (secondRes);
}

//Deka ke Kilo
int DekatoKilo(float inputangka){
	float thirdRes;
	thirdRes = inputangka / 100; 
	return (thirdRes);
}

//Deka ke Mili
int DekatoMili(float inputangka){
	float fourRes;
	fourRes = inputangka * 10000; 
	return (fourRes);
}

//Deka ke Hekto
int DekatoHekto(float inputangka){
	float fivRes;
	fivRes = inputangka / 10; 
	return (fivRes);
}

//Deka ke Desi
int DekatoDesi(float inputangka){
	float sixRes;
	sixRes = inputangka * 100; 
	return (sixRes);
}

//Metrik

//Metrik ke Centi
int MetriktoCenti(float inputangka){
	float firstRes;
	firstRes = inputangka * 100; 
	return (firstRes);
}

//Metrik ke Kilo
int MetriktoKilo(float inputangka){
	float secondRes;
	secondRes = inputangka / 1000; 
	return (secondRes);
}

//Metrik ke Mili
int MetriktoMili(float inputangka){
	float thirdRes;
	thirdRes = inputangka * 1000; 
	return (thirdRes);
}

//Metrik ke Deka
int MetriktoDeka(float inputangka){
	float fourRes;
	fourRes = inputangka / 10;
	return (fourRes);
}

//Metrik ke Hekto
int MetriktoHekto(float inputangka){
	float fivRes;
	fivRes = inputangka / 100; 
	return (fivRes);
}

//Metrik ke Desi
int MetriktoDesi(float inputangka){
	float sixRes;
	sixRes = inputangka * 10; 
	return (sixRes);
}

//Desi

//Desi ke Centi
int DesitoCenti(float inputangka){
	float firstRes;
	firstRes = inputangka * 10; 
	return (firstRes);
}

//Desi ke Metrik
int DesitoMetrik(float inputangka){
	float secondRes;
	secondRes = inputangka / 10;
	return (secondRes);
}

//Desi ke Kilo
int DesitoKilo(float inputangka){
	float thirdRes;
	thirdRes = inputangka / 10000; 
	return (thirdRes);
}

//Desi ke Mili
int DesitoMili(float inputangka){
	float fourRes;
	fourRes = inputangka * 100; 
	return (fourRes);
}

//Desi ke Hekto
int DesitoHekto(float inputangka){
	float fivRes;
	fivRes = inputangka / 1000; 
	return (fivRes);
}

//Desi ke Deka
int DesitoDeka(float inputangka){
	float sixRes;
	sixRes = inputangka / 100; 
	return (sixRes);
}

//Centi

//Centi ke Metrik
int CentitoMetrik(float inputangka){	
	float firstRes;
	firstRes = inputangka / 100; 
	return (firstRes);
}

//Centi ke Kilo
int CentitoKilo(float inputangka){
	float secondRes;
	secondRes = inputangka / 100000; 
	return (secondRes);
}

//Centi ke Mili
int CentitoMili(float inputangka){
	float thirdRes;
	thirdRes = inputangka * 10; 
	return (thirdRes);
}

//Centi ke Deka
int CentitoDeka(float inputangka){
	float fourRes;
	fourRes = inputangka / 1000; 
	return (fourRes);
}

//Centi ke Hekto
int CentitoHekto(float inputangka){
	float fivRes;
	fivRes = inputangka / 10000; 
	return (fivRes);
}

//Centi ke Desi
int CentitoDesi(float inputangka){
	float sixRes;
	sixRes = inputangka / 10; 
	return (sixRes);
}

//Mili

//Mili ke Centi
int MilitoCenti(float inputangka){
	float firstRes;
	firstRes = inputangka / 10;
	return (firstRes);
}

//Mili ke Metrik
int MilitoMetrik(float inputangka){
	float secondRes;
	secondRes = inputangka / 1000; 
	return (secondRes);
}

//Mili ke Kilo
int MilitoKilo(float inputangka){
	float thirdRes;
	thirdRes = inputangka / 1000000; 
	return (thirdRes);
}

//Mili ke Deka
int MilitoDeka(float inputangka){
	float fourRes;
	fourRes = inputangka / 10000; 
	return (fourRes);
}

//Mili ke Hekto
int MilitoHekto(float inputangka){
	float fivRes;	
	fivRes = inputangka / 100000; 
	return (fivRes);
}

//Mili ke Desi
int MilitoDesi(float inputangka){	
	float sixRes;
	sixRes = inputangka / 100; 
	return (sixRes);
}

#endif
