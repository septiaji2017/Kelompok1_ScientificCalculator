#include "Ridha.h"
#include "Agam.h"
#include "Mutia.h"
#include "Rico.h"
#include "Naufal.h"
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

void mainNaufal()
{
	int choice;
	float Celcius, Fahrenheit, Kelvin;
    printf("Pilih Suhu Yang ingin diubah: \n");
    printf("1.Kelvin\n");
    printf("2.Celsius\n");
    printf("3.Fahrenheit \n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("masukkan temperature di Kelvin: ");
        scanf("%f",&Kelvin);
		Celcius= CtoK(Kelvin);
		Fahrenheit= FtoK(Kelvin);
        printf("Di Celsius nilainya adalah :\t %f \n",Celsius);
        printf("Di Fahrenheit nilainya adalah :\t %f",Fahrenheit);
        break;
    case 2:
        printf("masukkan temperature di Celsius: ");
        scanf("%f",&Celsius);
		Kelvin = KtoC(Celcius);
		Fahrenheit = FtoC(Celcius);
        printf("Di kelvin nilainya adalah : %f \n",Kelvin);
        printf("Di Fahrenheit nilainya adalah : %f",Fahrenheit);
        break;
    case 3:
        printf("masukkan temperature di Fahrenheit: ");
        scanf("%f",&Fahrenheit);
		Celsius = KtoF(Fahrenheit);
		Kelvin = CtoF(Fahrenheit);
        printf("Di Celsius nilainya adalah :\t %f \n",Celsius);
        printf("Di Kelvin nilainya adalah :\t %f \n",Kelvin);
        break;
    default:
        printf("Salah! masukkan nilai yang valid tolong \n");
        break;
    }
    printf("\n\n");
}

void mainRidha()
{
	int i;
	float x_main, y_main;
	float float_hsl;
	int pilihanCabang, pilihanCabang2, pilihanCabang3;
	int z_main, z1_main;
	int int_hsl;
	div_t output;
	
	printf("1. Operasi Dasar\n");			
	printf("2. Operasi Bitwise\n");
	printf("masukkan opsi: ");
	scanf("%d",&pilihanCabang);
	system("cls");
	switch(pilihanCabang){
		case 1:
			printf("1. pangkat\n");
			printf("2. akar\n");
			printf("3. div\n");
			printf("4. modulus\n");
			printf("5. persentase\n");			
			printf("masukkan opsi: ");
			scanf("%d",&pilihanCabang2);	
			switch(pilihanCabang2){
				case 1:
					printf("masukkan angka: ");
					scanf("%d",&z_main);	
					printf("masukkan pangkat: ");
					scanf("%d",&z1_main);
					int_hsl = f_pangkat(z_main,z1_main);
					printf("Hasil: %d",int_hsl);						
					break;
				case 2:
					printf("masukkan angka: ");
					scanf("%f",&x_main);				
					float_hsl = f_akar(x_main);
					printf("Hasil: %f",float_hsl);						
					break;
				case 3:
					printf("masukkan pembilang: ");
					scanf("%d",&z_main);
					printf("masukkan penyebut: ");
					scanf("%d",&z1_main);
					output = f_div(z_main,z1_main);
					printf("Hasil (Hasil Bagi): %d\n",output.quot);
					printf("Hasil (Sisa Bagi): %d",output.rem);					
					break;					
				case 4:
					printf("masukkan pembilang: ");
					scanf("%d",&z_main);
					printf("masukkan penyebut: ");
					scanf("%d",&z1_main);
					int_hsl = f_mod(z_main,z1_main);
					printf("Hasil: %d\n",int_hsl);						
					break;
				case 5:
					system("cls");
					printf("1. Menghitung Persen ke Pngka\n");
					printf("2. Menghitung Angka ke Persen\n");					
					printf("3. Menghitung Diskon\n");
					printf("4. Menghitung Bunga\n");
					printf("masukkan opsi: ");
					scanf("%d",&pilihanCabang3);
					switch(pilihanCabang3){
						case 1:
							printf("Masukkan Angka (Dalam Persen (%%)): ");
							scanf("%f",&x_main);
							x_main = f_PersenKeAngka(x_main);
							printf("Hasil: %f\n",x_main);	
							break;
						case 2:
							printf("Masukkan Angka: ");
							scanf("%f",&x_main);
							x_main = f_AngkaKePersen(x_main);
							printf("Hasil: %6.2f%%\n",x_main);								
							break;
						case 3:
							printf("Masukkan Harga Awal (Dalam Rupiah): ");
							scanf("%f",&x_main);
							printf("Masukkan diskon (Dalam Persen (%%)): ");
							scanf("%f",&y_main);
							y_main = f_PersenKeAngka(y_main);
							x_main = f_HitungDiskon(x_main,y_main);
							printf("Hasil: Rp.%6.2f\n",x_main);
							break;
						case 4:
						
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
					break;			
			}
			break;
			
		case 2:
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
}


int main(){
	int choice, pilihan;
	/* Himpunan */

	
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
					puts	("\t\t\t\t\t\t\t  Masukkan Pilihan Anda: ");					
				    scanf("%d", &choice);
				    switch (choice)
				    {
				    case 1:
				        printf("masukkan temperature di Kelvin: ");
				        scanf("%f",&Kelvin);
						Celcius= CtoK(Kelvin);
						Fahrenheit= FtoK(Kelvin);
				        printf("Di Celsius nilainya adalah :\t %f \n",Celsius);
				        printf("Di Fahrenheit nilainya adalah :\t %f",Fahrenheit);
				        break;
				    case 2:
				        printf("masukkan temperature di Celsius: ");
				        scanf("%f",&Celsius);
						Kelvin = KtoC(Celcius);
						Fahrenheit = FtoC(Celcius);
				        printf("Di kelvin nilainya adalah : %f \n",Kelvin);
				        printf("Di Fahrenheit nilainya adalah : %f",Fahrenheit);
				        break;
				    case 3:
				        printf("masukkan temperature di Fahrenheit: ");
				        scanf("%f",&Fahrenheit);
						Celsius = KtoF(Fahrenheit);
						Kelvin = CtoF(Fahrenheit);
				        printf("Di Celsius nilainya adalah :\t %f \n",Celsius);
				        printf("Di Kelvin nilainya adalah :\t %f \n",Kelvin);
				        break;
				    default:
				        printf("Salah! masukkan nilai yang valid tolong \n");
				        break;
				    }					
					break;
				}
				case 2:
					system("cls"); 
					header();
		    		printf	("\n\t\t\t\t\t\t    <<<<<<<<<<<<<  Anda memilih opsi konversi tanggal  >>>>>>>>>>>>>>"); 
					
					break;
					
				case 3:
				{
					float inputangka, firstRes, secondRes, thirdRes, fourRes, fivRes, sixRes; 
					char LongUnit, firstResUnit, secondResUnit, thirdResUnit, fourResUnit, fivResUnit, sixResUnit;					
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
				    printf	("\t\t\t\t\t           --> Masukkan panjang beserta satuannya (K, H, D, X, d, C, m) >> "); 
					scanf("%f %c", &inputangka, &LongUnit);	
					switch(LongUnit){
						case 'c': case 'C':
							firstRes = inputangka / 100; 
							firstResUnit = 'X';
							secondRes = inputangka / 100000; 
							secondResUnit = 'K';
							thirdRes = inputangka * 10; 
							thirdResUnit = 'm';
							fourRes = inputangka / 1000; 
							fourResUnit = 'D';
							fivRes = inputangka / 10000; 
							fivResUnit = 'H';
							sixRes = inputangka / 10; 
							sixResUnit = 'd';
							printf("\n\t\t\t\t\t\t\t\t\t --> Hasilnya adalah: ");	
							printf("\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c", firstRes, firstResUnit, secondRes, secondResUnit, thirdRes, thirdResUnit, fourRes, fourResUnit, fivRes, fivResUnit, sixRes, sixResUnit);
							break;
						case 'x': case 'X': 
							firstRes = inputangka * 100; 
							firstResUnit = 'C';
							secondRes = inputangka / 1000; 
							secondResUnit = 'K';
							thirdRes = inputangka * 1000; 
							thirdResUnit = 'm';
							fourRes = inputangka / 10; 
							fourResUnit = 'D';			
							fivRes = inputangka / 100; 
							fivResUnit = 'H';
							sixRes = inputangka * 10; 
							sixResUnit = 'd';
							printf("\n\t\t\t\t\t\t\t\t\t --> Hasilnya adalah: ");	
							printf("\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c", firstRes, firstResUnit, secondRes, secondResUnit, thirdRes, thirdResUnit, fourRes, fourResUnit, fivRes, fivResUnit, sixRes, sixResUnit);
							break;
						case 'k': case 'K':
							firstRes = inputangka * 100000; 
							firstResUnit = 'C';
							secondRes = inputangka * 1000; 
							secondResUnit = 'X';
							thirdRes = inputangka * 1000000; 
							thirdResUnit = 'm';
							fourRes = inputangka * 100; 
							fourResUnit = 'D';			
							fivRes = inputangka * 10; 
							fivResUnit = 'H';
							sixRes = inputangka * 10000; 
							sixResUnit = 'd';
							printf("\n\t\t\t\t\t\t\t\t\t --> Hasilnya adalah: ");	
							printf("\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c", firstRes, firstResUnit, secondRes, secondResUnit, thirdRes, thirdResUnit, fourRes, fourResUnit, fivRes, fivResUnit, sixRes, sixResUnit);
							break; 
						case 'm': case 'M':
							firstRes = inputangka / 10; 
							firstResUnit = 'C';
							secondRes = inputangka / 1000; 
							secondResUnit = 'X';
							thirdRes = inputangka / 1000000; 
							thirdResUnit = 'K';
							fourRes = inputangka / 10000; 
							fourResUnit = 'D';			
							fivRes = inputangka / 100000; 
							fivResUnit = 'H';
							sixRes = inputangka / 100; 
							sixResUnit = 'd';
							printf("\n\t\t\t\t\t\t\t\t\t --> Hasilnya adalah: ");	
							printf("\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c", firstRes, firstResUnit, secondRes, secondResUnit, thirdRes, thirdResUnit, fourRes, fourResUnit, fivRes, fivResUnit, sixRes, sixResUnit);
							break; 
						case 'D':
							firstRes = inputangka * 1000; 
							firstResUnit = 'C';
							secondRes = inputangka * 10; 
							secondResUnit = 'X';
							thirdRes = inputangka / 100; 
							thirdResUnit = 'K';
							fourRes = inputangka * 10000; 
							fourResUnit = 'm';			
							fivRes = inputangka / 10; 
							fivResUnit = 'H';
							sixRes = inputangka * 100; 
							sixResUnit = 'd';
							printf("\n\t\t\t\t\t\t\t\t\t --> Hasilnya adalah: ");	
							printf("\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c", firstRes, firstResUnit, secondRes, secondResUnit, thirdRes, thirdResUnit, fourRes, fourResUnit, fivRes, fivResUnit, sixRes, sixResUnit);
							break; 
						case 'd':
							firstRes = inputangka * 10; 
							firstResUnit = 'C';
							secondRes = inputangka / 10; 
							secondResUnit = 'X';
							thirdRes = inputangka / 10000; 
							thirdResUnit = 'K';
							fourRes = inputangka * 100; 
							fourResUnit = 'm';			
							fivRes = inputangka / 1000; 
							fivResUnit = 'H';
							sixRes = inputangka / 100; 
							sixResUnit = 'D';
							printf("\n\t\t\t\t\t\t\t\t\t --> Hasilnya adalah: ");	
							printf("\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c\n\t\t\t\t\t\t\t\t\t  => %.3f %c", firstRes, firstResUnit, secondRes, secondResUnit, thirdRes, thirdResUnit, fourRes, fourResUnit, fivRes, fivResUnit, sixRes, sixResUnit);
							break; 
						case 'h': case 'H':
							firstRes = inputangka * 10000; 
							firstResUnit = 'C';
							secondRes = inputangka * 100; 
							secondResUnit = 'X';
							thirdRes = inputangka / 10; 
							thirdResUnit = 'K';
							fourRes = inputangka * 10; 
							fourResUnit = 'D';			
							fivRes = inputangka * 100000; 
							fivResUnit = 'm';
							sixRes = inputangka * 1000; 
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
			puts	("\t\t\t\t\t\t   |                   3. INTEGRAL                                  |");
		    puts	("\t\t\t\t\t\t   |----------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t   |                   4. LIMIT                	                    |");
		    puts	("\t\t\t\t\t\t   |----------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t   |                   5. TURUNAN            	                    |");
		    puts	("\t\t\t\t\t\t   +================================================================+");
		    printf	("\t\t\t\t\t\t\t\t Pilih menu yang ingin Anda konversikan >> "); scanf("%d", &pilihan);
			switch(pilihan){
				case 1:
				{
//					printf("Nanti diisi sama modul");
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
//					printf("Nanti diisi sama modul");
					float x, y, z,retln, retlog;
					float bawah, atas;
				    int n, derajat ,i, j;
					float ln, log,result, invSin, invCos, invTan, invCsc, invSec, invCot, func;
					float akarPositif, akarNegatif, denom, nilaiPositif, nilaiNegatif, faktorPositif, faktorNegatif;
					float coef[11], p;
					double inf = INFINITY;
					printf("Masukkan nilai log(10): ");
					scanf("%f", &log);
					retlog = logaritma(log);
					printf("log(%.2f) adalah: %f\n", ln,retlog);
					break;					
				}
				case 3:
					printf("Nanti diisi sama modul");
					break;
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
					
					double k = limit(coef, derajat, inf);
					printf("Limit : %.4lf", k);
					break;
									
				}
//					printf("Nanti diisi sama modul");
//					break;
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
				{
					int n, r, f;
					permutasi(n, r);
					faktorial2(f);						
//					printf("Nanti diisi sama modul");
					break;
				}
				case 2:
				{
					int n, r, f;
					kombinasi(n, r);
					faktorial2(f);	
					break;					
				}
//					printf("Nanti diisi sama modul");
				case 3:
				{
					int input;
					Faktorial1(input);	
					break;											
				}
//					printf("Nanti diisi sama modul");
//					break;
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
//					printf("Nanti diisi sama modul");
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
//					printf("Nanti diisi sama modul");
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
		    puts	("\t\t\t\t\t\t      +===============================================================+");
		    printf	("\t\t\t\t\t\t\t\t Pilih menu yang ingin Anda konversikan >> "); scanf("%d", &pilihan);
		    
		    switch(pilihan){
				case 1:
					printf("Nanti diisi sama modul");
					break;
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
					printf("Nanti diisi sama modul");
					break;
				default:
					system("cls"); 
					header(); 
	            	printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t--> Anda salah memilih opsi! Pilih Opsi 1-2");  
	            	break;
			}
			break;
		}
		case 7:
			system("cls");
			header();
			printf	("\n\t\t\t\t\t\t       <<<<<<<<<<<<<<<<<<<   Anda memilih opsi 7  >>>>>>>>>>>>>>>>>>>"); 
			puts	("\n\n\t\t\t\t\t\t      +==================== PILIH ALJABAR LINIER =====================+");
		    puts	("\t\t\t\t\t\t      |---------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t      |                      1. SINUS                                 |");
		    puts	("\t\t\t\t\t\t      |---------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t      |                      2. COSINUS                               |");
		    puts	("\t\t\t\t\t\t      |---------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t      |                      3. TANGENT                               |");
		    puts	("\t\t\t\t\t\t      |---------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t      |                      4. COSECANT                              |");
		    puts	("\t\t\t\t\t\t      |---------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t      |                      5. SECANT                                |");
		    puts	("\t\t\t\t\t\t      |---------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t      |                      6. COTANGENT                             |");				
		    puts	("\t\t\t\t\t\t      |---------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t      |                      7. INVERS SINUS                          |");
		    puts	("\t\t\t\t\t\t      |---------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t      |                      8. INVERS COSINUS                        |");
		    puts	("\t\t\t\t\t\t      |---------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t      |                      9. INVERS TANGENT                        |");
		    puts	("\t\t\t\t\t\t      |---------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t      |                      10. INVERS COSECANT                      |");
		    puts	("\t\t\t\t\t\t      |---------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t      |                      11. INVERS SECANT                        |");
		    puts	("\t\t\t\t\t\t      |---------------------------------------------------------------|");
			puts	("\t\t\t\t\t\t      |                      12. INVERS COTANGENT                     |");															
		    puts	("\t\t\t\t\t\t      +===============================================================+");
		    printf	("\t\t\t\t\t\t\t\t Pilih menu yang ingin Anda konversikan >> "); scanf("%d", &pilihan);
		    
		    switch(pilihan){
				case 1:
				{
					double x, sinval;
  					printf("Masukkan x dalam derajat: ");
  					scanf("%lf", &x);
  					sinval = sin(x * pi / 180.0); // hitung sin		
					printf("sin(%lf) = %lf\n", x, sinval);					  			
					break;					
				}
				
				case 2:
				{
					double x, cosval;
					printf("Masukkan x dalam derajat: ");
					scanf("%lf", &x);
   					cosval = cos(x * pi / 180.0); // hitung cos	
					printf("cos(%lf) = %lf\n", x, cosval);
					break;											   			   					
				}
				
				case 3:
				{
					double x, tanval;
					printf("Masukkan x dalam derajat: ");
					scanf("%lf", &x);
					tanval = tan(x * pi / 180.0); // hitung tan
					printf("tan(%lf) = %lf\n", x, tanval);					
					break;	
				}
				
				case 4:
				{
			    	double x, cotanval;
			    	printf("Masukkan x dalam derajat: ");
			    	scanf("%lf", &x);
					cotanval = 1 / (tan(x * pi / 180.0)); // hitung cot	
					printf("cot(%lf) = %lf\n", x, cotanval);
					break;						
				}
				
				case 5:
				{
					double x, secanval;
					printf("Masukkan x dalam derajat: ");
					scanf("%lf", &x);
					secanval = 1 / (cos(x * pi / 180.0)); // hitung sec	
					printf("sec(%lf) = %lf\n", x, secanval);
					break;									
				}
				
				case 6:
				{
					double x, cosecval;
					printf("Masukkan x dalam derajat: ");
					scanf("%lf", &x);					
					cosecval = 1 / (sin(x * pi / 180.0)); // hitung cosec
					printf("cosec(%lf) = %lf\n", x, cosecval);
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
//					printf("Nanti diisi sama modul");
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

