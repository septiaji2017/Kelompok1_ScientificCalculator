#ifndef Ridha_h
#define Ridha_h
#include<stdio.h>
#include<string.h>
#define MAX 30
#include<stdlib.h>
#include <stdbool.h>

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
float f_pangkat(float basis, int eksp);

float f_akar(float number);

/* Operasi Persen */
float f_PersenKeAngka(float x);

float f_AngkaKePersen(float x);

float f_HitungDiskon(float x, float y);

float f_HitungBunga(float x, float y);

/* Menambah Spasi dan mendapatkan indeks dari inputan */
char* addSpaces(char* s, int n, int* stars);

char * getIndex(char str[]);

#endif
