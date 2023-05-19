#ifndef Ridha_h
#define Ridha_h
#include<stdio.h>
#include<string.h>
#define MAX 30
#include<stdlib.h>
#include <stdbool.h>
#include<ctype.h>

#define Nil NULL
#define First(L) (L).First
#define Last(L)  (L).Last
#define Prev(P) (P)->prev

#include "head.h"

int arresCount;


/*===================================*/
/* P R O T O T Y P E  M O D U L  I I */
/*===================================*/

float floorClosest(float angkas);

void delAll (address * First, address * Last);

char* addSymbolCsc(char* s, int n, int* stars);

char * getIndexCsc(char str[]);

bool isDecimal(float angkas);

int countManyDecimals(float angkas);

bool isNegativeDigit2(char c[], int elmt);

bool isNumber2(char info[], int elmt);

char * replaceToCommas(char exp[]);

char * trimLog(char * e);

char * trimTrigono(char * e);

char * trimRadian(char * e);

char isValid1(char x);

bool infixkepostfix(char* e);

void insLast (address * First, address * Last, infotype Info);

void viewAsc(address First);

bool isKurangKurung(address First);

/*==============================*/
/* P R O T O T Y P E  M O D U L */
/*==============================*/

/* Operasi Bitwise */
int f_operasiBitwiseAnd(int op1, int op2);

int f_operasiBitwiseOr(int op1, int op2);

int f_operasiBitwiseXor(int op1, int op2);

int f_operasiBitwiseNot(int op1);

/* Operasi Diversion / Pembagi dan Modulus */
div_t f_div(int x, int y);

int f_mod(int x, int y);

/* Operasi Eksponen */
bool isNegative(float x);

float powerex(float x);

float f_pangkat(float basis, float eksp);

float f_akar(float number);

float f_akar_dinamis(float basis, float eksp);

/* Operasi Persen */
float f_PersenKeAngka(float x);

float f_AngkaKePersen(float x);

float f_HitungDiskon(float x, float y);

float f_HitungBunga(float x, float y);

/* Menambah Spasi dan mendapatkan indeks dari inputan */
char* addSpaces(char* s, int n, int* stars);

char * getIndex(char str[]);

#endif
