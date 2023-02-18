#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

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
		    		system("cls");
		    		header();
		    		printf	("\n\t\t\t\t\t\t    <<<<<<<<<<<<<<<  Anda memilih opsi konversi suhu  >>>>>>>>>>>>>>>"); 
					puts	("\n\n\t\t\t\t\t\t\t  +================== KONVERSI SUHU ==================+");
					puts	("\t\t\t\t\t\t\t  | ===> Keterangan: F = Fahrenheit                   |");
					puts	("\t\t\t\t\t\t\t  |                  C = Celcius                      |");
					puts	("\t\t\t\t\t\t\t  |                  K = Kelvin                       |");	
					puts	("\t\t\t\t\t\t\t  | ===> Contoh Inputan : 70 C                        |");
					puts	("\t\t\t\t\t\t\t  +===================================================+");
					break;
					
				case 2:
					system("cls"); 
					header();
		    		printf	("\n\t\t\t\t\t\t    <<<<<<<<<<<<<  Anda memilih opsi konversi tanggal  >>>>>>>>>>>>>>"); 
					puts	("\n\n\t\t\t\t\t\t\t  +================ KONVERSI TANGGAL =================+");
					puts	("\t\t\t\t\t\t\t  | ===> Keterangan: F = Fahrenheit                   |");
					puts	("\t\t\t\t\t\t\t  |                  C = Celcius                      |");
					puts	("\t\t\t\t\t\t\t  |                  K = Kelvin                       |");	
					puts	("\t\t\t\t\t\t\t  | ===> Contoh Inputan : 70 C                        |");
					puts	("\t\t\t\t\t\t\t  +===================================================+");
					break;
					
				case 3:
					system("cls");
					header();
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
					break;
					
				case 4:
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
					break;
				
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
//				case 2: disini pilihan 2 sama 3 nya maunya riwayat kalkulator sama ngehapus riwayat kalkulator
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
			puts	("\t\t\t\t\t\t   |                   3. INTEGRAL                                  |");
		    puts	("\t\t\t\t\t\t   |----------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t   |                   4. LIMIT                	                    |");
		    puts	("\t\t\t\t\t\t   |----------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t   |                   5. TURUNAN            	                    |");
		    puts	("\t\t\t\t\t\t   +================================================================+");
		    printf	("\t\t\t\t\t\t\t\t Pilih menu yang ingin Anda konversikan >> "); scanf("%d", &pilihan);
			switch(pilihan){
				case 1:
					printf("Nanti diisi sama modul");
					break;
				case 2:
					printf("Nanti diisi sama modul");
					break;
				case 3:
					printf("Nanti diisi sama modul");
					break;
				case 4:
					printf("Nanti diisi sama modul");
					break;
				case 5:
					printf("Nanti diisi sama modul");
					break;
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
					printf("Nanti diisi sama modul");
					break;
				case 2:
					printf("Nanti diisi sama modul");
					break;
				case 3:
					printf("Nanti diisi sama modul");
					break;
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
					printf("Nanti diisi sama modul");
					break;
				case 2:
					printf("Nanti diisi sama modul");
					break;
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
		    puts	("\t\t\t\t\t\t      +===============================================================+");
		    printf	("\t\t\t\t\t\t\t\t Pilih menu yang ingin Anda konversikan >> "); scanf("%d", &pilihan);
		    
		    switch(pilihan){
				case 1:
					printf("Nanti diisi sama modul");
					break;
				case 2:
					printf("Nanti diisi sama modul");
					break;
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
			puts	("\n\n\t\t\t\t\t\t      +==================== PILIH ALJABAR LINIER =====================+");
		    puts	("\t\t\t\t\t\t      |---------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t      |                       1. TRIGONOMETRI                         |");
		    puts	("\t\t\t\t\t\t      |---------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t      |                    2. INVERS TRIGONOMETRI                     |");
		    puts	("\t\t\t\t\t\t      +===============================================================+");
		    printf	("\t\t\t\t\t\t\t\t Pilih menu yang ingin Anda konversikan >> "); scanf("%d", &pilihan);
		    
		    switch(pilihan){
				case 1:
					printf("Nanti diisi sama modul");
					break;
				case 2:
					printf("Nanti diisi sama modul");
					break;
				default:
					system("cls"); 
					header(); 
	            	printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t--> Anda salah memilih opsi! Pilih Opsi 1-2");  
	            	break;
			}
			break;
			
			default:
			system("cls"); 
			header(); 
	        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t--> Anda salah memilih opsi! Pilih Opsi 1-7");  
	        break;
					
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
}
