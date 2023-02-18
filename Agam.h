#ifndef Agam_H
#define Agam_H
#include <stdio.h>
#include<stdlib.h>
#define pi 3.14159265358979323846
#define MAX 30
#include <conio.h>
#include <math.h>


//Konvert Jam
int JamKeDetik(int JamInput){
	int Detiknya;
	Detiknya = JamInput * 3600;
	return Detiknya;
}

int JamKeMenit(int JamInput){
	int Menitnya;
	Menitnya = JamInput * 60; 
	return Menitnya;
}

int MenitKeJam(int MenitInput){
	int Jamnya;
	
	Jamnya = MenitInput / 60;
	return Jamnya;
}

int sisaMenitkeDetik(int MenitInput){
	int sisa, Detiknya;
	sisa = MenitInput % 60;
	Detiknya = sisa * 60;
	return Detiknya;
}

int MenitKeDetik(int MenitInput){
	int Detiknya;
	
	Detiknya = MenitInput * 60;
	return Detiknya; 
}


int DetikKeJam(int DetikInput){
	int Jamnya;
	
	Jamnya = DetikInput / 3600;
	return Jamnya;
}

int sisaDetikKeJam(int DetikInput){
	int sisa, Detiknya;
	
	sisa = DetikInput % 3600;
	return sisa;
}

int sisaDetikKeJam1(int DetikInput){
	int sisa, Detiknya;
	
	sisa = DetikInput % 60;
	return sisa;
}

int sisaDetikKeJam2(int DetikInput){
	int sisa, Menitnya;
	
	sisa = DetikInput % 3600;
	Menitnya = sisa / 60;
	return Menitnya;
}

int sisaDetikKeJam3(int DetikInput){
	int sisa, Detiknya;
	
	sisa = DetikInput % 3600;
	Detiknya = sisa % 60;
	return Detiknya;
}

//Bangun Datar
//Menghitung luas persegi
float luaspersegi(float sisiInput){
	float Hslluaspersegi;
	Hslluaspersegi = sisiInput * sisiInput;
	return (Hslluaspersegi);
}

//Menghitung keliling persegi
float kelilingpersegi(float sisiInput){
	float kelpersegi;
	kelpersegi = 4 * sisiInput;
	return (kelpersegi);
}

//Menghitung luas persegi panjang
float persegipanjang(float panjang, float lebar){
	float Hslluaspersegipanjang;
	Hslluaspersegipanjang = panjang * lebar;
	return (Hslluaspersegipanjang);
}

//Menghitung keliling persegi panjang
float kelilingpersegipanjang(float panjang, float lebar){
	float kelpersegipanjang;
	kelpersegipanjang = 2 * (panjang + lebar);
	return (kelpersegipanjang);
}

//Menghitung luas segitiga
float luassegitiga(float alas, float tinggi, float sisi){
	float Hslluassegitiga;
	Hslluassegitiga = 0.5 * alas * tinggi;
	return (Hslluassegitiga);
}

//Menghitung keliling segitiga
float kelilingsegitiga(float alas, float tinggi, float sisi){
	float kelsegitiga;
	kelsegitiga = 3 * sisi;
	return (kelsegitiga);
}

//Menghitung luas lingkaran
float luaslingkaran(float jari){
	float Hslluaslingkaran;
	Hslluaslingkaran = pi * (jari * jari);
	return (Hslluaslingkaran);
}

//Menghitung keliling lingkaran
float kelilinglingkaran(float jari){
	float kellingkaran;
	kellingkaran = 2 * pi * jari;
	return (kellingkaran);
}

//Menghitung luas jajargenjang
float luasjajargenjang(float alas, float tinggi){
	float luasgenjang;
	luasgenjang = alas * tinggi;
	return (luasgenjang);
}

//Menghitung keliling jajargenjang
float kelilingjajargenjang(float alas, float sisimiring){
	float kelgenjang;
	kelgenjang = 2 * (alas + sisimiring);
	return (kelgenjang);
}

//Menghitung luas belah ketupat
float luasbelahketupat(float diagonal1, float diagonal2){
	float luasbelah;
	luasbelah = 0.5 * diagonal1 * diagonal2;
	return (luasbelah);
}

//Menghitung keliling belah ketupat
float kelilingbelahketupat(float sisi){
	float kelbelah;
	kelbelah = 4 * sisi;
	return (kelbelah);
}

//Bangun Ruang
//Menghitung luas kubus
float luaskubus(float rusuk){
	float luas;
	luas = 6 * rusuk * rusuk;
	return (luas);
}

//Menghitung volume kubus
float volumekubus(float rusuk){
	float volkubus;
	volkubus = rusuk * rusuk * rusuk;
	return (volkubus);
}

//Menghitung luas balok
float luasbalok(float panjang, float lebar, float tinggi){
	float luasbal;
	luasbal = 2 * ((panjang * lebar) + (panjang * tinggi) + (lebar * tinggi));
	return (luasbal);
}

//Menghitung volume balok
float volumebalok(float panjang, float lebar, float tinggi){
	float volbalok;
	volbalok = panjang * lebar * tinggi;
	return (volbalok);
}

//Menghitung Luas kerucut
float luaskerucut(float jari, float sisi){
	float luasker;
	
	luasker = (pi * jari) * (jari + sisi);
	return (luasker);
}

//Menghitung volume kerucut
float volumekerucut(float jari, float tinggi){
	float volker;
	
	volker = 0.33333333333 * pi * jari * jari * tinggi;
	return (volker);
}

//Menghitung luas bola
float luasbola(float jari){
	float luasbol;
	
	luasbol = 4 * pi * jari * jari;
	return (luasbol);
}

//Menghitung volume bola
float volumebola(float jari){
	
	float volbola;
	volbola = 1.33333333333 * pi * jari * jari * jari;
	return (volbola);
}

//Menghitung luas tabung
float luastabung(float jari, float tinggi){
	float luastab;
	
	luastab = 2 * pi * jari * (tinggi + jari);
	return (luastab);
}

//Menghitung volume tabung
float volumetabung(float jari, float tinggi){
	float voltabung;
	
	voltabung = pi * jari * jari * tinggi;
	return (voltabung);
}


//himpunan
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
