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

char stack[100];
int top;

typedef char* infotype1;	
typedef struct TreeNode *Address;
typedef struct TreeNode{
	Address right; 
	infotype1 infoo; 
	Address left; 
	Address parent;
}nbTreeNode;

/******************************************/
/* S P E S I F I K A S I   M O D U L  I I */
/******************************************/

void push(char x);

char pop();

int priority(char x);

bool isNegativeDigit(char* c);

Address NewNode(infotype1 X);

int is_operator(char x);

infotype1 isOperator(infotype1 x);

bool IsOperator1(infotype1 info);

int isOperator2(char x);

bool isNumber(infotype1 info);

float kalkulasi(float angka1, float angka2, infotype1 x);

void creat_tree(address * First, address * Last);

void replaceNewLineBySpace(char *s);

char * removespaces(char * exp);

float floorr(float x);

float ceil1(float x);

float round1(float x);

float abs1(float x);



#endif
