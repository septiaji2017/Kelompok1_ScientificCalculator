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


#endif


