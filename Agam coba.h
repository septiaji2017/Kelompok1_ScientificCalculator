#ifndef Agam_H
#define Agam_H
#include<stdio.h>
#include<stdlib.h>


int member(int set[],int x)
  { int i,n;
    n=set[0]; 
    for(i=1;i<=n;i++)
      if(x==set[i])
     return(1);

     return(0);
  }

int himpunanA(int set1[]){
	int i, n;
	
	printf("\n\t\t\t\t\t\t\t\t\t\t--> HIMPUNAN A <--\n");
    set1[0]=0;
    printf("\n\t\t\t\t\t\t\t\t--> Masukkan jumlah elemen untuk Himpunan A >> ");
	scanf("%d",&n);
	printf("\t\t\t\t\t\t\t\t--> Masukkan isi dari elemen Himpunan A >> ");
	for(i=1;i<=n;i++){
	    scanf("%d",&set1[i]);
		set1[0]=n;
	}
//	while(i > n){  
//		printf("\n\t\t\t\t\t\t\t\t\t\t--> HIMPUNAN A <--\n");
//	    printf("\n\t\t\t\t\t\t\tMaaf, elemen yang anda masukkan kurang/lebih. Inputkan kembali: \n");  
//		printf("\n\t\t\t\t\t\t\t\t--> Masukkan jumlah elemen untuk Himpunan A >> ");
//		scanf("%d",&n);    
//		printf("\t\t\t\t\t\t\t\t--> Masukkan isi dari elemen Himpunan A >> ");  
//		for(i=1;i<=n;i++){
//	    	scanf("%d",&set1[i]);
//			set1[0]=n;
//		}
//	} 

}

int himpunanB(int set2[]){
	int i, n;
	
	printf("\n\n\t\t\t\t\t\t\t\t\t\t--> HIMPUNAN B <--\n");
    set2[0]=0;
    printf("\n\t\t\t\t\t\t\t\t--> Masukkan jumlah elemen untuk Himpunan B >> ");
	scanf("%d",&n);
	printf("\t\t\t\t\t\t\t\t--> Masukkan isi dari elemen Himpunan B >> ");
	for(i=1;i<=n;i++){
	    scanf("%d",&set2[i]);
		set2[0]=n;
	}
}

int hasil(int set3[]){
	int n, i;
	
	n=set3[0];
	printf("\n\t\t\t\t\t\t--> Hasil dari penggabungan Himpunan A dan Himpunan B >> ");
	for(i=1;i<=n;i++){
		printf("%d  ",set3[i]);
	} 
}

int gabungan(int set1[],int set2[],int set3[]){ 
	int i,n;
	
    
    set3[0]=0;
    n=set1[0];
    for(i=0;i<=n;i++)
    set3[i]=set1[i];

    n=set2[0];
    for(i=1;i<=n;i++)
       if(!member(set3,set2[i]))
        set3[++set3[0]]=set2[i];  
   }
   
int irisan(int set1[],int set2[],int set3[]){
    int i,n;
    set3[0]=0; 
    n=set1[0];
    for(i=1;i<=n;i++)
      if(member(set2,set1[i])) 
           set3[++set3[0]]=set1[i];  
}

int selisih(int set1[],int set2[],int set3[]){ 
	int i,n;
    
	n=set1[0];
    set3[0]=0;
    for(i=1;i<=n;i++){
    	if(!member(set2,set1[i]))
        set3[++set3[0]]=set1[i];
	}
}

int bedasetangkup(int set1[],int set2[],int set3[]){
	int i,n;
    selisih(set1, set2, set3); 
    n=set2[0];
    for(i=1;i<=n;i++)
       if(!member(set1,set2[i]))
         set3[++set3[0]]=set2[i]; 
}


#endif
