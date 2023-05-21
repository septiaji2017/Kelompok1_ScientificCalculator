#include "Agam.h"
#include "Ridha.h"
#include "Mutia.h"
#include "Rico.h"
#include "Naufal.h"


int top = -1;    //variabel top bertipe integer dengan nilai awal -1, karena nantinya akan menjadi 0 saat push
char stack[100]; //Sebuah array dengan penampung sebanyak 100

/*********************************************************************************************/
/* Initial State: Menampung operator bertipe char, pada modul ini berperan sebagai procedure */
/* Final State: Menambahkan char (Operator) kedalam sebuah array sebagai penampung  		 */
/* Referensi Modul: Berdiskusi bersama Ridha Septiaji 										 */
/* Referensi Link: -  																		 */ 
/*********************************************************************************************/
void push(char x)		//modul ini merupakan bagian dari stack gunakanya untuk memasukkan pada array stack[100]
{
    stack[++top] = x;	//memasukkan satu persatu operan dalam array stack 
}

/*********************************************************************************************/
/* Initial State: Menampung operator bertipe char, pada modul ini berperan sebagai procedure */
/* Final State: Memberikan char (Operator) di dalam modul infixtopostfix 					 */
/* Referensi Modul: Berdiskusi bersama Ridha Septiaji 										 */
/* Referensi Link: -  																		 */ 
/*********************************************************************************************/
char pop()						//modul ini merupakan bagian dari stack digunakan sebagai memberikan sebuah nilai yang sudah ditumpuk di sebuah array stack
{
    if(top == -1){				//Ketika keadaan stack masih kosong
        return -1;				//Maka akan memberikan nilai -1
	}else{						
        return stack[top--];	//Apabila stack berisikan sebuah angka atau operan maka akan memberikan hal itu, lalu top dikurangi 1
	}
}

/****************************************************************************************************/
/* Initial State: Menampung berupa string berisikan angka dan operator 								*/
/* Final State: Menghapus garis baru dengan spasi ketika input 					 					*/
/* Referensi Modul: -										 										*/
/* Referensi Link: https://github.com/MohamedFarid612/Calculator-infix-to-postfix-/blob/main/main.c */ 
/****************************************************************************************************/
void replaceNewLineBySpace(char *s){		//Pada modul ini akan menghapus line baru menjadi spasi
    char *s1 = s;							//Menampung terlebih dahulu sebuah string pada variabel
    while((s1 = strstr(s1, "\n")) != NULL){ //Fungsi strstr() akan mencari kemunculan pertama substring yang cocok di dalam string utama
        *s1 = ' ';							//Mengganti menjadi sebuah spasi
	}							
}

/****************************************************************************************************/
/* Initial State: Menampung berupa string berisikan angka dan operator  						 	*/
/* Final State: Menghapus spasi ketika user menginputkan spasi saat ingin mengkalkulasi 	 		*/
/* Referensi Modul: - 										 								 		*/
/* Referensi Link: https://github.com/MohamedFarid612/Calculator-infix-to-postfix-/blob/main/main.c */ 
/****************************************************************************************************/
char * removespaces(char * exp){			//pada modul ini digunakan sebagai menghapus spasi ketika user menginputkan menggunakan spasi

    char* x=malloc(266*sizeof(char));		//kemudian ada sebuah string yang dibuat sebanyak 266
    int i,j;								//2 buah variabel i dan j yang bertipe integer sebagai looping nantinya
    for(i=0,j=0; exp[i]!='\0'; i++,j++)		//akan terus loop hingga string yang dikirimkannya tidak sama dengan NULL ('\0')
    {
        while(exp[j]==' '){					//Loop ketika isi dari string exp indeks ke-j berisikan spasi
	        j++;							//J akan menambah 1, gunanya adalah untuk mengecek indeks selanjutnya
    	}
		x[i]=exp[j];						//kemudian dimasukkan kedalam indeks ke-i yang sudah terhapuskan spasinya (dipindahkan)								
    }
    x[i]='\0';								//Menandakan bahwa ujung dari sebuah array x ini diisikan NULL
    return x;								//Kemudian mengirikan seluruhnya tanpa spasi untuk dikalkulasikan
}

/****************************************************************************************************/
/* Initial State: Menampung operator bertipe char, pada modul ini berperan sebagai function 		*/
/* Final State: Memberikan nilai 0 hingga 4 menyesuaikan dengan operator yang diinputkan 	 		*/
/* Referensi Modul: - 										 								 		*/
/* Referensi Link: https://github.com/MohamedFarid612/Calculator-infix-to-postfix-/blob/main/main.c */ 
/****************************************************************************************************/
int priority(char x)												//Pada modul ini digunakan sebagai tingkatan prioritas saat ingin dimasukkan kedalam stack 
{
    if (x == '(' || x == '~' || x == '{' || x == '<' || x == '[') 	//Untuk operator ini merupakan sebagai tanda yang memang akan didahulukan nantinya, namun bernilai 0
        return 0;													//Memberikan nilai 0
    if (x == '+' || x == '-')										//Operator ini merupakan tingkat paling rendah dan akan dikalkulasikan terakhir
        return 1;													//Memberikan nilai 1
    if (x == '*' || x == '/'|| x == '%' || x == 'd')				//Operator ini merupakan tingkat paling rendah kedua 
        return 2;													//Memberikan nilai 2
    if (x == '^' || x == 'v' || x == 'R')							//Operator ini merupakan tingkat paling besar kedua dan akan dikalkulasikan terlebih dahulu
		return 3;													//Memberikan nilai 3
	if (x == '!' || x == 'i' || x == 'X' || x == 'a' || x == 'e' || x == 'K' || x == 'D' || x == 'L' || x == 'M'|| x == 'N'|| x == 'P'|| x == 'Q' || x == 'Z' || x == 'A' || x == 'B'|| x == 'C'|| x == 'V'|| x == 'G' || x == 'Y'|| x == 'T'|| x == 'U' || x == 'W' || x == 'p' || x == 'E')	//Operator ini merupakan tingkat paling besar pertama dan akan dikalkulasikan terlebih dahulu
		return 4;													//Memberikan nilai 4
    return 0;														//Jika tidak ada di semua operator maka akan mengembalikan nilai 0
}

/********************************************************************************************/
/* Initial State: Menampung angka bertipe string, pada modul ini berperan sebagai function 	*/
/* Final State: Memberikan nilai angka atau memberikan berupa false					 	 	*/
/* Referensi Modul: - 										 								*/
/* Referensi Link: -																		*/ 
/********************************************************************************************/
bool isNegativeDigit(char* c)	//Modul ini digunakan untuk mengetahui bahwa angka tersebut negatif atau bukan
{
    if (*c == '-') {			//Jika string tersebut adalah '-'
        c++;					//Maka string tersebut akan bergeser ke sebelahnya
        return isdigit(*c);		//Kemudian akan mengembalikan nilai dari angka tersebut
    }
    return false;				//Apabila bukan '-' maka akan mengembalikan nilai false
}

/******************************************************************************************************************/
/* Initial State: Menampung angka ataupun operan bertipe string, pada modul ini berperan sebagai function 		  */
/* Final State: Membuat sebuah node dengan 4 subvar yaitu info(angka atau operan), pointer kanan, kiri dan parent */
/* Referensi Modul: - 										 													  */
/* Referensi Link: -																							  */ 
/******************************************************************************************************************/
Address NewNode(infotype1 X)							//Modul ini digunakan membentuk sebuah node yang berisikan beberapa subvar untuk membentuk sebuah tree
{
	Address newNode;									//Address disini merupakan sebuah pointer yang akan menunjuk ke sebuah node, dan variabel bernama newNode
	newNode = (Address) malloc(sizeof(nbTreeNode));		//Memesan sebuah node sebesar nbTreeNode 
	if (newNode != NULL){								//Jika newNode tidak sama dengan NULL maka
		infoo(newNode) = X;								//Pada subvar infoo akan diisikan sesuai dengan apa yang diinputkan bisa berupa angka ataupun operator
		right(newNode) = Nil;							//Pada subvar right(kanan) akan di Nullkan terlebih dahulu
		left(newNode) = Nil;							//Pada subvar left(kiri) akan di Nullkan terlebih dahulu
		parent(newNode) = Nil;							//Pada subvar parent(orang tua/diatas dari node) akan di Nullkan terlebih dahulu
	}
	return newNode;										//Akan mengembalikan sebuah newNode
}

/********************************************************************************************/
/* Initial State: Menampung operator bertipe char, pada modul ini berperan sebagai function */
/* Final State: Memberikan nilai 1 atau 2, pada modul ini berisikan seluruh operator		*/
/* Referensi Modul: - 										 								*/
/* Referensi Link: -																		*/ 
/********************************************************************************************/
int is_operator(char x)				//Pada modul ini akan mengecek apakah yang diinputkan itu operator atau bukan  
{
	if(x == '+' || x == '-' || x == '*' || x == '/' || x == '%' || x == 'd' || x == '^' || x == 'R' || x == '(' || x == ')' || x == '!' || x == 'v' || x == 'i' || x == 'X' || x == 'a' || x == 'e' || x == 'K' || x == 'D' || x == 'L' || x == 'M'|| x == 'N'|| x == 'P'|| x == 'Q' || x == 'Z'|| x == 'A' || x == 'B'|| x == 'C'|| x == 'V'|| x == 'G' || x == 'Y' || x == 'T'|| x == 'U' || x == 'W' || x == 'p' || x == 'E' || x == '|' || x == '}' || x == '>' || x == ']'){ //Jika yang diinputkan adalah operator yang ada pada list ini maka
    	return 1;					//Mengembalikan nilai 1, yang artinya operator tersebut ada pada list
	}else{							//Jika tidak memenuhi dari list diatas maka
		return 0;					//akan mengembalikan nilai 0, yang artinya bukan operator
	}	  
}

/********************************************************************************************/
/* Initial State: Menampung angka bertipe string, pada modul ini berperan sebagai function 	*/
/* Final State: Memberikan operator itu sendiri, pada modul ini untuk membandingkan saja	*/
/* Referensi Modul: - 										 								*/
/* Referensi Link: -																		*/ 
/********************************************************************************************/
infotype1 isOperator(infotype1 x)		//Modul ini digunakan untuk membandingkan apabila operator tersebut apakah benar ada di dalam list
{
	if((strcmp(x, "+")) == 0 || (strcmp(x, "-")) == 0 || (strcmp(x, "*")) == 0|| (strcmp(x, "/")) == 0|| (strcmp(x, "%")) == 0|| (strcmp(x, "d")) == 0|| (strcmp(x, "^")) == 0|| (strcmp(x, "R")) == 0 || (strcmp(x, "v")) == 0|| (strcmp(x, ")")) == 0|| (strcmp(x, "(")) == 0|| (strcmp(x, "!")) == 0|| (strcmp(x, "i")) == 0|| (strcmp(x, "X")) == 0|| (strcmp(x, "a")) == 0|| (strcmp(x, "e")) == 0|| (strcmp(x, "K")) == 0|| (strcmp(x, "D")) == 0|| (strcmp(x, "L")) == 0|| (strcmp(x, "M")) == 0|| (strcmp(x, "N")) == 0 || (strcmp(x, "P")) == 0 || (strcmp(x, "Q")) == 0 || (strcmp(x, "Z")) == 0 || (strcmp(x, "A")) == 0 || (strcmp(x, "B")) == 0 || (strcmp(x, "C")) == 0 || (strcmp(x, "V")) == 0 || (strcmp(x, "G")) == 0 || (strcmp(x, "Y")) == 0 || (strcmp(x, "T")) == 0 || (strcmp(x, "U")) == 0 || (strcmp(x, "W")) == 0 || (strcmp(x, "p")) == 0 || (strcmp(x, "E")) == 0 || (strcmp(x, "|")) == 0 || (strcmp(x, "}")) == 0 || (strcmp(x, ">")) == 0 || (strcmp(x, "]")) == 0){ //Jika ketika dibandingkan ada di dalam list ini maka
		return x;						//Akan mengembalikan nilai  dari operator itu sendiri
	}else{								//Jika tidak maka
		return x;						//Akan mengembalikan nilai dari itu juga dengan ketentuan yang dikembalikan adalah sebuah digit
	}
}

/**********************************************************************************************/
/* Initial State: Menampung operator bertipe string, pada modul ini berperan sebagai function */
/* Final State: Membandingkan info yang sudah terbentuk apakah ada dalam operator			  */
/* Referensi Modul: - 										 								  */
/* Referensi Link: -																		  */ 
/**********************************************************************************************/
bool IsOperator1(infotype1 info)							//Modul ini digunakan untuk mengetahui string info yang ada pada node itu ada pada isOperator
{
	bool Operator;											//variabel operator bertipe boolean
	
	Operator = (strcmp((info), isOperator(info)) == 0);		//Operator akan diisikan ketika memabandingkan antara info yang ada pada node dengan isOperator
	return Operator;										//Mengembaliakan Operator berupa true atau false
	
}

/**************************************************************************************************************************************/
/* Initial State: Menampung operator bertipe char, pada modul ini berperan sebagai function 										  */
/* Final State: Memberikan nilai 1 atau 0, pada modul ini dikhususkan untuk operator yang memang hanya membutuhkan node berisikan nol */
/* Referensi Modul: - 										 																		  */
/* Referensi Link: -																												  */ 
/**************************************************************************************************************************************/
int isOperator2(char x)		//Modul ini digunakan untuk mengecek yang hanya membutuhkan 1 digit saja, contohnya 5! hanya membutuhkan 1 digit 
{
    if(x == '!' || x == 'v' || x == 'i' || x == 'X' || x == 'a' || x == 'K' || x == 'D' || x == 'L' || x == 'M'|| x == 'N'|| x == 'P'|| x == 'Q' || x == 'Z'|| x == 'A'|| x == 'B' || x == 'C'|| x == 'V'|| x == 'G' || x == 'Y' || x == 'U' || x == 'W' || x == 'E' || x == '|' || x == '}' || x == '>' || x == ']'|| x == 'e' || x == 'p'){ //Jika operator yang dipassingkan ada salah satunya dalam list ini maka
		return 1;			//akan mengembalikan nilai 1
	}else{					//Jika tidak maka
		return 0;			//Akan mengembalikan nilai 0 
	} 
}

/********************************************************************************************/
/* Initial State: Menampung angka bertipe string, pada modul ini berperan sebagai function 	*/
/* Final State: Memberikan nilai berupa true atau false pada sebuah angka					*/
/* Referensi Modul: - 										 								*/
/* Referensi Link: -																		*/ 
/********************************************************************************************/
bool isNumber(infotype1 info)																			//Pada modul ini digunakan sebagai mengecek apakah string tersebut berupa angka atau bukan
{
	bool infoNumber;																					//Membuat sebuah variabel bertipe boolean untuk dikembalikan nantinya
	infoNumber = (isdigit(*info) || (*info) == '-' && isNegativeDigit(info) && !isdigit(*(info)-1));	//Untuk mengecek digit berupa bilangan biasa maupun negatif
	
	return infoNumber;																					//Mengembalikan sebuah true atau false nantinya
}

/********************************************************************************************/
/* Initial State: Menampung angka bertipe float, pada modul ini berperan sebagai function 	*/
/* Final State: Memberikan sebuah nilai yang sudah dikalkulasikan berupa pembulatan kebawah */
/* Referensi Modul: - 																		*/
/* Referensi Link: https://www.defantri.com/2022/10/mengenal-fungsi-floor-dan-ceiling.html  */ 
/********************************************************************************************/
float floorr(float x) {				//Modul ini digunakan untuk menghitung angka desimal dibulatkan kebawah
	int floor_x = (int) x;			//variabel floor_x bertipe integer kemudian di isi dengan nilai yang dipassingnya yaitu float lalu di casting menjadi integer
	if (x < 0 && x != floor_x) {	//Jika nilai x kurang dari 0 dan x tidak sama nilainya dengan yang sudah diisikan sebelumnya maka
		floor_x--;					//variabel floor_x akan dikurangi 1 (decrement)
	}
	return floor_x;					//Kemudian mengembalikan nilai dari floor itu sendiri
}

/********************************************************************************************/
/* Initial State: Menampung angka bertipe float, pada modul ini berperan sebagai function 	*/
/* Final State: Memberikan sebuah nilai yang sudah dikalkulasikan berupa pembulatan keatas  */
/* Referensi Modul: - 																		*/
/* Referensi Link: https://www.defantri.com/2022/10/mengenal-fungsi-floor-dan-ceiling.html  */ 
/********************************************************************************************/
float ceil1(float x) {				//Modul ini digunakan untuk menghitung angka desimal dibulatkan keatas
	int ceil_x = (int) x;			//variabel ceil_x bertipe integer kemudian di isi dengan nilai yang dipassingnya yaitu float lalu di casting menjadi integer
	if (x > 0 && x != ceil_x) {		//Jika nilai x lebih dari 0 dan x tidak sama nilainya dengan yang sudah diisikan sebelumnya maka
		ceil_x++;					//variabel ceil_x akan ditambah 1 (increment)
	}
	return ceil_x;					//Kemudian mengembalikan nilai dari ceil itu sendiri
}

/****************************************************************************************************************************************/
/* Initial State: Menampung angka bertipe float, pada modul ini berperan sebagai function 							 					*/
/* Final State: Memberikan sebuah nilai yang sudah dikalkulasikan berupa pembulatan kebawah maupun pembulatan keatas 					*/
/* Referensi Modul: - 																							   	 					*/
/* Referensi Link: https://www.detik.com/sulsel/berita/d-6516914/4-cara-mudah-membulatkan-angka-di-excel-ini-penjelasan-dan-tutorialnya */ 
/****************************************************************************************************************************************/
float round1(float x) {									//Pada modul ini akan menghitung angka desimal dibulatkan keatas ataupun kebawah
	int rounded_x = (int) (x + (x >= 0 ? 0.5 : -0.5));	//Ada sebuah variabel yang mana bernama rounded_x di isi oleh x yang sudah di casting menjadi integer, lalu ada kondisi menggunakan ternary untuk pembulatannya
	return rounded_x;									//Kemudian mengembalikan nilai dari round itu sendiri
}

/********************************************************************************************/
/* Initial State: Menampung angka bertipe float, pada modul ini berperan sebagai function 	*/
/* Final State: Memberikan sebuah nilai yang sudah dikalkulasikan berupa nilai yang absolut */
/* Referensi Modul: - 																		*/
/* Referensi Link: -  																		*/ 
/********************************************************************************************/
float abs1(float x) {			//Modul ini adalah untuk mengubah nilai yang awalnya bernilai negatif menjadi positif
	return x >= 0 ? x : -x;		//mengembalikan nilai x dengan menggunakan kondisi ternary
}

/**********************************************************************************************************************/
/* Initial State: Menampung angka1, angka2 dan juga operator bertipe string, pada modul ini berperan sebagai function */
/* Final State: Memberikan hasil kalkulasi yang sudah diperhitungkan dengan memanggil setiap fungsinya 				  */
/* Referensi Modul: - 										 														  */
/* Referensi Link: -																								  */ 
/**********************************************************************************************************************/
float kalkulasi(float angka1, float angka2, infotype1 x) //Pada modul ini akan mempassingkan 3 buah variabel yaitu angka1, angka2 dan infotype1(operator) yang akan dikalkulasikan sesuai dengan operatornya 
{
	float hasil; 																//variabel hasil bertipe float sebagai penampung nantinya

	if((strcmp(x, "v")) == 0) {													//Jika infotypenya itu adalah v(akar) maka
		hasil = f_akar(angka1);													//Memanggil modul akar dan hanya membutuhkan 1 angka saja yaitu sebelah kanan (angka1), lalu di assign pada variabel hasil
		return hasil;															//Lalu setelah dikalkulasikan akan mengembalikan nilai yang disesuaikan dengan operator dan juga modulnya
	} else if((strcmp(x, "^")) == 0) {											//Jika infotypenya itu adalah ^(pangkat) maka
		if(angka2 == 0 && angka1 == 0){											//Jika angka 1 dan angka 2 nya 0 maka
			printf("\n\t\t\t\t\t\t\t --> Basis dan pangkat tidak bisa nol");	//Memberitahukan bahwa basis dan pangkat tidak bisa 0
			exit(0);															//Dan secara otomatis dengan menggunakan exit(0) akan keluar dari run aplikasi
		}else{																	//Jika tidak maka
			if(angka2 == 0){													//Jika angka2(kiri, basis) sama dengan 0 maka
				hasil = 0;														//Hasilnya akan diberikan 0
				return hasil;													//Lalu setelah dikalkulasikan akan mengembalikan nilai yang disesuaikan dengan operator dan juga modulnya
			}else{																//Jika tidak maka
				hasil = f_pangkat(angka2, angka1);								//Memanggil modul pangkat dan dikalkulasikan, lalu di assign pada variabel hasil
				return hasil;													//Lalu setelah dikalkulasikan akan mengembalikan nilai yang disesuaikan dengan operator dan juga modulnya
			}
		}
	} else if((strcmp(x, "/")) == 0) {											//Jika infotypenya itu adalah /(pembagian) maka
		if(angka1 == 0){														//Jika angka1(kanan, pembagi) sama dengan 0 maka
			printf("\n\t\t\t\t\t\t\t\t --> Tidak bisa dibagi nol");				//Memberitahukan bahwa pembagi tidak bisa nol
			exit(0);															//Dan secara otomatis dengan menggunakan exit(0) akan keluar dari run aplikasi
		}else{																	//Jika tidak maka
			hasil = pembagian(angka2, angka1);									//Memanggil modul pembagian dan dikalkulasikan, lalu di assign pada variabel hasil
			return hasil;														//Lalu setelah dikalkulasikan akan mengembalikan nilai yang disesuaikan dengan operator dan juga modulnya
		}
	} else if((strcmp(x, "%")) == 0) {											//Jika infotypenya itu adalah %(modulus) maka
		hasil = f_mod((int)angka2, (int)angka1);								//Memanggil modul modulus dan dikalkulasikan, lalu di assign pada variabel hasil			
		return hasil;															//Lalu setelah dikalkulasikan akan mengembalikan nilai yang disesuaikan dengan operator dan juga modulnya
	} else if((strcmp(x, "d")) == 0) {											//Jika infotypenya itu adalah d(div) maka
		div_t hasildiv;															//Membuat sebuah variabel bernama hasildiv vertipe div_t
		hasildiv = f_div(angka2, angka1);										//Memanggil modul div dan dikalkulasikan, lalu di assign pada variabel hasil	
		hasil = hasildiv.quot;													//Memanggil modul div dan dikalkulasikan, lalu di assign pada variabel hasil
		return hasil;															//Lalu setelah dikalkulasikan akan mengembalikan nilai yang disesuaikan dengan operator dan juga modulnya
	} else if((strcmp(x, "*")) == 0) {											//Jika infotypenya itu adalah *(perkalian) maka
		hasil = perkalian(angka2, angka1);										//Memanggil modul perkalian dan dikalkulasikan, lalu di assign pada variabel hasil	
		return hasil;															//Lalu setelah dikalkulasikan akan mengembalikan nilai yang disesuaikan dengan operator dan juga modulnya
	} else if((strcmp(x, "+")) == 0) {											//Jika infotypenya itu adalah +(Pertambahan) maka
		hasil = pertambahan(angka2, angka1);									//Memanggil modul pertambahan dan dikalkulasikan, lalu di assign pada variabel hasil		
		return hasil;															//Lalu setelah dikalkulasikan akan mengembalikan nilai yang disesuaikan dengan operator dan juga modulnya
	} else if((strcmp(x, "-")) == 0) {											//Jika infotypenya itu adalah -(Pengurangan) maka
		hasil = pengurangan(angka2, angka1);									//Memanggil modul pengurangan dan dikalkulasikan, lalu di assign pada variabel hasil		
		return hasil;															//Lalu setelah dikalkulasikan akan mengembalikan nilai yang disesuaikan dengan operator dan juga modulnya
	} else if((strcmp(x, "!")) == 0) {											//Jika infotypenya itu adalah !(Faktorial) maka
		hasil = factorial(angka1);												//Memanggil modul faktorial dan dikalkulasikan, lalu di assign pada variabel hasil
		return hasil;															//Lalu setelah dikalkulasikan akan mengembalikan nilai yang disesuaikan dengan operator dan juga modulnya
	} else if((strcmp(x, "R")) == 0) {											//Jika infotypenya itu adalah R(akar dinamis) maka
		hasil = f_akar_dinamis(angka1, angka2);									//Memanggil modul akar dinamis dan dikalkulasikan, lalu di assign pada variabel hasil		
		return hasil;															//Lalu setelah dikalkulasikan akan mengembalikan nilai yang disesuaikan dengan operator dan juga modulnya
	} else if((strcmp(x, "i")) == 0) {											//Jika infotypenya itu adalah i(sin) maka
		hasil = sinDerajat(angka1);													//Memanggil modul sin dan dikalkulasikan, lalu di assign pada variabel hasil
		return hasil;															//Lalu setelah dikalkulasikan akan mengembalikan nilai yang disesuaikan dengan operator dan juga modulnya
	} else if((strcmp(x, "X")) == 0) {											//Jika infotypenya itu adalah X(cos) maka
		hasil = cosDerajat(angka1);													//Memanggil modul cos dan dikalkulasikan, lalu di assign pada variabel hasil
		return hasil;															//Lalu setelah dikalkulasikan akan mengembalikan nilai yang disesuaikan dengan operator dan juga modulnya
	} else if((strcmp(x, "a")) == 0) {											//Jika infotypenya itu adalah a(tan) maka
		hasil = tanDerajat(angka1);												//Memanggil modul tan dan dikalkulasikan, lalu di assign pada variabel hasil
		return hasil;															//Lalu setelah dikalkulasikan akan mengembalikan nilai yang disesuaikan dengan operator dan juga modulnya
	} else if((strcmp(x, "E")) == 0) {											//Jika infotypenya itu adalah E(secan) maka
		hasil = secDerajat(angka1);													//Memanggil modul secan dan dikalkulasikan, lalu di assign pada variabel hasil
		return hasil;															//Lalu setelah dikalkulasikan akan mengembalikan nilai yang disesuaikan dengan operator dan juga modulnya
	} else if((strcmp(x, "K")) == 0) {											//Jika infotypenya itu adalah K(cosecan) maka
		hasil = cosecDerajat(angka1);												//Memanggil modul cosecan dan dikalkulasikan, lalu di assign pada variabel hasil
		return hasil;															//Lalu setelah dikalkulasikan akan mengembalikan nilai yang disesuaikan dengan operator dan juga modulnya
	} else if((strcmp(x, "D")) == 0) {											//Jika infotypenya itu adalah D(cotan) maka
		hasil = cotDerajat(angka1);													//Memanggil modul cotan dan dikalkulasikan, lalu di assign pada variabel hasil
		return hasil;															//Lalu setelah dikalkulasikan akan mengembalikan nilai yang disesuaikan dengan operator dan juga modulnya
	} else if((strcmp(x, "M")) == 0) {											//Jika infotypenya itu adalah M(sinRAD) maka
		hasil = sinRadian(angka1);													//Memanggil modul sinRAD dan dikalkulasikan, lalu di assign pada variabel hasil
		return hasil;															//Lalu setelah dikalkulasikan akan mengembalikan nilai yang disesuaikan dengan operator dan juga modulnya
	} else if((strcmp(x, "L")) == 0) {											//Jika infotypenya itu adalah L(cosRAD) maka
		hasil = cosRadian(angka1);													//Memanggil modul cosRAD dan dikalkulasikan, lalu di assign pada variabel hasil
		return hasil;															//Lalu setelah dikalkulasikan akan mengembalikan nilai yang disesuaikan dengan operator dan juga modulnya
	} else if((strcmp(x, "N")) == 0) {											//Jika infotypenya itu adalah N(tanRaD) maka
		hasil = tanRadian(angka1);													//Memanggil modul tanRAD dan dikalkulasikan, lalu di assign pada variabel hasil
		return hasil;															//Lalu setelah dikalkulasikan akan mengembalikan nilai yang disesuaikan dengan operator dan juga modulnya
	} else if((strcmp(x, "P")) == 0) {											//Jika infotypenya itu adalah P(secan) maka
		hasil = secRadian(angka1);													//Memanggil modul secan dan dikalkulasikan, lalu di assign pada variabel hasil
		return hasil;															//Lalu setelah dikalkulasikan akan mengembalikan nilai yang disesuaikan dengan operator dan juga modulnya
	} else if((strcmp(x, "Q")) == 0) {											//Jika infotypenya itu adalah Q(cosecan) maka
		hasil = cosecRadian(angka1);												//Memanggil modul cosecan dan dikalkulasikan, lalu di assign pada variabel hasil
		return hasil;															//Lalu setelah dikalkulasikan akan mengembalikan nilai yang disesuaikan dengan operator dan juga modulnya
	} else if((strcmp(x, "Z")) == 0) {											//Jika infotypenya itu adalah Z(cotan) maka
		hasil = cotRadian(angka1);													//Memanggil modul cotan dan dikalkulasikan, lalu di assign pada variabel hasil
		return hasil;															//Lalu setelah dikalkulasikan akan mengembalikan nilai yang disesuaikan dengan operator dan juga modulnya
	}else if((strcmp(x, "A")) == 0) {											//Jika infotypenya itu adalah A(arccos) maka
		hasil = arccos(angka1);													//Memanggil modul arccos dan dikalkulasikan, lalu di assign pada variabel hasil
		return hasil;															//Lalu setelah dikalkulasikan akan mengembalikan nilai yang disesuaikan dengan operator dan juga modulnya
	}else if((strcmp(x, "B")) == 0) {											//Jika infotypenya itu adalah B(arcsin) maka
		hasil = arcsin(angka1);													//Memanggil modul arcsin dan dikalkulasikan, lalu di assign pada variabel hasil
		return hasil;															//Lalu setelah dikalkulasikan akan mengembalikan nilai yang disesuaikan dengan operator dan juga modulnya				
	}else if((strcmp(x, "C")) == 0) {											//Jika infotypenya itu adalah C(arctan) maka
		hasil = arctan(angka1);													//Memanggil modul arctan dan dikalkulasikan, lalu di assign pada variabel hasil
		return hasil;															//Lalu setelah dikalkulasikan akan mengembalikan nilai yang disesuaikan dengan operator dan juga modulnya
	}else if((strcmp(x, "V")) == 0) {											//Jika infotypenya itu adalah V(arcsec) maka
		hasil = arcsec(angka1);													//Memanggil modul arcsec dan dikalkulasikan, lalu di assign pada variabel hasil
		return hasil;															//Lalu setelah dikalkulasikan akan mengembalikan nilai yang disesuaikan dengan operator dan juga modulnya
	}else if((strcmp(x, "G")) == 0) {											//Jika infotypenya itu adalah G(arccosec) maka
		hasil = arccsc(angka1);													//Memanggil modul arccosec dan dikalkulasikan, lalu di assign pada variabel hasil
		return hasil;															//Lalu setelah dikalkulasikan akan mengembalikan nilai yang disesuaikan dengan operator dan juga modulnya
	}else if((strcmp(x, "Y")) == 0) {											//Jika infotypenya itu adalah Y(arccotan) maka
		hasil = arccot(angka1);													//Memanggil modul arccotan dan dikalkulasikan, lalu di assign pada variabel hasil
		return hasil;															//Lalu setelah dikalkulasikan akan mengembalikan nilai yang disesuaikan dengan operator dan juga modulnya
	}else if((strcmp(x, "T")) == 0) {											//Jika infotypenya itu adalah T(logaritma berbasis) maka				
		hasil = log_b(angka1, angka2);											//Memanggil modul logaritma berbasis dan dikalkulasikan, lalu di assign pada variabel hasil
		return hasil;															//Lalu setelah dikalkulasikan akan mengembalikan nilai yang disesuaikan dengan operator dan juga modulnya
	}else if((strcmp(x, "U")) == 0) {											//Jika infotypenya itu adalah U(logaritma basis 10) maka
		hasil = log_10(angka1);													//Memanggil modul logaritma basis 10 dan dikalkulasikan, lalu di assign pada variabel hasil
		return hasil;															//Lalu setelah dikalkulasikan akan mengembalikan nilai yang disesuaikan dengan operator dan juga modulnya											
	}else if((strcmp(x, "W")) == 0) {											//Jika infotypenya itu adalah W(logaritma basis 2) maka
		hasil = log_2(angka1);													//Memanggil modul logaritma basis 2 dan dikalkulasikan, lalu di assign pada variabel hasil
		return hasil;															//Lalu setelah dikalkulasikan akan mengembalikan nilai yang disesuaikan dengan operator dan juga modulnya
	}else if((strcmp(x, "|")) == 0) {											//Jika infotypenya itu adalah |(mutlak) maka
		hasil = abs1(angka1);													//Memanggil modul mutlak dan dikalkulasikan, lalu di assign pada variabel hasil
		return hasil;															//Lalu setelah dikalkulasikan akan mengembalikan nilai yang disesuaikan dengan operator dan juga modulnya
	}else if((strcmp(x, "}")) == 0) {											//Jika infotypenya itu adalah }(cheil) maka
		hasil = ceil1(angka1);													//Memanggil modul cheil dan dikalkulasikan, lalu di assign pada variabel hasil
		return hasil;															//Lalu setelah dikalkulasikan akan mengembalikan nilai yang disesuaikan dengan operator dan juga modulnya
	}else if((strcmp(x, ">")) == 0) {											//Jika infotypenya itu adalah >(round) maka
		hasil = round1(angka1);													//Memanggil modul round dan dikalkulasikan, lalu di assign pada variabel hasil
		return hasil;															//Lalu setelah dikalkulasikan akan mengembalikan nilai yang disesuaikan dengan operator dan juga modulnya
	}else if((strcmp(x, "]")) == 0) {											//Jika infotypenya itu adalah ](floor) maka
		hasil = floorr(angka1);													//Memanggil modul floor dan dikalkulasikan, lalu di assign pada variabel hasil
		return hasil;															//Lalu setelah dikalkulasikan akan mengembalikan nilai yang disesuaikan dengan operator dan juga modulnya
	}else if((strcmp(x, "p")) == 0) {											//Jika infotypenya itu adalah p(phi) maka
		hasil = 3.14;															//variabel hasil menjadi 3.14
		return hasil;															//Lalu setelah dikalkulasikan akan mengembalikan nilai yang disesuaikan dengan operator dan juga modulnya
	}else if((strcmp(x, "e")) == 0) {											//Jika infotypenya itu adalah e(euler) maka
		hasil = 2.7182;															//variabel hasil menjadi 2.7182
		return hasil;															//Lalu setelah dikalkulasikan akan mengembalikan nilai yang disesuaikan dengan operator dan juga modulnya
	}
}

/**********************************************************************************************************************************************/
/* Initial State: Menampung sebuah linked list yang sudah tersedia 2 buah pointer First dan Last, pada modul ini berperan sebagai procedure   */
/* Final State: Membentuk sebuah tree yang sudah terbentuk setiap nodenya lalu memberikan hasil kalkulasinya					 	 	      */
/* Referensi Modul: - 										 																				  */
/* Referensi Link: -																														  */ 
/**********************************************************************************************************************************************/
void creat_tree(address * First, address * Last)		//Pada modul ini digunakan sebagai pembuatan tree beserta perhitungan dari setiap nodenya
{
	address temp;										//variabel temp bertipe address ini digunakan sebagai pointer untuk linked list postfix
	Address root;										//variabel root bertipe Address ini digunakan sebagai pointer yang mana akan menunjuk node paling atas
	Address newNode, pcur, pCur, pCur1;					//variabel newNode,pcur,pCur dan pCur1 ini digunakan sebagai pointer ketika sebuah node sudah dibuat
	float angka1 = 0, angka2 = 0, hasil = 0;			//variabel angka1, angka2 bertipe float sebagai penampung angka yang nantinya akan dikalkulasikan, lalu variabel hasil yang bertipe float ini digunakan sebagai penampung nanti hasilnya
	infotype1 penampung;								//variabel penampung digunakan ketika nanti akan dibuatkan node baru setelah dikalkulasikan
	float penampung1;									//variabel penampung1 disini digunakan ketika ingin menampung sebuah angka 
	int i = 0;											//variabel i merupakan variabel bertipe integer yang di assign 0
	char str[50], str1[50], str2[50], str3[50], str4[50], str5[50], str6[50], str7[50], str8[50], str9[50], str10[10], str11[50]; //array str ini digunakan dibeberapa kondisi ketika membutuhkan pembentukan sebuah node yang sudah dikalkulasikan
	
	temp = *Last;					//variabel temp di assign oleh pointer last yang sudah di passingkan tujuannya untuk memegang node paling belakang
	newNode = NewNode(info(temp));	//Membentuk sebuah node pada newNode, disini akan membuatkannya untuk root
	root = newNode;					//newNode yang sudah dibentuk pertama, akan langsung ditunjuk oleh pointer root
	if(isOperator2(*infoo(root))){	//jika root tersebut ternyata sebuah operator yang hanya membutuhkan 1 angka saja maka
		temp = prev(temp);			//temp akan mundur dari linked list untuk menunjuk operator/angka selanjutnya

		pcur = newNode;				//pcur di assign oleh newNode, guna pcur disini sebagai pengecekan(mengelilingi tree)
		newNode = NewNode(info(temp));//Membentuk sebuah node pada newNode, dari info yang ditunjuk oleh temp
		parent(newNode) = pcur;		//parent dari newNode akan menunjuk pcur
		right(pcur) = newNode;		//sebelah kanan(subvar) dari pcur akan menunjuk newNode

		if(left(pcur) == Nil){		//Jika sebelah kiri(subvar) dari pcur itu Nil maka
			newNode = NewNode("0");	//newNode akan membentuk sebuah node yang infonya berisikan 0
			parent(newNode) = pcur; //parent dari node nunjuk ke apa yang ditunjuk oleh pcur
			left(pcur) = newNode;	//subvar kiri dari pcur akan menunjuk pada newNode
			newNode = right(pcur);	//kemudian newNode dipindahkan keseblah kanan, karena sebelah kiri sudah tidak bisa diisi kembali
		}
	}
	
	if(newNode != Nil && (!isdigit(*infoo(newNode)) || ((*infoo(newNode) == '-' && isNegativeDigit(infoo(newNode))) && !isdigit(*(infoo(newNode)-1))))){ //Jika newNode yang dibentuk sebelumnya tidak NULL dan bukan berupa digit maka
		while(prev(temp)!=Nil){ //akan loop hingga isi postfix habis

			temp = prev(temp); //temp akan mundur dari linked list untuk menunjuk operator/angka selanjutnya

			if(isOperator2(*infoo(newNode))){	//jika newNode yang terbentuk sebelumnya adalah operan yang hanya membutuhkan 1 digit saja maka
				if((IsOperator1(info(temp)) && !isNumber(info(temp))) && !isOperator2(*info(temp))){ //jika info dari linked list yang ditunjuk oleh temp adalah operator, bukan number dan bukan operator yang membutuhkan angkanya 1 maka

					pcur = newNode;					//pcur akan menunjuk apa yang ditunjuk oleh newNode
					newNode = NewNode(info(temp));	//Membentuk sebuah node pada newNode, dari info yang ditunjuk oleh temp
					parent(newNode) = pcur;			//parent dari node nunjuk ke apa yang ditunjuk oleh pcur
					right(pcur) = newNode;			//subvar kanan dari pcur akan menunjuk apa yang ditunjuk oleh newNode
					
					if(left(pcur) == Nil){			//Jika sebelah kiri(subvar) dari pcur itu Nil maka
						newNode = NewNode("0");		//newNode akan membentuk sebuah node yang infonya berisikan 0
						parent(newNode) = pcur; 	//parent dari node nunjuk ke pcur
						left(pcur) = newNode;		//subvar kiri dari pcur akan menunjuk pada newNode

						newNode = right(pcur);		//kemudian newNode dipindahkan keseblah kanan, karena sebelah kiri sudah tidak bisa diisi kembali

						temp = prev(temp);			//temp akan mundur dari linked list untuk menunjuk operator/angka selanjutnya

					}
				}else{
					if(isOperator2(*info(temp))){		//Jika info yang ditunjuk oleh temp adalah operator yang hanya membutuhkan satu angka saja

						pcur = newNode;					//pcur akan menunjuk apa yang ditunjuk oleh newNode
						newNode = NewNode(info(temp));	//Membentuk sebuah node pada newNode, dari info yang ditunjuk oleh temp
						parent(newNode) = pcur;			//parent dari node nunjuk ke apa yang ditunjuk oleh pcur
						right(pcur) = newNode;			//subvar kanan dari pcur akan menunjuk apa yang ditunjuk oleh newNode
						
						if(left(pcur) == Nil){			//Jika sebelah kiri(subvar) dari pcur itu Nil maka
							newNode = NewNode("0");		//newNode akan membentuk sebuah node yang infonya berisikan 0
							parent(newNode) = pcur; 	//parent dari nood nunjuk ke root
							left(pcur) = newNode;		//subvar kiri dari pcur akan menunjuk pada newNode

							newNode = right(pcur);		//kemudian newNode dipindahkan keseblah kanan, karena sebelah kiri sudah tidak bisa diisi kembali

							temp = prev(temp);			//temp akan mundur dari linked list untuk menunjuk operator/angka selanjutnya

							pcur = newNode;				//pcur akan menunjuk apa yang ditunjuk oleh newNode
							newNode = NewNode("0");		//newNode akan membentuk sebuah node yang infonya berisikan 0
							parent(newNode) = pcur;		//parent dari node nunjuk ke apa yang ditunjuk oleh pcur
							left(pcur) = newNode;		//subvar kiri dari pcur akan menunjuk pada newNode

							newNode = parent(newNode);	//newNode akan menunjuk apa yang ditunjuk oleh parent(subvar) newNode

						}
					}else{
						pcur = newNode;					//pcur akan menunjuk apa yang ditunjuk oleh newNode
						newNode = NewNode(info(temp));	//Membentuk sebuah node pada newNode, dari info yang ditunjuk oleh temp
						parent(newNode) = pcur;			//parent dari node nunjuk ke apa yang ditunjuk oleh pcur
						right(pcur) = newNode;			//subvar kanan dari pcur akan menunjuk apa yang ditunjuk oleh newNode
			
						if(left(pcur) == Nil){			//Jika sebelah kiri(subvar) dari pcur itu Nil maka
							newNode = NewNode("0");		//newNode akan membentuk sebuah node yang infonya berisikan 0
							parent(newNode) = pcur; 	//parent dari node nunjuk ke apa yang ditunjuk oleh pcur
							left(pcur) = newNode;		//subvar kiri dari pcur akan menunjuk pada newNode

							pcur = newNode;				//pcur akan menunjuk apa yang ditunjuk oleh newNode
							if(prev(temp) == Nil){		//jika sebelum temp kosong atau NULL maka

								break;					//akan keluar dari loop ini
							}	

							if((IsOperator1(info(prev(temp))) && !isNumber(info(prev(temp))))){	//jika sebelum temp itu adalah operator dan bukan number maka

								temp = prev(temp);		//temp akan mundur dari linked list untuk menunjuk operator/angka selanjutnya
							}else if(isNumber(info(prev(temp)))){ //jika itu number yang ditunjuk sebelumnya oleh temp maka

								temp = prev(temp);		//temp akan mundur dari linked list untuk menunjuk operator/angka selanjutnya
							}
							if(temp == Nil){			//jika temp tidak menunjuk kemanapun maka
														
							}	
						}
					}
				}
			}
						
			
			if(right(newNode) == Nil && (!isdigit(*infoo(newNode)) || ((*infoo(newNode) == '-' && isNegativeDigit(infoo(newNode))) && !isdigit(*(infoo(newNode)-1))))){ //mengecek untuk bagian sebelah kanan right apakah Null?
				pcur = newNode; //pcur sama sama nunjuk newNode
				newNode = NewNode(info(temp)); ////Membentuk sebuah node pada newNode, dari info yang ditunjuk oleh temp
				parent(newNode) = pcur; //parent dari node nunjuk ke apa yang ditunjuk oleh pcur
				right(pcur) = newNode; //sebelah kanan dari pcur akan menunjuk newNode (node baru di malloc)
			
				if((isdigit(*infoo(newNode)) || ((*infoo(newNode) == '-' && isNegativeDigit(infoo(newNode))) && !isdigit(*(infoo(newNode)-1)))) && prev(temp)!=Nil){ //setelah malloc yang sebelumnya itu ditanya apakah ia digit? apabila tidak dia akan kembali loop ke atas

					temp = prev(temp); //temp akan mundur dari linked list untuk menunjuk operator/angka selanjutnya

					if(left(parent(newNode)) == Nil && !isOperator2(*infoo(newNode))){ //mengecek apakah sebelah kiri parentnya Null?, mengecek ke atas 
						newNode = NewNode(info(temp));	//Membentuk sebuah node pada newNode, dari info yang ditunjuk oleh temp
						parent(newNode) = pcur; 		//parent dari nood nunjuk ke root
						left(pcur) = newNode;			//subvar kiri dari pcur akan menunjuk pada newNode					
			
						if((isdigit(*infoo(left(pcur))) || ((*infoo(newNode) == '-' && isNegativeDigit(infoo(newNode))) && !isdigit(*(infoo(newNode)-1)))) && prev(temp) != Nil){ //setelah malloc yang sebelumnya apabila digit berada di sebelah kiri
							pcur = parent(pcur);		//pcur akan menunjuk pada subvar(parent) dari pcur itu sendiri
							while(pcur != Nil){			//Akan terus loop ketika pcur tidak sama dengan NULL
								if(left(pcur) == Nil){	//Jika sebelah kiri(subvar) pcur NULL maka
									temp = prev(temp);	//temp akan mundur dari linked list untuk menunjuk operator/angka selanjutnya
									newNode = NewNode(info(temp));	//Membentuk sebuah node pada newNode, dari info yang ditunjuk oleh temp
									parent(newNode) = pcur;			//parent dari node nunjuk ke apa yang ditunjuk oleh pcur
									left(pcur) = newNode;			//subvar kiri dari pcur akan menunjuk pada newNode

									pcur = newNode;					//pcur akan menunjuk apa yang ditunjuk oleh newNode
									break;							//akan keluar dari loop ini
								}
								pcur = parent(pcur);				//pcur akan menunjuk pada subvar(parent) dari pcur itu sendiri
							}					
						}
					}
					if(isOperator2(*infoo(parent(newNode)))){		//Jika parent dari newNode infonya adalah operator yang hanya membutuhkan 1 angka saja maka
						while(left(parent(newNode)) != Nil){		//Akan terus loop hingga parent sebelah kiri newNode tidak sama dengan NULL
							newNode = parent(newNode);				//newNode akan menunjuk apa yang ditunjuk oleh parent(subvar) newNode
						}
						newNode = parent(newNode);			//newNode akan menunjuk apa yang ditunjuk oleh parent(subvar) newNode
						pcur = newNode;						//pcur akan menunjuk apa yang ditunjuk oleh newNode
						if(left(newNode) == Nil){			//jika sebelah kiri(subvar) dari newNode sama dengan NULL maka
							newNode = NewNode(info(temp));	//Membentuk sebuah node pada newNode, dari info yang ditunjuk oleh temp
							parent(newNode) = pcur;			//parent dari node nunjuk ke apa yang ditunjuk oleh pcur
							left(pcur) = newNode;			//subvar kiri dari pcur akan menunjuk pada newNode

						}
					}
				}	
			}

			if((isdigit(*infoo((pcur))) || ((*infoo(newNode) == '-' && isNegativeDigit(infoo(newNode))) && !isdigit(*(infoo(newNode)-1))))){ //setelah malloc yang sebelumnya apabila digit berada di sebelah kiri
				pcur = parent(pcur);					//pcur akan menunjuk pada subvar(parent) dari pcur itu sendiri
				while(pcur != Nil){						//akan terus loop hingga pcur tidak sama dengan NULL
					if(left(pcur) == Nil){				//Jika sebelah kiri(subvar) pcur sama dengan NULL maka
						if((isNumber(info(prev(temp))) && prev(prev(temp)) == Nil) && isNumber(info(temp))){	//Jika info sebelum temp adalah angka dan sebelum sebelumnya temp adalah NULl maka
							temp = prev(temp);			//Maka temp akan mundur
						}
						newNode = NewNode(info(temp));	//Membentuk sebuah node pada newNode, dari info yang ditunjuk oleh temp
						parent(newNode) = pcur;			//parent dari node nunjuk ke apa yang ditunjuk oleh pcur
						left(pcur) = newNode;			//subvar kiri dari pcur akan menunjuk pada newNode
						pcur = newNode;					//pcur akan menunjuk apa yang ditunjuk oleh newNode
						break;							//akan keluar dari loop ini
					}
					pcur = parent(pcur);				//pcur akan menunjuk pada subvar(parent) dari pcur itu sendiri
				}			
			}
		}
	}
	
	pCur = root;	//pCur akan sama menunjuk pada root(dalam hal ini akan ada pointer baru yang akan memeriksa sebelah kanan root)
		
	if(IsOperator1(infoo(right(pCur))) && !isNumber(infoo(right(pCur)))){ //ketika sebelah kanannya operan 

		pCur = right(pCur); //pCur akan pindah ke sebelah kanan

		if(isOperator2(*infoo(pCur)) && !isNumber(infoo(right(pCur)))){	//jika yang ditunjuk oleh pCur adalah operator yang membutuhkan 1 angka saja dan bukan number di sebelah kanannya maka
			pCur = right(pCur);		//pCur akan pindah ke sebelah kanan
		}

		if(isNumber(infoo(right(pCur))) && isNumber(infoo(left(pCur)))){ //Jika sebelah kanan pCur itu angka dan juga sebelah kiri pCur angka maka  
			angka1 = atof(infoo(right(pCur)));					//variabel angka1 akan di assign dari hasil menggunakan atof(string to float) untuk sebelah kanannya pCur
			angka2 = atof(infoo(left(pCur)));					//variabel angka2 akan di assign dari hasil menggunakan atof(string to float) untuk sebelah kirinya pCur
			hasil = kalkulasi(angka1, angka2, infoo((pCur)));	//varabel hasil sebagai penampung untuk mengkalkulasikan angka1 dan angka2 yang dipassingkan pada modul kalkulasi
			sprintf(penampung, "%g", hasil);					//fungsi dari sprintf disini digunakan untuk mengubah float menjadi string lalu di assign pada penampung
			infoo(pCur) = penampung;							//info pCur sekarang digantikan oleh penampung yang sudah dikalkulasikan

			pCur = parent(pCur);		//pcur akan menunjuk pada subvar(parent) dari pcur itu sendiri
			strcpy(str10, penampung);	//lalu penampung tersebut akan dipindahkan kembali, karena sebuah pointer jadi terkadang suka terjadi kesalahan oleh karena itu dipindahkan pada str
			newNode = NewNode(str10);	//Akan membuat sebuah node yang infonya dari str itu sendiri
			parent(newNode) = pCur;		//parent dari node nunjuk ke apa yang ditunjuk oleh pcur
			free(right(pCur));			//Mendialloc(mendelete) sebelah kanan yang ditunjuk oleh pCur
			right(pCur) = newNode;		//subvar kanan dari pcur akan menunjuk apa yang ditunjuk oleh newNode
		}
		while(pCur != root){ //loop besar, ketika pCur tidak sama dengan root
		
			if(isOperator2(*infoo(pCur)) && !isNumber(infoo(right(pCur)))){ //Jika info yang ditunjuk oleh pCur adalah operan yang membutuhkan 1 angka, lalu bukan number sebelah kanannya
				pCur = right(pCur);		//pCur akan pindah ke sebelah kanan
			}
		
			while(IsOperator1(infoo(pCur)) && (!isNumber(infoo(right(pCur))) && !isNumber(infoo(left(pCur))))){ //ketika kanan dan kiri dari pCur (parent = operator) tidak sama digit keduanya
				pCur = right(pCur);							//pCur akan pindah ke sebelah kanan
				if(IsOperator1(infoo(pCur)) && (isNumber(infoo(right(pCur))) && isNumber(infoo(left(pCur))))){ //Jika info yang ditunjuk oleh pCur merupakan operator dan sebelah kanan dan kirinya dari pCur adalah angka
					angka1 = atof(infoo(right(pCur)));		//variabel angka1 akan di assign dari hasil menggunakan atof(string to float) untuk sebelah kanannya pCur
					angka2 = atof(infoo(left(pCur)));		//variabel angka2 akan di assign dari hasil menggunakan atof(string to float) untuk sebelah kirinya pCur
	
					hasil = kalkulasi(angka1, angka2, infoo((pCur)));	//varabel hasil sebagai penampung untuk mengkalkulasikan angka1 dan angka2 yang dipassingkan pada modul kalkulasi
					sprintf(penampung, "%g", hasil);					//fungsi dari sprintf disini digunakan untuk mengubah float menjadi string lalu di assign pada penampung
					infoo(pCur) = penampung;							//info pCur sekarang digantikan oleh penampung yang sudah dikalkulasikan

					pCur = parent(pCur);		//pcur akan menunjuk pada subvar(parent) dari pcur itu sendiri
					strcpy(str, penampung);		//lalu penampung tersebut akan dipindahkan kembali, karena sebuah pointer jadi terkadang suka terjadi kesalahan oleh karena itu dipindahkan pada str
					newNode = NewNode(str);		//Akan membuat sebuah node yang infonya dari str itu sendiri
					parent(newNode) = pCur;		//parent dari node nunjuk ke apa yang ditunjuk oleh pcur

					free(right(pCur));			//Mendialloc(mendelete) sebelah kanan yang ditunjuk oleh pCur
					right(pCur) = newNode;		//subvar kanan dari pcur akan menunjuk apa yang ditunjuk oleh newNode

					break;						//akan keluar dari loop ini
				}				
			}				
			
			if(IsOperator1(infoo(right(pCur)))){	//Jika sebelah kanan dari pCur adalah sebuah operator
				if((isNumber(infoo(right(pCur))) && isNumber(infoo(left(pCur))))){	//Jika sebelah kanan dan kirinya pCur adalah angka maka

					angka1 = atof(infoo(right(pCur)));		//variabel angka1 akan di assign dari hasil menggunakan atof(string to float) untuk sebelah kanannya pCur
					angka2 = atof(infoo(left(pCur)));		//variabel angka2 akan di assign dari hasil menggunakan atof(string to float) untuk sebelah kirinya pCur
		
					hasil = kalkulasi(angka1, angka2, infoo((pCur)));	//varabel hasil sebagai penampung untuk mengkalkulasikan angka1 dan angka2 yang dipassingkan pada modul kalkulasi
					sprintf(penampung, "%g", hasil);					//fungsi dari sprintf disini digunakan untuk mengubah float menjadi string lalu di assign pada penampung
					infoo(pCur) = penampung;							//info pCur sekarang digantikan oleh penampung yang sudah dikalkulasikan

					pCur = parent(pCur);		//pcur akan menunjuk pada subvar(parent) dari pcur itu sendiri
					strcpy(str1, penampung);	//lalu penampung tersebut akan dipindahkan kembali, karena sebuah pointer jadi terkadang suka terjadi kesalahan oleh karena itu dipindahkan pada str
					newNode = NewNode(str1);	//Akan membuat sebuah node yang infonya dari str itu sendiri
					parent(newNode) = pCur;		//parent dari node nunjuk ke apa yang ditunjuk oleh pcur

					free(right(pCur));			//Mendialloc(mendelete) sebelah kanan yang ditunjuk oleh pCur
					right(pCur) = newNode;		//subvar kanan dari pcur akan menunjuk apa yang ditunjuk oleh newNode

					break;						//akan keluar dari loop ini
				}
			}
			
			if(IsOperator1(infoo(left(pCur)))){		//Jika info sebelah kiri pCur adalah operator maka
				if(!isNumber(infoo(left(pCur)))){	//Jika info sebelah kiri pCur bukan berupa angka maka
					pCur = left(pCur);				//pCur akan berpindah keselah kiri yang ditunjuk oleh pCur

					while((IsOperator1(infoo(pCur)) && (!isNumber(infoo(right(pCur))) && !isNumber(infoo(left(pCur))))) && (pCur != right(root))){ //ketika kanan dan kiri dari pCur (parent = operator) tidak sama digit keduanya
						pCur = left(pCur);			//pCur akan berpindah keselah kiri yang ditunjuk oleh pCur

						while(IsOperator1(infoo(pCur)) && (isNumber(infoo(right(pCur))) && isNumber(infoo(left(pCur)))) && (pCur != right(root))){ //ketika info dari pCur adalah operator dan sebelah kanan kirinya berupa angka dan pCur tidak sama dengan apa yang ditunjuk sebelah kanan root

							angka1 = atof(infoo(right(pCur)));			//variabel angka1 akan di assign dari hasil menggunakan atof(string to float) untuk sebelah kanannya pCur
							angka2 = atof(infoo(left(pCur)));			//variabel angka2 akan di assign dari hasil menggunakan atof(string to float) untuk sebelah kirinya pCur
		
							hasil = kalkulasi(angka1, angka2, infoo((pCur)));	//varabel hasil sebagai penampung untuk mengkalkulasikan angka1 dan angka2 yang dipassingkan pada modul kalkulasi
							sprintf(penampung, "%g", hasil);					//fungsi dari sprintf disini digunakan untuk mengubah float menjadi string lalu di assign pada penampung
							infoo(pCur) = penampung;							//info pCur sekarang digantikan oleh penampung yang sudah dikalkulasikan

							pCur = parent(pCur);		//pcur akan menunjuk pada subvar(parent) dari pcur itu sendiri
							strcpy(str2, penampung);	//lalu penampung tersebut akan dipindahkan kembali, karena sebuah pointer jadi terkadang suka terjadi kesalahan oleh karena itu dipindahkan pada str
							newNode = NewNode(str2);	//Akan membuat sebuah node yang infonya dari str itu sendiri
							parent(newNode) = pCur;		//parent dari node nunjuk ke apa yang ditunjuk oleh pcur
							free(left(pCur));			//Mendialloc(mendelete) sebelah kiri yang ditunjuk oleh pCur
							left(pCur) = newNode;		//subvar kiri dari pcur akan menunjuk pada newNode

						}			
					}					

				}
				else if(IsOperator1(infoo(right(pCur))) && (pCur != right(root))){ //jika info sebelah kanannya pCur adalah operator dan zpCur tidak sama dengan apa yang ditunjuk sebelah kanan root
					pCur = right(pCur);				//pCur akan pindah ke sebelah kanan
					if(IsOperator1(infoo(pCur)) && (isNumber(infoo(right(pCur))) && isNumber(infoo(left(pCur)))) && (pCur != right(root))){ //jika info sebelah kanan pCur adalah operator dan sebelah kanan kirinya berupa angka dan pCur tidak sama dengan apa yang ditunjuk sebelah kanan root

						angka1 = atof(infoo(right(pCur)));			//variabel angka1 akan di assign dari hasil menggunakan atof(string to float) untuk sebelah kanannya pCur
						angka2 = atof(infoo(left(pCur)));			//variabel angka2 akan di assign dari hasil menggunakan atof(string to float) untuk sebelah kirinya pCur
	
						hasil = kalkulasi(angka1, angka2, infoo((pCur)));	//varabel hasil sebagai penampung untuk mengkalkulasikan angka1 dan angka2 yang dipassingkan pada modul kalkulasi
						sprintf(penampung, "%g", hasil);					//fungsi dari sprintf disini digunakan untuk mengubah float menjadi string lalu di assign pada penampung
						infoo(pCur) = penampung;							//info pCur sekarang digantikan oleh penampung yang sudah dikalkulasikan

						pCur = parent(pCur);		//pcur akan menunjuk pada subvar(parent) dari pcur itu sendiri
						strcpy(str3, penampung);	//lalu penampung tersebut akan dipindahkan kembali, karena sebuah pointer jadi terkadang suka terjadi kesalahan oleh karena itu dipindahkan pada str
						newNode = NewNode(str3);	//Akan membuat sebuah node yang infonya dari str itu sendiri
						parent(newNode) = pCur;		//parent dari node nunjuk ke apa yang ditunjuk oleh pcur

						free(right(pCur));			//Mendialloc(mendelete) sebelah kanan yang ditunjuk oleh pCur
						right(pCur) = newNode;		//subvar kanan dari pcur akan menunjuk apa yang ditunjuk oleh newNode

					}
				}
				if(IsOperator1(infoo(pCur)) && IsOperator1(infoo(parent(pCur)))){	//Jika info pCur adalah operator dan parent dari pCur adalah operar juga maka			
					while((isNumber(infoo(right(pCur))) && isNumber(infoo(left(pCur)))) && (pCur != right(root))){ //akan loop ketika kanan dan kirinya pCur adalah angka dan pCur tidak sama dengan apa yang ditunjuk sebelah kanan root

						angka1 = atof(infoo(right(pCur)));					//variabel angka1 akan di assign dari hasil menggunakan atof(string to float) untuk sebelah kanannya pCur
						angka2 = atof(infoo(left(pCur)));					//variabel angka2 akan di assign dari hasil menggunakan atof(string to float) untuk sebelah kirinya pCur
	
						hasil = kalkulasi(angka1, angka2, infoo((pCur)));	//varabel hasil sebagai penampung untuk mengkalkulasikan angka1 dan angka2 yang dipassingkan pada modul kalkulasi
						sprintf(penampung, "%g", hasil);					//fungsi dari sprintf disini digunakan untuk mengubah float menjadi string lalu di assign pada penampung
						infoo(pCur) = penampung;							//info pCur sekarang digantikan oleh penampung yang sudah dikalkulasikan

						pCur = parent(pCur);		//pcur akan menunjuk pada subvar(parent) dari pcur itu sendiri
						strcpy(str4, penampung);	//lalu penampung tersebut akan dipindahkan kembali, karena sebuah pointer jadi terkadang suka terjadi kesalahan oleh karena itu dipindahkan pada str
						newNode = NewNode(str4);	//Akan membuat sebuah node yang infonya dari str itu sendiri
						parent(newNode) = pCur;		//parent dari node nunjuk ke apa yang ditunjuk oleh pcur
						free(left(pCur));			//Mendialloc(mendelete) sebelah kiri yang ditunjuk oleh pCur
						left(pCur) = newNode;		//subvar kiri dari pcur akan menunjuk pada newNode

					}
				}
			}

		}

	}
	
	if(IsOperator1(infoo(left(pCur))) && !isNumber(infoo(left(pCur)))){ //ketika sebelah kanannya operan 

		pCur = left(pCur); 	//pCur akan berpindah keselah kiri yang ditunjuk oleh pCur

		if(isNumber(infoo(left(pCur)))){ //jika sebelah kiri pCur infonya adalah angka maka
			newNode = NewNode(infoo(left(pCur)));	//akan membuat sebuah node yang berisikan info dari sebelah kiri pCur
			parent(newNode) = pCur;		//parent dari node nunjuk ke apa yang ditunjuk oleh pcur
			left(pCur) = Nil;			//sebelah kiri dari pCur di NULL kan
			left(pCur) = newNode;		//subvar kiri dari pcur akan menunjuk pada newNode
	
		}
		while(pCur != root){ //loop besar		
			while(IsOperator1(infoo(pCur)) && (!isNumber(infoo(left(pCur))))){ //ketika kanan dan kiri dari pCur (parent = operator) tidak sama digit keduanya
				pCur = left(pCur);		//pCur akan berpindah keselah kiri yang ditunjuk oleh pCur

				if(IsOperator1(infoo(pCur)) && (isNumber(infoo(right(pCur))) && isNumber(infoo(left(pCur))))){ //Jika info yang ditunjuk oleh pCur merupakan operator dan sebelah kanan dan kirinya dari pCur adalah angka
					angka1 = atof(infoo(right(pCur)));					//variabel angka1 akan di assign dari hasil menggunakan atof(string to float) untuk sebelah kanannya pCur
					angka2 = atof(infoo(left(pCur)));					//variabel angka2 akan di assign dari hasil menggunakan atof(string to float) untuk sebelah kirinya pCur
		
					hasil = kalkulasi(angka1, angka2, infoo((pCur)));	//varabel hasil sebagai penampung untuk mengkalkulasikan angka1 dan angka2 yang dipassingkan pada modul kalkulasi
					sprintf(penampung, "%g", hasil);					//fungsi dari sprintf disini digunakan untuk mengubah float menjadi string lalu di assign pada penampung
					infoo(pCur) = penampung;							//info pCur sekarang digantikan oleh penampung yang sudah dikalkulasikan

					pCur = parent(pCur);		//pcur akan menunjuk pada subvar(parent) dari pcur itu sendiri
					strcpy(str5, penampung);	//lalu penampung tersebut akan dipindahkan kembali, karena sebuah pointer jadi terkadang suka terjadi kesalahan oleh karena itu dipindahkan pada str
					newNode = NewNode(str5);	//Akan membuat sebuah node yang infonya dari str itu sendiri
					parent(newNode) = pCur;		//parent dari node nunjuk ke apa yang ditunjuk oleh pcur

					free(left(pCur));			//Mendialloc(mendelete) sebelah kiri yang ditunjuk oleh pCur
					left(pCur) = newNode;		//subvar kiri dari pcur akan menunjuk pada newNode

					break;						//akan keluar dari loop ini

				}				
			}				

			if(IsOperator1(infoo(left(pCur)))){			//Jika info sebelah kiri pCur adalah operator maka

				while((isNumber(infoo(right(pCur))) && isNumber(infoo(left(pCur))))){	//akan loop ketika sebelah kanan dan kiri dari pCur adalah angka infonya

					angka1 = atof(infoo(right(pCur)));					//variabel angka1 akan di assign dari hasil menggunakan atof(string to float) untuk sebelah kanannya pCur
					angka2 = atof(infoo(left(pCur)));					//variabel angka2 akan di assign dari hasil menggunakan atof(string to float) untuk sebelah kirinya pCur
	
					hasil = kalkulasi(angka1, angka2, infoo((pCur)));	//varabel hasil sebagai penampung untuk mengkalkulasikan angka1 dan angka2 yang dipassingkan pada modul kalkulasi
					sprintf(penampung, "%g", hasil);					//fungsi dari sprintf disini digunakan untuk mengubah float menjadi string lalu di assign pada penampung
					infoo(pCur) = penampung;							//info pCur sekarang digantikan oleh penampung yang sudah dikalkulasikan
					pCur = parent(pCur);				//pcur akan menunjuk pada subvar(parent) dari pcur itu sendiri
					if(parent(pCur) == Nil){			//Jika parent dari pCur adalah NULL maka
						strcpy(str6, penampung);		//lalu penampung tersebut akan dipindahkan kembali, karena sebuah pointer jadi terkadang suka terjadi kesalahan oleh karena itu dipindahkan pada str
						newNode = NewNode(str6);		//Akan membuat sebuah node yang infonya dari str itu sendiri
						parent(newNode) = pCur;			//parent dari node nunjuk ke apa yang ditunjuk oleh pcur
						free(left(pCur));				//Mendialloc(mendelete) sebelah kiri yang ditunjuk oleh pCur

						left(pCur) = newNode;			//subvar kiri dari pcur akan menunjuk pada newNode

						break;							//akan keluar dari loop ini
					}else{								//Jika tidak maka
					strcpy(str6, penampung);			//lalu penampung tersebut akan dipindahkan kembali, karena sebuah pointer jadi terkadang suka terjadi kesalahan oleh karena itu dipindahkan pada str
					newNode = NewNode(str6);			//Akan membuat sebuah node yang infonya dari str itu sendiri
					parent(newNode) = pCur;				//parent dari node nunjuk ke apa yang ditunjuk oleh pcur
					if(pCur == left(parent(pCur))){		//Jika pCur sama dengan sebelah parent bagian kirinya pCur maka
						if(((infoo(parent(pCur)) == infoo(root)) && (infoo(right(pCur)) == infoo(newNode)))){	//jika info parent dari pCur sama dengan info root dan info dari kanannya pCur sama dengan info newNode maka
							free(left(pCur));			//Mendialloc(mendelete) sebelah kiri yang ditunjuk oleh pCur
							left(pCur) = newNode;		//subvar kiri dari pcur akan menunjuk pada newNode
						}else{							//Jika tidak maka
							if(IsOperator1(infoo(right(pCur))) && !isNumber(infoo(right(pCur)))){	//Jika sebelah kanan info dari pCur adalah operator dan sebelah kanannya bukan berupa angka maka
								free(left(pCur));		//Mendialloc(mendelete) sebelah kiri yang ditunjuk oleh pCur
								left(pCur) = newNode;	//subvar kiri dari pcur akan menunjuk pada newNode
							}else{						//Jika tidak maka
								break;					//akan keluar dari loop ini
							}	
						}	
					}else{								//Jika tidak maka

						free(left(pCur));				//Mendialloc(mendelete) sebelah kiri yang ditunjuk oleh pCur
						left(pCur) = newNode;			//subvar kiri dari pcur akan menunjuk pada newNode
					}

					}
				}
			}
			
			if((IsOperator1(infoo(right(pCur))) && !isNumber(infoo(right(pCur))))){	//Jika sebelah kanan info dari pCur adalah operator dan sebelah kanannya bukan berupa angka maka
				if(!isNumber(infoo(right(pCur)))){	//Jika sebelah kanan dari pCur itu bukan angka maka
					pCur1 = pCur;				//pCur1 akan sama sama menunjuk apa yang ditunjuk pCur
					pCur = right(pCur);			//pCur akan pindah ke sebelah kanan

					while((IsOperator1(infoo(pCur)) && (!isNumber(infoo(right(pCur))) && !isNumber(infoo(left(pCur))))) && (pCur != left(root))){ //ketika kanan dan kiri dari pCur (parent = operator) tidak sama digit keduanya
						pCur = right(pCur);		//pCur akan pindah ke sebelah kanan

						while(IsOperator1(infoo(pCur)) && (isNumber(infoo(right(pCur))) && isNumber(infoo(left(pCur)))) && (pCur != left(root))){ //Ketika info dari pCur adalah operator dan sebelah kanan kirinya adalah number kemudian kiri dari root tidak sama dengan pCur

							angka1 = atof(infoo(right(pCur)));					//variabel angka1 akan di assign dari hasil menggunakan atof(string to float) untuk sebelah kanannya pCur
							angka2 = atof(infoo(left(pCur)));					//variabel angka2 akan di assign dari hasil menggunakan atof(string to float) untuk sebelah kirinya pCur
							hasil = kalkulasi(angka1, angka2, infoo((pCur)));	//varabel hasil sebagai penampung untuk mengkalkulasikan angka1 dan angka2 yang dipassingkan pada modul kalkulasi
							sprintf(penampung, "%g", hasil);					//fungsi dari sprintf disini digunakan untuk mengubah float menjadi string lalu di assign pada penampung
							infoo(pCur) = penampung;							//info pCur sekarang digantikan oleh penampung yang sudah dikalkulasikan
							pCur = parent(pCur);			//pcur akan menunjuk pada subvar(parent) dari pcur itu sendiri
							strcpy(str7, penampung);		//lalu penampung tersebut akan dipindahkan kembali, karena sebuah pointer jadi terkadang suka terjadi kesalahan oleh karena itu dipindahkan pada str
							newNode = NewNode(str7);		//Akan membuat sebuah node yang infonya dari str itu sendiri
							parent(newNode) = pCur;			//parent dari node nunjuk ke apa yang ditunjuk oleh pcur
							free(right(pCur));				//Mendialloc(mendelete) sebelah kanan yang ditunjuk oleh pCur
							right(pCur) = newNode;			//subvar kanan dari pcur akan menunjuk apa yang ditunjuk oleh newNode
						}			
					}					
				}
				else if(IsOperator1(infoo(left(pCur))) && (pCur != left(root))){	//jika sebelah kiri dari pCur adalah operator dan kiri dari root tidak sama dengan pCur
					pCur = left(pCur);					//pCur akan berpindah keselah kiri yang ditunjuk oleh pCur
					if(IsOperator1(infoo(pCur)) && (isNumber(infoo(right(pCur))) && isNumber(infoo(left(pCur)))) && (pCur != left(root))){ //Ketika info dari pCur adalah operator dan sebelah kanan kirinya adalah number kemudian kiri dari root tidak sama dengan pCur
						angka1 = atof(infoo(right(pCur)));					//variabel angka1 akan di assign dari hasil menggunakan atof(string to float) untuk sebelah kanannya pCur
						angka2 = atof(infoo(left(pCur)));					//variabel angka2 akan di assign dari hasil menggunakan atof(string to float) untuk sebelah kirinya pCur
						hasil = kalkulasi(angka1, angka2, infoo((pCur)));	//varabel hasil sebagai penampung untuk mengkalkulasikan angka1 dan angka2 yang dipassingkan pada modul kalkulasi
						sprintf(penampung, "%g", hasil);					//fungsi dari sprintf disini digunakan untuk mengubah float menjadi string lalu di assign pada penampung
						infoo(pCur) = penampung;							//info pCur sekarang digantikan oleh penampung yang sudah dikalkulasikan
						pCur = parent(pCur);			//pcur akan menunjuk pada subvar(parent) dari pcur itu sendiri
						strcpy(str8, penampung);		//lalu penampung tersebut akan dipindahkan kembali, karena sebuah pointer jadi terkadang suka terjadi kesalahan oleh karena itu dipindahkan pada str
						newNode = NewNode(str8);		//Akan membuat sebuah node yang infonya dari str itu sendiri
						parent(newNode) = pCur;			//parent dari node nunjuk ke apa yang ditunjuk oleh pcur
						free(left(pCur));				//Mendialloc(mendelete) sebelah kiri yang ditunjuk oleh pCur
						left(pCur) = newNode;			//subvar kiri dari pcur akan menunjuk pada newNode
					}
				}
					if(IsOperator1(infoo(pCur)) && (isNumber(infoo(right(pCur))) && isNumber(infoo(left(pCur))))){	//Jika info yang ditunjuk oleh pCur merupakan operator dan sebelah kanan dan kirinya dari pCur adalah angka	
						while((isNumber(infoo(right(pCur))) && isNumber(infoo(left(pCur)))) && (pCur != left(root))){	//ketika sebelah kanan kirinya adalah number kemudian kiri dari root tidak sama dengan pCur
								angka1 = atof(infoo(right(pCur)));					//variabel angka1 akan di assign dari hasil menggunakan atof(string to float) untuk sebelah kanannya pCur
								angka2 = atof(infoo(left(pCur)));					//variabel angka2 akan di assign dari hasil menggunakan atof(string to float) untuk sebelah kirinya pCur
								hasil = kalkulasi(angka1, angka2, infoo((pCur)));	//varabel hasil sebagai penampung untuk mengkalkulasikan angka1 dan angka2 yang dipassingkan pada modul kalkulasi
								sprintf(penampung, "%g", hasil);					//fungsi dari sprintf disini digunakan untuk mengubah float menjadi string lalu di assign pada penampung
								infoo(pCur) = penampung;							//info pCur sekarang digantikan oleh penampung yang sudah dikalkulasikan
								pCur = parent(pCur);			//pcur akan menunjuk pada subvar(parent) dari pcur itu sendiri
								strcpy(str9, penampung);		//lalu penampung tersebut akan dipindahkan kembali, karena sebuah pointer jadi terkadang suka terjadi kesalahan oleh karena itu dipindahkan pada str
								newNode = NewNode(str9);		//Akan membuat sebuah node yang infonya dari str itu sendiri
								parent(newNode) = pCur;			//parent dari node nunjuk ke apa yang ditunjuk oleh pcur
							if(pCur == left(parent(pCur))){		//Jika pCur sama dengan sebelah parent kirinya pCur maka
								if(infoo(parent(pCur)) == infoo(root)){	//Jika info dari parent pCur sama dengan info dari root maka
									free(right(pCur));			//Mendialloc(mendelete) sebelah kanan yang ditunjuk oleh pCur
									right(pCur) = newNode;		//subvar kanan dari pcur akan menunjuk apa yang ditunjuk oleh newNode
								}else{							//Jika tidak maka
									break;						//akan keluar dari loop ini
								}	
							}else{								//Jika tidak maka
								free(right(pCur));				//Mendialloc(mendelete) sebelah kanan yang ditunjuk oleh pCur
								right(pCur) = newNode;			//subvar kanan dari pcur akan menunjuk apa yang ditunjuk oleh newNode
							}		
						}
					}
		}
	}
	
	}
		
	if(IsOperator1(infoo(pCur)) && (isNumber(infoo(right(pCur))) && isNumber(infoo(left(pCur))))){ 	//Jika info yang ditunjuk oleh pCur merupakan operator dan sebelah kanan dan kirinya dari pCur adalah angka
		angka1 = atof(infoo(right(pCur)));					//variabel angka1 akan di assign dari hasil menggunakan atof(string to float) untuk sebelah kanannya pCur
		angka2 = atof(infoo(left(pCur)));					//variabel angka2 akan di assign dari hasil menggunakan atof(string to float) untuk sebelah kirinya pCur
		hasil = kalkulasi(angka1, angka2, infoo((pCur)));	//varabel hasil sebagai penampung untuk mengkalkulasikan angka1 dan angka2 yang dipassingkan pada modul kalkulasi
		sprintf(penampung, "%g", hasil);					//fungsi dari sprintf disini digunakan untuk mengubah float menjadi string lalu di assign pada penampung
		infoo(pCur) = penampung;							//info pCur sekarang digantikan oleh penampung yang sudah dikalkulasikan
	}
	
	printf("\n\n\t\t\t\t\t\t --> HASIL KALKULASI ADALAH %s", infoo(pCur));	//Kemudian adalah hasil yang akan ditampilkan ketika sudah dikalkulasikan sebelumnya, akan memanggil info dari pCur
	
}
	

