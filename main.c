#include "Ridha.h"
#include "Agam.h"
#include "Mutia.h"
#include "Rico.h"
#include "Naufal.h"
#include "Marshya.h"
//digabungkan oleh ridha septiaji

char header(){
	printf  ("\n");
	printf	("\t\t\t++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf  ("\t\t\t  _____________________  \n");
	printf  ("\t\t\t |  _________________  |  $$\\   $$\\          $$\\                                             $$\\               $$\\   \n");
	printf  ("\t\t\t | |     PROYEK 2    | |  $$ | $$  |         $$ |                                            $$ |            $$$$ |  \n");
	printf  ("\t\t\t | |_________________| |  $$ |$$  / $$$$$$\\  $$ | $$$$$$\\  $$$$$$\\$$$$\\   $$$$$$\\   $$$$$$\\  $$ |  $$\\       \\_$$ |  \n");
	printf  ("\t\t\t |  ___ ___ ___   ___  |  $$$$$  / $$  __$$\\ $$ |$$  __$$\\ $$  _$$  _$$\\ $$  __$$\\ $$  __$$\\ $$ | $$  |        $$ |  \n");
	printf  ("\t\t\t | | 7 | 8 | 9 | | + | |  $$  $$<  $$$$$$$$ |$$ |$$ /  $$ |$$ / $$ / $$ |$$ /  $$ |$$ /  $$ |$$$$$$  /         $$ |  \n");
	printf  ("\t\t\t | |___|___|___| |___| |  $$ |\\$$\\ $$   ____|$$ |$$ |  $$ |$$ | $$ | $$ |$$ |  $$ |$$ |  $$ |$$  _$$<          $$ |  \n");
	printf  ("\t\t\t | | 4 | 5 | 6 | | - | |  $$ | \\$$\\\\$$$$$$$\\ $$ |\\$$$$$$  |$$ | $$ | $$ |$$$$$$$  |\\$$$$$$  |$$ | \\$$\\       $$$$$$\\  \n");
	printf  ("\t\t\t | |___|___|___| |___| |  \\__|  \\__|\\_______|\\__| \\______/ \\__| \\__| \\__|$$  ____/  \\______/ \\__|  \\__|      \\______|  \n");
	printf  ("\t\t\t | | 1 | 2 | 3 | | x | |                                                 $$ |                                         \n");
	printf  ("\t\t\t | |___|___|___| |___| |                                                 $$ |                                         \n");
	printf  ("\t\t\t | | . | 0 | = | | / | |                                                 \\__|                                         \n");
	printf  ("\t\t\t | |___|___|___| |___| |  \n");
	printf  ("\t\t\t |_____________________| \n\n");
	printf	("\t\t\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
}

int main(){
	int choice, pilihan;
	char lagi;
	/* Himpunan */

for (;;)
 {

	system("cls");		
	header();
	puts	("\n\n\t\t\t\t\t\t    +==========================   PILIH MENU  ========================+");
    puts	("\t\t\t\t\t\t    |-----------------------------------------------------------------|");
	puts	("\t\t\t\t\t\t    |                      1. KONFIGURASI KONVERSI                    |");
    puts	("\t\t\t\t\t\t    |-----------------------------------------------------------------|");
	puts	("\t\t\t\t\t\t    |                     2. KONFIGURASI ARITMATIKA                   |");
    puts	("\t\t\t\t\t\t    |-----------------------------------------------------------------|");
	puts	("\t\t\t\t\t\t    |                            3. KALKULUS                          |");
    puts	("\t\t\t\t\t\t    |-----------------------------------------------------------------|");
	puts	("\t\t\t\t\t\t    |                           4. STATISTIKA                         |");
    puts	("\t\t\t\t\t\t    |-----------------------------------------------------------------|");
	puts	("\t\t\t\t\t\t    |                            5. GEOMETRI                          |");
	puts	("\t\t\t\t\t\t    |-----------------------------------------------------------------|");
	puts	("\t\t\t\t\t\t    |                         6. ALJABAR LINEAR                       |");
    puts	("\t\t\t\t\t\t    |-----------------------------------------------------------------|");
	puts	("\t\t\t\t\t\t    |                          7. TRIGONOMETRI                        |");
	puts	("\t\t\t\t\t\t    |-----------------------------------------------------------------|");
	puts	("\t\t\t\t\t\t    |                            8. LAIN LAIN                         |");	
    puts	("\t\t\t\t\t\t    +=================================================================+");
    printf	("\t\t\t\t\t\t\t\t   ---> Pilih menu yang Anda inginkan >> "); scanf("%d", &choice);
	
	switch(choice){
		case 1:
			system("cls");
			header();
			printf	("\n\t\t\t\t\t\t     <<<<<<<<<<<<<<<<<<<   Anda memilih opsi 1  >>>>>>>>>>>>>>>>>>>"); 
			puts	("\n\n\t\t\t\t\t\t   +================== PILIH KONFIGURASI KONVERSI ==================+");
		    puts	("\t\t\t\t\t\t   |----------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t   |                   1. KONVERSI SUHU                             |");
		    puts	("\t\t\t\t\t\t   |----------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t   |                   2. KONVERSI TANGGAL                          |");
		    puts	("\t\t\t\t\t\t   |----------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t   |                   3. KONVERSI METRIK                           |");
		    puts	("\t\t\t\t\t\t   |----------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t   |                   4. KONVERSI WAKTU                	    |");
		    puts	("\t\t\t\t\t\t   +================================================================+");
		    printf	("\t\t\t\t\t\t\t\t Pilih menu yang ingin Anda konversikan >> "); scanf("%d", &pilihan);
		    switch(pilihan){
		    	case 1:
		    	{
					int choice;
					float Celcius, Fahrenheit, Kelvin;
		    		system("cls");
		    		header();
		    		printf	("\n\t\t\t\t\t\t    <<<<<<<<<<<<<<<  Anda memilih opsi konversi suhu  >>>>>>>>>>>>>>>"); 
					puts	("\n\n\t\t\t\t\t\t\t  +================== KONVERSI SUHU ==================+");
					puts	("\t\t\t\t\t\t\t  | ===> Keterangan: F = Fahrenheit                   |");
					puts	("\t\t\t\t\t\t\t  |                  C = Celcius                      |");
					puts	("\t\t\t\t\t\t\t  |                  K = Kelvin                       |");	
					puts	("\t\t\t\t\t\t\t  | ===> Contoh Inputan : 70 C                        |");
					puts	("\t\t\t\t\t\t\t  +===================================================+");
					
					puts	("\n\n\t\t\t\t\t\t    +==========================   PILIH MENU  ========================+");
				    puts	("\t\t\t\t\t\t    |-----------------------------------------------------------------|");
					puts	("\t\t\t\t\t\t    |                             1. KELVIN                           |");
				    puts	("\t\t\t\t\t\t    |-----------------------------------------------------------------|");
					puts	("\t\t\t\t\t\t    |                             2. CELSIUS                          |");
					puts	("\t\t\t\t\t\t    |-----------------------------------------------------------------|");
					puts	("\t\t\t\t\t\t    |                            3. FAHRENHEIT                        |");	
				    puts	("\t\t\t\t\t\t    +=================================================================+");					
					
					puts	("\t\t\t\t\t\t\t  Masukkan Pilihan Anda: ");					
				    scanf("%d", &choice);
				    switch (choice)
				    {
				    case 1:
				        printf("masukkan temperature di Kelvin: ");
				        scanf("%f",&Kelvin);
						Celcius= CtoK(Kelvin);
						Fahrenheit= FtoK(Kelvin);
				        printf("Di Celsius nilainya adalah :\t %f \n",Celcius);
				        printf("Di Fahrenheit nilainya adalah :\t %f",Fahrenheit);
				        break;
				    case 2:
				        printf("masukkan temperature di Celsius: ");
				        scanf("%f",&Celcius);
						Kelvin = KtoC(Celcius);
						Fahrenheit = FtoC(Celcius);
				        printf("Di kelvin nilainya adalah : %f \n",Kelvin);
				        printf("Di Fahrenheit nilainya adalah : %f",Fahrenheit);
				        break;
				    case 3:
				        printf("masukkan temperature di Fahrenheit: ");
				        scanf("%f",&Fahrenheit);
						Celcius = CtoF(Fahrenheit);
						Kelvin = KtoF(Fahrenheit);
				        printf("Di Celsius nilainya adalah :\t %f \n",Celcius);
				        printf("Di Kelvin nilainya adalah :\t %f \n",Kelvin);
				        break;
				    default:
				        printf("Salah! masukkan nilai yang valid tolong \n");
				        break;
				    }					
					break;
				}
				case 2:
				{
					system("cls"); 
					header();
		    		printf	("\n\t\t\t\t\t\t    <<<<<<<<<<<<<  Anda memilih opsi konversi tanggal  >>>>>>>>>>>>>>"); 
					 date D1, D2, D3, D4;
					 char lagi = 'y';
					 bool valid, kabisat;
					 int NewTgl, pilihan, TglSblm, BlnSblm, ThnSblm;
				
				
						system("cls");
						puts	("\n\n\t\t\t\t\t\t   +==================  PILIH KONFIGURASI TANGGAL  ==================+");
					    puts	("\t\t\t\t\t\t   |-----------------------------------------------------------------|");
						puts	("\t\t\t\t\t\t   |                  1. TANGGAL SEBELUM DAN SESUDAH                 |");
					    puts	("\t\t\t\t\t\t   |-----------------------------------------------------------------|");
						puts	("\t\t\t\t\t\t   |                       2. SELISIH TANGGAL                        |");
					    puts	("\t\t\t\t\t\t   +=================================================================+");
						printf	("\t\t\t\t\t\t\t\t--> Pilih operasi yang ingin Anda konversikan >> "); scanf("%d", &pilihan); 
						
						switch(pilihan){
							case 1:
								printf("\n\t\t\t\t\t--> Masukkan tanggal, bulan dan tahun untuk mengetahui tanggal sebelum dan sesudahnya <--");
								printf("\n\n\t\t\t\t\t\t\t\t\t  --> Tanggal : "); scanf("%d", &D3.Tgl);
								printf("\t\t\t\t\t\t\t\t\t  --> Bulan : "); scanf("%d", &D3.Bln);
								printf("\t\t\t\t\t\t\t\t\t  --> Tahun : "); scanf("%d", &D3.Thn);
								
								valid = isValid(D3);
								if(valid){
								printf("\n\t\t\t\t\t\t\t    --> Tanggal yang Anda inputkan adalah : ");
								printf ("%d/%d/%d\n", GetTgl(D3), GetBln(D3), GetThn(D3));
								kabisat = isKabisat(D3);
								if(kabisat){
									printf("\n\t\t\t\t\t\t\t   --> Keterangan: Tahun %d termasuk tahun kabisat <--\n", GetThn(D3));
								}else{
									printf("\n\t\t\t\t\t\t\t   --> Keterangan: Tahun %d tidak termasuk tahun kabisat <--\n", GetThn(D3));
								}
								
								if (GetTgl(D3) == 1 && GetBln(D3) == 1){
									ThnSblm = GetThn(D3)-1;
									TglSblm = TglAkhir(D3);
									BlnSblm = 12;
								}else{
									TglSblm = GetTgl(D3)-1;
									BlnSblm = GetBln(D3);
									ThnSblm = GetThn(D3);
								}
								
								if(GetBln(D3) > 1 && GetTgl(D3) == 1){
									if (GetBln(D3) == 3){
										BlnSblm = GetBln(D3)-1;
										ThnSblm = GetThn(D3);
										TglSblm = 28;
									}
									else if((GetBln(D3) <= 8 && GetBln(D3) % 2 == 1) || (GetBln(D3) >= 9 && GetBln(D3) % 2 == 0)){
										BlnSblm = GetBln(D3)-1;
										ThnSblm = GetThn(D3);
										TglSblm = 30;
									}else{
										BlnSblm = GetBln(D3)-1;
										ThnSblm = GetThn(D3);
										TglSblm = 31;
									}
								}
								printf("\n\t\t\t\t\t\t\t --> Sebelum Tanggal %d/%d/%d adalah: Tanggal %d/%d/%d <--\n", GetTgl(D3), GetBln(D3), GetThn(D3), TglSblm, BlnSblm, ThnSblm);			
						
								int TglSesudah, BlnSesudah, ThnSesudah;
								
								if(GetBln(D3) == 12 && GetTgl(D3) == 31){
									ThnSesudah = GetThn(D3)+1;
									BlnSesudah = 1;
									TglSesudah = 1;
								}else if(GetTgl(D3) == TglAkhir(D3)){
									TglSesudah = 1;
									BlnSesudah = GetBln(D3)+1;
									ThnSesudah = GetThn(D3);
								}else{
									TglSesudah = GetTgl(D3)+1;
									BlnSesudah = GetBln(D3);
									ThnSesudah = GetThn(D3);
								}	
								printf("\t\t\t\t\t\t\t --> Sesudah Tanggal %d/%d/%d adalah: Tanggal %d/%d/%d <--\n", GetTgl(D3), GetBln(D3), GetThn(D3), TglSesudah, BlnSesudah, ThnSesudah);	
								}else{
									printf("\nInput tidak Valid\n");
								}
								break;
							case 2:
								printf("\n\t\t\t\t\t\t--> Masukkan tanggal, bulan dan tahun pertama untuk mengetahui selisihnya <--");
								printf("\n\n\t\t\t\t\t\t\t\t\t  --> Tanggal : "); scanf("%d", &D3.Tgl);
								printf("\t\t\t\t\t\t\t\t\t  --> Bulan : "); scanf("%d", &D3.Bln);
								printf("\t\t\t\t\t\t\t\t\t  --> Tahun : "); scanf("%d", &D3.Thn);
								valid = isValid(D3);
								printf("\n\t\t\t\t\t\t\t  --> Tanggal pertama yang Anda inputkan adalah : ");
								printf ("%d/%d/%d\n", GetTgl(D3), GetBln(D3), GetThn(D3));
								kabisat = isKabisat(D3);
								if(kabisat){
									printf("\n\t\t\t\t\t\t\t   --> Keterangan: Tahun %d termasuk tahun kabisat <--\n", GetThn(D3));
								}else{
									printf("\n\t\t\t\t\t\t\t   --> Keterangan: Tahun %d tidak termasuk tahun kabisat <--\n", GetThn(D3));
								}
								
								printf("\n\t\t\t\t\t\t--> Masukkan tanggal, bulan dan tahun kedua untuk mengetahui selisihnya <--");
								printf("\n\n\t\t\t\t\t\t\t\t\t  --> Tanggal : "); scanf("%d", &D4.Tgl);
								printf("\t\t\t\t\t\t\t\t\t  --> Bulan : "); scanf("%d", &D4.Bln);
								printf("\t\t\t\t\t\t\t\t\t  --> Tahun : "); scanf("%d", &D4.Thn);
								valid = isValid(D4);
								if(valid){
								printf("\n\t\t\t\t\t\t\t  --> Tanggal kedua yang Anda inputkan adalah : ");
								printf ("%d/%d/%d\n", GetTgl(D4), GetBln(D4), GetThn(D4));
								kabisat = isKabisat(D3);
								if(kabisat){
									printf("\n\t\t\t\t\t\t\t   --> Keterangan: Tahun %d termasuk tahun kabisat <--\n", GetThn(D3));
								}else{
									printf("\n\t\t\t\t\t\t\t   --> Keterangan: Tahun %d tidak termasuk tahun kabisat <--\n", GetThn(D3));
								}
				
								date penampung;
								int selisih = 0;
									
								if (GetThn(D3) < GetThn(D4)){
									penampung = D3;
									D3 = D4;
									D4 = penampung;
								} else if (GetThn(D3) > GetThn(D4)){
									
								}
								
								else {
									if (GetBln(D3) < GetBln(D4)) {
										penampung = D3;
										D3 = D4;
										D4 = penampung;
									}else if (GetBln(D3) > GetBln(D4)){
										
									}
									
									else {
										if (GetTgl(D3) < GetTgl (D4)) {
											penampung = D3;
											D3 = D4;
											D4 = penampung;
										}else if (GetTgl(D3) > GetTgl (D4)){
											
										}
										else{
											
										}	
									}
								}
								
								while (GetThn(D3) != GetThn(D4) || GetBln(D3) != GetBln(D4) || GetTgl(D3) != GetTgl(D4)) {
									D3.Tgl = GetTgl(D3)-1;
									if (GetTgl(D3) < 1) {
										D3.Bln = GetBln(D3)-1;
										D3.Tgl = TglAkhir(D3);
									}
									if (GetBln(D3) < 1) {
										D3.Thn = GetThn(D3)-1;
										D3.Bln = 12;
										D3.Tgl = TglAkhir(D3);
									}
									selisih++;
								}
								printf("\n\t\t\t\t\t\t\t\t  -->  Selisihnya adalah : %d hari <--", selisih);			
								
								
								int tTahun, tBulan, tMinggu, tHari;
								
								tTahun = selisih/365;
								tBulan = (selisih%365)/30;
								tMinggu = ((selisih%365)%30)/7;
								tHari = (((selisih%365)%30)%7);
							
								printf("\n\n\t\t\t\t\t\t\t     -->  Apabila dikonversikan maka didapatkan <-- \n");
								
								printf("\n\t\t\t\t\t\t\t\t-->  ");
								if(tTahun!=0){
									printf("%d (Tahun)",tTahun);
								}
								
								if(tBulan!=0){
									printf(" %d (Bulan)",tBulan);
								}
								
								if(tMinggu!=0){
									printf(" %d (Minggu)",tMinggu);
								}
								
								if(tHari!=0){
									printf(" %d (Hari)",tHari);
								}	
								printf(" <--");
								printf("\n");
																			
							}else{
								printf("\n\t\t\t\t\t\t\t\t-->  Input tidak Valid\n");
							}
							break;
					}					
					break;					
				}

					
				case 3:
				{
					float inputangka, firstRes, secondRes, thirdRes, fourRes, fivRes, sixRes; 
					char LongUnit, firstResUnit, secondResUnit, thirdResUnit, fourResUnit, fivResUnit, sixResUnit;
					
					printf	("\n\t\t\t\t\t\t  <<<<<<<<<<<<<<<  Anda memilih opsi konversi metrik  >>>>>>>>>>>>>>>"); 
					puts	("\n\n\t\t\t\t\t\t\t  +================= KONVERSI METRIK =================+");
					puts	("\t\t\t\t\t\t\t  | ===> Keterangan: K = Kilo  (k-)                   |");
					puts	("\t\t\t\t\t\t\t  |                  H = Hekto (h-)                   |");
					puts	("\t\t\t\t\t\t\t  |                  D = Deka  (da-)                  |");
					puts	("\t\t\t\t\t\t\t  |                  X = (metrik)      (m/g/l)        |");	
					puts	("\t\t\t\t\t\t\t  |                  d = Desi  (d-)                   |");	
					puts	("\t\t\t\t\t\t\t  |                  C = Centi (c-)                   |");
					puts	("\t\t\t\t\t\t\t  |                  m = Mili  (m-)                   |");				
					puts	("\t\t\t\t\t\t\t  | ===> Contoh Inputan : 85 K                        |");
					puts	("\t\t\t\t\t\t\t  +===================================================+");  
				    printf	("\t\t\t\t\t           --> Masukkan panjang beserta satuannya (K, H, D, X, d, C, m) >> "); 
					scanf("%f %c", &inputangka, &LongUnit);
					
					switch(LongUnit){
						case 'c': case 'C':
							firstRes = CentitoMetrik(inputangka); 
							firstResUnit = 'X';
							secondRes = CentitoKilo(inputangka); 
							secondResUnit = 'K';
							thirdRes = CentitoMili(inputangka); 
							thirdResUnit = 'm';
							fourRes = CentitoDeka(inputangka); 
							fourResUnit = 'D';
							fivRes = CentitoHekto(inputangka); 
							fivResUnit = 'H';
							sixRes = CentitoDesi(inputangka); 
							sixResUnit = 'd';
							printf("\n\t\t\t\t\t\t\t\t\t --> Hasilnya adalah: ");	
							printf("\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c", firstRes, firstResUnit, secondRes, secondResUnit, thirdRes, thirdResUnit, fourRes, fourResUnit, fivRes, fivResUnit, sixRes, sixResUnit);
							break;
						case 'x': case 'X': 
							firstRes = MetriktoCenti(inputangka); 
							firstResUnit = 'C';
							secondRes = MetriktoKilo(inputangka); 
							secondResUnit = 'K';
							thirdRes = MetriktoMili(inputangka); 
							thirdResUnit = 'm';
							fourRes = MetriktoDeka(inputangka); 
							fourResUnit = 'D';			
							fivRes = MetriktoHekto(inputangka); 
							fivResUnit = 'H';
							sixRes = MetriktoDesi(inputangka); 
							sixResUnit = 'd';
							printf("\n\t\t\t\t\t\t\t\t\t --> Hasilnya adalah: ");	
							printf("\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c", firstRes, firstResUnit, secondRes, secondResUnit, thirdRes, thirdResUnit, fourRes, fourResUnit, fivRes, fivResUnit, sixRes, sixResUnit);
							break;
						case 'k': case 'K':
							firstRes = 	KilotoCenti(inputangka); 
							firstResUnit = 'C';
							secondRes = KilotoMetrik(inputangka); 
							secondResUnit = 'X';
							thirdRes = KilotoMili(inputangka); 
							thirdResUnit = 'm';
							fourRes = KilotoDeka(inputangka); 
							fourResUnit = 'D';			
							fivRes = KilotoHekto(inputangka); 
							fivResUnit = 'H';
							sixRes = KilotoDesi(inputangka); 
							sixResUnit = 'd';
							printf("\n\t\t\t\t\t\t\t\t\t --> Hasilnya adalah: ");	
							printf("\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c", firstRes, firstResUnit, secondRes, secondResUnit, thirdRes, thirdResUnit, fourRes, fourResUnit, fivRes, fivResUnit, sixRes, sixResUnit);
							break; 
						case 'm': case 'M':
							firstRes = MilitoCenti(inputangka); 
							firstResUnit = 'C';
							secondRes = MilitoMetrik(inputangka); 
							secondResUnit = 'X';
							thirdRes = MilitoKilo(inputangka); 
							thirdResUnit = 'K';
							fourRes = MilitoDeka(inputangka); 
							fourResUnit = 'D';			
							fivRes = MilitoHekto(inputangka); 
							fivResUnit = 'H';
							sixRes = MilitoDesi(inputangka); 
							sixResUnit = 'd';
							printf("\n\t\t\t\t\t\t\t\t\t --> Hasilnya adalah: ");	
							printf("\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c", firstRes, firstResUnit, secondRes, secondResUnit, thirdRes, thirdResUnit, fourRes, fourResUnit, fivRes, fivResUnit, sixRes, sixResUnit);
							break; 
						case 'D':
							firstRes = DekatoCenti(inputangka); 
							firstResUnit = 'C';
							secondRes = DekatoMetrik(inputangka); 
							secondResUnit = 'X';
							thirdRes = DekatoKilo(inputangka); 
							thirdResUnit = 'K';
							fourRes = DekatoMili(inputangka); 
							fourResUnit = 'm';			
							fivRes = DekatoHekto(inputangka); 
							fivResUnit = 'H';
							sixRes = DekatoDesi(inputangka); 
							sixResUnit = 'd';
							printf("\n\t\t\t\t\t\t\t\t\t --> Hasilnya adalah: ");	
							printf("\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c", firstRes, firstResUnit, secondRes, secondResUnit, thirdRes, thirdResUnit, fourRes, fourResUnit, fivRes, fivResUnit, sixRes, sixResUnit);
							break; 
						case 'd':
							firstRes = DesitoCenti(inputangka); 
							firstResUnit = 'C';
							secondRes = DesitoMetrik(inputangka); 
							secondResUnit = 'X';
							thirdRes = DesitoKilo(inputangka); 
							thirdResUnit = 'K';
							fourRes = DesitoMili(inputangka); 
							fourResUnit = 'm';			
							fivRes = DesitoHekto(inputangka); 
							fivResUnit = 'H';
							sixRes = DesitoDeka(inputangka); 
							sixResUnit = 'D';
							printf("\n\t\t\t\t\t\t\t\t\t --> Hasilnya adalah: ");	
							printf("\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c", firstRes, firstResUnit, secondRes, secondResUnit, thirdRes, thirdResUnit, fourRes, fourResUnit, fivRes, fivResUnit, sixRes, sixResUnit);
							break; 
						case 'h': case 'H':
							firstRes = HektotoCenti(inputangka); 
							firstResUnit = 'C';
							secondRes = HektotoMetrik(inputangka); 
							secondResUnit = 'X';
							thirdRes = HektotoKilo(inputangka); 
							thirdResUnit = 'K';
							fourRes = HektotoDeka(inputangka); 
							fourResUnit = 'D';			
							fivRes = HektotoMili(inputangka); 
							fivResUnit = 'm';
							sixRes = HektotoDesi(inputangka); 
							sixResUnit = 'd';
							printf("\n\t\t\t\t\t\t\t\t\t --> Hasilnya adalah: ");	
							printf("\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c", firstRes, firstResUnit, secondRes, secondResUnit, thirdRes, thirdResUnit, fourRes, fourResUnit, fivRes, fivResUnit, sixRes, sixResUnit);
							break; 
						default:
							break;
				}
					break;				
				}

					
				case 4:
				{
					int pilih, Input, waktu1, waktu2, waktu3; 					
					system("cls");
					header();
					printf	("\n\t\t\t\t\t\t    <<<<<<<<<<<<<<<  Anda memilih opsi konversi waktu  >>>>>>>>>>>>>>>"); 
					puts	("\n\n\t\t\t\t\t\t\t  +================== KONVERSI WAKTU =================+");
					puts	("\t\t\t\t\t\t\t  | ===> Keterangan: D = Detik       (d)              |");
					puts	("\t\t\t\t\t\t\t  |                  K = Mikrodetik  (mcd)            |");
					puts	("\t\t\t\t\t\t\t  |                  L = Milidetik   (ms)             |");
					puts	("\t\t\t\t\t\t\t  |                  M = Menit       (m)              |");	
					puts	("\t\t\t\t\t\t\t  |                  J = Jam         (J)              |");	
					puts	("\t\t\t\t\t\t\t  | ===> Contoh Inputan : 60 M                        |");
					puts	("\t\t\t\t\t\t\t  +===================================================+");
					
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
				    printf	("\t\t\t\t\t\t\t\t   --> Pilih menu yang Anda inginkan >> "); scanf("%d", &pilih);					
	
					switch(pilih){
						case 1:
							printf("\t\t\t\t\t\t\t--> Masukkan Jam yang ingin anda konversikan ke Detik >> ");
							scanf("%d", &Input);
							waktu1 = JamKeDetik(Input);
							printf("\t\t\t\t\t\t\t\t  --> Hasil dari Jam ke detik adalah: %d detik", waktu1);
							break;
						case 2:
							printf("\t\t\t\t\t\t\t--> Masukkan Jam yang ingin anda konversikan ke Menit >> ");
							scanf("%d", &Input);
							waktu1 = JamKeMenit(Input);
							printf("\t\t\t\t\t\t\t\t  --> Hasil dari Jam ke detik adalah: %d menit", waktu1);
							break;
						case 3:
							printf("\t\t\t\t\t\t\t--> Masukkan Menit yang ingin anda konversikan ke Jam >> ");
							scanf("%d", &Input);
							if(Input >= 60){
								waktu1 = MenitKeJam(Input);
								waktu2 = sisaMenitkeDetik(Input);
							}else{
								waktu2 = MenitKeDetik(Input);
							}
							
							if(waktu1 > 0 && waktu2 > 0){
								printf("\t\t\t\t\t\t\t\t  --> Hasil dari Menit ke jam adalah: %d jam, %d detik", waktu1, waktu2);
							}else if(waktu1 > 0 && waktu2 == 0){
								printf("\t\t\t\t\t\t\t\t  --> Hasil dari Menit ke jam adalah: %d jam", waktu1);
							}else{
								printf("\t\t\t\t\t\t\t\t  --> Karena inputan tidak menghasilkan jam, maka :\n");
								printf("\t\t\t\t\t\t\t\t  --> Hasil dari Menit ke detik adalah: %d detik", waktu2);
							}
							break;
						case 4:
							printf("\t\t\t\t\t\t\t-->Masukkan Menit yang ingin anda konversikan ke Detik >> ");
							scanf("%d", &Input);
							waktu1 = MenitKeDetik(Input);
							printf("\t\t\t\t\t\t\t\t  --> Hasil dari Jam ke detik adalah: %d detik", waktu1);
							break;
						case 5:
							printf("\t\t\t\t\t\t\t--> Masukkan Detik yang ingin anda konversikan ke Jam >> ");
							scanf("%d", &Input);
							if(Input >=  3600){
								waktu1 = DetikKeJam(Input);
								waktu2 = sisaDetikKeJam2(Input);
								waktu3 = sisaDetikKeJam3(Input);
							}else if(Input >= 60){
								waktu2 = MenitKeJam(Input);
								waktu3 = sisaDetikKeJam1(Input);
							}else{
								waktu2 = 0;
								waktu3 = 0;
							}
				
							if(waktu1 > 0 && waktu2 > 0 && waktu3 > 0){
								printf("\t\t\t\t\t\t\t\t  --> Hasil dari Menit ke jam adalah: %d jam, %d menit, %d detik", waktu1, waktu2, waktu3);
							}else if(waktu1 > 0 && waktu2 > 0){
								printf("\t\t\t\t\t\t\t\t  --> Hasil dari Menit ke jam adalah: %d jam, %d menit", waktu1, waktu2);
							}else if(waktu1 > 0 && waktu3 > 0){
								printf("\t\t\t\t\t\t\t\t  --> Hasil dari Menit ke jam adalah: %d jam, %d detik", waktu1, waktu3);
							}else if(waktu1 > 0 && waktu3 == 0){
								printf("\t\t\t\t\t\t\t\t  --> Hasil dari Menit ke jam adalah: %d jam", waktu1);
							}else if(waktu2 > 0 && waktu3 > 0){
								printf("\t\t\t\t\t\t\t\t  --> Karena inputan tidak menghasilkan jam, maka :\n");
								printf("\t\t\t\t\t\t\t\t  --> Hasil dari detik ke menit adalah: %d menit, %d detik", waktu2, waktu3);
							}else if(waktu2 > 0 && waktu3 == 0){
								printf("\t\t\t\t\t\t\t\t  --> Karena inputan tidak menghasilkan jam, maka :\n");
								printf("\t\t\t\t\t\t\t\t  --> Hasil dari detik ke menit adalah: %d menit", waktu2);
							}else{
								printf("\t\t\t\t\t  --> Maaf, karena inputan tidak menghasilkan jam dan menit maka tidak bisa dikonversikan\n");
							}
							break;
						case 6:
							printf("\t\t\t\t\t\t\t--> Masukkan Detik yang ingin anda konversikan ke Menit >> ");
							scanf("%d", &Input);
							if(Input >= 60){
								waktu1 = MenitKeJam(Input);
								waktu2 = sisaDetikKeJam1(Input);
							}else{
								waktu1 = 0;
								waktu2 = 0;
							}
				
							if(waktu1 > 0 && waktu2 > 0){
								printf("\t\t\t\t\t\t\t\t  --> Hasil dari detik ke menit adalah: %d menit, %d detik", waktu1, waktu2);
							}else if(waktu1 > 0 && waktu2 == 0){
								printf("\t\t\t\t\t\t\t\t  --> Hasil dari detik ke menit adalah: %d menit", waktu1);
							}else{
								printf("\t\t\t\t\t  --> Maaf, karena inputan tidak menghasilkan menit maka tidak bisa dikonversikan\n");
							}
							break;
						default: 
					        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t--> Anda salah memilih opsi! Pilih Opsi 1-6");  
					        break;
					}					
					break;					
				}

				
				default:
					system("cls"); 
					header(); 
	            	printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t--> Anda salah memilih opsi! Pilih Opsi 1-4");  
	            	break;  
			}
			break;
		case 2:
			system("cls");
			header();
			puts	("\n\n\t\t\t\t\t\t   +==================== PILIH FITUR ARITMATIKA ======================+");
		    puts	("\t\t\t\t\t\t   |------------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t   |                          1. KALKULATOR                           |");
		    puts	("\t\t\t\t\t\t   |------------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t   |                       2. RIWAYAT KALKULATOR                      |");
		    puts	("\t\t\t\t\t\t   |------------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t   |                   3. MENGHAPUS RIWAYAT KALKULATOR                |");
		    puts	("\t\t\t\t\t\t   +==================================================================+");
		    printf	("\t\t\t\t\t\t\t\t     --> Pilih menu yang Anda inginkan >> "); scanf("%d", &pilihan);
		    
		    switch(pilihan){
		    	case 1:
		    		system("cls");
		    		header();
		    		printf	("\n\t\t\t\t\t\t\t   <<<<<<<<<<<<<<<  Anda memilih opsi 1  >>>>>>>>>>>>>>>");
					puts	("\n\n\t\t\t\t\t\t\t   +======== KETERANGAN KONFIGURASI ARITMATIKA ========+");    
					puts	("\t\t\t\t\t\t\t   | ===> Keterangan: + = Pertambahan                  |");
					puts	("\t\t\t\t\t\t\t   |                  - = Pengurangan                  |");
					puts	("\t\t\t\t\t\t\t   |                  * = Perkalian                    |");
					puts	("\t\t\t\t\t\t\t   |                  / = Pembagian                    |");
					puts	("\t\t\t\t\t\t\t   |                  ^ = Perpangkatan                 |");		
					puts	("\t\t\t\t\t\t\t   | ===> Contoh Inputan : 25 + 70 - 8 ^ 3 + 10        |");
					puts	("\t\t\t\t\t\t\t   +===================================================+");
					break;
					/* case 2: disini pilihan 2 sama 3 nya maunya riwayat kalkulator sama ngehapus riwayat kalkulator */
				default:
					system("cls"); 
					header(); 
	            	printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t--> Anda salah memilih opsi! Pilih Opsi 1-3");  
	            	break; 	 
			}
			break;
			
		case 3: 
			system("cls");
			header();
			printf	("\n\t\t\t\t\t\t     <<<<<<<<<<<<<<<<<<<   Anda memilih opsi 3  >>>>>>>>>>>>>>>>>>>"); 
			puts	("\n\n\t\t\t\t\t\t   +================== PILIH PERHITUNGAN KALKULUS ==================+");
		    puts	("\t\t\t\t\t\t   |----------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t   |                   1. LOGARITMA NATURAL                         |");
		    puts	("\t\t\t\t\t\t   |----------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t   |                   2. LOGARITMA                                 |");
		    puts	("\t\t\t\t\t\t   |----------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t   |                   3. INTEGRAL TENTU                            |");
		    puts	("\t\t\t\t\t\t   |----------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t   |                   4. LIMIT TAK HINGGA                          |");
		    puts	("\t\t\t\t\t\t   |----------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t   |                   5. LIMIT TAK HINGGA PECAHAN                  |");
		    puts	("\t\t\t\t\t\t   |----------------------------------------------------------------|");		    
			puts	("\t\t\t\t\t\t   |                   6. TURUNAN            	                    |");
		    puts	("\t\t\t\t\t\t   +================================================================+");
		    printf	("\t\t\t\t\t\t\t\t Pilih menu yang ingin Anda konversikan >> "); scanf("%d", &pilihan);
			switch(pilihan){
				case 1:
				{
					float x, y, z,retln, retlog;
					float bawah, atas;
				    int n, derajat ,i, j;
					float ln, log,result, invSin, invCos, invTan, invCsc, invSec, invCot, func;
					float akarPositif, akarNegatif, denom, nilaiPositif, nilaiNegatif, faktorPositif, faktorNegatif;
					float coef[11], p;
					double inf = INFINITY;
					system("cls");
					printf("Masukkan nilai log(2): ");
					scanf("%f", &ln);
					retln = logaritmaNatural(ln);
					printf("ln(%.2f) adalah: %f\n", ln,retln);
					break;
				}
				case 2:
				{
					float x, y, z,retln, retlog;
					float bawah, atas;
				    int n, derajat ,i, j;
					float ln, log,result, invSin, invCos, invTan, invCsc, invSec, invCot, func;
					float akarPositif, akarNegatif, denom, nilaiPositif, nilaiNegatif, faktorPositif, faktorNegatif;
					float coef[11], p;
					double inf = INFINITY;
					system("cls");					
					printf("Masukkan nilai log(10): ");
					scanf("%f", &log);
					retlog = logaritma(log);
					printf("log(%.2f) adalah: %f\n", ln,retlog);
					break;					
				}
				case 3:
				{
					float x, y, z,retln, retlog;
					float bawah, atas;
				    int n, derajat ,derajata, derajatb, i, j;
					float ln, log,result, invSin, invCos, invTan, invCsc, invSec, invCot, func;
					float akarPositif, akarNegatif, denom, nilaiPositif, nilaiNegatif, faktorPositif, faktorNegatif;
					float integral;
					float coef[11], coefa[11], coefb[11], p;
					double inf = INFINITY;					
					system("cls");
					printf("Derajat dari polinomial : ");
					scanf("%d", &derajat);
					
					printf("Masukkan koefisien dari polinomial : \n");
					for(i = 0; i<= derajat; i++){
						printf("Coeffient %d : ", i);
						scanf("%f", &coef[i]);
					}
					
					printf("Masukkan batas bawah : ");
					scanf("%f", &bawah);
					printf("Masukkan batas atas  : ");
					scanf("%f", &atas);
					
					if(bawah < atas){
						printf("f(x) = ");
						for(i = 0; i <= derajat; i++){
							if(i == 0){
								printf("%.f*x + ", coef[i]);
							}else if(i == derajat){
								printf("%.f/%d*x^%d \n", coef[i], i+1, i);
							}else{
								printf("%.f/%d*x^%d + ", coef[i], i+1, i);
							}
						}
						
						int n = 100;
						float p = (atas - bawah) / n;
						
						float q[101];
						float r[101];
						float jumlah = 0.0;
						float trapesium[100];
						
						integral = operasiIntegral(n, bawah, coef, derajat, p, q, r, trapesium);
						
						printf("Integralnya adalah : %f", integral);
					}else{
						printf("Input tidak valid");
					}
					break;					
				}
				
				case 4:
				{
					float x, y, z,retln, retlog;
					float bawah, atas;
				    int n, derajat ,i, j;
					float ln, log,result, invSin, invCos, invTan, invCsc, invSec, invCot, func;
					float akarPositif, akarNegatif, denom, nilaiPositif, nilaiNegatif, faktorPositif, faktorNegatif;
					float coef[11], p;
					double inf = INFINITY;						
					system("cls");	
					printf("Derajat dari polinomial : ");
					scanf("%d", &derajat);
					
					printf("Masukkan koefisien dari polinomial : \n");
					for(i = 0; i<= derajat; i++){
						printf("Coeffient %d : ", i);
						scanf("%f", &coef[i]);
					}
					
					for(i=0; i <= derajat; i++){
						if(i == 0){
							printf("%.f + ", coef[i]);
						}else if (i == derajat){
						printf("%.f*X^%d \n", coef[i], i);
						}else
						printf("%.f*X^%d + ", coef[i], i);
					}
					
					double l = limit(coef, derajat, inf);
					
					printf("Limit : %lf", l);					
					break;
									
				}
				
				case 5:
				{
					float x, y, z,retln, retlog;
					float bawah, atas;
				    int n, derajat ,derajata, derajatb, i, j;
					float ln, log,result, invSin, invCos, invTan, invCsc, invSec, invCot, func;
					float akarPositif, akarNegatif, denom, nilaiPositif, nilaiNegatif, faktorPositif, faktorNegatif;
					float integral;
					float coef[11], coefa[11], coefb[11], p;
					double inf = INFINITY;						
					system("cls");	
					printf("Derajat dari polinomial : ");
					scanf("%d", &derajata);
					
					printf("Masukkan koefisien pembilang dari polinomial : \n");
					for(i = 0; i<= derajata; i++){
						printf("Coeffient pembilang %d : ", i);
						scanf("%f", &coefa[i]);
					}
					
					for(i=0; i <= derajata; i++){
						if(i == 0){
							printf("%.f + ", coefa[i]);
						}else if (i == derajata){
						printf("%.f*X^%d \n", coefa[i], i);
						}else
						printf("%.f*X^%d + ", coefa[i], i);
					}
					
					printf("Derajat dari polinomial : ");
					scanf("%d", &derajatb);
					
					printf("Masukkan koefisien penyebut dari polinomial : \n");
					for(i = 0; i<= derajatb; i++){
						printf("Coeffient penyebut %d : ", i);
						scanf("%f", &coefb[i]);
					}
					
					for(i=0; i <= derajatb; i++){
						if(i == 0){
							printf("%.f + ", coefb[i]);
						}else if (i == derajatb){
						printf("%.f*X^%d \n", coefb[i], i);
						}else
						printf("%.f*X^%d + ", coefb[i], i);
					}
									
					if (derajata == derajatb){
						float numer = limitBagiNum(coefa, derajata);
						float denom = limitBagiDen(coefb, derajatb);
						float hasil = numer/denom;
						printf("Numer : %f\n", numer);
						printf("Denom : %f\n", denom);
						printf("Limit : %f", hasil);
					}else if(derajata > derajatb){
						float numer = limitBagiNum(coefa, derajata);
						float denom = 0;		
						float hasil = numer/denom;
						printf("Numer : %f\n", numer);
						printf("Denom : %f\n", denom);
						printf("Limit : %f", hasil);
					}else{
						float numer = 0;
						float denom = limitBagiDen(coefb, derajatb);
						float hasil = numer/denom;
						printf("Numer : %f\n", numer);
						printf("Denom : %f\n", denom);
						printf("Limit : %f", hasil);
					}
					break;						
				}
				
				case 6:
				{
					float x, z,retln, retlog;
					float bawah, atas;
				    int derajat ,i, j;
					float ln, log,result, invSin, invCos, invTan, invCsc, invSec, invCot, func;
					float akarPositif, akarNegatif, denom, nilaiPositif, nilaiNegatif, faktorPositif, faktorNegatif;
					float coef[11];
					float integral;					
					double inf = INFINITY;						
					system("cls");
					printf("Derajat dari polinomial : ");
					scanf("%d", &derajat);
					
					printf("Masukkan koefisien dari polinomial : \n");
					for(i = 0; i<= derajat; i++){
						printf("Coeffient %d : ", i);
						scanf("%f", &coef[i]);
					}
					
					for(i=0; i <= derajat; i++){
						if(i == 0){
							printf("%.f + ", coef[i]*i);
						}else if (i == derajat){
						printf("%.f*X^%d \n", coef[i]*i, i-1);
						}else
						printf("%.f*X^%d + ", coef[i]*i, i-1);
					}
					
					printf("Input nilai x untuk turunan : ");
					scanf("%f", &x);
					
					float y = polinomial (coef, derajat, x);
					printf("y = %.4f\n", y);
					float h = 0.0001;
					float x1 = x + h;
					float y1 = polinomial(coef, derajat, x1);
					printf("y = %.4f\n", y1);
					float turunan = (y1 - y) / h;
					
					printf("Turunan : %.4f", round(turunan));					
					break;					
				}
				default:
					system("cls"); 
					header(); 
	            	printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t--> Anda salah memilih opsi! Pilih Opsi 1-5");  
	            	break;
			}
			break;
		case 4:
				system("cls");
				header();
				printf	("\n\t\t\t\t\t\t        <<<<<<<<<<<<<<<<<<<   Anda memilih opsi 4  >>>>>>>>>>>>>>>>>>>"); 
				puts	("\n\n\t\t\t\t\t\t      +================ PILIH PERHITUNGAN STATISTIKA =================+");
			    puts	("\t\t\t\t\t\t      |---------------------------------------------------------------|");
				puts	("\t\t\t\t\t\t      |                       1. PERMUTASI                            |");
			    puts	("\t\t\t\t\t\t      |---------------------------------------------------------------|");
				puts	("\t\t\t\t\t\t      |                       2. KOMBINASI                            |");
			    puts	("\t\t\t\t\t\t      |---------------------------------------------------------------|");
				puts	("\t\t\t\t\t\t      |                       3. FAKTORIAL                            |");
			    puts	("\t\t\t\t\t\t      +===============================================================+");
			    printf	("\t\t\t\t\t\t\t\t Pilih menu yang ingin Anda konversikan >> "); scanf("%d", &pilihan);
			    
			    switch(pilihan){
					case 1:
					{
						int n, r, f, Permutasi;
						printf("Masukkan nilai n: ");
						scanf("%d, %d", &n);
						printf("Masukkan nilai r: ");
						scanf("%d", &r);
						if (n<r){
							printf("invalid input n < r");
							exit(0);
						}else if (n>r){
							Permutasi = permutasi(n, r);
							printf("\nPermutasi (%d, %d):%d \n\n", n, r, Permutasi);
						}														
						break;
					}
					case 2:
					{
						int n, r, f, Kombinasi;
						printf("Masukkan nilai n: ");
						scanf("%d, %d", &n);
						printf("Masukkan nilai r: ");
						scanf("%d", &r);
						if (n<r){
							printf("invalid input n < r");
							exit(0);
						}else if (n>r){
							Kombinasi = kombinasi(n,r);
							printf("\nKombinasi (%d, %d):%d", n, r, Kombinasi);
						}			
						break;					
					}
					case 3:
					{
						int input, Fktrl1;
						printf("Masukkan angka : ");
						scanf("%d", &input);
						printf("\n %d! = ", input);
						Fktrl1 = Faktorial1(input);
						printf(" = %d", Fktrl1);
						break;											
					}
					default:
						system("cls"); 
						header(); 
		            	printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t--> Anda salah memilih opsi! Pilih Opsi 1-3");  
		            	break;
				}
			break;
		case 5:
			system("cls");
			header();
			printf	("\n\t\t\t\t\t\t        <<<<<<<<<<<<<<<<<<<   Anda memilih opsi 5  >>>>>>>>>>>>>>>>>>>"); 
			puts	("\n\n\t\t\t\t\t\t      +================= PILIH PERHITUNGAN GEOMETRI ==================+");
		    puts	("\t\t\t\t\t\t      |---------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t      |                  1. BANGUN DATAR (2 DIMENSI)                  |");
		    puts	("\t\t\t\t\t\t      |---------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t      |                  2. BANGUN RUANG (3 DIMENSI)                  |");
		    puts	("\t\t\t\t\t\t      +===============================================================+");
		    printf	("\t\t\t\t\t\t\t\t Pilih menu yang ingin Anda konversikan >> "); scanf("%d", &pilihan);
		    
		    switch(pilihan){
				case 1:
				{
					int pilih; 
					float Input1, Input2, Input3, luas, keliling;
					puts	("\n\n\t\t\t\t\t\t   +===  PILIH BANGUN DATAR UNTUK MENGHITUNG LUAS DAN KELILINGNYA ===+");
				    puts	("\t\t\t\t\t\t   |-----------------------------------------------------------------|");
					puts	("\t\t\t\t\t\t   |                       1. PERSEGI                                |");
				    puts	("\t\t\t\t\t\t   |-----------------------------------------------------------------|");
					puts	("\t\t\t\t\t\t   |                       2. PERSEGI PANJANG        	             |");
				    puts	("\t\t\t\t\t\t   |-----------------------------------------------------------------|");
					puts	("\t\t\t\t\t\t   |                       3. SEGITIGA SAMA SISI                     |");
				    puts	("\t\t\t\t\t\t   |-----------------------------------------------------------------|");
					puts	("\t\t\t\t\t\t   |                  	   4. LINGKARAN   		             |");
				    puts	("\t\t\t\t\t\t   |-----------------------------------------------------------------|");
					puts	("\t\t\t\t\t\t   |                 	   5. JAJAR GENJANG        		     |");
				    puts	("\t\t\t\t\t\t   |-----------------------------------------------------------------|");
					puts	("\t\t\t\t\t\t   |                 	   6. BELAH KETUPAT        		     |");	
				    puts	("\t\t\t\t\t\t   +=================================================================+");
				    printf	("\t\t\t\t\t\t\t\t     --> Pilih menu yang Anda inginkan >> "); scanf("%d", &pilih);					
					switch(pilih){
						case 1:
							printf("\t\t\t\t      --> Masukkan sisi dari persegi yang ingin anda hitung luas dan kelilingnya (dalam bentuk cm) >> ");
							scanf("%f", &Input1);
							luas = luaspersegi(Input1);
							keliling = kelilingpersegi(Input1);
							printf("\n\t\t\t\t\t\t\t\t  --> Luas dari persegi tersebut adalah: %.2f cm\n", luas);
							printf("\t\t\t\t\t\t\t\t--> Keliling dari persegi tersebut adalah: %.2f cm", keliling);
							break;
						case 2:
							printf("\t\t\t\t      --> Masukkan panjang dari persegi panjang yang ingin anda hitung luas dan kelilingnya (dalam bentuk cm) >> ");
							scanf("%f", &Input1);
							printf("\t\t\t\t      --> Masukkan lebar dari persegi panjang yang ingin anda hitung luas dan kelilingnya (dalam bentuk cm) >> ");
							scanf("%f", &Input2);
							luas = persegipanjang(Input1, Input2);
							keliling = kelilingpersegipanjang(Input1, Input2);
							printf("\n\t\t\t\t\t\t\t    --> Luas dari persegi panjang tersebut adalah: %.2f cm\n", luas);
							printf("\t\t\t\t\t\t\t  --> Keliling dari persegi panjang tersebut adalah: %.2f cm", keliling);
							break;
						case 3:
							printf("\t\t\t\t      --> Masukkan alas dari segitiga yang ingin anda hitung luasnya (dalam bentuk cm) >> ");
							scanf("%f", &Input1);
							printf("\t\t\t\t      --> Masukkan tinggi dari segitiga yang ingin anda hitung luasnya (dalam bentuk cm) >> ");
							scanf("%f", &Input2);
							printf("\t\t\t\t      --> Masukkan sisi dari segitiga yang ingin anda hitung kelilingnya (dalam bentuk cm) >> ");
							scanf("%f", &Input3);
							luas = luassegitiga(Input1, Input2, Input3);
							keliling = kelilingsegitiga(Input1, Input2, Input3);
							printf("\n\t\t\t\t\t\t\t    --> Luas dari segitiga tersebut adalah: %.2f cm\n", luas);
							printf("\t\t\t\t\t\t\t  --> Keliling dari segitiga tersebut adalah: %.2f cm", keliling);
							break;
						case 4:
							printf("\t\t\t\t      --> Masukkan jari-jari dari lingkaran yang ingin anda hitung luas dan kelilingnya (dalam bentuk cm) >> ");
							scanf("%f", &Input1);
							luas = luaslingkaran(Input1);
							keliling = kelilinglingkaran(Input1);
							printf("\n\t\t\t\t\t\t\t    --> Luas dari lingkaran tersebut adalah: %.2f cm\n", luas);
							printf("\t\t\t\t\t\t\t\t--> Keliling dari lingkaran tersebut adalah: %.2f cm", keliling);
							break;
						case 5:
							printf("\t\t\t\t      --> Masukkan alas dari jajar genjang yang ingin anda hitung luas dan kelilingnya (dalam bentuk cm) >> ");
							scanf("%f", &Input1);
							printf("\t\t\t\t      --> Masukkan tinggi dari jajar genjang yang ingin anda hitung luasnya (dalam bentuk cm) >> ");
							scanf("%f", &Input2);
							printf("\t\t\t\t      --> Masukkan sisi miring dari jajar genjang yang ingin anda hitung kelilingnya (dalam bentuk cm) >> ");
							scanf("%f", &Input3);
							luas = luasjajargenjang(Input1, Input2);
							keliling = kelilingjajargenjang(Input1, Input2);
							printf("\n\t\t\t\t\t\t\t    --> Luas dari jajar genjang tersebut adalah: %.2f cm\n", luas);
							printf("\t\t\t\t\t\t\t  --> Keliling dari jajar genjang tersebut adalah: %.2f cm", keliling);
							break;
						case 6:
							printf("\t\t\t\t      --> Masukkan diagonal pertama dari belah ketupat yang ingin anda hitung luasnya (dalam bentuk cm) >> ");
							scanf("%f", &Input1);
							printf("\t\t\t\t      --> Masukkan diagonal kedua dari belah ketupat yang ingin anda hitung luasnya (dalam bentuk cm) >> ");
							scanf("%f", &Input2);
							printf("\t\t\t\t      --> Masukkan sisi dari belah ketupat yang ingin anda hitung kelilingnya (dalam bentuk cm) >> ");
							scanf("%f", &Input3);
							luas = luasbelahketupat(Input1, Input2);
							keliling = kelilingbelahketupat(Input1);
							printf("\n\t\t\t\t\t\t\t    --> Luas dari jajar genjang tersebut adalah: %.2f cm\n", luas);
							printf("\t\t\t\t\t\t\t  --> Keliling dari jajar genjang tersebut adalah: %.2f cm", keliling);
							break;
						default: 
					        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t--> Anda salah memilih opsi! Pilih Opsi 1-6");  
					        break;
					}					 					
					break;					
				}

				case 2:
				{
					int pilih; 
					float Input1, Input2, Input3, luas, volume; 					
					puts	("\n\n\t\t\t\t\t\t   +===  PILIH BANGUN DATAR UNTUK MENGHITUNG LUAS DAN KELILINGNYA  ==+");
				    puts	("\t\t\t\t\t\t   |-----------------------------------------------------------------|");
					puts	("\t\t\t\t\t\t   |                           1. KUBUS                              |");
				    puts	("\t\t\t\t\t\t   |-----------------------------------------------------------------|");
					puts	("\t\t\t\t\t\t   |                           2. BALOK        	                     |");
				    puts	("\t\t\t\t\t\t   |-----------------------------------------------------------------|");
					puts	("\t\t\t\t\t\t   |                  	       3. KERUCUT     	                     |");
				    puts	("\t\t\t\t\t\t   |-----------------------------------------------------------------|");
					puts	("\t\t\t\t\t\t   |                  	       4. BOLA   		             |");
				    puts	("\t\t\t\t\t\t   |-----------------------------------------------------------------|");
					puts	("\t\t\t\t\t\t   |                 	       5. TABUNG        		     |");	
				    puts	("\t\t\t\t\t\t   +=================================================================+");
				    printf	("\t\t\t\t\t\t\t\t     --> Pilih menu yang Anda inginkan >> "); scanf("%d", &pilih);
					switch(pilih){
						case 1:
							printf("\t\t\t\t      --> Masukkan panjang rusuk dari kubus yang ingin anda hitung luas dan volumenya (dalam bentuk cm) >> ");
							scanf("%f", &Input1);
							luas = luaskubus(Input1);
							volume = volumekubus(Input1);
							printf("\n\t\t\t\t\t\t\t\t  --> Luas dari kubus tersebut adalah: %.2f cm\n", luas);
							printf("\t\t\t\t\t\t\t\t--> Volume dari kubus tersebut adalah: %.2f cm", volume);
							break;
						case 2:
							printf("\t\t\t\t      --> Masukkan panjang dari balok yang ingin anda hitung luas dan volumenya (dalam bentuk cm) >> ");
							scanf("%f", &Input1);
							printf("\t\t\t\t      --> Masukkan lebar dari balok yang ingin anda hitung luas dan volumenya (dalam bentuk cm) >> ");
							scanf("%f", &Input2);
							printf("\t\t\t\t      --> Masukkan tinggi dari balok yang ingin anda hitung luas dan volumenya (dalam bentuk cm) >> ");
							scanf("%f", &Input3);
							luas = luasbalok(Input1, Input2, Input3);
							volume = volumebalok(Input1, Input2, Input3);
							printf("\n\t\t\t\t\t\t\t\t  --> Luas dari balok tersebut adalah: %.2f cm\n", luas);
							printf("\t\t\t\t\t\t\t\t--> Volume dari balok tersebut adalah: %.2f cm", volume);
							break;
						case 3:
							printf("\t\t\t\t      --> Masukkan jari-jari dari kerucut yang ingin anda hitung luas dan volumenya (dalam bentuk cm) >> ");
							scanf("%f", &Input1);
							printf("\t\t\t\t      --> Masukkan sisi/garis pelukis dari kerucut yang ingin anda hitung luasnya (dalam bentuk cm) >> ");
							scanf("%f", &Input2);
							printf("\t\t\t\t      --> Masukkan tinggi dari kerucut yang ingin anda hitung volumenya (dalam bentuk cm) >> ");
							scanf("%f", &Input3);
							luas = luaskerucut(Input1, Input2);
							volume = volumekerucut(Input1, Input2);
							printf("\n\t\t\t\t\t\t\t\t  --> Luas dari kerucut tersebut adalah: %.2f cm\n", luas);
							printf("\t\t\t\t\t\t\t\t--> Volume dari kerucut tersebut adalah: %.2f cm", volume);
							break;
						case 4:
							printf("\t\t\t\t      --> Masukkan jari-jari dari bola yang ingin anda hitung luas dan volumenya (dalam bentuk cm) >> ");
							scanf("%f", &Input1);
							luas = luasbola(Input1);
							volume = volumebola(Input1);
							printf("\n\t\t\t\t\t\t\t\t  --> Luas dari bola tersebut adalah: %.2f cm\n", luas);
							printf("\t\t\t\t\t\t\t\t--> Volume dari bola tersebut adalah: %.2f cm", volume);
							break;
						case 5:
							printf("\t\t\t\t      --> Masukkan jari-jari dari tabung yang ingin anda hitung luas dan volumenya(dalam bentuk cm) >> ");
							scanf("%f", &Input1);
							printf("\t\t\t\t      --> Masukkan tinggi dari tabung yang ingin anda hitung luasnya (dalam bentuk cm) >> ");
							scanf("%f", &Input2);
				//			tabung(Input1, Input2, &luas, &volume);
							luas = luastabung(Input1, Input2);
							volume = volumetabung(Input1, Input2);
							printf("\n\t\t\t\t\t\t\t\t  --> Luas dari tabung tersebut adalah: %.2f cm\n", luas);
							printf("\t\t\t\t\t\t\t\t--> Volume dari tabung tersebut adalah: %.2f cm", volume);
							break;
						default: 
					        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t--> Anda salah memilih opsi! Pilih Opsi 1-5");  
					        break;
					}				    
					break;					
				}

				default:
					system("cls"); 
					header(); 
	            	printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t--> Anda salah memilih opsi! Pilih Opsi 1-2");  
	            	break;
			}
			break;
		case 6:
			system("cls");
			header();
			printf	("\n\t\t\t\t\t\t       <<<<<<<<<<<<<<<<<<<   Anda memilih opsi 6  >>>>>>>>>>>>>>>>>>>"); 
			puts	("\n\n\t\t\t\t\t\t      +==================== PILIH ALJABAR LINIER =====================+");
		    puts	("\t\t\t\t\t\t      |---------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t      |                          1. MATRIKS                           |");
		    puts	("\t\t\t\t\t\t      |---------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t      |                          2. HIMPUNAN                          |");
		    puts	("\t\t\t\t\t\t      |---------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t      |                   3. AKAR PERSAMAAN KUADRAT                   |");			
		    puts	("\t\t\t\t\t\t      +===============================================================+");
		    printf	("\t\t\t\t\t\t\t\t Pilih menu yang ingin Anda konversikan >> "); scanf("%d", &pilihan);
		    
		    switch(pilihan){
				case 1:
				{
				    int i, j, k;   
				    int matrixA[10][10], matrixB[10][10], matrixHasil[10][10]; 
					int sumM[10][10], scaM[10][10], mulM[10][10]; 
				    int rowA, rowB, colA, colB;  
				    int operation; 
				    char again = 'Y';  
				    int scalar = 0;  
				    int add = 1;  
				    int sub = -1;  
				  
//				    while (again == 'Y'){  
						puts	("\n\n\t\t\t\t\t\t   +===================  PILIH OPERASI MATRIKS  =====================+");
					    puts	("\t\t\t\t\t\t   |-----------------------------------------------------------------|");
						puts	("\t\t\t\t\t\t   |                    1. PERTAMBAHAN MATRIKS                       |");
					    puts	("\t\t\t\t\t\t   |-----------------------------------------------------------------|");
						puts	("\t\t\t\t\t\t   |                    2. PENGURANGAN MATRIKS           	     |");
					    puts	("\t\t\t\t\t\t   |-----------------------------------------------------------------|");
						puts	("\t\t\t\t\t\t   |                  	3. PERKALIAN MATRIKS           		     |");  
				    	puts	("\t\t\t\t\t\t   +=================================================================+");
						printf	("\t\t\t\t\t\t\t\t     --> Pilih menu yang Anda inginkan >> "); scanf("%d", &operation);    
				
				        switch (operation){  
					        case 1:  
					            printf("\n\t\t\t\t\t\t\t--> Masukkan jumlah baris dan kolom untuk Matriks A : ");  
						        scanf("%d%d", &rowA, &colA);    
					            
					            printf("\t\t\t\t\t\t\t--> Masukkan jumlah baris dan kolom untuk Matriks B : ");  
					            scanf("%d%d", &rowB, &colB);    
					  
					            while ((rowA != rowB) && (colA != colB)){  
					                printf("\n\t\t\t\t\t\t\tMaaf, jumlah dari baris dan kolom matriks A dan B harus sama. Inputkan kembali: \n");  
						            printf("\n\t\t\t\t\t\t\t--> Masukkan jumlah baris dan kolom untuk Matriks A : ");  
						            scanf("%d%d", &rowA, &colA);    
						            
						            printf("\t\t\t\t\t\t\t--> Masukkan jumlah baris dan kolom untuk Matriks B : ");  
						            scanf("%d%d", &rowB, &colB);
					            }  
					  
					  
					            printf("\t\t\t\t\t\t\t--> Masukkan isi dari Matriks A (%d x %d)\n", rowA, colA); 
					            
							    for (i = 0; i < rowA; i++){  
							        printf("\t\t\t\t\t\t\t--> Masukkan %d isi untuk baris ke-%d: ", colA, i + 1);  
							        for (j = 0; j < colA; j++){  
							            scanf("%d", &matrixA[i][j]);  
							        }  
							    }    
					            printf("\n\t\t\t\t\t\t\t --> Matriks A <--\n\n");  
								
							    for (i = 0; i < rowA; i++) {
									printf("\t\t\t\t\t\t\t  ");  
							        for (j = 0; j < colA; j++){  
							            printf("  %d", matrixA[i][j]);  
							        }  
							        printf("\n");  
							    }  printf("\n");
					            printf("\t\t\t\t\t\t\t--> Masukkan isi dari Matriks B (%d x %d)\n", rowB, colB); 
								for (i = 0; i < rowB; i++){  
							        printf("\t\t\t\t\t\t\t--> Masukkan %d isi untuk baris ke-%d: ", colB, i + 1);  
							        for (j = 0; j < colB; j++){  
							            scanf("%d", &matrixB[i][j]);  
							        }  
							    }   
					            printf("\n\t\t\t\t\t\t\t --> Matriks B <--\n\n");  
								for (i = 0; i < rowB; i++) {
									printf("\t\t\t\t\t\t\t  ");  
							        for (j = 0; j < colB; j++){  
							            printf("  %d", matrixB[i][j]);  
							        }  
							        printf("\n");  
							    }  printf("\n");
					  
					            printf("\n\t\t\t\t\t\t\t--> Hasil dari penjumlahan Matriks A dengan Matriks B sebagai berikut : \n\n");    
							    for (i = 0; i < rowA; i++){  
							        for (j = 0; j < colA; j++){  
							            scaM[i][j] = add * matrixB[i][j];  
							            }  
							        }  
							  
							    for (i = 0; i < rowA; i++){ 
									printf("\t\t\t\t\t\t\t  "); 
							        for (j = 0; j < colA; j++){  
							            sumM[i][j] = matrixA[i][j] + scaM[i][j];  
							            printf("  %d", sumM[i][j]);  
							        }  
							        printf("\n");  
							    }  printf("\n");
					            break;
					        
					        case 2:  
					        
					            printf("\n\t\t\t\t\t\t\t--> Masukkan jumlah baris dan kolom untuk Matriks A : ");  
					            scanf("%d%d", &rowA, &colA);    
					            
					            printf("\t\t\t\t\t\t\t--> Masukkan jumlah baris dan kolom untuk Matriks B : ");  
					            scanf("%d%d", &rowB, &colB); 
				  
					            while ((rowA != rowB) && (colA != colB)){  
					                printf("\n\t\t\t\t\t\t\tMaaf, jumlah dari baris dan kolom matriks A dan B harus sama. Inputkan kembali: \n");  
						            printf("\n\t\t\t\t\t\t\t--> Masukkan jumlah baris dan kolom untuk Matriks A : ");  
						            scanf("%d%d", &rowA, &colA);    
						            
						            printf("\t\t\t\t\t\t\t--> Masukkan jumlah baris dan kolom untuk Matriks B : ");  
						            scanf("%d%d", &rowB, &colB);
					            }   
				  
					            printf("\t\t\t\t\t\t\t--> Masukkan isi dari Matriks A (%d x %d)\n", rowA, colA); 
							    for (i = 0; i < rowA; i++){  
							        printf("\t\t\t\t\t\t\t--> Masukkan %d isi untuk baris ke-%d: ", colA, i + 1);  
							        for (j = 0; j < colA; j++){  
							            scanf("%d", &matrixA[i][j]);  
							        }  
							    }    
					            printf("\n\t\t\t\t\t\t\t --> Matriks A <--\n\n");  
								
							    for (i = 0; i < rowA; i++) {
									printf("\t\t\t\t\t\t\t  ");  
							        for (j = 0; j < colA; j++){  
							            printf("  %d", matrixA[i][j]);  
							        }  
							        printf("\n");  
							    }  printf("\n");
					            printf("\t\t\t\t\t\t\t--> Masukkan isi dari Matriks B (%d x %d)\n", rowB, colB);  
								for (i = 0; i < rowB; i++){  
							        printf("\t\t\t\t\t\t\t--> Masukkan %d isi untuk baris ke-%d: ", colB, i + 1);  
							        for (j = 0; j < colB; j++){  
							            scanf("%d", &matrixB[i][j]);  
							        }  
							    }   
					            printf("\n\t\t\t\t\t\t\t --> Matriks B <--\n\n");  
								for (i = 0; i < rowB; i++) {
									printf("\t\t\t\t\t\t\t  ");  
							        for (j = 0; j < colB; j++){  
							            printf("  %d", matrixB[i][j]);  
							        }  
							        printf("\n");  
							    }  printf("\n");
							    
					            printf("\n\t\t\t\t\t\t\t--> Hasil dari pengurangan Matriks A dengan Matriks B sebagai berikut : \n\n");  
							    for (i = 0; i < rowA; i++){  
							        for (j = 0; j < colA; j++){  
							            scaM[i][j] = sub * matrixB[i][j];  
							            }  
							        }  
							  
							    for (i = 0; i < rowA; i++){ 
									printf("\t\t\t\t\t\t\t  "); 
							        for (j = 0; j < colA; j++){  
							            sumM[i][j] = matrixA[i][j] + scaM[i][j];  
							            printf("  %d", sumM[i][j]);  
							        }  
							        printf("\n");  
							    }  printf("\n");
					            break; 
				
					        case 3:
					            
					            printf("\n\t\t\t\t\t\t\t--> Masukkan jumlah baris dan kolom untuk Matriks A : ");  
					            scanf("%d%d", &rowA, &colA);    
					            
					            printf("\t\t\t\t\t\t\t--> Masukkan jumlah baris dan kolom untuk Matriks B : ");  
					            scanf("%d%d", &rowB, &colB);    
					  
					            while (colA != rowB){  
					                printf("\n\t\t\t\t\t\t\tMaaf, jumlah dari baris dan kolom matriks A dan B harus sama. Inputkan kembali: \n");  
						            printf("\n\t\t\t\t\t\t\t--> Masukkan jumlah baris dan kolom untuk Matriks A : ");  
						            scanf("%d%d", &rowA, &colA);    
						            
						            printf("\t\t\t\t\t\t\t--> Masukkan jumlah baris dan kolom untuk Matriks B : ");  
						            scanf("%d%d", &rowB, &colB);
					            }  
					  
					  
					            printf("\t\t\t\t\t\t\t--> Masukkan isi dari Matriks A (%d x %d)\n", rowA, colA);
							    for (i = 0; i < rowA; i++){  
							        printf("\t\t\t\t\t\t\t--> Masukkan %d isi untuk baris ke-%d: ", colA, i + 1);  
							        for (j = 0; j < colA; j++){  
							            scanf("%d", &matrixA[i][j]);  
							        }  
							    }    
					            printf("\n\t\t\t\t\t\t\t --> Matriks A <--\n\n"); 
								
							    for (i = 0; i < rowA; i++) {
									printf("\t\t\t\t\t\t\t  ");  
							        for (j = 0; j < colA; j++){  
							            printf("  %d", matrixA[i][j]);  
							        }  
							        printf("\n");  
							    }  printf("\n");
					            printf("\t\t\t\t\t\t\t--> Masukkan isi dari Matriks B (%d x %d)\n", rowB, colB); 
								for (i = 0; i < rowB; i++){  
							        printf("\t\t\t\t\t\t\t--> Masukkan %d isi untuk baris ke-%d: ", colB, i + 1);  
							        for (j = 0; j < colB; j++){  
							            scanf("%d", &matrixB[i][j]);  
							        }  
							    }   
					            printf("\n\t\t\t\t\t\t\t --> Matriks B <--\n\n");  
								for (i = 0; i < rowB; i++) {
									printf("\t\t\t\t\t\t\t  ");  
							        for (j = 0; j < colB; j++){  
							            printf("  %d", matrixB[i][j]);  
							        }  
							        printf("\n");  
							    }  printf("\n");
								printf("\n\t\t\t\t\t\t\t--> Hasil dari penjumlahan Matriks A dengan Matriks B sebagai berikut : \n\n");
				
							    for (i = 0; i<rowA; ++i)
							        for (j = 0; j<colB; ++j)
							        {
							            mulM[i][j] = 0;
							        }
				
							    for (i = 0; i<rowA; ++i)
							        for (j = 0; j<colB; ++j)
							            for (k = 0; k<colA; ++k)
							            {
							                mulM[i][j] += matrixA[i][k] * matrixB[k][j];
							            }
				
								for (i = 0; i<rowA; ++i)
							        for (j = 0; j<colB; ++j)
							        {
							        	printf("\t\t\t\t\t\t\t  ");	
							            printf("%d", mulM[i][j]);	
							            if (j == colB - 1)
							                printf("\n\n");
							        } 
					            break;
							default:  
					            printf("\n\t\t\t\t\t\t\t--> Anda salah memilih opsi! Pilih Opsi 1-3");  
					            break;  
					        }  
				  
//				        printf("\n\t\t\t\t\t\t\t--> Apakah Anda ingin menghitung kembali? (Y/N) : "); 
//				        scanf(" %c", &again);  
//				        again = toupper(again); 
//						system("cls"); 
//				    }  
				    printf("\n\n\t\t\t\t\t\t\t--> Terima kasih!\n\n"); 
					break; 					
				}
				case 2:
				{
						int set1[MAX],set2[MAX],set3[MAX];	
					  	int x, pilihanHimpunan, n, i;
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
					break;

				}
				case 3:
				{
					float x, y, z,retln, retlog;
					float bawah, atas;
				    int n, derajat ,i, j;
					float ln, log,result, invSin, invCos, invTan, invCsc, invSec, invCot, func;
					float akarPositif, akarNegatif, denom, nilaiPositif, nilaiNegatif, faktorPositif, faktorNegatif;
					float coef[11], p;
					double inf = INFINITY;						
					system("cls");
					printf("Masukkan konstanta dari polinomial : \n");
					for(i = 0; i<= 2; i++){
						printf("%c: ", 'c'-i);
						scanf("%f", &coef[i]);
					}
					
					for(i=0; i <= 2; i++){
						if(i == 0){
							printf("%.f + ", coef[i]);
						}else if (i == 2){
						printf("%.f*X^%d \n", coef[i], i);
						}else
						printf("%.f*X^%d + ", coef[i], i);
					}
					
					faktorPositif = operasiFaktorPositif(coef, akarPositif, denom, nilaiPositif);
					faktorNegatif = operasiFaktorNegatif(coef,akarNegatif, denom, nilaiNegatif);
					
					printf("Akar positifnya adalah%.4f \t", round(faktorPositif));
					printf("Akar negatifnya adalah%.4f", round(faktorNegatif));
					break;					
				}
				
				default:
					system("cls"); 
					header(); 
	            	printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t--> Anda salah memilih opsi! Pilih Opsi 1-2");  
	            	break;
		}
		break;
		
		case 7:
			system("cls");
			header();
			printf	("\n\t\t\t\t\t\t       <<<<<<<<<<<<<<<<<<<   Anda memilih opsi 7  >>>>>>>>>>>>>>>>>>>"); 
			puts	("\n\n\t\t\t\t\t\t      +==================== PILIH TRIGONOMETRI =====================+");
		    puts	("\t\t\t\t\t\t      |---------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t      |                   1. SINUS                                    |");
		    puts	("\t\t\t\t\t\t      |---------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t      |                   2. COSINUS                                  |");
		    puts	("\t\t\t\t\t\t      |---------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t      |                   3. TANGENT                                  |");
		    puts	("\t\t\t\t\t\t      |---------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t      |                   4. COSECANT                                 |");
		    puts	("\t\t\t\t\t\t      |---------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t      |                   5. SECANT                                   |");
		    puts	("\t\t\t\t\t\t      |---------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t      |                   6. COTANGENT                                |");				
		    puts	("\t\t\t\t\t\t      |---------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t      |                   7. INVERS SINUS                             |");
		    puts	("\t\t\t\t\t\t      |---------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t      |                   8. INVERS COSINUS                           |");
		    puts	("\t\t\t\t\t\t      |---------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t      |                   9. INVERS TANGENT                           |");
		    puts	("\t\t\t\t\t\t      |---------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t      |                   10. INVERS COSECANT                         |");
		    puts	("\t\t\t\t\t\t      |---------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t      |                   11. INVERS SECANT                           |");
		    puts	("\t\t\t\t\t\t      |---------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t      |                   12. INVERS COTANGENT                        |");																		
		    puts	("\t\t\t\t\t\t      +===============================================================+");
		    printf	("\t\t\t\t\t\t\t\t Pilih menu yang ingin Anda konversikan >> "); scanf("%d", &pilihan);

			    switch(pilihan){
					case 1:
					{
						double x, sin;
	  					printf("Masukkan x dalam derajat: ");
	  					scanf("%lf", &x);
	  					sin = Sinus(x);// hitung sin
	   					printf("sin(%lf) = %lf\n", x, sin);					  			
						break;					
					}
					
					case 2:
					{
						double x, cos;
						printf("Masukkan x dalam derajat: ");
						scanf("%lf", &x);
	   					cos = Cosinus(x); // hitung cos
	   					printf("cos(%lf) = %lf\n", x, cos);
						break;											   			   					
					}
					
					case 3:
					{
						double x, tan;
						printf("Masukkan x dalam derajat: ");
						scanf("%lf", &x);
						tan = Tangent(x); // hitung tan
	   					printf("tan(%lf) = %lf\n", x, tan);					
						break;	
					}
					
					case 4:
					{
				    	double x, cotan;
				    	printf("Masukkan x dalam derajat: ");
				    	scanf("%lf", &x);
						cotan = Cotangent(x); // hitung cot
	   					printf("cot(%lf) = %lf\n", x, cotan);
						break;						
					}
					
					case 5:
					{
						double x, secant;
						printf("Masukkan x dalam derajat: ");
						scanf("%lf", &x);
						secant = Secant(x); // hitung sec
	   					printf("sec(%lf) = %lf\n", x, secant);
						break;									
					}
					
					case 6:
					{
						double x, cosec;
						printf("Masukkan x dalam derajat: ");
						scanf("%lf", &x);					
						cosec = Cosecant(x) ;// hitung cosec
	   					printf("cosec(%lf) = %lf\n", x, cosec);
						break;															
					}
				
				case 7:
				{
					float x, y, z,retln, retlog;
					float bawah, atas;
				    int n, derajat ,i, j;
					float ln, log,result, invSin, invCos, invTan, invCsc, invSec, invCot, func;
					float akarPositif, akarNegatif, denom, nilaiPositif, nilaiNegatif, faktorPositif, faktorNegatif;
					float coef[11], p;
					double inf = INFINITY;					
					system("cls");
					printf("Masukkan nilai: ");
					scanf("%f", &x);
					if(x>= -1 && x<= 1){
						invSin = inversSin(x);
						printf("Invers sinus dari %.2f adalah %.2lf, atau juga %.5lf derajat",x,asin(x),invSin);
					}else{
						printf("Input tidak valid");
					}
					break;
				}
				case 8:
				{
					float x, y, z,retln, retlog;
					float bawah, atas;
				    int n, derajat ,i, j;
					float ln, log,result, invSin, invCos, invTan, invCsc, invSec, invCot, func;
					float akarPositif, akarNegatif, denom, nilaiPositif, nilaiNegatif, faktorPositif, faktorNegatif;
					float coef[11], p;
					double inf = INFINITY;						
					system("cls");
					printf("Masukkan nilai: ");
					scanf("%f", &x);
					if(x>= -1 && x<= 1){
						invCos = inversCos(x);
						printf("Invers sinus dari %.2f adalah %.2lf, atau juga %.5lf derajat",x,acos(x),invCos);
					}else{
						printf("Input tidak valid");		
					}
					break;					
				}
				case 9:
				{
					float x, y, z,retln, retlog;
					float bawah, atas;
				    int n, derajat ,i, j;
					float ln, log,result, invSin, invCos, invTan, invCsc, invSec, invCot, func;
					float akarPositif, akarNegatif, denom, nilaiPositif, nilaiNegatif, faktorPositif, faktorNegatif;
					float coef[11], p;
					double inf = INFINITY;	
					system("cls");
					printf("Masukkan nilai: ");
					scanf("%f", &x);		
					invTan = inversTan(x);
					printf("Invers sinus dari %.2f adalah %.5lf, atau juga %.5lf derajat",x,atan(x),invTan);
					break;										
				}
				case 10:
				{
					float x, y, z,retln, retlog;
					float bawah, atas;
				    int n, derajat ,i, j;
					float ln, log,result, invSin, invCos, invTan, invCsc, invSec, invCot, func;
					float akarPositif, akarNegatif, denom, nilaiPositif, nilaiNegatif, faktorPositif, faktorNegatif;
					float coef[11], p;
					double inf = INFINITY;	
					system("cls");
					printf("Masukkan nilai: ");
					scanf("%f", &x);			
					if(x<= -1 || x>= 1){
						invCsc = inversCosec(x);
						printf("Invers cosec dari %.2f adalah %.5lf, atau juga %.5lf derajat",x,asin(1/x),invCsc);	
					}else{
						printf("Input tidak valid");
					}
					break;										
				}
				case 11:
				{
					float x, y, z,retln, retlog;
					float bawah, atas;
				    int n, derajat ,i, j;
					float ln, log,result, invSin, invCos, invTan, invCsc, invSec, invCot, func;
					float akarPositif, akarNegatif, denom, nilaiPositif, nilaiNegatif, faktorPositif, faktorNegatif;
					float coef[11], p;
					double inf = INFINITY;						
					system("cls");
					printf("Masukkan nilai: ");
					scanf("%f", &x);
					if(x<= -1 || x>= 1){
						invSec = inversSec(x);
						printf("Invers sec dari %.2f adalah %.5lf, atau juga %.5lf derajat",x,acos(1/x),invSec);
					}else{
						printf("Input tidak valid");
					}
					
					break;					
				}
				case 12:
				{
					float x, y, z,retln, retlog;
					float bawah, atas;
				    int n, derajat ,i, j;
					float ln, log,result, invSin, invCos, invTan, invCsc, invSec, invCot, func;
					float akarPositif, akarNegatif, denom, nilaiPositif, nilaiNegatif, faktorPositif, faktorNegatif;
					float coef[11], p;
					double inf = INFINITY;						
					system("cls");
					printf("Masukkan nilai: ");
					scanf("%f", &x);
					invCot = inversCotan(x);
					printf("Invers cotan dari %.2f adalah %.5lf, atau juga %.5lf derajat",x,atan(1/x),invCot);
					break;					
				}
				default:
					system("cls"); 
					header(); 
	            	printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t--> Anda salah memilih opsi! Pilih Opsi 1-2");  
	            	break;
			}
			break;
		    
	    case 8:
			system("cls");
			header();
			printf	("\n\t\t\t\t\t\t        <<<<<<<<<<<<<<<<<<<   Anda memilih opsi 8  >>>>>>>>>>>>>>>>>>>"); 
			puts	("\n\n\t\t\t\t\t\t      +====================== PILIH LAIN LAIN ====================+");
		    puts	("\t\t\t\t\t\t      |---------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t      |                       1. MENGHITUNG DISKON                    |");
		    puts	("\t\t\t\t\t\t      |---------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t      |                       2. MENGHITUNG BUNGA                     |");
		    puts	("\t\t\t\t\t\t      |---------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t      |                       3. MENGHITUNG BITWISE                   |");
		    puts	("\t\t\t\t\t\t      |---------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t      |                       4. MENENTUKAN PRIMA                     |");
		    puts	("\t\t\t\t\t\t      |---------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t      |                       5. MENENTUKAN FLOOR                     |");	
		    puts	("\t\t\t\t\t\t      |---------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t      |                       6. MENENTUKAN CEIL                      |");	
		    puts	("\t\t\t\t\t\t      |---------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t      |                       7. MENENTUKAN ROUND                     |");	
		    puts	("\t\t\t\t\t\t      |---------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t      |                       8. MENENTUKAN MUTLAK                    |");																			
		    puts	("\t\t\t\t\t\t      +===============================================================+");
		    printf	("\t\t\t\t\t\t\t\t Pilih menu yang ingin Anda konversikan >> "); scanf("%d", &pilihan);	    	
			switch(pilihan){
				case 1:
				{
					system("cls");
					int i;
					float x_main, y_main;
					float float_hsl;
					int pilihanCabang, pilihanCabang2, pilihanCabang3;
					int z_main, z1_main;
					int int_hsl;
					div_t output;
					printf("Masukkan Harga Awal (Dalam Rupiah): ");
					scanf("%f",&x_main);
					printf("Masukkan diskon (Dalam Persen (%%)): ");
					scanf("%f",&y_main);
					y_main = f_PersenKeAngka(y_main);
					x_main = f_HitungDiskon(x_main,y_main);
					printf("Hasil: Rp.%6.2f\n",x_main);
					break;										
				}
				case 2:
				{
					system("cls");
					int i;
					float x_main, y_main;
					float float_hsl;
					int pilihanCabang, pilihanCabang2, pilihanCabang3;
					int z_main, z1_main;
					int int_hsl;
					div_t output;					
					printf("Masukkan Tabungan Awal (Dalam Rupiah): ");
					scanf("%f",&x_main);
					printf("Masukkan Bunga (Dalam Persen (%%)): ");
					scanf("%f",&y_main);
					printf("Masukkan Tahun: ");
					scanf("%d",&z_main);
					y_main = f_PersenKeAngka(y_main);
					for(i=1;i<=z_main;i++){
						x_main = f_HitungBunga(x_main,y_main);							
					}
					printf("Hasil: Rp.%6.2f\n",x_main);					
					break;
				}
				case 3:
				{
					system("cls");
					int i;
					float x_main, y_main;
					float float_hsl;
					int pilihanCabang, pilihanCabang2, pilihanCabang3;
					int z_main, z1_main;
					int int_hsl;
					div_t output;						
					printf("1. bitwise (And)\n");
					printf("2. bitwise (Or)\n");
					printf("3. bitwise (XOR)\n");
					printf("4. bitwise (Not)\n");	
					printf("masukkan opsi: ");
					scanf("%d",&pilihanCabang2);
					switch(pilihanCabang2){
						case 1:
							printf("masukkan logika pertama (1 or 0) ");
							scanf("%d",&z_main);
							printf("masukkan logika kedua (1 or 0) ");
							scanf("%d",&z1_main);			
							int_hsl = f_operasiBitwiseAnd(z_main,z1_main);
							printf("%d",int_hsl);					
							break;
						case 2:
							printf("masukkan logika pertama (1 or 0) ");
							scanf("%d",&z_main);
							printf("masukkan logika kedua (1 or 0) ");
							scanf("%d",&z1_main);			
							int_hsl = f_operasiBitwiseOr(z_main,z1_main);
							printf("%d",int_hsl);					
							break;
						case 3:
							printf("masukkan logika pertama (1 or 0) ");
							scanf("%d",&z_main);
							printf("masukkan logika kedua (1 or 0) ");
							scanf("%d",&z1_main);			
							int_hsl = f_operasiBitwiseXor(z_main,z1_main);
							printf("%d",int_hsl);							
							break;
						case 4:
							printf("masukkan angka: ");
							scanf("%d",&z_main);			
							int_hsl = f_operasiBitwiseNot(z_main);
							printf("%d",int_hsl);					
							break;
					}								
					break;
				}
				
				case 4:
				{
					int n, prm, flag;
					printf("Masukkan bilangan bulat positif: ");
					scanf("%d", &n);
					prm = Prima(n);
					if (n == 1) {
						printf("1 bukanlah bilangan prima.\n");
					} 
					else {
						if (prm == 0){
						    printf("%d adalah bilangan prima.\n", n);
						}
						else{
						    printf("%d bukanlah bilangan prima.\n", n);
						}					
							break;
					}
					break;					
				}
				
				case 5:
				{
					int mutlak, y;
					float x, bulatBawah, bulatAtas, bulat;					
					printf("Masukkan angka: ");
					scanf("%f", &x);
					bulatBawah = flr(x);
					printf("Floor dari %f adalah %f", x, bulatBawah);					
					break;
				}
				
				case 6:
				{
					int mutlak, y;
					float x, bulatBawah, bulatAtas, bulat;						
					printf("Masukan angka: ");
					scanf("%f", &x);
					bulatAtas = cl(x);
					printf("Ceil dari %f adalah %f", x, bulatAtas);					
					break;
				}
				
				case 7:
				{
					int mutlak, y;
					float x, bulatBawah, bulatAtas, bulat;						
					printf("Masukan angka: ");
					scanf("%f", &x);
					bulat = rnd(x);
					printf("Round dari %f adalah %f", x, bulat);					
					break;
				}
				
				case 8:
				{
					int mutlak, y;
					float x, bulatBawah, bulatAtas, bulat;						
					printf("Masukan angka: ");
					scanf("%d", &y);
					mutlak = absolute(y);
					printf("Absolute dari %d adalah %d", y, mutlak);					
					break;
				}

			}
		break;
		default:
			system("cls"); 
			header(); 
	        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t--> Anda salah memilih opsi! Pilih Opsi 1-7");  
	        break;	
	
					
	}
	
		printf("\n\n\t\t\t\t\t\t Coba Lagi (y/t)?");
		lagi = getch();
		if(lagi!='y'){
			break;
		}	
		
 }
	printf	("\n\n\n\n\n\n\n\n\n\n\n\n\t\t++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf  ("\t\t     _____________________  \n");
	printf  ("\t\t    |  _________________  | \n");
	printf  ("\t\t    | |    KELOMPOK 1   | | \n");
	printf  ("\t\t    | |_________________| |  $$$$$$$$\\                  $$\\                               $$\\   $$\\                    $$\\ $$\\         \n");
	printf  ("\t\t    |  ___ ___ ___   ___  |  \\__$$  __|                 \\__|                              $$ | $$  |                   \\__|$$ |       \n");
	printf  ("\t\t    | | 7 | 8 | 9 | | + | |     $$ | $$$$$$\\   $$$$$$\\  $$\\ $$$$$$\\$$$$\\   $$$$$$\\        $$ |$$  / $$$$$$\\   $$$$$$$\\ $$\\ $$$$$$$\\     \n");
	printf  ("\t\t    | |___|___|___| |___| |     $$ |$$  __$$\\ $$  __$$\\ $$ |$$  _$$  _$$\\  \\____$$\\       $$$$$  /  \\____$$\\ $$  _____|$$ |$$  __$$\\     \n");
	printf  ("\t\t    | | 4 | 5 | 6 | | - | |     $$ |$$$$$$$$ |$$ |  \\__|$$ |$$ / $$ / $$ | $$$$$$$ |      $$  $$<   $$$$$$$ |\\$$$$$$\\  $$ |$$ |  $$ |  \n");
	printf  ("\t\t    | |___|___|___| |___| |     $$ |$$   ____|$$ |      $$ |$$ | $$ | $$ |$$  __$$ |      $$ |\\$$\\ $$  __$$ |\\\\____$$\\ $$ |$$ |  $$ |  \n");
	printf  ("\t\t    | | 1 | 2 | 3 | | x | |     $$ |\\$$$$$$$\\ $$ |      $$ |$$ | $$ | $$ |\\$$$$$$$ |      $$ | \\$$\\$$$$$$$  |$$$$$$$  |$$ |$$ |  $$ |  \n");
	printf  ("\t\t    | |___|___|___| |___| |     \\__| \\_______|\\__|      \\__|\\__| \\__| \\__| \\_______|      \\__|  \\__|\\_______|\\_______/ \\__|\\__|  \\__|   \n");
	printf  ("\t\t    | | . | 0 | = | | / | | \n");
	printf  ("\t\t    | |___|___|___| |___| | \n");
	printf  ("\t\t    |_____________________| \n\n");
	printf	("\t\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

	return 0;
}

