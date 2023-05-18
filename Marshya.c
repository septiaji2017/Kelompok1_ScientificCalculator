#include "Marshya.h"

/********************************************************************************************/
/* Initial State: Menampilkan berupa tampilan untuk help saat inputan                   	*/
/* Final State: Menampilkan tulisan tata cara penggunaan                                    */
/* Referensi Modul: - 																		*/
/* Referensi Link: -                                                                        */ 
/********************************************************************************************/

//header tampilan help
char header_help(){
	printf  ("\n");
	printf	("\t\t++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf  ("\t\t  _____________________ \n");
	printf  ("\t\t |  _________________  |             $$$$$$$$ $$$$$ $$$$$$$$ $$$$$     $$$$$$$$  $$$$$  $$$$$$$  $$$$$ \n");
	printf  ("\t\t | |     PROYEK 2    | |                $$   $$   $$   $$   $$   $$    $$       $$   $$ $$   $$ $$   $$\n");
	printf  ("\t\t | |_________________| |                $$   $$$$$$$   $$   $$$$$$$    $$       $$$$$$$ $$$$$$$ $$$$$$$\n");
	printf  ("\t\t |  ___ ___ ___   ___  |                $$   $$   $$   $$   $$   $$    $$       $$   $$ $$  $$  $$   $$\n");
	printf  ("\t\t | | 7 | 8 | 9 | | + | |                $$   $$   $$   $$   $$   $$    $$$$$$$$ $$   $$ $$   $$ $$   $$\n");
	printf  ("\t\t | |___|___|___| |___| |\n");
	printf  ("\t\t | | 4 | 5 | 6 | | - | |\n");
	printf  ("\t\t | |___|___|___| |___| |     $$$$$$$ $$$$$$$$ $$$   $$ $$$$$$$$$ $$$$$$$$$ $$    $$ $$$   $$  $$$$$   $$$$$  $$$   $$\n");
	printf  ("\t\t | | 1 | 2 | 3 | | x | |     $$   $$ $$       $$$$  $$ $$        $$        $$    $$ $$$$  $$ $$   $$ $$   $$ $$$$  $$\n");
	printf  ("\t\t | |___|___|___| |___| |     $$$$$$$ $$$$$$$$ $$ $$ $$ $$   $$$$ $$   $$$$ $$    $$ $$ $$ $$ $$$$$$$ $$$$$$$ $$ $$ $$\n");
	printf  ("\t\t | | . | 0 | = | | / | |     $$      $$       $$  $$$$ $$     $$ $$     $$ $$    $$ $$  $$$$ $$   $$ $$   $$ $$  $$$$\n");
	printf  ("\t\t | |___|___|___| |___| |     $$      $$$$$$$$ $$   $$$ $$$$$$$$$ $$$$$$$$$ $$$$$$$$ $$   $$$ $$   $$ $$   $$ $$   $$$\n");
	printf  ("\t\t |_____________________|\n\n");
	printf	("\t\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
}


/********************************************************************************************/
/* Initial State: Menampilkan berupa tampilan untuk help saat inputan                    	*/
/* Final State: Menampilkan tabel setiap fungsinya untuk diinputkan oleh user               */
/* Referensi Modul: - 																		*/
/* Referensi Link: -                                                                        */ 
/********************************************************************************************/

//isi help
char help()
{
//	printf ("");
	header_help();
	printf ("\n");
	printf("\t\t\tKamu bisa menggunakan kalkulator ini dengan cara memasukan nilai yang ingin di eksekusi dan operatornya dengan\n");
	printf("\t\t   atau tidak dengan spasi pada setiap inputannya.\n");
	printf("\n");
	printf("\t\t----------------------------------------------------------------------------------------------------------------------------\n");
	printf("\t\t| operator |                              Fungsinya                                  |        Penulisan & Contohnya        |\n");
	printf("\t\t----------------------------------------------------------------------------------------------------------------------------\n");
	printf("\t\t|    c     | Operator untuk mengclear inputan (input ulang dari awal)                |         c         |        c        |\n");
	printf("\t\t|   +/-    | Operator untuk menandakan bahwa nilai itu +/-                           |    (+/- nilai)    |      (-4)       |\n");
	printf("\t\t|    +     | Operator untuk menambahkan nilai satu dengan lainnnya                   |       a + b       |      1 + 2      |\n");
	printf("\t\t|    -     | Operator untuk mengurangi nilai satu dengan lainnnya                    |       a - b       |      1 - 2      |\n");
	printf("\t\t|    *     | Operator untuk mengkalikan nilai satu dengan lainnnya                   |       a * b       |      1 * 2      |\n");
	printf("\t\t|    /     | Operator untuk membagi nilai satu dengan lainnnya                       |       a / b       |      1 / 2      |\n");
	printf("\t\t|    ^     | Operator untuk mempangkatkan nilai                                      |        a^2        |       3^2       |\n");
	printf("\t\t|    V     | Operator untuk mengakarkan nilai                                        |        Va         |       V16       |\n");
	printf("\t\t|    .     | Operator untuk membuat nilai menjadi decimal                            |        0.a        |       0.8       |\n");
	printf("\t\t|    %%     | Operator untuk membuat nilai menjadi persen                             |        a%%         |       10%%       |\n");
	printf("\t\t|    !     | Operator untuk membuat nilai menjadi                                    |        a!         |       6!        |\n");
//	printf("\t\t|   DIV    | Operator untuk mempangkatkan nilai                                      |                   |                 |\n");
	printf("\t\t|   |x|    | Operator untuk memutlakkan nilai                                        |        |x|        |       |2|       |\n");
	printf("\t\t|    ()    | Operator untuk membuat nilai menjadi prioritas utama saat dihitung      |        (a)        |       (3)       |\n");
//	printf("\t\t|  n R x   | Operator untuk mempangkatkan nilai                                      |                   |                 |\n");
//	printf("\t\t|   pi     | Operator untuk membuat nilai menjadi prioritas utama saat dihitung      |                   |                 |\n");
//	printf("\t\t|   ln     | Operator untuk memutlakkan nilai                                        |                   |                 |\n");
//	printf("\t\t|   log    | Operator untuk memutlakkan nilai                                        |                   |                 |\n");
//	printf("\t\t|    E     | Operator untuk memutlakkan nilai                                        |                   |                 |\n");
	printf("\t\t|   sin    | Operator untuk membuat nilai menjadi sinus                              |         i         |        i        |\n");
	printf("\t\t|   cos    | Operator untuk membuat nilai menjadi cosinus                            |         X         |        X        |\n");
	printf("\t\t|   tan    | Operator untuk membuat nilai menjadi tangen                             |         a         |        a        |\n");
	printf("\t\t|   sec    | Operator untuk membuat nilai menjadi secan                              |         e         |        e        |\n");
	printf("\t\t|   csc    | Operator untuk membuat nilai menjadi cosecan                            |         K         |        K        |\n");
	printf("\t\t|   cot    | Operator untuk membuat nilai menjadi cotan                              |         D         |        D        |\n");
	printf("\t\t|  radsin  | Operator untuk membuat nilai menjadi                                    |         M         |        M        |\n");
	printf("\t\t|  radcos  | Operator untuk membuat nilai menjadi                                    |         L         |        L        |\n");
	printf("\t\t|  radtan  | Operator untuk membuat nilai menjadi                                    |         N         |        N        |\n");
	printf("\t\t|  radsec  | Operator untuk membuat nilai menjadi                                    |         P         |        P        |\n");
	printf("\t\t|  radcsc  | Operator untuk membuat nilai menjadi                                    |         Q         |        Q        |\n");
	printf("\t\t|  radcot  | Operator untuk membuat nilai menjadi                                    |         Z         |        Z        |\n");
	printf("\t\t|  floor   | Operator untuk membulatkan nilai ke bawah                               |       [0.a]       |      [7.4]      |\n");
	printf("\t\t|  ceil    | Operator untuk membulakkan nilai ke atas                                |       {0.a}       |      {7.4}      |\n");
	printf("\t\t|  round   | Operator untuk membulakkan nilai ke atas atau ke bawah                  |       <0.a>       |      <7.4>      |\n");
	printf("\t\t----------------------------------------------------------------------------------------------------------------------------\n");
	return 0;
}

/*int main()
{
	char h;
	printf ("masukan menu : ");
	scanf ("%c", &h);
	printf("\n\n");
	
	if (h=='h')
	{
		help();
	}
	else
	{
		printf ("maaf, apa yang anda input tidak ada dalam menu");
	}
	return 0;
}*/
