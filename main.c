#include "Agam.h"
#include "Ridha.h"

#include "Mutia.h"
#include "Rico.h"
#include "Naufal.h"
#include "Marshya.h"

//int top = -1;
//char stack[100];

int main()
{

	char lagi;
    
	for (;;)
	{	
		system("clS");		
		
//		head();
			
		char exp[100];
	    int i=0;    
	    infotype e;
//	    char x;
	    int xxxx=0;
	    char *f, *g, *h, *xx, *yy, a, *hh, *zz, *aa;
	    
	    First=Nil;
	    Last=Nil;
	    
		bool kurung1 = false;
		int kurung1Count=0;
		
		bool kurung2 = false;    
	    int kurung2Count=0;
	    
	    infotype operators[13];
	    
	    printf("Masukkan angka yang ingin anda hitung : ");
	    fgets(exp, 100, stdin);
	    printf("EXPssssssssssssssssssssss:%s",exp);
//	    while(fgets(exp, 100, stdin) != NULL)
//		{
		    printf("\n");
			
			while(exp[xxxx]!='\n'){
				if(exp[xxxx]=='('){
					kurung1Count++;	
				}
				if(exp[xxxx]==')'){
					kurung2Count++;
				}
				xxxx++;
			}
			
			if(kurung1Count!=kurung2Count){
				printf("Error, kurang kurung");
				break;
//				exit(0);
			}
		    
		    replaceNewLineBySpace(exp);
			
			hh = replaceToCommas(exp);
	
			g = trimLog(exp);
			aa = trimRadian(g);		
			xx = trimTrigono(aa);

			e = removespaces(xx);				
				    
		    infixkepostfix(e);	//test				
			
//			printf("test\n");
			viewAsc(First);
			
			creat_tree(&First, &Last);
//			break;
//		}
		printf("\n\n\t\t\t\t\t\t\t\t\t\t Coba Lagi (y/t)?");
		lagi = getch();
		delAll(&First,&Last);
		memset(exp, 0, sizeof(exp));

		if(lagi!='y'){	
			break;
		}	
	}
	return 0;	
}


