#include "Ridha.h"
#include "Agam.h"
#include "Mutia.h"
#include "Rico.h"
#include "Naufal.h"
//digabungkan oleh ridha septiaji

void mainAgam()
{
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

void mainMutia()
{
	int x_main;	
	printf("masukkan angka: ");
	scanf("%d",&x_main);	
	x_main = faktorial(x_main);	
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

void mainRico()
{
	float x;
	int pilihan;
	menuInvers();
	printf("Masukkan pilihan: ");
	scanf("%d", &pilihan);
	switch(pilihan){
		case 1:
			inversSin(x);
			break;
		
		case 2:
			inversCos(x);
			break;
		
		case 3:
			inversTan(x);
			break;
			
		default:
			printf("Pilihan yang anda masukkan tidak valid");
	}	
}

void mainRidha()
{
	float x_main, y_main;
	int pilihan;
	
	printf("1. pangkat\n");
	printf("2. akar\n");
	printf("masukkan opsi: ");
	scanf("%d",&pilihan);
	switch(pilihan){
		case 1:
			printf("masukkan angka: ");
			scanf("%f",&x_main);	
			printf("masukkan pangkat: ");
			scanf("%f",&y_main);
			x_main = f_pangkat(x_main,y_main);
			break;
		case 2:
			printf("masukkan angka: ");
			scanf("%f",&x_main);				
			x_main = f_akar(x_main);		
			break;
	}
	
	printf("%f",x_main);	
}

int main()
{
	int pilih;
	
	printf("1. Agam\n");
	printf("2. Mutia\n");
	printf("3. Naufal\n");
	printf("4. Rico\n");
	printf("5. Ridha\n");
	printf("Masukkan Angka: ");
	scanf("%d",&pilih);
	switch(pilih){
		case 1:
			//agam
			system("cls");
			mainAgam();			
			break;
		case 2:
			//mutia
			system("cls");
			mainMutia();			
			break;
		case 3:
			//naufal
			system("cls");
			mainNaufal();			
			break;
		case 4:
			//rico
			system("cls");
			mainRico();			
			break;
		case 5:
			//ridha
			system("cls");
			mainRidha();			
			break;
		default:
			printf("output salah!");
	}
}

