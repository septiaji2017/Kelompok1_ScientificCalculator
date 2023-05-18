#include "Agam.h"
#include "Ridha.h"

#include "Mutia.h"
#include "Rico.h"
#include "Naufal.h"
#include "Marshya.h"

int main()
{

	char lagi;
    
	for (;;)
	{	
		system("clS");		
			
		char exp[100];
	    int i=0;    
	    infotype e;
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
			}
		    
		    replaceNewLineBySpace(exp);
			
			hh = replaceToCommas(exp);
	
			f = getIndexCsc(hh);
	
			g = trimLog(f);
			aa = trimRadian(g);		
			xx = trimTrigono(aa);

			e = removespaces(xx);				
				    
		    infixkepostfix(e);			
			
			viewAsc(First);
			
			creat_tree(&First, &Last);

		printf("\n\n\t\t\t\t\t\t\t\t\t\t Coba Lagi (y/t)?");
		lagi = getch();
		delAll(&First,&Last);

		if(lagi!='y'){	
			break;
		}	
	}
	return 0;	
}


