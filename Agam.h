#ifndef Agam_H
#define Agam_H
#include <stdio.h>
#include<stdlib.h>
#define pi 3.14159265358979323846
#define MAX 30
#include <conio.h>
#include <math.h>
#define true 1
#define false 0
#define boolean unsigned char

//Konvert Tanggal
typedef struct { int Tgl; int Bln; int Thn;} date;


/*************************************/
/* S P E S I F I K A S I   M O D U L */
/*************************************/

int GetTgl (date D);

int GetBln (date D);

int GetThn (date D);

boolean isValid(date D);

boolean isKabisat (date D);

int TglAkhir (date D);


int GetTgl (date D)
{
	return(D.Tgl);
}

int GetBln (date D)
{
	return(D.Bln);
}


int GetThn (date D)
{
	return(D.Thn);
}

boolean isValid(date D)
{
	if ((GetThn(D) < 1900)||(GetThn(D) > 30000)||(GetBln(D) < 1) ||(GetBln(D) > 12)||(GetTgl(D) < 1)||(GetTgl(D) > TglAkhir(D)))
		return (false);
	else
		return (true);
}

boolean isKabisat (date D)
{
 	if((GetThn(D) % 4 == 0 && GetThn(D) % 100 != 0) || (GetThn(D) % 400 == 0)){
 		return true;
	}else{
 		return false;	
	}	

}

int TglAkhir (date D)
{
	if (GetBln(D) == 2){
		if(isKabisat(D)){
			return 29;
		}else{
			return 28;
		}
	}
	else 
		return ( ( (GetBln(D) <= 7 && GetBln(D) % 2 == 1) || (GetBln(D) >= 8 && GetBln(D) % 2 == 0) ) ? 31: 30);
}

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





typedef struct{
     float angka;
     char operasi;
} Matematika;

float kalku(Matematika arr[], int Operan, int CekAngka, int CekOperan)
{			
	Matematika arr1[100];
	char *p;
	char *string;
	char input[200];
	int k,r,i,j,l,pilihan,hasil,a, kurung, hitung, hitung1;
	int loop1, loop2, loop3;
	float hasilAkhir;
	int CekBuka, CekTutup;

	i = 0;
	j = 0;
	k = 0;
	
    while (i < CekAngka + CekOperan) {
        if (arr[i].operasi == '<') {
            j = i + 1;
            
            while (arr[j].operasi != '>') {
//	            	printf("misahin array %.2lf\n\n", arr[j].angka);
            	
                arr1[k] = arr[j];
                k++;
                j++;
                
            }
            
//	            printf("saat rekursif\n\n");
            arr[i].angka = round(kalku(arr1, Operan, CekAngka, CekOperan));
            arr[i].operasi = '\0';
            for (l = i + 1; l <= j; l++) {
                arr[l].operasi = '\0';
                arr[l].angka = 0;
            }
            l=1;
            while(l<=CekAngka + CekOperan){
							
				arr[i+l].angka = arr[j+l].angka;
				arr[i+l].operasi = arr[j+l].operasi;
				arr[j+l].operasi ='\0';
				arr[j+l].angka = 0;
				
				l++;

			}
        } i++;
    }

	i = 0;
	j = 0;
	k = 0;
	
    while (i < CekAngka + CekOperan) {
        if (arr[i].operasi == '{') {
            j = i + 1;
            
            while (arr[j].operasi != '}') {
//	            	printf("misahin array %.2lf\n\n", arr[j].angka);
            	
                arr1[k] = arr[j];
                k++;
                j++;
                
            }
            
//	            printf("saat rekursif\n\n");
            arr[i].angka = ceil(kalku(arr1, Operan, CekAngka, CekOperan));
            arr[i].operasi = '\0';
            for (l = i + 1; l <= j; l++) {
                arr[l].operasi = '\0';
                arr[l].angka = 0;
            }
            l=1;
            while(l<=CekAngka + CekOperan){
							
				arr[i+l].angka = arr[j+l].angka;
				arr[i+l].operasi = arr[j+l].operasi;
				arr[j+l].operasi ='\0';
				arr[j+l].angka = 0;
				
				l++;

			}
        } i++;
    }

	i = 0;
    j = 0;
    k = 0;
    while (i < CekAngka + CekOperan) {
        if (arr[i].operasi == '[') {
            j = i + 1;
            
            while (arr[j].operasi != ']') {
//	            	printf("misahin array %.2lf\n\n", arr[j].angka);
            	
                arr1[k] = arr[j];
                k++;
                j++;
                
            }
            
//	            printf("saat rekursif\n\n");
            arr[i].angka = floor(kalku(arr1, Operan, CekAngka, CekOperan));
            arr[i].operasi = '\0';
            for (l = i + 1; l <= j; l++) {
                arr[l].operasi = '\0';
                arr[l].angka = 0;
            }
            l=1;
            while(l<=CekAngka + CekOperan){
							
				arr[i+l].angka = arr[j+l].angka;
				arr[i+l].operasi = arr[j+l].operasi;
				arr[j+l].operasi ='\0';
				arr[j+l].angka = 0;
				
				l++;

			}
        } i++;
    }
    
	i = 0;
    j = 0;
    k = 0;
    while (i < CekAngka + CekOperan) {
        if (arr[i].operasi == '|') {
            j = i + 1;
            
            while (arr[j].operasi != '|') {
//	            	printf("misahin array %.2lf\n\n", arr[j].angka);
            	
                arr1[k] = arr[j];
                k++;
                j++;
                
            }
            
//	            printf("saat rekursif\n\n");
            arr[i].angka = abs(kalku(arr1, Operan, CekAngka, CekOperan));
            arr[i].operasi = '\0';
            for (l = i + 1; l <= j; l++) {
                arr[l].operasi = '\0';
                arr[l].angka = 0;
            }
            l=1;
            while(l<=CekAngka + CekOperan){
							
				arr[i+l].angka = arr[j+l].angka;
				arr[i+l].operasi = arr[j+l].operasi;
				arr[j+l].operasi ='\0';
				arr[j+l].angka = 0;
				
				l++;

			}
        } i++;
    }

	CekBuka = 0;
	CekTutup = 0;
	i = 0;
	j = 0;
	k = 0;
	
	while(i < CekAngka + CekOperan){
		if(arr[i].operasi == '('){
			j = i+1;
			
			while(arr[j].operasi != ')' || CekBuka != CekTutup){
				if(arr[j].operasi == '('){
					CekBuka++;
				}else if(arr[j].operasi == ')'){
					CekTutup++;
				}
				arr1[k] = arr[j];
				k++;
				j++;
			}
			arr[i].angka = kalku(arr1, Operan, CekAngka, CekOperan);
			arr[i].operasi = ' ';
			for(r=i+1; r <= j; r++){
				arr[r].operasi = ' ';
				arr[r].angka = 0;
			} 
			r = 1;
			while(r <= CekAngka + CekOperan){
				arr[i+r].angka = arr[j+r].angka;
				arr[i+r].operasi = arr[j+r].operasi;
				arr[j+r].operasi = ' ';
				arr[j+r].angka = 0;
				r++;
			}
		}i++;
	}
				
	for(loop1=1; loop1 <= Operan; loop1++){
		i = 0;
		j = 0;
		hitung = 1;
		while(hitung <= CekAngka + CekOperan){
			if((arr[i].operasi == 'S')||(arr[i].operasi == 'O')||(arr[i].operasi == 'T')||(arr[i].operasi == 'A')||(arr[i].operasi == 'C')||(arr[i].operasi == 'N')||(arr[i].operasi == 'M')){
				
				if(arr[i].operasi == 'S'){
					arr[i].angka = asin(arr[i+1].angka);
					arr[i+j].operasi =' ';
					arr[i+j+1].angka = 0;
					hitung1 = 1;
				
					while(hitung1 <= CekAngka + CekOperan){
						arr[i+j+1].angka = arr[i+j+2].angka;
						arr[i+j+1].operasi = arr[i+j+2].operasi;
						arr[i+j+2].operasi = ' ';
						arr[i+j+2].angka = 0;
						j+=1;
						hitung1++;
					}
					printf("\nHasil invers sinus = %.2lf", arr[i].angka);
					break;
				}
				
				if(arr[i].operasi == 'O'){
					arr[i].angka = acos(arr[i+1].angka);
					arr[i+j].operasi =' ';
					arr[i+j+1].angka = 0;
					hitung1 = 1;
				
					while(hitung1 <= CekAngka + CekOperan){
						arr[i+j+1].angka = arr[i+j+2].angka;
						arr[i+j+1].operasi = arr[i+j+2].operasi;
						arr[i+j+2].operasi = ' ';
						arr[i+j+2].angka = 0;
						j+=1;
						hitung1++;
					}
					printf("\nHasil invers cosinus = %.2lf", arr[i].angka);
					break;
				}
				
				if(arr[i].operasi == 'T'){
					arr[i].angka = atan(arr[i+1].angka);
					arr[i+j].operasi =' ';
					arr[i+j+1].angka = 0;
					hitung1 = 1;
				
					while(hitung1 <= CekAngka + CekOperan){
						arr[i+j+1].angka = arr[i+j+2].angka;
						arr[i+j+1].operasi = arr[i+j+2].operasi;
						arr[i+j+2].operasi = ' ';
						arr[i+j+2].angka = 0;
						j+=1;
						hitung1++;
					}
					printf("\nHasil invers tangen = %.2lf", arr[i].angka);
					break;
				}
				
				if(arr[i].operasi == 'A'){
					arr[i].angka = acos(1 / arr[i+1].angka);
					arr[i+j].operasi =' ';
					arr[i+j+1].angka = 0;
					hitung1 = 1;
				
					while(hitung1 <= CekAngka + CekOperan){
						arr[i+j+1].angka = arr[i+j+2].angka;
						arr[i+j+1].operasi = arr[i+j+2].operasi;
						arr[i+j+2].operasi = ' ';
						arr[i+j+2].angka = 0;
						j+=1;
						hitung1++;
					}
					printf("\nHasil invers secan = %.2lf", arr[i].angka);
					break;
				}
				
				if(arr[i].operasi == 'C'){
					arr[i].angka = asin(1 / arr[i+1].angka);
					arr[i+j].operasi =' ';
					arr[i+j+1].angka = 0;
					hitung1 = 1;
				
					while(hitung1 <= CekAngka + CekOperan){
						arr[i+j+1].angka = arr[i+j+2].angka;
						arr[i+j+1].operasi = arr[i+j+2].operasi;
						arr[i+j+2].operasi = ' ';
						arr[i+j+2].angka = 0;
						j+=1;
						hitung1++;
					}
					printf("\nHasil invers cosecan = %.2lf", arr[i].angka);
					break;
				}
				
				if(arr[i].operasi == 'N'){
					arr[i].angka = atan(1 / arr[i+1].angka);
					arr[i+j].operasi =' ';
					arr[i+j+1].angka = 0;
					hitung1 = 1;
				
					while(hitung1 <= CekAngka + CekOperan){
						arr[i+j+1].angka = arr[i+j+2].angka;
						arr[i+j+1].operasi = arr[i+j+2].operasi;
						arr[i+j+2].operasi = ' ';
						arr[i+j+2].angka = 0;
						j+=1;
						hitung1++;
					}
					printf("\nHasil invers cotan = %.2lf", arr[i].angka);
					break;
				}
				
				if(arr[i].operasi == 'M'){
					arr[i].angka = arr[i+1].angka-(arr[i+1].angka*2);
					arr[i+j].operasi =' ';
					arr[i+j+1].angka = 0;
					hitung1 = 1;
				
					while(hitung1 <= CekAngka + CekOperan){
						arr[i+j+1].angka = arr[i+j+2].angka;
						arr[i+j+1].operasi = arr[i+j+2].operasi;
						arr[i+j+2].operasi = ' ';
						arr[i+j+2].angka = 0;
						j+=1;
						hitung1++;
					}
					printf("\nHasil negatif = %.2lf", arr[i].angka);
					break;
				}				
													
			} i=i+1;
			hitung++;
		}
	}
	
	for(loop1=1; loop1 <= Operan; loop1++){
		i = 0;
		j = 0;
		hitung = 1;
		while(hitung <= CekAngka + CekOperan){
			if((arr[i].operasi == 's')||(arr[i].operasi == 'o')||(arr[i].operasi == 't')||(arr[i].operasi == 'e')||(arr[i].operasi == 'c')||(arr[i].operasi == 'n')){
				
				if(arr[i].operasi == 's'){
					arr[i].angka = sin(arr[i+1].angka * pi / 180);
					arr[i+j].operasi =' ';
					arr[i+j+1].angka = 0;
					hitung1 = 1;
				
					while(hitung1 <= CekAngka + CekOperan){
						arr[i+j+1].angka = arr[i+j+2].angka;
						arr[i+j+1].operasi = arr[i+j+2].operasi;
						arr[i+j+2].operasi = ' ';
						arr[i+j+2].angka = 0;
						j+=1;
						hitung1++;
					}
					printf("\nHasil sinus = %.2lf", arr[i].angka);
					break;
				}
				
				if(arr[i].operasi == 'o'){
					arr[i].angka = cos(arr[i+1].angka * pi / 180);
					arr[i+j].operasi =' ';
					arr[i+j+1].angka = 0;
					hitung1 = 1;
				
					while(hitung1 <= CekAngka + CekOperan){
						arr[i+j+1].angka = arr[i+j+2].angka;
						arr[i+j+1].operasi = arr[i+j+2].operasi;
						arr[i+j+2].operasi = ' ';
						arr[i+j+2].angka = 0;
						j+=1;
						hitung1++;
					}
					printf("\nHasil cosinus = %.2lf", arr[i].angka);
					break;
				}
				
				if(arr[i].operasi == 't'){
					arr[i].angka = tan(arr[i+1].angka * pi / 180);
					arr[i+j].operasi =' ';
					arr[i+j+1].angka = 0;
					hitung1 = 1;
				
					while(hitung1 <= CekAngka + CekOperan){
						arr[i+j+1].angka = arr[i+j+2].angka;
						arr[i+j+1].operasi = arr[i+j+2].operasi;
						arr[i+j+2].operasi = ' ';
						arr[i+j+2].angka = 0;
						j+=1;
						hitung1++;
					}
					printf("\nHasil tangen = %.2lf", arr[i].angka);
					break;
				}
				
				if(arr[i].operasi == 'e'){
					arr[i].angka = 1 / cos(arr[i+1].angka * pi / 180);
					arr[i+j].operasi =' ';
					arr[i+j+1].angka = 0;
					hitung1 = 1;
				
					while(hitung1 <= CekAngka + CekOperan){
						arr[i+j+1].angka = arr[i+j+2].angka;
						arr[i+j+1].operasi = arr[i+j+2].operasi;
						arr[i+j+2].operasi = ' ';
						arr[i+j+2].angka = 0;
						j+=1;
						hitung1++;
					}
					printf("\nHasil secan = %.2lf", arr[i].angka);
					break;
				}
				
				if(arr[i].operasi == 'c'){
					arr[i].angka = 1 / sin(arr[i+1].angka * pi / 180);
					arr[i+j].operasi =' ';
					arr[i+j+1].angka = 0;
					hitung1 = 1;
				
					while(hitung1 <= CekAngka + CekOperan){
						arr[i+j+1].angka = arr[i+j+2].angka;
						arr[i+j+1].operasi = arr[i+j+2].operasi;
						arr[i+j+2].operasi = ' ';
						arr[i+j+2].angka = 0;
						j+=1;
						hitung1++;
					}
					printf("\nHasil cosecan = %.2lf", arr[i].angka);
					break;
				}
				
				if(arr[i].operasi == 'n'){
					arr[i].angka = 1 / tan(arr[i+1].angka * pi / 180);
					arr[i+j].operasi =' ';
					arr[i+j+1].angka = 0;
					hitung1 = 1;
				
					while(hitung1 <= CekAngka + CekOperan){
						arr[i+j+1].angka = arr[i+j+2].angka;
						arr[i+j+1].operasi = arr[i+j+2].operasi;
						arr[i+j+2].operasi = ' ';
						arr[i+j+2].angka = 0;
						j+=1;
						hitung1++;
					}
					printf("\nHasil cotan = %.2lf", arr[i].angka);
					break;
				}									
			} i=i+1;
			hitung++;
		}
	}
	
	for(loop1=1; loop1 <= Operan; loop1++){
		i = 0;
		j = 0;
		hitung = 1;
		while(hitung <= CekAngka + CekOperan){
			if((arr[i].operasi == 'L')||(arr[i].operasi == 'l')){
				
				if(arr[i].operasi == 'L'){
					arr[i].angka = log10(arr[i+1].angka);
					arr[i+j].operasi =' ';
					arr[i+j+1].angka = 0;
					hitung1 = 1;
				
					while(hitung1 <= CekAngka + CekOperan){
						arr[i+j+1].angka = arr[i+j+2].angka;
						arr[i+j+1].operasi = arr[i+j+2].operasi;
						arr[i+j+2].operasi = ' ';
						arr[i+j+2].angka = 0;
						j+=1;
						hitung1++;
					}
					printf("\nHasil logaritma = %.2lf", arr[i].angka);
					break;
				}
				
				if(arr[i].operasi == 'l'){
					arr[i].angka = log(arr[i+1].angka);
					arr[i+j].operasi =' ';
					arr[i+j+1].angka = 0;
					hitung1 = 1;
				
					while(hitung1 <= CekAngka + CekOperan){
						arr[i+j+1].angka = arr[i+j+2].angka;
						arr[i+j+1].operasi = arr[i+j+2].operasi;
						arr[i+j+2].operasi = ' ';
						arr[i+j+2].angka = 0;
						j+=1;
						hitung1++;
					}
					printf("\nHasil logaritma natural = %.2lf", arr[i].angka);
					break;
				}									
			} i=i+1;
			hitung++;
		}
	}
		
	for(loop1=1; loop1 <= Operan; loop1++){
		i = 0;
		j = 0;
		hitung = 1;
		while(hitung <= CekAngka + CekOperan){
				if(arr[i].operasi == '!'){
					hasil = arr[i-1].angka;
					for(l = arr[i-1].angka; l>=1; l--){
						printf(" %d ", l);
						if((l <= arr[i-1].angka) && (l!=1)){		
							printf ("x");
						}
						arr[i-1].angka *= l;
					}
					arr[i-1].angka = arr[i-1].angka / hasil;
					arr[i+j].operasi =' ';
					arr[i+j+1].angka = 0;
					hitung1 = 1;
				
					while(hitung1 <= CekAngka + CekOperan){
						arr[i+j].angka = arr[i+j+1].angka;
						arr[i+j].operasi = arr[i+j+1].operasi;
						arr[i+j+1].operasi = ' ';
						arr[i+j+1].angka = 0;
						j+=1;
						hitung1++;
					}
					printf("\nHasil faktorial = %.2lf", arr[i-1].angka);
					break;
			}i=i+1;
			hitung++;
		}
	}

	for(loop1=1; loop1 <= Operan; loop1++){
		i = 0;
		j = 0;
		hitung = 1;
		while(hitung <= CekAngka + CekOperan){
			if((arr[i].operasi == '^')||(arr[i].operasi == 'v')||(arr[i].operasi == 'R')){
				
				if(arr[i].operasi == 'R'){
					arr[i-1].angka =  pow(arr[i+1].angka, 1 / arr[i-1].angka);
					arr[i+j].operasi ='\0';
					arr[i+j+1].angka = 0;
					hitung1 = 1;
				
					while(hitung1 <= CekAngka + CekOperan){
						arr[i+j].angka = arr[i+j+2].angka;
						arr[i+j].operasi = arr[i+j+2].operasi;
						arr[i+j+2].operasi =' ';
						arr[i+j+2].angka = 0;
						j++;
						hitung1++;
					}
					printf("\nHasil akar dinamis = %.2lf", arr[i-1].angka);
					break;
				}				
				
				if(arr[i].operasi == '^'){
					arr[i-1].angka =  pow(arr[i-1].angka, arr[i+1].angka);
					arr[i+j].operasi ='\0';
					arr[i+j+1].angka = 0;
					hitung1 = 1;
				
					while(hitung1 <= CekAngka + CekOperan){
						arr[i+j].angka = arr[i+j+2].angka;
						arr[i+j].operasi = arr[i+j+2].operasi;
						arr[i+j+2].operasi =' ';
						arr[i+j+2].angka = 0;
						j++;
						hitung1++;
					}
					printf("\nHasil pangkat = %.2lf", arr[i-1].angka);
					break;
				}
				
				if(arr[i].operasi == 'v'){
					arr[i].angka = pow(arr[i+1].angka, 0.5);
					arr[i+j].operasi =' ';
					arr[i+j+1].angka = 0;
					hitung1 = 1;
				
					while(hitung1 <= CekAngka + CekOperan){
						arr[i+j+1].angka = arr[i+j+2].angka;
						arr[i+j+1].operasi = arr[i+j+2].operasi;
						arr[i+j+2].operasi = ' ';
						arr[i+j+2].angka = 0;
						j+=1;
						hitung1++;
					}
					printf("\nHasil akar = %.2lf", arr[i].angka);
					break;
				}
			} i=i+1;
			hitung++;
		}
	}

	for(loop1=1; loop1 <= Operan; loop1++){
		i = 0;
		j = 0;
		hitung = 1;
		while(hitung <= CekAngka + CekOperan){
			if((arr[i].operasi == '*')||(arr[i].operasi == '/')||(arr[i].operasi == '%')||(arr[i].operasi == 'd')){
				
				if(arr[i].operasi == '*'){
					arr[i-1].angka =  arr[i-1].angka * arr[i+1].angka;
					arr[i+j].operasi ='\0';
					arr[i+j+1].angka = 0;
					hitung1 = 1;
				
					while(hitung1 <= CekAngka + CekOperan){
						arr[i+j].angka = arr[i+j+2].angka;
						arr[i+j].operasi = arr[i+j+2].operasi;
						arr[i+j+2].operasi =' ';
						arr[i+j+2].angka = 0;
						j++;
						hitung1++;
					}
					printf("\nHasil perkalian = %.2lf", arr[i-1].angka);
					break;
				}
				
				if(arr[i].operasi == '/'){
					arr[i-1].angka =  arr[i-1].angka / arr[i+1].angka;
					arr[i+j].operasi ='\0';
					arr[i+j+1].angka = 0;
					hitung1 = 1;
				
					while(hitung1 <= CekAngka + CekOperan){
						arr[i+j].angka = arr[i+j+2].angka;
						arr[i+j].operasi = arr[i+j+2].operasi;
						arr[i+j+2].operasi =' ';
						arr[i+j+2].angka = 0;
						j++;
						hitung1++;
					}
					printf("\nHasil pembagian = %.2lf", arr[i-1].angka);
					break;
				}
				
				if(arr[i].operasi == '%'){
					arr[i-1].angka =  (int)arr[i-1].angka % (int)arr[i+1].angka;
					arr[i+j].operasi ='\0';
					arr[i+j+1].angka = 0;
					hitung1 = 1;
				
					while(hitung1 <= CekAngka + CekOperan){
						arr[i+j].angka = arr[i+j+2].angka;
						arr[i+j].operasi = arr[i+j+2].operasi;
						arr[i+j+2].operasi =' ';
						arr[i+j+2].angka = 0;
						j++;
						hitung1++;
					}
					printf("\nHasil modulus= %.2lf", arr[i-1].angka);
					break;
				}	
				
				if(arr[i].operasi == 'd'){
					div_t hasildiv;
					hasildiv = div((int)arr[i-1].angka, (int)arr[i+1].angka);
					arr[i-1].angka = (float)hasildiv.quot;
					arr[i+j].operasi ='\0';
					arr[i+j+1].angka = 0;
					hitung1 = 1;
				
					while(hitung1 <= CekAngka + CekOperan){
						arr[i+j].angka = arr[i+j+2].angka;
						arr[i+j].operasi = arr[i+j+2].operasi;
						arr[i+j+2].operasi =' ';
						arr[i+j+2].angka = 0;
						j++;
						hitung1++;
					}
					printf("\nHasil division = %.2lf", arr[i-1].angka);
					break;
				}
			}i=i+1;
			hitung++;
		}
	}
							
	for(loop1=1; loop1 <= Operan; loop1++){
		i = 0;
		j = 0;
		hitung = 1;
		while(hitung <= CekAngka + CekOperan){
			if((arr[i].operasi == '+')||(arr[i].operasi == '-')){
				
				if(arr[i].operasi == '+'){
					arr[i-1].angka =  arr[i-1].angka + arr[i+1].angka;
					arr[i+j].operasi ='\0';
					arr[i+j+1].angka = 0;
					hitung1 = 1;
				
					while(hitung1 <= CekAngka + CekOperan){
						arr[i+j].angka = arr[i+j+2].angka;
						arr[i+j].operasi = arr[i+j+2].operasi;
						arr[i+j+2].operasi =' ';
						arr[i+j+2].angka = 0;
						j++;
						hitung1++;
					}
					printf("\nHasil pertambahan = %.2lf", arr[i-1].angka);
					break;
				}
				
				if(arr[i].operasi == '-'){
					arr[i-1].angka =  arr[i-1].angka - arr[i+1].angka;
					arr[i+j].operasi ='\0';
					arr[i+j+1].angka = 0;
					hitung1 = 1;
				
					while(hitung1 <= CekAngka + CekOperan){
						arr[i+j].angka = arr[i+j+2].angka;
						arr[i+j].operasi = arr[i+j+2].operasi;
						arr[i+j+2].operasi =' ';
						arr[i+j+2].angka = 0;
						j++;
						hitung1++;
					}
					printf("\nHasil pengurangan = %.2lf", arr[i-1].angka);
					break;
				}
			} i=i+1;
			hitung++;
		}
	}
	return arr[0].angka;
		
}	



#endif
