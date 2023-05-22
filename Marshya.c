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
	printf("\t\t|    v     | Operator untuk mengakarkan nilai                                        |        va         |       v16       |\n");
	printf("\t\t|    .     | Operator untuk membuat nilai menjadi decimal                            |        0.a        |       0.8       |\n");
	printf("\t\t|    %%     | Operator untuk membuat nilai menjadi persen                             |        a%%         |       10%%       |\n");
	printf("\t\t|    !     | Operator untuk membuat nilai menjadi faktorial                          |        a!         |       6!        |\n");
	printf("\t\t|   |a|    | Operator untuk memutlakkan nilai                                        |        |a|        |       |2|       |\n");
	printf("\t\t|   (a)    | Operator untuk membuat nilai menjadi prioritas utama saat dihitung      |        (a)        |       (3)       |\n");
	printf("\t\t|    i     | Operator untuk membuat nilai menjadi sinus                              |      sin (a)      |     sin (30)    |\n");
	printf("\t\t|    X     | Operator untuk membuat nilai menjadi cosinus                            |      cos (a)      |     cos (30)    |\n");
	printf("\t\t|    a     | Operator untuk membuat nilai menjadi tangen                             |      tan (a)      |     tan (30)    |\n");
	printf("\t\t|    E     | Operator untuk membuat nilai menjadi secan                              |      sec (a)      |     sec (30)    |\n");
	printf("\t\t|    K     | Operator untuk membuat nilai menjadi cosecan                            |      csc (a)      |     csc (30)    |\n");
	printf("\t\t|    D     | Operator untuk membuat nilai menjadi cotan                              |      cot (a)      |     cot (30)    |\n");
	printf("\t\t|    M     | Operator untuk membuat nilai menjadi sinus                              |     RADsn (a)     |     RADsn (9)   |\n");
	printf("\t\t|    L     | Operator untuk membuat nilai menjadi cosinus                            |     RADcs (a)     |     RADcs (9)   |\n");
	printf("\t\t|    N     | Operator untuk membuat nilai menjadi tangen                             |     RADtn (a)     |     RADtn (9)   |\n");
	printf("\t\t|    P     | Operator untuk membuat nilai menjadi secan                              |     RADsc (a)     |     RADsc (9)   |\n");
	printf("\t\t|    Q     | Operator untuk membuat nilai menjadi cosecan                            |     RADcc (a)     |     RADcc (9)   |\n");
	printf("\t\t|    Z     | Operator untuk membuat nilai menjadi cotangen                           |     RADct (a)     |     RADct (9)   |\n");
	printf("\t\t|  floor   | Operator untuk membulatkan nilai ke bawah                               |       [0.a]       |      [7.4]      |\n");
	printf("\t\t|  ceil    | Operator untuk membulakkan nilai ke atas                                |       {0.a}       |      {7.4}      |\n");
	printf("\t\t|  round   | Operator untuk membulakkan nilai ke atas atau ke bawah                  |       <0.a>       |      <7.4>      |\n");
	printf("\t\t|    A     | Operator untuk membuat nilai menjadi invers sinus                       |     arcsn (a)     |    arcsn (45)   |\n");
	printf("\t\t|    B     | Operator untuk membuat nilai menjadi invers cosinus                     |     arccs (a)     |    arccs (45)   |\n");
	printf("\t\t|    C     | Operator untuk membuat nilai menjadi invers tangen                      |     arctn (a)     |    arctn (45)   |\n");
	printf("\t\t|    V     | Operator untuk membuat nilai menjadi invers secan                       |     arcsc (a)     |    arcsc (45)   |\n");
	printf("\t\t|    G     | Operator untuk membuat nilai menjadi invers cosecan                     |     arccc (a)     |    arccc (45)   |\n");
	printf("\t\t|    Y     | Operator untuk membuat nilai menjadi invers cotan                       |     arcct (a)     |    arcct (45)   |\n");
	printf("\t\t|    T     | Operator untuk membuat nilai menjadi logaritma dinamis                  |      log b(a)     |     log4(16)    |\n");
	printf("\t\t|    U     | Operator untuk membuat nilai menjadi logaritma                          |         lg        |      lg(10)     |\n");
	printf("\t\t|    W     | Operator untuk membuat nilai menjadi logartima natural                  |         ln        |      ln(10)     |\n");
	printf("\t\t|    p     | Operator untuk membuat nilai menjadi phi                                |         pi        |        pi       |\n");
	printf("\t\t|    e     | Operator untuk membuat nilai menjadi euleur                             |         e         |        e        |\n");
	printf("\t\t|    d     | Operator untuk membuat nilai menjadi divide                             |    (a) DIV (b)    |     11 DIV 5    |\n");
	printf("\t\t|    R     | Operator untuk mengakarkan nilai                                        |     (a) R (b)     |      27 R 3     |\n");
	printf("\t\t----------------------------------------------------------------------------------------------------------------------------\n");
	return 0;
}

/*
int main()
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
}
*/
