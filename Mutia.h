#ifndef Mutia_h
#define Mutia_h
#include <stdio.h>
#include <stdlib.h>
 
//Perhitungan Faktorial
int Faktorial(int input){
	int i, hasil = 1;
	for(i=input; i>=1; i--){
		printf(" %d ", i);
		if((i <= input) && (i!=1)){		
			printf ("x");
		}
		hasil *= i;
	}
	
	printf(" = %d", hasil);
	return (hasil);
}


int faktorial(int f){ //Faktorial untuk permutasi dan kombinasi
	if(f==0)
	return 1;
	return f*faktorial(f-1);
}

//Perhitungan Permutasi

int permutasi(int n, int r){
	int HslPermutasi;
	printf("Masukkan nilai n: ");
	scanf("%d, %d", &n);
	printf("Masukkan nilai r: ");
	scanf("%d", &r);
	if (n<r){
		printf("invalid input n < r");
		exit(0);
	}
	else if (n>r){
		HslPermutasi = faktorial(n)/faktorial(n-r);
		printf("\nPermutasi (%d, %d):%d ", n, r, HslPermutasi);
	}
	return 0;
}


//Perhitungan Kombinasi

int kombinasi(int n, int r){
	int HslKombinasi;
	printf("Masukkan nilai n: ");
	scanf("%d, %d", &n);
	printf("Masukkan nilai r: ");
	scanf("%d", &r);
	if (n<r){
		printf("invalid input n < r");
		exit(0);
	} else if (n>r){
		HslKombinasi = faktorial(n)/(faktorial (r) * faktorial(n-r));
		printf("\nKombinasi (%d, %d):%d", n, r, HslKombinasi);
	}
	return 0;
}
 

//program trigonometri

//mencari nilai dari derajat trigonometri

int Trigonometri() {
   double x, sinval, cosval, tanval;
   printf("Masukkan x dalam derajat: ");
   scanf("%lf", &x);
   sinval = sin(x * M_PI / 180.0); // hitung sin
   cosval = cos(x * M_PI / 180.0); // hitung cos
   tanval = tan(x * M_PI / 180.0); // hitung tan
   printf("sin(%lf) = %lf\n", x, sinval);
   printf("cos(%lf) = %lf\n", x, cosval);
   printf("tan(%lf) = %lf\n", x, tanval);
   return 0;
}


//menentukan bilangan prima

int Prima() {
   int n, i, flag = 0;

   printf("Masukkan bilangan bulat positif: ");
   scanf("%d", &n);

   for (i = 2; i <= n/2; ++i) {
      if (n%i == 0) {
         flag = 1;
         break;
      }
   }

   if (n == 1) {
      printf("1 bukanlah bilangan prima.\n");
   } 
   else {
      if (flag == 0)
         printf("%d adalah bilangan prima.\n", n);
      else
         printf("%d bukanlah bilangan prima.\n", n);
   }
   
   return 0;
}

#endif
