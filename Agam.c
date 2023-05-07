#include "Agam.h"
#include "Ridha.h"
#include "Mutia.h"
#include "Rico.h"
#include "Naufal.h"

/******************************************/
/* S P E S I F I K A S I   M O D U L  I I */
/******************************************/

int top = -1;
char stack[100];

void push(char x)
{
    stack[++top] = x;
}

char pop()
{
    if(top == -1)
        return -1;
    else
        return stack[top--];
}


void replaceNewLineBySpace(char *s){
    char *s1 = s;
    while((s1 = strstr(s1, "\n")) != NULL)
        *s1 = ' ';
}

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

bool isNegativeDigit(char* c) 
{
    if (*c == '-') {
        c++;
        return isdigit(*c);
    }
    return false;
}

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

int is_operator(char x) 
{
	if(x == '+' || x == '-' || x == '*' || x == '/' || x == '%' || x == 'd' || x == '^' || x == 'R' || x == '(' || x == ')' || x == '!' || x == 'v' || x == 'i' || x == 'X' || x == 'a' || x == 'e' || x == 'K' || x == 'D' || x == 'L' || x == 'M'|| x == 'N'|| x == 'P'|| x == 'Q' || x == 'Z'|| x == 'A' || x == 'B'|| x == 'C'|| x == 'V'|| x == 'G' || x == 'Y' || x == 'T'|| x == 'U' || x == 'W' || x == 'p' || x == 'E' || x == '|' || x == '}' || x == '>' || x == ']'){ // pake tanda penutup
    	return 1;
	}else{
		return 0;
	}	  
}

infotype1 isOperator(infotype1 x)
{
	if((strcmp(x, "+")) == 0 || (strcmp(x, "-")) == 0 || (strcmp(x, "*")) == 0|| (strcmp(x, "/")) == 0|| (strcmp(x, "%")) == 0|| (strcmp(x, "d")) == 0|| (strcmp(x, "^")) == 0|| (strcmp(x, "R")) == 0 || (strcmp(x, "v")) == 0|| (strcmp(x, ")")) == 0|| (strcmp(x, "(")) == 0|| (strcmp(x, "!")) == 0|| (strcmp(x, "i")) == 0|| (strcmp(x, "X")) == 0|| (strcmp(x, "a")) == 0|| (strcmp(x, "e")) == 0|| (strcmp(x, "K")) == 0|| (strcmp(x, "D")) == 0|| (strcmp(x, "L")) == 0|| (strcmp(x, "M")) == 0|| (strcmp(x, "N")) == 0 || (strcmp(x, "P")) == 0 || (strcmp(x, "Q")) == 0 || (strcmp(x, "Z")) == 0 || (strcmp(x, "A")) == 0 || (strcmp(x, "B")) == 0 || (strcmp(x, "C")) == 0 || (strcmp(x, "V")) == 0 || (strcmp(x, "G")) == 0 || (strcmp(x, "Y")) == 0 || (strcmp(x, "T")) == 0 || (strcmp(x, "U")) == 0 || (strcmp(x, "W")) == 0 || (strcmp(x, "p")) == 0 || (strcmp(x, "E")) == 0 || (strcmp(x, "|")) == 0 || (strcmp(x, "}")) == 0 || (strcmp(x, ">")) == 0 || (strcmp(x, "]")) == 0){
		return x;
	}else{
		return x;
	}
}

bool IsOperator1(infotype1 info)
{
	bool Operator;
	
	Operator = (strcmp((info), isOperator(info)) == 0);
	return Operator;
	
}

int isOperator2(char x) // utk 1 digit (kanan doang)
{
    if(x == '!' || x == 'v' || x == 'i' || x == 'X' || x == 'a' || x == 'K' || x == 'D' || x == 'L' || x == 'M'|| x == 'N'|| x == 'P'|| x == 'Q' || x == 'Z'|| x == 'A'|| x == 'B' || x == 'C'|| x == 'V'|| x == 'G' || x == 'Y' || x == 'U' || x == 'W' || x == 'E' || x == '|' || x == '}' || x == '>' || x == ']'|| x == 'e' || x == 'p'){
		return 1;
	}else{
		return 0;
	} 
}

bool isNumber(infotype1 info)
{
	bool infoNumber;
	infoNumber = (isdigit(*info) || (*info) == '-' && isNegativeDigit(info) && !isdigit(*(info)-1));
	
	return infoNumber;
}

float floorr(float x) {
	int floor_x = (int) x;
	if (x < 0 && x != floor_x) {
		floor_x--;
	}
	return floor_x;
}

float ceil1(float x) {
	int ceil_x = (int) x;
	if (x > 0 && x != ceil_x) {
		ceil_x++;
	}
	return ceil_x;
}

float round1(float x) {
	int rounded_x = (int) (x + (x >= 0 ? 0.5 : -0.5));
	return rounded_x;
}

float abs1(float x) {
	return x >= 0 ? x : -x;
}


float kalkulasi(float angka1, float angka2, infotype1 x) 
{
	float hasil;

	if((strcmp(x, "v")) == 0) {
		hasil = f_akar(angka1);
		printf("\nHasil akarnya: %g", hasil);
		return hasil;
	} else if((strcmp(x, "^")) == 0) {
		hasil = f_pangkat(angka2, angka1);
		printf("\nHasil pangkatnya: %g", hasil);
		return hasil;
	} else if((strcmp(x, "/")) == 0) {
		if(angka1 == 0){
			printf("\n\t\t\t\t\t\t\t\t --> Tidak bisa dibagi nol");
			exit(0);
		}else{
			hasil = pembagian(angka2, angka1);
			printf("\nHasil pembagian: %g", hasil);
			return hasil;
		}
	} else if((strcmp(x, "%")) == 0) {
		hasil = f_mod((int)angka2, (int)angka1);
		printf("\nHasil modulus: %g", hasil);
		return hasil;
	} else if((strcmp(x, "d")) == 0) {
		div_t hasildiv;
		hasildiv = f_div(angka2, angka1);
		hasil = hasildiv.quot;
		printf("\nHasil division: %g", hasil);
		return hasil;
	} else if((strcmp(x, "*")) == 0) {
		hasil = perkalian(angka2, angka1);
		printf("\nHasil perkalian: %g", hasil);
		return hasil;
	} else if((strcmp(x, "+")) == 0) {
		hasil = pertambahan(angka2, angka1);
		printf("\nHasil pertambahan: %g", hasil);
		return hasil;
	} else if((strcmp(x, "-")) == 0) {
		hasil = pengurangan(angka2, angka1);
		printf("\nHasil pengurangan: %g", hasil);
		return hasil;
	} else if((strcmp(x, "!")) == 0) {
		hasil = factorial(angka1);
		printf("\nHasil faktorial: %.2lf", hasil);
		return hasil;
	} else if((strcmp(x, "R")) == 0) {
		hasil = f_akar_dinamis(angka1, angka2);
		printf("\nHasil akar dinamis: %.2lf", hasil);
		return hasil;
	} else if((strcmp(x, "i")) == 0) {
		hasil = sine(angka1);
		printf("\nHasil sinus: %.2lf", hasil);
		return hasil;
	} else if((strcmp(x, "X")) == 0) {
		hasil = cosine(angka1);
		printf("\nHasil cosinus: %.2lf", hasil);
		return hasil;
	} else if((strcmp(x, "a")) == 0) {
		hasil = tangent(angka1);
		printf("\nHasil tangent: %.2lf", hasil);
		return hasil;
	} else if((strcmp(x, "E")) == 0) {
		hasil = secant(angka1);
		printf("\nHasil secan: %.2lf", hasil);
		return hasil;
	} else if((strcmp(x, "K")) == 0) {
		hasil = cosecant(angka1);
		printf("\nHasil cosecan: %.2lf", hasil);
		return hasil;
	} else if((strcmp(x, "D")) == 0) {
		hasil = cotan(angka1);
		printf("\nHasil cotan: %.2lf", hasil);
		return hasil;
	} else if((strcmp(x, "M")) == 0) {
		hasil = sin(angka1);
		printf("\nHasil radian sinus: %.2lf", hasil);
		return hasil;
	} else if((strcmp(x, "L")) == 0) {
		hasil = cos(angka1);
		printf("\nHasil radian cosinus: %.2lf", hasil);
		return hasil;
	} else if((strcmp(x, "N")) == 0) {
		hasil = tangen(angka1);
		printf("\nHasil radian tangent: %.2lf", hasil);
		return hasil;
	} else if((strcmp(x, "P")) == 0) {
		hasil = secan(angka1);
		printf("\nHasil radian secant: %.2lf", hasil);
		return hasil;
	} else if((strcmp(x, "Q")) == 0) {
		hasil = cosecan(angka1);
		printf("\nHasil radian cosecant: %.2lf", hasil);
		return hasil;
	} else if((strcmp(x, "Z")) == 0) {
		hasil = cot(angka1);
		printf("\nHasil radian cotan: %.2lf", hasil);
		return hasil;
	}else if((strcmp(x, "A")) == 0) {
		hasil = arccos(angka1);
		printf("\nHasil invers cos: %g", hasil);
		return hasil;
	}else if((strcmp(x, "B")) == 0) {
		hasil = arcsin(angka1);
		printf("\nHasil invers sin: %g", hasil);
		return hasil;
	}else if((strcmp(x, "C")) == 0) {
		hasil = arctan(angka1);
		printf("\nHasil invers tangent: %g", hasil);
		return hasil;
	}else if((strcmp(x, "V")) == 0) {
		hasil = arcsec(angka1);
		printf("\nHasil invers secant: %g", hasil);
		return hasil;
	}else if((strcmp(x, "G")) == 0) {
		hasil = arccsc(angka1);
		printf("\nHasil invers cosecant: %g", hasil);
		return hasil;
	}else if((strcmp(x, "Y")) == 0) {
		hasil = arccot(angka1);
		printf("\nHasil invers cotant: %g", hasil);
		return hasil;
	}else if((strcmp(x, "T")) == 0) {
		hasil = log_b(angka1, angka2);
		printf("\nHasil log (basis inputan): %g", hasil);
		return hasil;
	}else if((strcmp(x, "U")) == 0) {
		hasil = log_10(angka1);
		printf("\nHasil lg (basis 10): %g", hasil);
		return hasil;
	}else if((strcmp(x, "W")) == 0) {
		hasil = log_2(angka1);
		printf("\nHasil ln (logaritma natural): %g", hasil);
		return hasil;
	}else if((strcmp(x, "|")) == 0) {
		hasil = abs1(angka1);
		printf("\nHasil mutlak: %g", hasil);
		return hasil;
	}else if((strcmp(x, "}")) == 0) {
		hasil = ceil1(angka1);
		printf("\nHasil ceil: %g", hasil);
		return hasil;
	}else if((strcmp(x, ">")) == 0) {
		hasil = round1(angka1);
		printf("\nHasil round: %g", hasil);
		return hasil;
	}else if((strcmp(x, "]")) == 0) {
		hasil = floorr(angka1);
		printf("\nHasil floor: %g", hasil);
		return hasil;
	}else if((strcmp(x, "p")) == 0) {
		hasil = 3.14;
		printf("\nHasil pi: %g", hasil);
		return hasil;
	}else if((strcmp(x, "e")) == 0) {
		hasil = 2.7182;
		printf("\nHasil exponent: %g", hasil);
		return hasil;
	}
}

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
		printf("\n INFOO TEMP %s", info(temp));
		pcur = newNode;
		newNode = NewNode(info(temp));
		parent(newNode) = pcur;
		right(pcur) = newNode;
		printf("\n");
		printf("\nnewNode infonya %s", infoo(newNode)); //harusnya /
		printf("\nisi kanan dari parentnya %s", infoo(right(pcur))); //harusnya /
		printf("\nisi parent dari node %s", infoo(parent(newNode))); //harusnya +
		
		if(left(pcur) == Nil){
			newNode = NewNode("0");
			parent(newNode) = pcur; //parent dari nood nunjuk ke root
			left(pcur) = newNode;
			printf("\n");
			printf("\nnewNode infonya1 %s", infoo(newNode)); //harusnya /
			printf("\nisi kiri dari parentnya1 %s", infoo(left(pcur))); //harusnya /
			printf("\nisi parent dari node1 %s", infoo(parent(newNode))); //harusnya +
			newNode = right(pcur);
		}
	}
	
	printf("\nroot %s", infoo(newNode)); //harusnya +
	if(newNode != Nil && (!isdigit(*infoo(newNode)) || ((*infoo(newNode) == '-' && isNegativeDigit(infoo(newNode))) && !isdigit(*(infoo(newNode)-1))))){
		while(prev(temp)!=Nil){ //akan loop hingga isi postfix habis
//			printf("\ninfoo sebelum temP %s", info(temp));
			temp = prev(temp); //tempnya mundur
//			printf("\ninfoo setelah temP %s", info(temp));
			if(isOperator2(*infoo(newNode))){
				if((IsOperator1(info(temp)) && !isNumber(info(temp))) && !isOperator2(*info(temp))){
					printf("\n INFOO TEMP11 %s", info(temp));
					pcur = newNode;
					newNode = NewNode(info(temp));
					parent(newNode) = pcur;
					right(pcur) = newNode;
					printf("\n");
					printf("\nnewNode infonya %s", infoo(newNode)); //harusnya /
					printf("\nisi kanan dari parentnya %s", infoo(right(pcur))); //harusnya /
					printf("\nisi parent dari node %s", infoo(parent(newNode))); //harusnya +
					
					if(left(pcur) == Nil){
						newNode = NewNode("0");
						parent(newNode) = pcur; //parent dari nood nunjuk ke root
						left(pcur) = newNode;
						printf("\n");
						printf("\nnewNode infonya1 %s", infoo(newNode)); //harusnya /
						printf("\nisi kiri dari parentnya1 %s", infoo(left(pcur))); //harusnya /
						printf("\nisi parent dari node1 %s", infoo(parent(newNode))); //harusnya +
						newNode = right(pcur);
						printf("\ninfoo sebelum temp0 %s", info(temp));
						temp = prev(temp);
						printf("\ninfoo setelah temp0 %s", info(temp));
					}
				}else{
					if(isOperator2(*info(temp))){
						printf("\nMASUKK GAISS");
						pcur = newNode;
						newNode = NewNode(info(temp));
						parent(newNode) = pcur;
						right(pcur) = newNode;
						printf("\n");
						printf("\nnewNode infonyah %s", infoo(newNode)); //harusnya /
						printf("\nisi kanan dari parentnyah %s", infoo(right(pcur))); //harusnya /
						printf("\nisi parent dari nodeh %s", infoo(parent(newNode))); //harusnya +
						
						if(left(pcur) == Nil){
							newNode = NewNode("0");
							parent(newNode) = pcur; //parent dari nood nunjuk ke root
							left(pcur) = newNode;
							printf("\n");
							printf("\nnewNode infonya1 %s", infoo(newNode)); //harusnya /
							printf("\nisi kiri dari parentnya1 %s", infoo(left(pcur))); //harusnya /
							printf("\nisi parent dari node1 %s", infoo(parent(newNode))); //harusnya +
							newNode = right(pcur);
							printf("\ninfoo sebelum temp0 %s", info(temp));
							temp = prev(temp);
							printf("\nnewNode infonya12 %s", infoo(newNode));
							pcur = newNode;
							newNode = NewNode("0");
							parent(newNode) = pcur;
							left(pcur) = newNode;
							printf("\n\nnewNode infonya111 %s", infoo(newNode)); //harusnya /
							printf("\nisi kiri dari parentnya111 %s", infoo(left(pcur))); //harusnya /
							printf("\nisi parent dari node111 %s", infoo(parent(newNode))); //harusnya +
	//						temp = prev(temp);
							newNode = parent(newNode);
							printf("\n\nnewNode infonya1112 %s", infoo(newNode));
							printf("\ninfoo setelah temp0 %s", info(temp));
	//						printf("\ninfoo setelah temp1 %s", info(prev(temp)));
						}
					}else{
						pcur = newNode;
						newNode = NewNode(info(temp));
						parent(newNode) = pcur;
						right(pcur) = newNode;
						printf("\n");
						printf("\nnewNode infonya2 %s", infoo(newNode)); //harusnya /
						printf("\nisi kanan dari parentnya2 %s", infoo(right(pcur))); //harusnya /
						printf("\nisi parent dari node2 %s", infoo(parent(newNode))); //harusnya +
						
						if(left(pcur) == Nil){
							newNode = NewNode("0");
							parent(newNode) = pcur; //parent dari nood nunjuk ke root
							left(pcur) = newNode;
							printf("\n");
							printf("\nnewNode infonya1 %s", infoo(newNode)); //harusnya /
							printf("\nisi kiri dari parentnya1 %s", infoo(left(pcur))); //harusnya /
							printf("\nisi parent dari node1 %s", infoo(parent(newNode))); //harusnya +
							pcur = newNode;
							if(prev(temp) == Nil){
								printf("\nMasuk0");
								break;
							}
							printf("\ninfoo sebelum temp1 %s", info(temp));
							printf("\ninfoo sesudah temp1 %s", info(prev(temp)));
							if((IsOperator1(info(prev(temp))) && !isNumber(info(prev(temp))))){
								printf("\nMasuk1");
								temp = prev(temp);
							}else if(isNumber(info(prev(temp)))){
								printf("\nMasuk2");
								temp = prev(temp);
							}
							if(temp == Nil){
								printf("\ncek aja");
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
				printf("\n");
				printf("\nnewNode infonya %s", infoo(newNode)); //harusnya /
				printf("\nisi kanan dari parentnya %s", infoo(right(pcur))); //harusnya /
				printf("\nisi parent dari node %s", infoo(parent(newNode))); //harusnya +
				
				if((isdigit(*infoo(newNode)) || ((*infoo(newNode) == '-' && isNegativeDigit(infoo(newNode))) && !isdigit(*(infoo(newNode)-1)))) && prev(temp)!=Nil){ //setelah malloc yang sebelumnya itu ditanya apakah ia digit? apabila tidak dia akan kembali loop ke atas
//					printf("\ninfoo sebelum temp2 %s", info(temp));
					temp = prev(temp); //tempnya mundur
//					printf("\ninfoo sebelum temp2 %s", info(temp));
					if(left(parent(newNode)) == Nil && !isOperator2(*infoo(newNode))){ //mengecek apakah sebelah kiri parentnya Null?, mengecek ke atas 
						//pcur = parent(newNode); 
						newNode = NewNode(info(temp));
						parent(newNode) = pcur; //parent dari nood nunjuk ke root
						left(pcur) = newNode;
						printf("\n");
						printf("\nnewNode infonya1 %s", infoo(newNode)); //harusnya /
						printf("\nisi kiri dari parentnya1 %s", infoo(left(pcur))); //harusnya /
						printf("\nisi parent dari node1 %s", infoo(parent(newNode))); //harusnya +
						
			
						if((isdigit(*infoo(left(pcur))) || ((*infoo(newNode) == '-' && isNegativeDigit(infoo(newNode))) && !isdigit(*(infoo(newNode)-1)))) && prev(temp) != Nil){ //setelah malloc yang sebelumnya apabila digit berada di sebelah kiri
							pcur = parent(pcur);
							while(pcur != Nil){
								if(left(pcur) == Nil){
//									printf("\ninfoo sebelum temp3 %s", info(temp));
									temp = prev(temp);
//									printf("\ninfoo setelah temp3 %s", info(temp));
									newNode = NewNode(info(temp));
									parent(newNode) = pcur;
									left(pcur) = newNode;
									printf("\n");
									printf("\nnewNode infonya2 %s", infoo(newNode)); //harusnya /
									printf("\nisi kiri dari parentnya2 %s", infoo(left(pcur))); //harusnya /
									printf("\nisi parent dari node2 %s", infoo(parent(newNode))); //harusnya +
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
						printf("\n\nMASUKK");
						printf("\n\nNewNode%s", infoo(newNode));
						printf("\nINFOO TEMPPP %s", info(temp));
						pcur = newNode;
						if(left(newNode) == Nil){
							newNode = NewNode(info(temp));
							parent(newNode) = pcur;
							left(pcur) = newNode;
							printf("\n");
							printf("\nnewNode infonya23 %s", infoo(newNode)); //harusnya /
							printf("\nisi kiri dari parentnya23 %s", infoo(left(pcur))); //harusnya /
							printf("\nisi parent dari node23 %s", infoo(parent(newNode))); //harusnya +
							printf("\nisi kanan dari parentnya23 %s", infoo(right(pcur))); //harusnya /
							printf("\nisi kanan2 dari parentnya23 %s", infoo(right(right(pcur)))); //harusnya /
							printf("\nisi kanan3 dari parentnya23 %s", infoo(right(right(right(pcur))))); //harusnya /
							printf("\nisi kiri(0) dari parentnya23 %s", infoo(left(right(pcur)))); //harusnya /
							printf("\nisi kiri2(0) dari parentnya23 %s", infoo(left(right(right(pcur))))); //harusnya /
						}
					}
				}	
			}

			//printf("\ninfoo temp4 %s", info(prev(temp)));
//			if(info(temp) == Nil){
//				break;
//			}
			//printf("\ninfoo newNodeee %s", infoo(newNode));
			if((isdigit(*infoo((pcur))) || ((*infoo(newNode) == '-' && isNegativeDigit(infoo(newNode))) && !isdigit(*(infoo(newNode)-1))))){ //setelah malloc yang sebelumnya apabila digit berada di sebelah kiri
				pcur = parent(pcur);
				while(pcur != Nil){
					if(left(pcur) == Nil){
//						printf("\ninfoo sebelum temp4 %s", info(temp));
						//temp = prev(temp);
//						printf("\ninfoo setelah temp4 %s", info(temp));
						newNode = NewNode(info(temp));
						parent(newNode) = pcur;
						left(pcur) = newNode;
						printf("\n");
						printf("\nnewNode infonya3 %s", infoo(newNode)); //harusnya /
						printf("\nisi kiri dari parentnya3 %s", infoo(left(pcur))); //harusnya /
						printf("\nisi parent dari node3 %s", infoo(parent(newNode))); //harusnya +
						pcur = newNode;
						break;
					}
					pcur = parent(pcur);
				}			
			}
		}
	}
	printf("\nRootnyaa %s", infoo(root));
	
	
	pCur = root;
	printf("\nRootnyaa11 %s", infoo(pCur));
	printf("\nKanan Rootnya %s", infoo(right(root)));
	
	
	if(IsOperator1(infoo(right(pCur))) && !isNumber(infoo(right(pCur)))){ //ketika sebelah kanannya operan 
		printf("\nMasukk");
		printf("\nngecek aja0 %s", infoo(pCur));
		pCur = right(pCur); //pCur akan pindah ke kanan
		printf("\nngecek aja3 %s", infoo(pCur));
		if(isOperator2(*infoo(pCur)) && !isNumber(infoo(right(pCur)))){
			pCur = right(pCur);
		}
//		printf("\nngecek aja1 %s", infoo(pCur));
//		printf("\nngecek aja1 %s", infoo(right(pCur)));
//		printf("\nngecek aja1 %s", infoo(left(pCur)));
//		printf("\nngecek aja1 %s", infoo(right(right(pCur))));
//		printf("\nngecek aja1 %s", infoo(left(right(pCur))));
		//pCur = right(pCur); //pCur akan pindah ke kanan
		if(isNumber(infoo(right(pCur))) && isNumber(infoo(left(pCur)))){ 
			angka1 = atof(infoo(right(pCur)));
			angka2 = atof(infoo(left(pCur)));
			printf("\nangka1 %g", angka1);
			printf("\nangka2 %g", angka2);		
			hasil = kalkulasi(angka1, angka2, infoo((pCur)));
			sprintf(penampung, "%g", hasil);
			infoo(pCur) = penampung;
			printf("\nngecek aja (hassil)0 %s", infoo(pCur));
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
					printf("\n\nangka1 %g", angka1);
					printf("\nangka2 %g", angka2);		
					hasil = kalkulasi(angka1, angka2, infoo((pCur)));
					sprintf(penampung, "%g", hasil);
					infoo(pCur) = penampung;
					printf("\nngecek aja (hassil)2 %s", infoo(pCur));
					printf("\nngecek aja parent2 %s", infoo(parent(pCur)));
					pCur = parent(pCur);
					strcpy(str, penampung);
					newNode = NewNode(str);
					parent(newNode) = pCur;
					//right(pCur) = Nil;
					free(right(pCur));
					right(pCur) = newNode;
					printf("\nngecek ajaaa2 %s", infoo(right(pCur)));
					printf("\nngecek aja parent2 %s", infoo(parent(newNode)));
					printf("\nPosisi pcur adalah2 %s", infoo(pCur));
					break;
				}				
			}				
			
			if(IsOperator1(infoo(right(pCur)))){
				if((isNumber(infoo(right(pCur))) && isNumber(infoo(left(pCur))))){
					printf("\n\nPOSISI PCUR DIMANASI3 %s", infoo(pCur));
					angka1 = atof(infoo(right(pCur)));
					angka2 = atof(infoo(left(pCur)));
					printf("\nangka1 %g", angka1);
					printf("\nangka2 %g", angka2);		
					hasil = kalkulasi(angka1, angka2, infoo((pCur)));
					sprintf(penampung, "%g", hasil);
					infoo(pCur) = penampung;
					printf("\nngecek aja (hassil)3 %s", infoo(pCur));
					printf("\nngecek aja parent3 %s", infoo(parent(pCur)));
					pCur = parent(pCur);
					strcpy(str1, penampung);
					newNode = NewNode(str1);
					parent(newNode) = pCur;
					//right(pCur) = Nil;
					free(right(pCur));
					right(pCur) = newNode;
					printf("\nngecek ajaaa3 %s", infoo(right(pCur)));
					printf("\nngecek aja parent3 %s", infoo(parent(newNode)));
					printf("\nPosisi pcur adalah3 %s", infoo(pCur));
					printf("\nPosisi pcur adalah311 %s", infoo(left(pCur)));
					break;
				}
			}
			
			if(IsOperator1(infoo(left(pCur)))){
				if(!isNumber(infoo(left(pCur)))){
					pCur = left(pCur);
					printf("\nPcur setelah digeser (loop1)4 %s", infoo(pCur));
					while((IsOperator1(infoo(pCur)) && (!isNumber(infoo(right(pCur))) && !isNumber(infoo(left(pCur))))) && (pCur != right(root))){ //ketika kanan dan kiri dari pCur (parent = operator) tidak sama digit keduanya
						pCur = left(pCur);
						printf("\nMASUUUK");
						while(IsOperator1(infoo(pCur)) && (isNumber(infoo(right(pCur))) && isNumber(infoo(left(pCur)))) && (pCur != right(root))){
							printf("\n\nPOSISI PCUR DIMANASI4 %s", infoo(pCur));
							angka1 = atof(infoo(right(pCur)));
							angka2 = atof(infoo(left(pCur)));
							printf("\nangka1 %g", angka1);
							printf("\nangka2 %g", angka2);		
							hasil = kalkulasi(angka1, angka2, infoo((pCur)));
							sprintf(penampung, "%g", hasil);
							infoo(pCur) = penampung;
							printf("\nngecek aja (hassil)4 %s", infoo(pCur));
							printf("\nngecek aja parent4 %s", infoo(parent(pCur)));
							pCur = parent(pCur);
							strcpy(str2, penampung);
							newNode = NewNode(str2);
							parent(newNode) = pCur;
							free(left(pCur));
							left(pCur) = newNode;
							printf("\nngecek ajaaa4 %s", infoo(right(pCur)));
							printf("\nngecek aja parent4 %s", infoo(parent(newNode)));
							printf("\nPosisi pcur adalah4 %s", infoo(pCur));
							printf("\nngecek ajaaa4 %s", infoo(left(pCur)));
							//break;
						}			
					}					
					printf("\nPcur sekaarang di (loop1)41 %s", infoo(pCur));
				}
				else if(IsOperator1(infoo(right(pCur))) && (pCur != right(root))){
					pCur = right(pCur);
					if(IsOperator1(infoo(pCur)) && (isNumber(infoo(right(pCur))) && isNumber(infoo(left(pCur)))) && (pCur != right(root))){
						printf("\n\nPOSISI PCUR DIMANASI5 %s", infoo(pCur));
						angka1 = atof(infoo(right(pCur)));
						angka2 = atof(infoo(left(pCur)));
						printf("\nangka1 %g", angka1);
						printf("\nangka2 %g", angka2);		
						hasil = kalkulasi(angka1, angka2, infoo((pCur)));
						sprintf(penampung, "%g", hasil);
						infoo(pCur) = penampung;
						printf("\nngecek aja (hassil)5 %s", infoo(pCur));
						printf("\nngecek aja parent5 %s", infoo(parent(pCur)));
						pCur = parent(pCur);
						strcpy(str3, penampung);
						newNode = NewNode(str3);
						parent(newNode) = pCur;
						//right(pCur) = Nil;
						free(right(pCur));
						right(pCur) = newNode;
						printf("\nngecek ajaaa5 %s", infoo(right(pCur)));
						printf("\nngecek aja parent5 %s", infoo(parent(newNode)));
						printf("\nPosisi pcur adalah5 %s", infoo(pCur));
						printf("\nPosisi pcur adalah511 %s", infoo(left(pCur)));
					}
				}
				if(IsOperator1(infoo(pCur)) && IsOperator1(infoo(parent(pCur)))){			
					while((isNumber(infoo(right(pCur))) && isNumber(infoo(left(pCur)))) && (pCur != right(root))){
						printf("\n\nPOSISI PCUR DIMANASI6 %s", infoo(pCur));
						angka1 = atof(infoo(right(pCur)));
						angka2 = atof(infoo(left(pCur)));
						printf("\nangka1 %g", angka1);
						printf("\nangka2 %g", angka2);		
						hasil = kalkulasi(angka1, angka2, infoo((pCur)));
						sprintf(penampung, "%g", hasil);
						infoo(pCur) = penampung;
						printf("\nngecek aja (hassil)6 %s", infoo(pCur));
						printf("\nngecek aja parent6 %s", infoo(parent(pCur)));
						pCur = parent(pCur);
						strcpy(str4, penampung);
						newNode = NewNode(str4);
						parent(newNode) = pCur;
						free(left(pCur));
						left(pCur) = newNode;
						printf("\nngecek ajaaa6 %s", infoo(left(pCur)));
						printf("\nngecek aja parent6 %s", infoo(parent(newNode)));
						printf("\nPosisi pcur adalah6 %s", infoo(pCur));
						printf("\nPosisi pcur adalah611 %s", infoo(right(pCur)));
						//break;
					}
				}
			}
			
			printf("\n\nPOSISI PCURR TERAKHIRR %s", infoo(pCur));
		}
		printf("\n\nPosisi PCUR sekarang %s", infoo(pCur));
		printf("\n\nSebelah kanan pCur %s", infoo(right(pCur)));
		printf("\n\nSebelah kiri pCur %s", infoo(left(pCur)));
	}
	
	if(IsOperator1(infoo(left(pCur))) && !isNumber(infoo(left(pCur)))){ //ketika sebelah kanannya operan 
		printf("\n\n\nMASUK LEFTNYAA");
		pCur = left(pCur); //pCur akan pindah ke kanan

		if(isNumber(infoo(left(pCur)))){ 
			newNode = NewNode(infoo(left(pCur)));
			parent(newNode) = pCur;
			left(pCur) = Nil;
			left(pCur) = newNode;
			printf("\n\nngecek aja1 %s", infoo(left(pCur)));
		}
		while(pCur != root){ //loop besar		
			while(IsOperator1(infoo(pCur)) && (!isNumber(infoo(left(pCur))))){ //ketika kanan dan kiri dari pCur (parent = operator) tidak sama digit keduanya
				pCur = left(pCur);
				printf("\nLIEUR BANGET YA ALLAH %s", infoo(left(pCur)));
				if(IsOperator1(infoo(pCur)) && (isNumber(infoo(right(pCur))) && isNumber(infoo(left(pCur))))){
					angka1 = atof(infoo(right(pCur)));
					angka2 = atof(infoo(left(pCur)));
					printf("\n\nangka1 %g", angka1);
					printf("\nangka2 %g", angka2);		
					hasil = kalkulasi(angka1, angka2, infoo((pCur)));
					sprintf(penampung, "%g", hasil);
					infoo(pCur) = penampung;
					printf("\nngecek aja (hassil)2 %s", infoo(pCur));
//					printf("\nngecek aja parent2 %s", infoo(parent(pCur)));
					pCur = parent(pCur);
					strcpy(str5, penampung);
					newNode = NewNode(str5);
					parent(newNode) = pCur;
					//right(pCur) = Nil;
					free(left(pCur));
					left(pCur) = newNode;
					printf("\nngecek ajaaa2 %s", infoo(left(pCur)));
					printf("\nngecek aja parent2 %s", infoo(parent(newNode)));
					printf("\nPosisi pcur adalah2 %s", infoo(pCur));
					break;
//					}
				}				
			}				
			printf("\nPOSISI pcur adalahhh %s", infoo(pCur));
			if(IsOperator1(infoo(left(pCur)))){
				printf("\nPOSISI PCURR %s", infoo(pCur));
				while((isNumber(infoo(right(pCur))) && isNumber(infoo(left(pCur))))){
					printf("\n\nPOSISI PCUR DIMANASI3 %s", infoo(pCur));
					angka1 = atof(infoo(right(pCur)));
					angka2 = atof(infoo(left(pCur)));
					printf("\nangka1 %g", angka1);
					printf("\nangka2 %g", angka2);		
					hasil = kalkulasi(angka1, angka2, infoo((pCur)));
					sprintf(penampung, "%g", hasil);
					infoo(pCur) = penampung;
					printf("\nngecek aja (hassil)3 %s", infoo(pCur));
					pCur = parent(pCur);
					if(parent(pCur) == Nil){
						strcpy(str6, penampung);
						newNode = NewNode(str6);
						parent(newNode) = pCur;
						free(left(pCur));
//						free(right(pCur));
						left(pCur) = newNode;
						printf("\nngecek ajaaa3 %s", infoo(left(pCur)));
						printf("\nngecek aja parent3 %s", infoo(parent(newNode)));
						printf("\nPosisi pcur adalah3 %s", infoo(pCur));
						printf("\nPosisi pcur adalah312 %s", infoo(right(pCur)));
						break;
					}else{
//					pCur = parent(pCur);
					strcpy(str6, penampung);
					newNode = NewNode(str6);
					parent(newNode) = pCur;
					printf("\n\nPOSISI PCUR DIMANASI ya ampun %s", infoo(pCur));
					printf("\nngecek aja (coba)3 %s", infoo(left(parent(pCur))));
					printf("\nngecek aja (coba)3 %s", infoo(right((pCur))));
					printf("\n new nodeee ya ampun %s", infoo(newNode));
					if(pCur == left(parent(pCur))){
						if(((infoo(parent(pCur)) == infoo(root)) && (infoo(right(pCur)) == infoo(newNode)))){
							printf("\nMasuk root");
							free(left(pCur));
							left(pCur) = newNode;
						}else{
							if(IsOperator1(infoo(right(pCur))) && !isNumber(infoo(right(pCur)))){
								printf("\nmasuk assign kiri1");
								free(left(pCur));
								left(pCur) = newNode;
							}else{
								printf("\nMasuk break");
								break;
							}	
						}	
					}else{
						printf("\nmasuk assign kiri");
						free(left(pCur));
						left(pCur) = newNode;
					}
					printf("\nngecek ajaaa3 %s", infoo(left(pCur)));
					printf("\nngecek aja parent3 %s", infoo(parent(newNode)));
					printf("\nPosisi pcur adalah3 %s", infoo(pCur));
					printf("\nPosisi pcur adalah312 %s", infoo(right(pCur)));
					}
				}
			}
			
			if((IsOperator1(infoo(right(pCur))) && !isNumber(infoo(right(pCur))))){
				if(!isNumber(infoo(right(pCur)))){
					pCur1 = pCur;
					pCur = right(pCur);
					printf("\nPcur setelah digeser (loop1)4 %s", infoo(pCur));
					while((IsOperator1(infoo(pCur)) && (!isNumber(infoo(right(pCur))) && !isNumber(infoo(left(pCur))))) && (pCur != left(root))){ //ketika kanan dan kiri dari pCur (parent = operator) tidak sama digit keduanya
						pCur = right(pCur);
						printf("\nMASUUUK");
						while(IsOperator1(infoo(pCur)) && (isNumber(infoo(right(pCur))) && isNumber(infoo(left(pCur)))) && (pCur != left(root))){
							printf("\n\nPOSISI PCUR DIMANASI4 %s", infoo(pCur));
							angka1 = atof(infoo(right(pCur)));
							angka2 = atof(infoo(left(pCur)));
							printf("\nangka1 %g", angka1);
							printf("\nangka2 %g", angka2);		
							hasil = kalkulasi(angka1, angka2, infoo((pCur)));
							sprintf(penampung, "%g", hasil);
							infoo(pCur) = penampung;
							printf("\nngecek aja (hassil)4 %s", infoo(pCur));
							printf("\nngecek aja parent4 %s", infoo(parent(pCur)));
							pCur = parent(pCur);
							strcpy(str7, penampung);
							newNode = NewNode(str7);
							parent(newNode) = pCur;
							free(right(pCur));
							right(pCur) = newNode;
							printf("\nngecek ajaaa4 %s", infoo(left(pCur)));
							printf("\nngecek aja parent4 %s", infoo(parent(newNode)));
							printf("\nPosisi pcur adalah4 %s", infoo(pCur));
							printf("\nngecek ajaaa4 %s", infoo(right(pCur)));
						}			
					}					
					printf("\nPcur sekaarang di (loop1)41 %s", infoo(pCur));
				}
				else if(IsOperator1(infoo(left(pCur))) && (pCur != left(root))){
					pCur = left(pCur);
					if(IsOperator1(infoo(pCur)) && (isNumber(infoo(right(pCur))) && isNumber(infoo(left(pCur)))) && (pCur != left(root))){
						printf("\n\nPOSISI PCUR DIMANASI5 %s", infoo(pCur));
						angka1 = atof(infoo(right(pCur)));
						angka2 = atof(infoo(left(pCur)));
						printf("\nangka1 %g", angka1);
						printf("\nangka2 %g", angka2);		
						hasil = kalkulasi(angka1, angka2, infoo((pCur)));
						sprintf(penampung, "%g", hasil);
						infoo(pCur) = penampung;
						printf("\nngecek aja (hassil)5 %s", infoo(pCur));
						printf("\nngecek aja parent5 %s", infoo(parent(pCur)));
						pCur = parent(pCur);
						strcpy(str8, penampung);
						newNode = NewNode(str8);
						parent(newNode) = pCur;
						//right(pCur) = Nil;
						free(left(pCur));
						left(pCur) = newNode;
						printf("\nngecek ajaaa5 %s", infoo(left(pCur)));
						printf("\nngecek aja parent5 %s", infoo(parent(newNode)));
						printf("\nPosisi pcur adalah5 %s", infoo(pCur));
						printf("\nPosisi pcur adalah511 %s", infoo(right(pCur)));
					}
				}
					if(IsOperator1(infoo(pCur)) && (isNumber(infoo(right(pCur))) && isNumber(infoo(left(pCur))))){		
						while((isNumber(infoo(right(pCur))) && isNumber(infoo(left(pCur)))) && (pCur != left(root))){
								
								printf("\n\nPOSISI PCUR DIMANASI6 %s", infoo(pCur));
								printf("\nngecek aja lieurr6 %s", infoo(parent(left(pCur))));
								printf("\nngecek aja lieurr6 %s", infoo(parent(right(pCur))));
								angka1 = atof(infoo(right(pCur)));
								angka2 = atof(infoo(left(pCur)));
								printf("\nangka1 %g", angka1);
								printf("\nangka2 %g", angka2);		
								hasil = kalkulasi(angka1, angka2, infoo((pCur)));
								sprintf(penampung, "%g", hasil);
								infoo(pCur) = penampung;
								printf("\nngecek aja (hassil)6 %s", infoo(pCur));
								printf("\nngecek aja parent6 %s", infoo(parent(pCur)));
								printf("\nngecek aja lieurr6 %s", infoo(parent(left(pCur))));
								pCur = parent(pCur);
								strcpy(str9, penampung);
								newNode = NewNode(str9);
								parent(newNode) = pCur;
//								printf("\nngecek aja lieurr6 %s", infoo(parent(left(pCur))));
//								printf("\nngecek aja lieurr116 %s", infoo(pCur));
//								printf("\n\nPOSISI PCUR DIMANASI ya ampun6 %s", infoo(pCur));
//								printf("\nngecek aja (coba)6 %s", infoo(left(parent(pCur))));
//								printf("\nngecek aja (coba)16 %s", infoo(left(pCur)));
//								printf("\nngecek aja (coba)6 %s", infoo(right((pCur))));
//								printf("\nngecek aja lieurr116 %s", infoo(root));
							if(pCur == left(parent(pCur))){
								if(infoo(parent(pCur)) == infoo(root)){
									printf("\nMasuk root");
//									strcpy(str11, penampung);
//									newNode = NewNode(str11);
//									parent(newNode) = pCur;
									free(right(pCur));
									right(pCur) = newNode;
								}else{
									printf("\nMasuk break");
									break;
								}	
							}else{
								printf("\nMasuk kanan1");
//								strcpy(str9, penampung);
//								newNode = NewNode(str9);
//								parent(newNode) = pCur;
								free(right(pCur));
								right(pCur) = newNode;	
							}
								printf("\nngecek ajaaa6 %s", infoo(left(pCur)));
								printf("\nngecek aja parent6 %s", infoo(parent(newNode)));
								printf("\nPosisi pcur adalah6 %s", infoo(pCur));
								printf("\nPosisi pcur adalah611 %s", infoo(right(pCur)));
								
						}
					}
		}
	}
	
	}
		
	if(IsOperator1(infoo(pCur)) && (isNumber(infoo(right(pCur))) && isNumber(infoo(left(pCur))))){
		angka1 = atof(infoo(right(pCur)));
		angka2 = atof(infoo(left(pCur)));
		printf("\nangka1 %g", angka1);
		printf("\nangka2 %g", angka2);		
		hasil = kalkulasi(angka1, angka2, infoo((pCur)));
		sprintf(penampung, "%g", hasil);
		infoo(pCur) = penampung;
		printf("\nngecek aja (hassil)7 %s", infoo(pCur));		
	}
	
	printf("\n\n\t\t\t\t\t\t --> HASIL KALKULASI ADALAH %s", infoo(pCur));
	
}
	

