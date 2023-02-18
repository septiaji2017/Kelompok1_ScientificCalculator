#define MAX 30
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include "Agam.h"

int main(){ 
	int set1[MAX],set2[MAX],set3[MAX];
  	int x, pilihan, n, i;
  	system("cls");
  	set1[0]=set2[0]=set3[0]=0;
  	
  do{ 
  	system("cls");
	puts	("\n\n\t\t\t\t\t\t    +===================   PILIH OPERASI HIMPUNAN  ===================+");
    puts	("\t\t\t\t\t\t    |-----------------------------------------------------------------|");
	puts	("\t\t\t\t\t\t    |                      1. GABUNGAN (UNION)                        |");
    puts	("\t\t\t\t\t\t    |-----------------------------------------------------------------|");
	puts	("\t\t\t\t\t\t    |                      2. IRISAN (INTERSECTION)                   |");
    puts	("\t\t\t\t\t\t    |-----------------------------------------------------------------|");
	puts	("\t\t\t\t\t\t    |                      3. SELISIH (DIFFERENCE)                    |");
    puts	("\t\t\t\t\t\t    |-----------------------------------------------------------------|");
	puts	("\t\t\t\t\t\t    |                      4. BEDA SETANGKUP                          |");
    puts	("\t\t\t\t\t\t    +=================================================================+");
	printf	("\t\t\t\t\t\t\t\t Pilih operasi yang ingin Anda konversikan >> "); scanf("%d", &pilihan);

    switch(pilihan){
    	case 1: 
    		himpunanA(set1);
		    himpunanB(set2);   
			gabungan(set1,set2,set3);
			hasil(set3);
		    break;
        	
	    case 2: 
	    	himpunanA(set1);
	        himpunanB(set2);
	        irisan(set1,set2,set3);
			hasil(set3);
		    break;
	        
	    case 3: 
			himpunanA(set1);
	        himpunanB(set2);
	        selisih(set1,set2,set3);
	        hasil(set3);
	        break;
	        
	    case 4: 
			himpunanA(set1);
	        himpunanB(set2);
	        bedasetangkup(set1,set2,set3);
	        hasil(set3);
	        break;
	        
	    default:  
	        printf("\n\t\t\t\t\t\t\t--> Anda salah memilih opsi! Pilih Opsi 1-3");  
	        break;
    }
  printf("\npress a key............");
  getch();
  	}while(pilihan!=4);
  	return 0;
}

    
