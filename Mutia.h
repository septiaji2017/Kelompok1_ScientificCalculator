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
	if(f==0)
	return 1;
	return f*faktorial2(f-1);
}

//Perhitungan Permutasi

int permutasi(int n, int r){
	
	int HslPermutasi;
	
	if (n<r){
		printf("invalid input n < r");
		exit(0);
	}
	else if (n>r){
		HslPermutasi = faktorial2(n)/faktorial2(n-r);
		printf("\nPermutasi (%d, %d):%d ", n, r, HslPermutasi);
	}
	return (HslPermutasi);
}

//Perhitungan Kombinasi

int kombinasi(int n, int r){
	
	int HslKombinasi;
	
	if (n<r){
		printf("invalid input n < r");
		exit(0);
	} else if (n>r){
		HslKombinasi = faktorial2(n)/(faktorial2 (r) * faktorial2(n-r));
		printf("\nKombinasi (%d, %d):%d", n, r, HslKombinasi);
	}
	return (HslKombinasi);
}
 

//program trigonometri

//mencari nilai dari derajat trigonometri


//Sinus

int Sinus() {
	
   double x, sinval;
   
   sinval = sin(x * pi / 180.0); // hitung sin
   printf("sin(%lf) = %lf\n", x, sinval);
   return (sinval);
}

//Cosinus

int Cosinus() {
	
   double x, cosval;
   
   cosval = cos(x * pi / 180.0); // hitung cos
   printf("cos(%lf) = %lf\n", x, cosval);
   return (cosval);
}

//Tangent

int Tangent() {
	
   double x, tanval;
   
   tanval = tan(x * pi / 180.0); // hitung tan
   printf("tan(%lf) = %lf\n", x, tanval);
   return (tanval);
}

//Cosecant

int Cosecant() {
	
   double x, cosecval;
   
   cosecval = 1 / (sin(x * pi / 180.0)); // hitung cosec
   printf("cosec(%lf) = %lf\n", x, cosecval);
   return (cosecval);
}

//Secant

int Secant() {
	
   double x, secanval;
   
   secanval = 1 / (cos(x * pi / 180.0)); // hitung sec
   printf("sec(%lf) = %lf\n", x, secanval);
   return (secanval);
}

//Cotangent

int Cotangent() {
	
   double x, cotanval;
   
   cotanval = 1 / (tan(x * pi / 180.0)); // hitung cot
   printf("cot(%lf) = %lf\n", x, cotanval);
   return (cotanval);
}


//menentukan bilangan prima

int Prima() {
	
   int n, i, flag = 0;
   
   for (i = 2; i <= n/2; ++i) {
      if (n%i == 0) {
         flag = 1;      
      }
   }
   return (flag);
   if (n == 1) {
      printf("1 bukanlah bilangan prima.\n");
   } 
   else {
      if (flag == 0)
         printf("%d adalah bilangan prima.\n", n);
      else
         printf("%d bukanlah bilangan prima.\n", n);
   }
}

//Perhitungan Metrik

//Kilo

//Kilo ke Centi
int KilotoCenti(){
	
	float inputangka, firstRes;
	char firstResUnit;
	
	firstRes = inputangka * 100000; 
	firstResUnit = 'C';
	return (firstRes);
}

//Kilo ke Metrik
int KilotoMetrik(){
	
	float inputangka, secondRes;
	char secondResUnit;
	
	secondRes = inputangka * 1000; 
	secondResUnit = 'X';
	return (secondRes);
}

//Kilo ke Mili
int KilotoMili(){
	
	float inputangka,thirdRes;
	char thirdResUnit;
	
	thirdRes = inputangka * 1000000; 
	thirdResUnit = 'm';
	return (thirdRes);
}

//Kilo ke Deka
int KilotoDeka(){
	
	float inputangka, fourRes;
	char fourResUnit;
	
	fourRes = inputangka * 100; 
	fourResUnit = 'D';
	return (fourRes);
}

//Kilo ke Hekto
int KilotoHekto(){
	
	float inputangka, fivRes;
	char fivResUnit;
	
	fivRes = inputangka * 10; 
	fivResUnit = 'H';
	return (fivRes);
}

//Kilo ke Desi
int KilotoDesi(){
	
	float inputangka, sixRes;
	char sixResUnit;
	
	sixRes = inputangka * 10000; 
	sixResUnit = 'd';
	return (sixRes);
}

//Hekto

//Hekto ke Centi
int HektotoCenti(){
	
	float inputangka, firstRes;
	char firstResUnit;
	
	firstRes = inputangka * 10000; 
	firstResUnit = 'C';
	return (firstRes);
}

//Hekto ke Metrik
int HektotoMetrik(){
	
	float inputangka, secondRes;
	char secondResUnit;
	
	secondRes = inputangka * 100; 
	secondResUnit = 'X';
	return (secondRes);
}

//Hekto ke Kilo
int HektotoKilo(){
	
	float inputangka, thirdRes;
	char thirdResUnit;
	
	thirdRes = inputangka / 10; 
	thirdResUnit = 'K';
	return (thirdRes);
}

//Hekto ke Deka
int HektotoDeka(){
	
	float inputangka, fourRes;
	char fourResUnit;
	
	fourRes = inputangka * 10; 
	fourResUnit = 'D';
	return (fourRes);
}

//Hekto ke Mili
int HektotoMili(){
	
	float inputangka, fivRes;
	char fivResUnit;
	
	fivRes = inputangka * 100000; 
	fivResUnit = 'm';
	return (fivRes);
}

//Hekto ke Desi
int HektotoDesi(){
	
	float inputangka, sixRes;
	char sixResUnit;
	
	sixRes = inputangka * 1000; 
	sixResUnit = 'd';
	return (sixRes);
}

//Deka

//Deka ke Centi
int DekatoCenti(){
	
	float inputangka, firstRes;
	char firstResUnit;
	
	firstRes = inputangka * 1000; 
	firstResUnit = 'C';
	return (firstRes);
}

//Deka ke Metrik
int DekatoMetrik(){
	
	float inputangka, secondRes;
	char secondResUnit;
	
	secondRes = inputangka * 10; 
	secondResUnit = 'X';
	return (secondRes);
}

//Deka ke Kilo
int DekatoKilo(){
	
	float inputangka, thirdRes;
	char thirdResUnit;
	
	thirdRes = inputangka / 100; 
	thirdResUnit = 'K';
	return (thirdRes);
}

//Deka ke Mili
int DekatoMili(){
	
	float inputangka, fourRes;
	char fourResUnit;
	
	fourRes = inputangka * 10000; 
	fourResUnit = 'm';
	return (fourRes);
}

//Deka ke Hekto
int DekatoHekto(){
	
	float inputangka, fivRes;
	char fivResUnit;
	
	fivRes = inputangka / 10; 
	fivResUnit = 'H';
	return (fivRes);
}

//Deka ke Desi
int DekatoDesi(){
	
	float inputangka, sixRes;
	char sixResUnit;
	
	sixRes = inputangka * 100; 
	sixResUnit = 'd';
	return (sixRes);
}

//Metrik

//Metrik ke Centi
int MetriktoCenti(){
	
	float inputangka, firstRes;
	char firstResUnit;
	
	firstRes = inputangka * 100; 
	firstResUnit = 'C';
	return (firstRes);
}

//Metrik ke Kilo
int MetriktoKilo(){
	
	float inputangka, secondRes;
	char secondResUnit;
	
	secondRes = inputangka / 1000; 
	secondResUnit = 'K';
	return (secondRes);
}

//Metrik ke Mili
int MetriktoMili(){
	
	float inputangka, thirdRes;
	char thirdResUnit;
	
	thirdRes = inputangka * 1000; 
	thirdResUnit = 'm';
	return (thirdRes);
}

//Metrik ke Deka
int MetriktoDeka(){
	
	float inputangka, fourRes;
	char fourResUnit;
	
	fourRes = inputangka / 10; 
	fourResUnit = 'D';
	return (fourRes);
}

//Metrik ke Hekto
int MetriktoHekto(){
	
	float inputangka, fivRes;
	char fivResUnit;
	
	fivRes = inputangka / 100; 
	fivResUnit = 'H';
	return (fivRes);
}

//Metrik ke Desi
int MetriktoDesi(){
	
	float inputangka, sixRes;
	char sixResUnit;
	
	sixRes = inputangka * 10; 
	sixResUnit = 'd';
	return (sixRes);
}

//Desi

//Desi ke Centi
int DesitoCenti(){
	
	float inputangka, firstRes;
	char firstResUnit;
	
	firstRes = inputangka * 10; 
	firstResUnit = 'C';
	return (firstRes);
}

//Desi ke Metrik
int DesitoMetrik(){
	
	float inputangka, secondRes;
	char secondResUnit;
	
	secondRes = inputangka / 10; 
	secondResUnit = 'X';
	return (secondRes);
}

//Desi ke Kilo
int DesitoKilo(){
	
	float inputangka, thirdRes;
	char thirdResUnit;
	
	thirdRes = inputangka / 10000; 
	thirdResUnit = 'K';
	return (thirdRes);
}

//Desi ke Mili
int DesitoMili(){
	
	float inputangka, fourRes;
	char fourResUnit;
	
	fourRes = inputangka * 100; 
	fourResUnit = 'm';
	return (fourRes);
}

//Desi ke Hekto
int DesitoHekto(){
	
	float inputangka, fivRes;
	char fivResUnit;
	
	fivRes = inputangka / 1000; 
	fivResUnit = 'H';
	return (fivRes);
}

//Desi ke Deka
int DesitoDeka(){
	
	float inputangka, sixRes;
	char sixResUnit;
	
	sixRes = inputangka / 100; 
	sixResUnit = 'D';
	return (sixRes);
}

//Centi

//Centi ke Metrik
int CentitoMetrik(){
	
	float inputangka, firstRes;
	char firstResUnit;
	
	firstRes = inputangka / 100; 
	firstResUnit = 'X';
	return (firstRes);
}

//Centi ke Kilo
int CentitoKilo(){
	
	float inputangka, secondRes;
	char secondResUnit;
	
	secondRes = inputangka / 100000; 
	secondResUnit = 'K';
	return (secondRes);
}

//Centi ke Mili
int CentitoMili(){
	
	float inputangka, thirdRes;
	char thirdResUnit;
	
	thirdRes = inputangka * 10; 
	thirdResUnit = 'm';
	return (thirdRes);
}

//Centi ke Deka
int CentitoDeka(){
	
	float inputangka, fourRes;
	char fourResUnit;
	
	fourRes = inputangka / 1000; 
	fourResUnit = 'D';
	return (fourRes);
}

//Centi ke Hekto
int CentitoHekto(){
	
	float inputangka, fivRes;
	char fivResUnit;
	
	fivRes = inputangka / 10000; 
	fivResUnit = 'H';
	return (fivRes);
}

//Centi ke Desi
int CentitoDesi(){
	
	float inputangka, sixRes;
	char sixResUnit;
	
	sixRes = inputangka / 10; 
	sixResUnit = 'd';
	return (sixRes);
}

//Mili

//Mili ke Centi
int MilitoCenti(){
	
	float inputangka, firstRes;
	char firstResUnit;
	
	firstRes = inputangka / 10; 
	firstResUnit = 'C';
	return (firstRes);
}

//Mili ke Metrik
int MilitoMetrik(){
	
	float inputangka, secondRes;
	char secondResUnit;
	
	secondRes = inputangka / 1000; 
	secondResUnit = 'X';
	return (secondRes);
}

//Mili ke Kilo
int MilitoKilo(){
	
	float inputangka, thirdRes;
	char thirdResUnit;
	
	thirdRes = inputangka / 1000000; 
	thirdResUnit = 'K';
	return (thirdRes);
}

//Mili ke Deka
int MilitoDeka(){
	
	float inputangka, fourRes;
	char fourResUnit;
	
	fourRes = inputangka / 10000; 
	fourResUnit = 'D';
	return (fourRes);
}

//Mili ke Hekto
int MilitoHekto(){
	
	float inputangka, fivRes;
	char fivResUnit;
	
	fivRes = inputangka / 100000; 
	fivResUnit = 'H';
	return (fivRes);
}

//Mili ke Desi
int MilitoDesi(){
	
	float inputangka, sixRes;
	char sixResUnit;
	
	sixRes = inputangka / 100; 
	sixResUnit = 'd';
	return (sixRes);
}

#endif
