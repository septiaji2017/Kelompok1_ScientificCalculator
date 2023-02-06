#ifndef Agam_h
#define Agam_h
#include<stdlib.h>
#include<stdio.h>


void pilihOpsi(int *pilih){
	puts	("\n\n\t\t\t\t\t\t   +====================== PILIH FITUR WAKTU ========================+");
    puts	("\t\t\t\t\t\t   |-----------------------------------------------------------------|");
	puts	("\t\t\t\t\t\t   |                       1. JAM KE DETIK                           |");
    puts	("\t\t\t\t\t\t   |-----------------------------------------------------------------|");
	puts	("\t\t\t\t\t\t   |                       2. JAM KE MENIT        	             |");
    puts	("\t\t\t\t\t\t   |-----------------------------------------------------------------|");
	puts	("\t\t\t\t\t\t   |                  	   3. MENIT KE JAM         		     |");
    puts	("\t\t\t\t\t\t   |-----------------------------------------------------------------|");
	puts	("\t\t\t\t\t\t   |                  	   4. MENIT KE DETIK   		             |");
    puts	("\t\t\t\t\t\t   |-----------------------------------------------------------------|");
	puts	("\t\t\t\t\t\t   |                 	   5. DETIK KE JAM        		     |");
    puts	("\t\t\t\t\t\t   |-----------------------------------------------------------------|");
	puts	("\t\t\t\t\t\t   |                 	   6. DETIK KE MENIT        		     |");	
    puts	("\t\t\t\t\t\t   +=================================================================+");
    printf	("\t\t\t\t\t\t\t\t     --> Pilih menu yang Anda inginkan >> "); scanf("%d", &*pilih);
}

int JamKeDetik(int JamInput){
	int HasilDetik;
	HasilDetik = JamInput * 3600;
	return HasilDetik;
}

int JamKeMenit(int JamInput){
	int HasilMenit;
	HasilMenit = JamInput * 60; 
	return HasilMenit; 
}

int MenitKeJam(int JamInput){
	int HasilJam;
	HasilJam = JamInput / 60; 
	return HasilJam; 
}

int MenitKeDetik(int JamInput){
	int HasilDetik;
	HasilDetik = JamInput * 60; 
	return HasilDetik; 
}

int DetikKeJam(int JamInput){
	int HasilJam;
	HasilJam = JamInput / 3600; 
	return HasilJam; 
}

int DetikKeMenit(int JamInput){
	int HasilMenit;
	HasilMenit = JamInput / 60; 
	return HasilMenit; 
}


int main(){
	int pilihan, JamInput, penampung; 
	
	pilihOpsi(&pilihan);
	switch(pilihan){
		case 1:
			printf("\t\t\t\t\t\t\t--> Masukkan Jam yang ingin anda konversikan ke Detik >> ");
			scanf("%d", &JamInput);
			penampung = JamKeDetik(JamInput);
			printf("\t\t\t\t\t\t\t\t  --> Hasil dari Jam ke detik adalah: %d detik", penampung);
			break;
		case 2:
			printf("\t\t\t\t\t\t\t--> Masukkan Jam yang ingin anda konversikan ke Menit >> ");
			scanf("%d", &JamInput);
			penampung = JamKeMenit(JamInput);
			printf("\t\t\t\t\t\t\t\t  --> Hasil dari Jam ke detik adalah: %d menit", penampung);
			break;
		case 3:
			printf("\t\t\t\t\t\t\t--> Masukkan Menit yang ingin anda konversikan ke Jam >> ");
			scanf("%d", &JamInput);
			penampung = MenitKeJam(JamInput);
			printf("\t\t\t\t\t\t\t\t  --> Hasil dari Jam ke detik adalah: %d jam", penampung);
			break;
		case 4:
			printf("\t\t\t\t\t\t\t-->Masukkan Menit yang ingin anda konversikan ke Detik >> ");
			scanf("%d", &JamInput);
			penampung = MenitKeDetik(JamInput);
			printf("\t\t\t\t\t\t\t\t  --> Hasil dari Jam ke detik adalah: %d detik", penampung);
			break;
		case 5:
			printf("\t\t\t\t\t\t\t--> Masukkan Detik yang ingin anda konversikan ke Jam >> ");
			scanf("%d", &JamInput);
			penampung = DetikKeJam(JamInput);
			printf("\t\t\t\t\t\t\t\t  --> Hasil dari Jam ke detik adalah: %d jam", penampung);
			break;
		case 6:
			printf("\t\t\t\t\t\t\t--> Masukkan Detik yang ingin anda konversikan ke Menit >> ");
			scanf("%d", &JamInput);
			penampung = DetikKeMenit(JamInput);
			printf("\t\t\t\t\t\t\t\t  --> Hasil dari Jam ke detik adalah: %d menit", penampung);
			break;
		case 7:
			printf("\t\t\t\t\t\t\t\t  --> Wrong Input!");
			break; 
	}
}

#endif


