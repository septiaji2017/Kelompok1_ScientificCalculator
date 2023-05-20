#ifndef Agam_H
#define Agam_H
#include <stdio.h>
#include<stdlib.h>
#include <stdbool.h>
#include <string.h>
#define pi 3.14159265358979323846
#define MAX 30
#include <conio.h>
//#define true 1
//#define false 0
#define boolean unsigned char

#define info(P) (P)->info
#define infoo(P) (P)->infoo
#define next(P) (P)->next
#define prev(P) (P)->prev
#define Nil NULL
#define right(P) (P)->right
#define left(P) (P)->left
#define parent(P) (P)->parent

#include "head.h"

char stack[100];					//Tersedia sebuah array sepanjang 100
int top;							//Variabel top sebagai penunjuk dalam sebuah stack

typedef char* infotype1;			//Variabel infotype1 merupakan sebuah pointer string untuk operan atau operator pada Tree
typedef struct TreeNode *Address;	//Struktur baru bernama Address sebagai sebuah pointer
typedef struct TreeNode{			//Struktur baru bernama TreenNode yang berisikan
	Address right; 					//variabel right bertipe Address (pointer) pada Tree
	infotype1 infoo; 				//variabel infoo bertipe infotype1 dimana sebagai string untuk mengisikan operan atau operator
	Address left; 					//variabel left bertipe Address (pointer) pada Tree
	Address parent;					//variabel parent bertipe Address (pointer) pada Tree
}nbTreeNode;						//Variabel nbTreeNode sebagai nama untuk mewakili seluruh subvar diatas


void push(char x);					//modul ini merupakan bagian dari stack gunakanya untuk memasukkan pada array stack[100]

char pop();							//modul ini merupakan bagian dari stack digunakan sebagai memberikan sebuah nilai yang sudah ditumpuk di sebuah array stack

int priority(char x);				//Pada modul ini digunakan sebagai tingkatan prioritas saat ingin dimasukkan kedalam stack		

bool isNegativeDigit(char* c);		//Modul ini digunakan untuk mengetahui bahwa angka tersebut negatif atau bukan

Address NewNode(infotype1 X);		//Modul ini digunakan membentuk sebuah node yang berisikan beberapa subvar untuk membentuk sebuah tree

int is_operator(char x);			//Pada modul ini akan mengecek apakah yang diinputkan itu operator atau bukan

infotype1 isOperator(infotype1 x);	//Modul ini digunakan untuk membandingkan apabila operator tersebut apakah benar ada di dalam list

bool IsOperator1(infotype1 info);	//Modul ini digunakan untuk mengetahui string info yang ada pada node itu ada pada isOperator

int isOperator2(char x);			//Modul ini digunakan untuk mengecek yang hanya membutuhkan 1 digit saja, contohnya 5! hanya membutuhkan 1 digit 

bool isNumber(infotype1 info);		//Pada modul ini digunakan sebagai mengecek apakah string tersebut berupa angka atau bukan

float kalkulasi(float angka1, float angka2, infotype1 x);	//Pada modul ini akan mempassingkan 3 buah variabel yaitu angka1, angka2 dan infotype1(operator) yang akan dikalkulasikan sesuai dengan operatornya 

void creat_tree(address * First, address * Last);			//Pada modul ini digunakan sebagai pembuatan tree beserta perhitungan dari setiap nodenya
	
void replaceNewLineBySpace(char *s);//Pada modul ini akan menghapus line baru menjadi spasi

char * removespaces(char * exp);	//pada modul ini digunakan sebagai menghapus spasi ketika user menginputkan menggunakan spasi

float floorr(float x);				//Modul ini digunakan untuk menghitung angka desimal dibulatkan kebawah

float ceil1(float x);				//Modul ini digunakan untuk menghitung angka desimal dibulatkan keatas

float round1(float x);				//Pada modul ini akan menghitung angka desimal dibulatkan keatas ataupun kebawah

float abs1(float x);				//Modul ini adalah untuk mengubah nilai yang awalnya bernilai negatif menjadi positif



#endif
