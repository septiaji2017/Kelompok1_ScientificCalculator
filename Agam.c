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
char * removespaces(char * exp){

    char* x=malloc(266*sizeof(char));
    int i,j;
    for(i=0,j=0; exp[i]!='\0'; i++,j++)
    {

        while(exp[j]==' ')
            j++;
        x[i]=exp[j];
    }
    x[i]='\0';
    return x;
}

/****************************************************************************************************/
/* Initial State: Menampung operator bertipe char, pada modul ini berperan sebagai function 		*/
/* Final State: Memberikan nilai 0 hingga 4 menyesuaikan dengan operator yang diinputkan 	 		*/
/* Referensi Modul: - 										 								 		*/
/* Referensi Link: https://github.com/MohamedFarid612/Calculator-infix-to-postfix-/blob/main/main.c */ 
/****************************************************************************************************/
int priority(char x) 
{
    if (x == '(' || x == '~' || x == '{' || x == '<' || x == '[') //yg di masukkin adlh tanda pembuka
        return 0;
    if (x == '+' || x == '-')
        return 1;
    if (x == '*' || x == '/'|| x == '%' || x == 'd')
        return 2;
    if (x == '^' || x == 'v' || x == 'R') 
		return 3;
	if (x == '!' || x == 'i' || x == 'X' || x == 'a' || x == 'e' || x == 'K' || x == 'D' || x == 'L' || x == 'M'|| x == 'N'|| x == 'P'|| x == 'Q' || x == 'Z' || x == 'A' || x == 'B'|| x == 'C'|| x == 'V'|| x == 'G' || x == 'Y'|| x == 'T'|| x == 'U' || x == 'W' || x == 'p' || x == 'E')
		return 4;
    return 0;
}

/********************************************************************************************/
/* Initial State: Menampung angka bertipe string, pada modul ini berperan sebagai function 	*/
/* Final State: Memberikan nilai angka atau memberikan berupa false					 	 	*/
/* Referensi Modul: - 										 								*/
/* Referensi Link: -																		*/ 
/********************************************************************************************/
bool isNegativeDigit(char* c) 
{
    if (*c == '-') {
        c++;
        return isdigit(*c);
    }
    return false;
}

/******************************************************************************************************************/
/* Initial State: Menampung angka ataupun operan bertipe string, pada modul ini berperan sebagai function 		  */
/* Final State: Membuat sebuah node dengan 4 subvar yaitu info(angka atau operan), pointer kanan, kiri dan parent */
/* Referensi Modul: - 										 													  */
/* Referensi Link: -																							  */ 
/******************************************************************************************************************/
Address NewNode(infotype1 X)
{
	Address newNode;
	newNode = (Address) malloc(sizeof(nbTreeNode));
	if (newNode != NULL){
		infoo(newNode) = X;
		right(newNode) = Nil;
		left(newNode) = Nil;
		parent(newNode) = Nil;
	}
	return newNode;
}

/********************************************************************************************/
/* Initial State: Menampung operator bertipe char, pada modul ini berperan sebagai function */
/* Final State: Memberikan nilai 1 atau 2, pada modul ini berisikan seluruh operator		*/
/* Referensi Modul: - 										 								*/
/* Referensi Link: -																		*/ 
/********************************************************************************************/
int is_operator(char x) 
{
	if(x == '+' || x == '-' || x == '*' || x == '/' || x == '%' || x == 'd' || x == '^' || x == 'R' || x == '(' || x == ')' || x == '!' || x == 'v' || x == 'i' || x == 'X' || x == 'a' || x == 'e' || x == 'K' || x == 'D' || x == 'L' || x == 'M'|| x == 'N'|| x == 'P'|| x == 'Q' || x == 'Z'|| x == 'A' || x == 'B'|| x == 'C'|| x == 'V'|| x == 'G' || x == 'Y' || x == 'T'|| x == 'U' || x == 'W' || x == 'p' || x == 'E' || x == '|' || x == '}' || x == '>' || x == ']'){ // pake tanda penutup
    	return 1;
	}else{
		return 0;
	}	  
}

/********************************************************************************************/
/* Initial State: Menampung angka bertipe string, pada modul ini berperan sebagai function 	*/
/* Final State: Memberikan operator itu sendiri, pada modul ini untuk membandingkan saja	*/
/* Referensi Modul: - 										 								*/
/* Referensi Link: -																		*/ 
/********************************************************************************************/
infotype1 isOperator(infotype1 x)
{
	if((strcmp(x, "+")) == 0 || (strcmp(x, "-")) == 0 || (strcmp(x, "*")) == 0|| (strcmp(x, "/")) == 0|| (strcmp(x, "%")) == 0|| (strcmp(x, "d")) == 0|| (strcmp(x, "^")) == 0|| (strcmp(x, "R")) == 0 || (strcmp(x, "v")) == 0|| (strcmp(x, ")")) == 0|| (strcmp(x, "(")) == 0|| (strcmp(x, "!")) == 0|| (strcmp(x, "i")) == 0|| (strcmp(x, "X")) == 0|| (strcmp(x, "a")) == 0|| (strcmp(x, "e")) == 0|| (strcmp(x, "K")) == 0|| (strcmp(x, "D")) == 0|| (strcmp(x, "L")) == 0|| (strcmp(x, "M")) == 0|| (strcmp(x, "N")) == 0 || (strcmp(x, "P")) == 0 || (strcmp(x, "Q")) == 0 || (strcmp(x, "Z")) == 0 || (strcmp(x, "A")) == 0 || (strcmp(x, "B")) == 0 || (strcmp(x, "C")) == 0 || (strcmp(x, "V")) == 0 || (strcmp(x, "G")) == 0 || (strcmp(x, "Y")) == 0 || (strcmp(x, "T")) == 0 || (strcmp(x, "U")) == 0 || (strcmp(x, "W")) == 0 || (strcmp(x, "p")) == 0 || (strcmp(x, "E")) == 0 || (strcmp(x, "|")) == 0 || (strcmp(x, "}")) == 0 || (strcmp(x, ">")) == 0 || (strcmp(x, "]")) == 0){
		return x;
	}else{
		return x;
	}
}

/**********************************************************************************************/
/* Initial State: Menampung operator bertipe string, pada modul ini berperan sebagai function */
/* Final State: Membandingkan info yang sudah terbentuk apakah ada dalam operator			  */
/* Referensi Modul: - 										 								  */
/* Referensi Link: -																		  */ 
/**********************************************************************************************/
bool IsOperator1(infotype1 info)
{
	bool Operator;
	
	Operator = (strcmp((info), isOperator(info)) == 0);
	return Operator;
	
}

/**************************************************************************************************************************************/
/* Initial State: Menampung operator bertipe char, pada modul ini berperan sebagai function 										  */
/* Final State: Memberikan nilai 1 atau 0, pada modul ini dikhususkan untuk operator yang memang hanya membutuhkan node berisikan nol */
/* Referensi Modul: - 										 																		  */
/* Referensi Link: -																												  */ 
/**************************************************************************************************************************************/
int isOperator2(char x) 
{
    if(x == '!' || x == 'v' || x == 'i' || x == 'X' || x == 'a' || x == 'K' || x == 'D' || x == 'L' || x == 'M'|| x == 'N'|| x == 'P'|| x == 'Q' || x == 'Z'|| x == 'A'|| x == 'B' || x == 'C'|| x == 'V'|| x == 'G' || x == 'Y' || x == 'U' || x == 'W' || x == 'E' || x == '|' || x == '}' || x == '>' || x == ']'|| x == 'e' || x == 'p'){
		return 1;
	}else{
		return 0;
	} 
}

/********************************************************************************************/
/* Initial State: Menampung angka bertipe string, pada modul ini berperan sebagai function 	*/
/* Final State: Memberikan nilai berupa true atau false pada sebuah angka					*/
/* Referensi Modul: - 										 								*/
/* Referensi Link: -																		*/ 
/********************************************************************************************/
bool isNumber(infotype1 info)
{
	bool infoNumber;
	infoNumber = (isdigit(*info) || (*info) == '-' && isNegativeDigit(info) && !isdigit(*(info)-1));
	
	return infoNumber;
}

/********************************************************************************************/
/* Initial State: Menampung angka bertipe float, pada modul ini berperan sebagai function 	*/
/* Final State: Memberikan sebuah nilai yang sudah dikalkulasikan berupa pembulatan kebawah */
/* Referensi Modul: - 																		*/
/* Referensi Link: https://www.defantri.com/2022/10/mengenal-fungsi-floor-dan-ceiling.html  */ 
/********************************************************************************************/
float floorr(float x) {
	int floor_x = (int) x;
	if (x < 0 && x != floor_x) {
		floor_x--;
	}
	return floor_x;
}

/********************************************************************************************/
/* Initial State: Menampung angka bertipe float, pada modul ini berperan sebagai function 	*/
/* Final State: Memberikan sebuah nilai yang sudah dikalkulasikan berupa pembulatan keatas  */
/* Referensi Modul: - 																		*/
/* Referensi Link: https://www.defantri.com/2022/10/mengenal-fungsi-floor-dan-ceiling.html  */ 
/********************************************************************************************/
float ceil1(float x) {
	int ceil_x = (int) x;
	if (x > 0 && x != ceil_x) {
		ceil_x++;
	}
	return ceil_x;
}

/****************************************************************************************************************************************/
/* Initial State: Menampung angka bertipe float, pada modul ini berperan sebagai function 							 					*/
/* Final State: Memberikan sebuah nilai yang sudah dikalkulasikan berupa pembulatan kebawah maupun pembulatan keatas 					*/
/* Referensi Modul: - 																							   	 					*/
/* Referensi Link: https://www.detik.com/sulsel/berita/d-6516914/4-cara-mudah-membulatkan-angka-di-excel-ini-penjelasan-dan-tutorialnya */ 
/****************************************************************************************************************************************/
float round1(float x) {
	int rounded_x = (int) (x + (x >= 0 ? 0.5 : -0.5));
	return rounded_x;
}

/********************************************************************************************/
/* Initial State: Menampung angka bertipe float, pada modul ini berperan sebagai function 	*/
/* Final State: Memberikan sebuah nilai yang sudah dikalkulasikan berupa nilai yang absolut */
/* Referensi Modul: - 																		*/
/* Referensi Link: -  																		*/ 
/********************************************************************************************/
float abs1(float x) {
	return x >= 0 ? x : -x;
}

/**********************************************************************************************************************/
/* Initial State: Menampung angka1, angka2 dan juga operator bertipe string, pada modul ini berperan sebagai function */
/* Final State: Memberikan hasil kalkulasi yang sudah diperhitungkan dengan memanggil setiap fungsinya 				  */
/* Referensi Modul: - 										 														  */
/* Referensi Link: -																								  */ 
/**********************************************************************************************************************/
float kalkulasi(float angka1, float angka2, infotype1 x) 
{
	float hasil;

	if((strcmp(x, "v")) == 0) {
		hasil = f_akar(angka1);
		return hasil;
	} else if((strcmp(x, "^")) == 0) {
		if(angka2 == 0 && angka1 == 0){
			printf("\n\t\t\t\t\t\t\t --> Basis dan pangkat tidak bisa nol");
			exit(0);
		}else{
			if(angka2 == 0){
				hasil = 0;
				return hasil;
			}else{
				hasil = f_pangkat(angka2, angka1);
				return hasil;
			}
		}
	} else if((strcmp(x, "/")) == 0) {
		if(angka1 == 0){
			printf("\n\t\t\t\t\t\t\t\t --> Tidak bisa dibagi nol");
			exit(0);
		}else{
			hasil = pembagian(angka2, angka1);
			return hasil;
		}
	} else if((strcmp(x, "%")) == 0) {
		hasil = f_mod((int)angka2, (int)angka1);
		return hasil;
	} else if((strcmp(x, "d")) == 0) {
		div_t hasildiv;
		hasildiv = f_div(angka2, angka1);
		hasil = hasildiv.quot;
		return hasil;
	} else if((strcmp(x, "*")) == 0) {
		hasil = perkalian(angka2, angka1);
		return hasil;
	} else if((strcmp(x, "+")) == 0) {
		hasil = pertambahan(angka2, angka1);
		return hasil;
	} else if((strcmp(x, "-")) == 0) {
		hasil = pengurangan(angka2, angka1);
		return hasil;
	} else if((strcmp(x, "!")) == 0) {
		hasil = factorial(angka1);
		return hasil;
	} else if((strcmp(x, "R")) == 0) {
		hasil = f_akar_dinamis(angka1, angka2);
		return hasil;
	} else if((strcmp(x, "i")) == 0) {
		hasil = sine(angka1);
		return hasil;
	} else if((strcmp(x, "X")) == 0) {
		hasil = cosine(angka1);
		return hasil;
	} else if((strcmp(x, "a")) == 0) {
		hasil = tangent(angka1);
		return hasil;
	} else if((strcmp(x, "E")) == 0) {
		hasil = secant(angka1);
		return hasil;
	} else if((strcmp(x, "K")) == 0) {
		hasil = cosecant(angka1);
		return hasil;
	} else if((strcmp(x, "D")) == 0) {
		hasil = cotan(angka1);
		return hasil;
	} else if((strcmp(x, "M")) == 0) {
		hasil = sin(angka1);
		return hasil;
	} else if((strcmp(x, "L")) == 0) {
		hasil = cos(angka1);
		return hasil;
	} else if((strcmp(x, "N")) == 0) {
		hasil = tangen(angka1);
		return hasil;
	} else if((strcmp(x, "P")) == 0) {
		hasil = secan(angka1);
		return hasil;
	} else if((strcmp(x, "Q")) == 0) {
		hasil = cosecan(angka1);
		return hasil;
	} else if((strcmp(x, "Z")) == 0) {
		hasil = cot(angka1);
		return hasil;
	}else if((strcmp(x, "A")) == 0) {
		hasil = arccos(angka1);
		return hasil;
	}else if((strcmp(x, "B")) == 0) {
		hasil = arcsin(angka1);
		return hasil;
	}else if((strcmp(x, "C")) == 0) {
		hasil = arctan(angka1);
		return hasil;
	}else if((strcmp(x, "V")) == 0) {
		hasil = arcsec(angka1);
		return hasil;
	}else if((strcmp(x, "G")) == 0) {
		hasil = arccsc(angka1);
		return hasil;
	}else if((strcmp(x, "Y")) == 0) {
		hasil = arccot(angka1);
		return hasil;
	}else if((strcmp(x, "T")) == 0) {
		hasil = log_b(angka1, angka2);
		return hasil;
	}else if((strcmp(x, "U")) == 0) {
		hasil = log_10(angka1);
		return hasil;
	}else if((strcmp(x, "W")) == 0) {
		hasil = log_2(angka1);
		return hasil;
	}else if((strcmp(x, "|")) == 0) {
		hasil = abs1(angka1);
		return hasil;
	}else if((strcmp(x, "}")) == 0) {
		hasil = ceil1(angka1);
		return hasil;
	}else if((strcmp(x, ">")) == 0) {
		hasil = round1(angka1);
		return hasil;
	}else if((strcmp(x, "]")) == 0) {
		hasil = floorr(angka1);
		return hasil;
	}else if((strcmp(x, "p")) == 0) {
		hasil = 3.14;
		return hasil;
	}else if((strcmp(x, "e")) == 0) {
		hasil = 2.7182;
		return hasil;
	}
}

/**********************************************************************************************************************************************/
/* Initial State: Menampung sebuah linked list yang sudah tersedia 2 buah pointer First dan Last, pada modul ini berperan sebagai procedure   */
/* Final State: Membentuk sebuah tree yang sudah terbentuk setiap nodenya lalu memberikan hasil kalkulasinya					 	 	      */
/* Referensi Modul: - 										 																				  */
/* Referensi Link: -																														  */ 
/**********************************************************************************************************************************************/
void creat_tree(address * First, address * Last)
{
	address temp;
	Address root;
	Address newNode, pcur, pCur, pCur1;
	infotype1 karakter;
	float angka1 = 0, angka2 = 0, hasil = 0;
	infotype1 penampung, penampungAngka;
	float penampung1;
	int i = 0;
	float hasilAngka;
	char str[50], str1[50], str2[50], str3[50], str4[50], str5[50], str6[50], str7[50], str8[50], str9[50], str10[10], str11[50]; /* deklarasi variabel char */
	
	temp = *Last;
	newNode = NewNode(info(temp));
	root = newNode;
	if(isOperator2(*infoo(root))){
		temp = prev(temp);

		pcur = newNode;
		newNode = NewNode(info(temp));
		parent(newNode) = pcur;
		right(pcur) = newNode;

		if(left(pcur) == Nil){
			newNode = NewNode("0");
			parent(newNode) = pcur; //parent dari nood nunjuk ke root
			left(pcur) = newNode;
			newNode = right(pcur);
		}
	}
	
	if(newNode != Nil && (!isdigit(*infoo(newNode)) || ((*infoo(newNode) == '-' && isNegativeDigit(infoo(newNode))) && !isdigit(*(infoo(newNode)-1))))){
		while(prev(temp)!=Nil){ //akan loop hingga isi postfix habis

			temp = prev(temp); //tempnya mundur

			if(isOperator2(*infoo(newNode))){
				if((IsOperator1(info(temp)) && !isNumber(info(temp))) && !isOperator2(*info(temp))){

					pcur = newNode;
					newNode = NewNode(info(temp));
					parent(newNode) = pcur;
					right(pcur) = newNode;
					
					if(left(pcur) == Nil){
						newNode = NewNode("0");
						parent(newNode) = pcur; //parent dari nood nunjuk ke root
						left(pcur) = newNode;

						newNode = right(pcur);

						temp = prev(temp);

					}
				}else{
					if(isOperator2(*info(temp))){

						pcur = newNode;
						newNode = NewNode(info(temp));
						parent(newNode) = pcur;
						right(pcur) = newNode;
						
						if(left(pcur) == Nil){
							newNode = NewNode("0");
							parent(newNode) = pcur; //parent dari nood nunjuk ke root
							left(pcur) = newNode;

							newNode = right(pcur);

							temp = prev(temp);

							pcur = newNode;
							newNode = NewNode("0");
							parent(newNode) = pcur;
							left(pcur) = newNode;

							newNode = parent(newNode);

						}
					}else{
						pcur = newNode;
						newNode = NewNode(info(temp));
						parent(newNode) = pcur;
						right(pcur) = newNode;
			
						if(left(pcur) == Nil){
							newNode = NewNode("0");
							parent(newNode) = pcur; //parent dari nood nunjuk ke root
							left(pcur) = newNode;

							pcur = newNode;
							if(prev(temp) == Nil){

								break;
							}

							if((IsOperator1(info(prev(temp))) && !isNumber(info(prev(temp))))){

								temp = prev(temp);
							}else if(isNumber(info(prev(temp)))){

								temp = prev(temp);
							}
							if(temp == Nil){

							}	
						}
					}
				}
			}
						
			
			if(right(newNode) == Nil && (!isdigit(*infoo(newNode)) || ((*infoo(newNode) == '-' && isNegativeDigit(infoo(newNode))) && !isdigit(*(infoo(newNode)-1))))){ //mengecek untuk bagian sebelah kanan right apakah Null?
				pcur = newNode; //pcur sama sama nunjuk newNode
				newNode = NewNode(info(temp)); //membuat node baru
				parent(newNode) = pcur; //parent dari node baru nunjuk ke root (keatas)
				right(pcur) = newNode; //sebelah kanan dari pcur akan menunjuk newNode (node baru di malloc)
			
				if((isdigit(*infoo(newNode)) || ((*infoo(newNode) == '-' && isNegativeDigit(infoo(newNode))) && !isdigit(*(infoo(newNode)-1)))) && prev(temp)!=Nil){ //setelah malloc yang sebelumnya itu ditanya apakah ia digit? apabila tidak dia akan kembali loop ke atas

					temp = prev(temp); //tempnya mundur

					if(left(parent(newNode)) == Nil && !isOperator2(*infoo(newNode))){ //mengecek apakah sebelah kiri parentnya Null?, mengecek ke atas 
						newNode = NewNode(info(temp));
						parent(newNode) = pcur; //parent dari nood nunjuk ke root
						left(pcur) = newNode;					
			
						if((isdigit(*infoo(left(pcur))) || ((*infoo(newNode) == '-' && isNegativeDigit(infoo(newNode))) && !isdigit(*(infoo(newNode)-1)))) && prev(temp) != Nil){ //setelah malloc yang sebelumnya apabila digit berada di sebelah kiri
							pcur = parent(pcur);
							while(pcur != Nil){
								if(left(pcur) == Nil){
									temp = prev(temp);
									newNode = NewNode(info(temp));
									parent(newNode) = pcur;
									left(pcur) = newNode;

									pcur = newNode;
									break;
								}
								pcur = parent(pcur);
							}					
						}
					}
					if(isOperator2(*infoo(parent(newNode)))){
						while(left(parent(newNode)) != Nil){
							newNode = parent(newNode);
						}
						newNode = parent(newNode);
						pcur = newNode;
						if(left(newNode) == Nil){
							newNode = NewNode(info(temp));
							parent(newNode) = pcur;
							left(pcur) = newNode;

						}
					}
				}	
			}

			if((isdigit(*infoo((pcur))) || ((*infoo(newNode) == '-' && isNegativeDigit(infoo(newNode))) && !isdigit(*(infoo(newNode)-1))))){ //setelah malloc yang sebelumnya apabila digit berada di sebelah kiri
				pcur = parent(pcur);
				while(pcur != Nil){
					if(left(pcur) == Nil){
						newNode = NewNode(info(temp));
						parent(newNode) = pcur;
						left(pcur) = newNode;
						pcur = newNode;
						break;
					}
					pcur = parent(pcur);
				}			
			}
		}
	}
	
	pCur = root;
		
	if(IsOperator1(infoo(right(pCur))) && !isNumber(infoo(right(pCur)))){ //ketika sebelah kanannya operan 

		pCur = right(pCur); //pCur akan pindah ke kanan

		if(isOperator2(*infoo(pCur)) && !isNumber(infoo(right(pCur)))){
			pCur = right(pCur);
		}

		if(isNumber(infoo(right(pCur))) && isNumber(infoo(left(pCur)))){ 
			angka1 = atof(infoo(right(pCur)));
			angka2 = atof(infoo(left(pCur)));
			hasil = kalkulasi(angka1, angka2, infoo((pCur)));
			sprintf(penampung, "%g", hasil);
			infoo(pCur) = penampung;

			pCur = parent(pCur);
			strcpy(str10, penampung);
			newNode = NewNode(str10);
			parent(newNode) = pCur;
			free(right(pCur));
			right(pCur) = newNode;
		}
		while(pCur != root){ //loop besar
		
			if(isOperator2(*infoo(pCur)) && !isNumber(infoo(right(pCur)))){
				pCur = right(pCur);
			}
		
			while(IsOperator1(infoo(pCur)) && (!isNumber(infoo(right(pCur))) && !isNumber(infoo(left(pCur))))){ //ketika kanan dan kiri dari pCur (parent = operator) tidak sama digit keduanya
				pCur = right(pCur);
				if(IsOperator1(infoo(pCur)) && (isNumber(infoo(right(pCur))) && isNumber(infoo(left(pCur))))){
					angka1 = atof(infoo(right(pCur)));
					angka2 = atof(infoo(left(pCur)));
	
					hasil = kalkulasi(angka1, angka2, infoo((pCur)));
					sprintf(penampung, "%g", hasil);
					infoo(pCur) = penampung;

					pCur = parent(pCur);
					strcpy(str, penampung);
					newNode = NewNode(str);
					parent(newNode) = pCur;

					free(right(pCur));
					right(pCur) = newNode;

					break;
				}				
			}				
			
			if(IsOperator1(infoo(right(pCur)))){
				if((isNumber(infoo(right(pCur))) && isNumber(infoo(left(pCur))))){

					angka1 = atof(infoo(right(pCur)));
					angka2 = atof(infoo(left(pCur)));
		
					hasil = kalkulasi(angka1, angka2, infoo((pCur)));
					sprintf(penampung, "%g", hasil);
					infoo(pCur) = penampung;

					pCur = parent(pCur);
					strcpy(str1, penampung);
					newNode = NewNode(str1);
					parent(newNode) = pCur;

					free(right(pCur));
					right(pCur) = newNode;

					break;
				}
			}
			
			if(IsOperator1(infoo(left(pCur)))){
				if(!isNumber(infoo(left(pCur)))){
					pCur = left(pCur);

					while((IsOperator1(infoo(pCur)) && (!isNumber(infoo(right(pCur))) && !isNumber(infoo(left(pCur))))) && (pCur != right(root))){ //ketika kanan dan kiri dari pCur (parent = operator) tidak sama digit keduanya
						pCur = left(pCur);

						while(IsOperator1(infoo(pCur)) && (isNumber(infoo(right(pCur))) && isNumber(infoo(left(pCur)))) && (pCur != right(root))){

							angka1 = atof(infoo(right(pCur)));
							angka2 = atof(infoo(left(pCur)));
		
							hasil = kalkulasi(angka1, angka2, infoo((pCur)));
							sprintf(penampung, "%g", hasil);
							infoo(pCur) = penampung;

							pCur = parent(pCur);
							strcpy(str2, penampung);
							newNode = NewNode(str2);
							parent(newNode) = pCur;
							free(left(pCur));
							left(pCur) = newNode;

						}			
					}					

				}
				else if(IsOperator1(infoo(right(pCur))) && (pCur != right(root))){
					pCur = right(pCur);
					if(IsOperator1(infoo(pCur)) && (isNumber(infoo(right(pCur))) && isNumber(infoo(left(pCur)))) && (pCur != right(root))){

						angka1 = atof(infoo(right(pCur)));
						angka2 = atof(infoo(left(pCur)));
	
						hasil = kalkulasi(angka1, angka2, infoo((pCur)));
						sprintf(penampung, "%g", hasil);
						infoo(pCur) = penampung;

						pCur = parent(pCur);
						strcpy(str3, penampung);
						newNode = NewNode(str3);
						parent(newNode) = pCur;

						free(right(pCur));
						right(pCur) = newNode;

					}
				}
				if(IsOperator1(infoo(pCur)) && IsOperator1(infoo(parent(pCur)))){			
					while((isNumber(infoo(right(pCur))) && isNumber(infoo(left(pCur)))) && (pCur != right(root))){

						angka1 = atof(infoo(right(pCur)));
						angka2 = atof(infoo(left(pCur)));
	
						hasil = kalkulasi(angka1, angka2, infoo((pCur)));
						sprintf(penampung, "%g", hasil);
						infoo(pCur) = penampung;

						pCur = parent(pCur);
						strcpy(str4, penampung);
						newNode = NewNode(str4);
						parent(newNode) = pCur;
						free(left(pCur));
						left(pCur) = newNode;

					}
				}
			}

		}

	}
	
	if(IsOperator1(infoo(left(pCur))) && !isNumber(infoo(left(pCur)))){ //ketika sebelah kanannya operan 

		pCur = left(pCur); //pCur akan pindah ke kanan

		if(isNumber(infoo(left(pCur)))){ 
			newNode = NewNode(infoo(left(pCur)));
			parent(newNode) = pCur;
			left(pCur) = Nil;
			left(pCur) = newNode;

		}
		while(pCur != root){ //loop besar		
			while(IsOperator1(infoo(pCur)) && (!isNumber(infoo(left(pCur))))){ //ketika kanan dan kiri dari pCur (parent = operator) tidak sama digit keduanya
				pCur = left(pCur);

				if(IsOperator1(infoo(pCur)) && (isNumber(infoo(right(pCur))) && isNumber(infoo(left(pCur))))){
					angka1 = atof(infoo(right(pCur)));
					angka2 = atof(infoo(left(pCur)));
		
					hasil = kalkulasi(angka1, angka2, infoo((pCur)));
					sprintf(penampung, "%g", hasil);
					infoo(pCur) = penampung;

					pCur = parent(pCur);
					strcpy(str5, penampung);
					newNode = NewNode(str5);
					parent(newNode) = pCur;

					free(left(pCur));
					left(pCur) = newNode;

					break;

				}				
			}				

			if(IsOperator1(infoo(left(pCur)))){

				while((isNumber(infoo(right(pCur))) && isNumber(infoo(left(pCur))))){

					angka1 = atof(infoo(right(pCur)));
					angka2 = atof(infoo(left(pCur)));
	
					hasil = kalkulasi(angka1, angka2, infoo((pCur)));
					sprintf(penampung, "%g", hasil);
					infoo(pCur) = penampung;
					pCur = parent(pCur);
					if(parent(pCur) == Nil){
						strcpy(str6, penampung);
						newNode = NewNode(str6);
						parent(newNode) = pCur;
						free(left(pCur));

						left(pCur) = newNode;

						break;
					}else{
					strcpy(str6, penampung);
					newNode = NewNode(str6);
					parent(newNode) = pCur;
					if(pCur == left(parent(pCur))){
						if(((infoo(parent(pCur)) == infoo(root)) && (infoo(right(pCur)) == infoo(newNode)))){
							free(left(pCur));
							left(pCur) = newNode;
						}else{
							if(IsOperator1(infoo(right(pCur))) && !isNumber(infoo(right(pCur)))){
								free(left(pCur));
								left(pCur) = newNode;
							}else{

								break;
							}	
						}	
					}else{

						free(left(pCur));
						left(pCur) = newNode;
					}

					}
				}
			}
			
			if((IsOperator1(infoo(right(pCur))) && !isNumber(infoo(right(pCur))))){
				if(!isNumber(infoo(right(pCur)))){
					pCur1 = pCur;
					pCur = right(pCur);

					while((IsOperator1(infoo(pCur)) && (!isNumber(infoo(right(pCur))) && !isNumber(infoo(left(pCur))))) && (pCur != left(root))){ //ketika kanan dan kiri dari pCur (parent = operator) tidak sama digit keduanya
						pCur = right(pCur);

						while(IsOperator1(infoo(pCur)) && (isNumber(infoo(right(pCur))) && isNumber(infoo(left(pCur)))) && (pCur != left(root))){

							angka1 = atof(infoo(right(pCur)));
							angka2 = atof(infoo(left(pCur)));		
							hasil = kalkulasi(angka1, angka2, infoo((pCur)));
							sprintf(penampung, "%g", hasil);
							infoo(pCur) = penampung;
							pCur = parent(pCur);
							strcpy(str7, penampung);
							newNode = NewNode(str7);
							parent(newNode) = pCur;
							free(right(pCur));
							right(pCur) = newNode;
						}			
					}					
				}
				else if(IsOperator1(infoo(left(pCur))) && (pCur != left(root))){
					pCur = left(pCur);
					if(IsOperator1(infoo(pCur)) && (isNumber(infoo(right(pCur))) && isNumber(infoo(left(pCur)))) && (pCur != left(root))){
						angka1 = atof(infoo(right(pCur)));
						angka2 = atof(infoo(left(pCur)));	
						hasil = kalkulasi(angka1, angka2, infoo((pCur)));
						sprintf(penampung, "%g", hasil);
						infoo(pCur) = penampung;
						pCur = parent(pCur);
						strcpy(str8, penampung);
						newNode = NewNode(str8);
						parent(newNode) = pCur;
						free(left(pCur));
						left(pCur) = newNode;
					}
				}
					if(IsOperator1(infoo(pCur)) && (isNumber(infoo(right(pCur))) && isNumber(infoo(left(pCur))))){		
						while((isNumber(infoo(right(pCur))) && isNumber(infoo(left(pCur)))) && (pCur != left(root))){
								angka1 = atof(infoo(right(pCur)));
								angka2 = atof(infoo(left(pCur)));	
								hasil = kalkulasi(angka1, angka2, infoo((pCur)));
								sprintf(penampung, "%g", hasil);
								infoo(pCur) = penampung;
								pCur = parent(pCur);
								strcpy(str9, penampung);
								newNode = NewNode(str9);
								parent(newNode) = pCur;
							if(pCur == left(parent(pCur))){
								if(infoo(parent(pCur)) == infoo(root)){
									free(right(pCur));
									right(pCur) = newNode;
								}else{
									break;
								}	
							}else{
								free(right(pCur));
								right(pCur) = newNode;	
							}		
						}
					}
		}
	}
	
	}
		
	if(IsOperator1(infoo(pCur)) && (isNumber(infoo(right(pCur))) && isNumber(infoo(left(pCur))))){
		angka1 = atof(infoo(right(pCur)));
		angka2 = atof(infoo(left(pCur)));	
		hasil = kalkulasi(angka1, angka2, infoo((pCur)));
		sprintf(penampung, "%g", hasil);
		infoo(pCur) = penampung;	
	}
	
	printf("\n\n\t\t\t\t\t\t --> HASIL KALKULASI ADALAH %s", infoo(pCur));
	
}
	

