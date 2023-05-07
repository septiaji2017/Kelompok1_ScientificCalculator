#include "modules/Ridha.h"
#include "modules/Agam.h"
#include "modules/Mutia.h"
#include "modules/Rico.h"
#include "modules/Naufal.h"
#include "modules/Marshya.h"

//int top = -1;
//char stack[100];

int main()
{

	char lagi;
    
	for (;;)
	{	
		system("clS");		
		
		printf  ("\n\t\t\t\t\t\t\t       ____________________________________________  \n");
		printf  ("\t\t\t\t\t\t\t      |  ________________________________________  | \n");
		printf  ("\t\t\t\t\t\t\t      | |                 PROYEK 2               | | \n");
		printf  ("\t\t\t\t\t\t\t      | |________________________________________| | \n");
		printf  ("\t\t\t\t\t\t\t      |  _______  _______ _______ _______ _______  | \n");
		printf  ("\t\t\t\t\t\t\t      | |   C   ||   1   |   2   |   3   |   ^   | | \n");  
		printf  ("\t\t\t\t\t\t\t      | |_______||_______|_______|_______|_______| | \n");  
		printf  ("\t\t\t\t\t\t\t      | |  +/_  ||   4   |   5   |   6   |   .   | | \n"); 
		printf  ("\t\t\t\t\t\t\t      | |_______||_______|_______|_______|_______| | \n");
		printf  ("\t\t\t\t\t\t\t      | |   %%   ||   7   |   8   |   9   |   0   | | \n");
		printf  ("\t\t\t\t\t\t\t      | |_______||_______|_______|_______|_______| | \n");
		printf  ("\t\t\t\t\t\t\t      | |   +   ||   -   |   *   |   /   |   v   | | \n");
		printf  ("\t\t\t\t\t\t\t      | |_______||_______|_______|_______|_______| | \n");
		printf  ("\t\t\t\t\t\t\t      | | n R x ||   ()  |  |x|  |  DIV  |   !   | | \n");
		printf  ("\t\t\t\t\t\t\t      | |_______||_______|_______|_______|_______| | \n");
		printf  ("\t\t\t\t\t\t\t      | |  pi   ||   e   | ln(x) | log(x)|logx(x)| | \n");
		printf  ("\t\t\t\t\t\t\t      | |_______||_______|_______|_______|_______| | \n");
		printf  ("\t\t\t\t\t\t\t      | |  sin  ||  cos  |  tan  |  sec  |  csc  | | \n");
		printf  ("\t\t\t\t\t\t\t      | |_______||_______|_______|_______|_______| | \n");
		printf  ("\t\t\t\t\t\t\t      | |  cot  || RADsin| RADcos| RADtan| RADsec| | \n");
		printf  ("\t\t\t\t\t\t\t      | |_______||_______|_______|_______|_______| | \n");
		printf  ("\t\t\t\t\t\t\t      | | RADcsc|| RADcot| arcsin| arccos| arctan| | \n");
		printf  ("\t\t\t\t\t\t\t      | |_______||_______|_______|_______|_______| | \n");
		printf  ("\t\t\t\t\t\t\t      | | arcsec|| arccsc| arccot|[floor]| {ceil}| | \n");
		printf  ("\t\t\t\t\t\t\t      | |_______||_______|_______|_______|_______| | \n");
		printf  ("\t\t\t\t\t\t\t      | |<round>||       |       |       |  K.1  | | \n");
		printf  ("\t\t\t\t\t\t\t      | |_______||_______|_______|_______|_______| | \n");
		printf  ("\t\t\t\t\t\t\t      |____________________________________________| \n");	
	
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


