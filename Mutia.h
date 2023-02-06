#ifndef Mutia_h
#define Mutia_h
#include <stdio.h>
#include <stdlib.h>
 
int faktorial(int input){
	int i, hasil = 1;
	printf("Masukkan angka : ");
	scanf("%d", &input);
	printf("\n %d! = ", input);
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
 
#endif
