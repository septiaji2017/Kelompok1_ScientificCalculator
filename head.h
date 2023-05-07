#ifndef head_H
#define head_H

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <stdbool.h>
#include<ctype.h>


typedef char * infotype;

typedef struct tElmtlist *address;

typedef struct tElmtlist {
	address prev; 	
	infotype info;
	address next; 
} ElmtList;

address First, Last;

char heads();

#endif
