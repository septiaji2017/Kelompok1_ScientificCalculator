#include "Ridha.h"
#include "Rico.h"
#include "Agam.h"
#include "Mutia.h"
#include "Marshya.h"

/* Deskripsi   : Algoritma bagian dari kalkulator (linkedlist, non restricted) */
/* Keterangan  : Setelah UTS */

//char* ans;
//int nIter, nIter2, nIter3;

/*=============================================================================================*/
/*1. Input (initial state) = e*/
/*2. Output (final state) = e0*/
/*3. GeeksForGeeks (beberapa penyesuaian) */
/*4. https://www.geeksforgeeks.org/how-to-insert-characters-in-a-string-at-a-certain-position/ */
/*=============================================================================================*/
char* addSymbolCsc(char* s, int n, int* stars)
{
	char* ans = (char*)malloc(2 * n * sizeof(char));
	int i;
	int j = 0;
	int idx = 0;
	
	for (i = 0; i < strlen(s); i++) {
	    if (j < n && i == stars[j]) {
	        ans[idx++] = '0';
	        j++;
	    }
	    ans[idx++] = s[i];
	}
	
	ans[idx] = '\0';
	
	return ans;
}

/*=============================================================================================*/
/*1. Input (initial state) = e*/
/*2. Output (final state) = e0*/
/*3.1 sanfoundry (sort array in asc) */
/*3.2 javatpoint (remove duplicate array)*/
/*3.3 easycodingzone (set differences / selisih kedua array)*/
/*4.1 https://www.sanfoundry.com/c-program-sort-array-ascending-order/ */
/*4.2 https://www.javatpoint.com/remove-duplicate-elements-from-an-array-in-c*/
/*4.3 https://www.easycodingzone.com/2020/12/program-to-find-difference-of-two-set.html*/
/*=============================================================================================*/
char * getIndexCsc(char str[])
{
    char sub[100];
    int i, j,k, len, sub_len, found;
	static int chars[255];
	int founds;
	founds=0;
	int ktemu=0;
	int ktemu2=0;
	int n;
	char* ans;
	bool udah=false;
	int testdigit;
	
	memset(chars, 0, sizeof(chars));	//18032023	
	
	int negate[255],nega=0,negaKetemu=0;	//19032023
	int arrayHasilAkhir[255],l;				//19032023
	
	int loopstr;    
	
//trigonometri

	if((strstr(str,"e")!=NULL) && !(strstr(str,"sec")!=NULL)){
		strcpy(sub,"e");
	    len = strlen(str);
	    sub_len = strlen(sub);
	
	    for (i = 0; i <= len - sub_len; i++)
	    {
	        found = 1;			        
	        for (j = 0; j < sub_len; j++)
	        {
	            if (str[i + j] != sub[j])
	            {
	                found = 0;
	                break;
	            }
	        }
	
	        if (found == 1)
	        {
	        	chars[founds] = i+1;
	            ktemu++;
	            founds++;
	        }
	    }

	    if (found == 0)
	    {

	    }		
	}

	int loop, arrLoopi, arrLoopj, temp=0;
	int length = sizeof(chars)/sizeof(chars[0]);    		

    //Sort the array in ascending order    
    for (arrLoopi = 0; arrLoopi < ktemu; arrLoopi++) {     
        for (arrLoopj = arrLoopi+1; arrLoopj < ktemu; arrLoopj++) {     
           if(chars[arrLoopi] > chars[arrLoopj]) {    
               temp = chars[arrLoopi];    
               chars[arrLoopi] = chars[arrLoopj];    
               chars[arrLoopj] = temp;    
           }     
        }     
    } 	

    //remove duplicate elements in the array 
    for ( i = 0; i < ktemu; i ++){  
        for ( j = i + 1; j < ktemu; j++){  
            if ( chars[i] == chars[j]){   
                for ( k = j; k < ktemu - 1; k++){  
                    chars[k] = chars[k+1];  
                }  
                ktemu--;   
                j--;      
            }  
        }  
    }  

	k=0;
	l=0;
   // Keyword: Set Differences (Selisih kedua array)  
    for( i=0;i<ktemu;i++)
    {
        for(j=0;j<negaKetemu;j++)
        {
            if(negate[j]==chars[i])
             break;
        }
        if(j==negaKetemu)
        {
          // here we check that is element already present in the set 
          // if present than ignore it otherwise add to the difference set   
            for(l=0;l<k;l++)
            {
                if(arrayHasilAkhir[l]==chars[i])
                 break;
            }
            if(l==k)
            {
                arrayHasilAkhir[k]=chars[i];
                k++;
            }
        }
        
    }	

	n = sizeof(arrayHasilAkhir) / sizeof(arrayHasilAkhir[0]);
	
	ans = addSymbolCsc(str, n, arrayHasilAkhir);
	
	return ans;

}	

/*=============================================================================================*/
/*1. Input (initial state) = 19.241029410248*/
/*2. Output (final state) = 19.241*/
/*3. GeeksForGeeks (beberapa penyesuaian) */
/*4. https://www.geeksforgeeks.org/g-fact-41-setting-decimal-precision-in-c/ */
/*=============================================================================================*/
float floorClosest(float angkas)
{
	angkas=floorr(1000*angkas)/1000;
	return angkas;
}


/*=============================================================================================*/
/*1. Input (initial state) = 2.3*/
/*2. Output (final state) = true*/
/*=============================================================================================*/
bool isDecimal(float angkas){
	char str[255];
	sprintf(str,"%g",angkas);
	if(strstr(str,".")!=NULL){
		return 1;
	}else{
		return 0;
	}
}

/*=============================================================================================*/
/*1. Input (initial state) = 2.34*/
/*2. Output (final state) = 2*/
/*=============================================================================================*/
int countManyDecimals(float angkas){
	
	int counters=0;
	int len;
	char str[255];
	bool kondisi=true;
	
	sprintf(str, "%g", angkas);
	
	len = strlen(str);
	
	len = len-1;
	
	while(kondisi==true && strstr(str,".")!=NULL){
		len--;
		if(str[len]=='.')
			kondisi=false;
		counters++;

	}
	
	return counters;

}

/*=============================================================================================*/
/*1. Input (initial state) = -4*/
/*2. Output (final state) = true*/
/*3. Referensi: Agam, dengan penyesuaian tipe data parameter*/
/*=============================================================================================*/
bool isNegativeDigit2(char c[], int elmt) {
    if (c[elmt] == '-') {
        elmt++;
        return isdigit(c[elmt]);
    }
    return false;
}

/*=============================================================================================*/
/*1. Input (initial state) = 5*/
/*2. Output (final state) = true*/
/*3. Referensi: Agam, dengan penyesuaian tipe data parameter*/
/*=============================================================================================*/
bool isNumber2(char info[], int elmt){
	bool infoNumber;
	infoNumber = (isdigit(info[elmt]) || (info[elmt]) == '-' && isNegativeDigit2(info,elmt) && !isdigit(info[elmt-1]));
	
	return infoNumber;
}

/*=============================================================================================*/
/*1. Input (initial state) = sin90*/
/*2. Output (final state) = i,,90*/
/*=============================================================================================*/
char * replaceToCommas(char exp[]){

		int i,j;
		
		i=0;
		
	
		/* ==================================== */	
		/*  									*/
		/* 			L O G A R I T M A		 	*/	
		/*  									*/
		/* ==================================== */			


		i=0;
		
		if(strstr(exp,"pi")!=0){
		    while(exp[i]!='\0')
		    {
		        if((exp[i]=='p') && (exp[i+1]=='i'))
		        {
					j=0;
		            exp[i]='1';
		            exp[i+1]='p';															 
		        }
		        i++;
		    }				
		}
		
		i=0;
		
		if((strstr(exp,"e")!=0) && !(strstr(exp,"sec")!=0)){

//		strcpy(exp,"eu");

		    while(exp[i]!='\0')
		    {
		        if((exp[i]=='e') && (exp[i+1]=='0'))
		        {
					j=0;
		            exp[i]='0';
		            exp[i+1]='e';																																															 
		        }
		        i++;
		    }				
		}		

		i=0;
		
		if(strstr(exp,"|")!=0){
		    while(exp[i]!='\0')
		    {
		        if((exp[i]=='|') && (isNumber2(exp,i+1)))
		        {
					j=0;
		            exp[i]='~';															 
		        }
		        i++;
		    }				
		}
			
		i=0;
		
		if(strstr(exp,"log")!=0){
		    while(exp[i]!='\0')
		    {
		        if((exp[i]=='l') && (exp[i+1]=='o') && (exp[i+2]=='g'))
		        {
					j=0;
		            exp[i]='T';
		            exp[i+1]=',';		           
		            exp[i+2]=',';															 
		        }
		        i++;
		    }				
		}
		
		i=0;
		
		if(strstr(exp,"ln")!=0){
		    while(exp[i]!='\0')
		    {
		        if((exp[i]=='l') && (exp[i+1]=='n'))
		        {
					j=0;
		            exp[i]='W';
		            exp[i+1]=',';		           															 
		        }
		        i++;
		    }				
		}
		
		i=0;
		
		if(strstr(exp,"lg")!=0){
		    while(exp[i]!='\0')
		    {
		        if((exp[i]=='l') && (exp[i+1]=='g'))
		        {
					j=0;
		            exp[i]='U';
		            exp[i+1]=',';		           															 
		        }
		        i++;
		    }				
		}							
	
		/* ==================================== */	
		/*  									*/
		/* I N V E R S  T R I G O N O M E T R I */
		/*  									*/
		/* ==================================== */			
//		int i;
		i=0; //Kondisi COS Radian
		if(strstr(exp,"arccs")!=0){
		    while(exp[i]!='\0')
		    {
		        if((exp[i]=='a') && (exp[i+1]=='r') && (exp[i+2]=='c') && (exp[i+3]=='c') && (exp[i+4]=='s'))
		        {
		            exp[i]='A';
		            exp[i+1]=',';		           
		            exp[i+2]=',';
		            exp[i+3]=',';
		            exp[i+4]=',';		            
															 
		        }
		        i++;
		    }				
		}
		
		i=0; //Kondisi SIN Radian
		if(strstr(exp,"arcsn")!=0){
		    while(exp[i]!='\0')
		    {
		        if((exp[i]=='a') && (exp[i+1]=='r') && (exp[i+2]=='c') && (exp[i+3]=='s') && (exp[i+4]=='n'))
		        {
		            exp[i]='B';
		            exp[i+1]=',';		           
		            exp[i+2]=',';
		            exp[i+3]=',';
		            exp[i+4]=',';		            
															 
		        }
		        i++;
		    }				
		}
		
		i=0; //Kondisi TAN Radian
		if(strstr(exp,"arctn")!=0){
		    while(exp[i]!='\0')
		    {
		        if((exp[i]=='a') && (exp[i+1]=='r') && (exp[i+2]=='c') && (exp[i+3]=='t') && (exp[i+4]=='n'))
		        {
		            exp[i]='C';
		            exp[i+1]=',';		           
		            exp[i+2]=',';
		            exp[i+3]=',';
		            exp[i+4]=',';		            
															 
		        }
		        i++;
		    }				
		}
		
		i=0; //Kondisi SECANT Radian
		if(strstr(exp,"arcsc")!=0){
		    while(exp[i]!='\0')
		    {
		        if((exp[i]=='a') && (exp[i+1]=='r') && (exp[i+2]=='c') && (exp[i+3]=='s') && (exp[i+4]=='c'))
		        {
		            exp[i]='V';
		            exp[i+1]=',';		           
		            exp[i+2]=',';
		            exp[i+3]=',';
		            exp[i+4]=',';		            
															 
		        }
		        i++;
		    }				
		}	
		
		i=0; //Kondisi COSECANT Radian
		if(strstr(exp,"arccc")!=0){
		    while(exp[i]!='\0')
		    {
		        if((exp[i]=='a') && (exp[i+1]=='r') && (exp[i+2]=='c') && (exp[i+3]=='c') && (exp[i+4]=='c'))
		        {
		            exp[i]='G';
		            exp[i+1]=',';		           
		            exp[i+2]=',';
		            exp[i+3]=',';
		            exp[i+4]=',';		            
															 
		        }
		        i++;
		    }				
		}										
	
		i=0; //Kondisi COTANGENT Radian
		if(strstr(exp,"arcct")!=0){
		    while(exp[i]!='\0')
		    {
		        if((exp[i]=='a') && (exp[i+1]=='r') && (exp[i+2]=='c') && (exp[i+3]=='c') && (exp[i+4]=='t'))
		        {
		            exp[i]='Y';
		            exp[i+1]=',';		           
		            exp[i+2]=',';
		            exp[i+3]=',';
		            exp[i+4]=',';		            
															 
		        }
		        i++;
		    }				
		}
			
		/* ==================================== */	
		/*  									*/
		/* T R I G O N O M E T R I  R A D I A N	*/
		/*  									*/
		/* ==================================== */			
				
		i=0; //Kondisi COS Radian
		if(strstr(exp,"RADcs")!=0){
		    while(exp[i]!='\0')
		    {
		        if((exp[i]=='R') && (exp[i+1]=='A') && (exp[i+2]=='D') && (exp[i+3]=='c') && (exp[i+4]=='s'))
		        {
		            exp[i]='L';
		            exp[i+1]=',';		           
		            exp[i+2]=',';
		            exp[i+3]=',';
		            exp[i+4]=',';		            
															 
		        }
		        i++;
		    }				
		}
		
		i=0; //Kondisi SIN Radian
		if(strstr(exp,"RADsn")!=0){
		    while(exp[i]!='\0')
		    {
		        if((exp[i]=='R') && (exp[i+1]=='A') && (exp[i+2]=='D') && (exp[i+3]=='s') && (exp[i+4]=='n'))
		        {
		            exp[i]='M';
		            exp[i+1]=',';		           
		            exp[i+2]=',';
		            exp[i+3]=',';
		            exp[i+4]=',';		            
															 
		        }
		        i++;
		    }				
		}
		
		i=0; //Kondisi TAN Radian
		if(strstr(exp,"RADtn")!=0){
		    while(exp[i]!='\0')
		    {
		        if((exp[i]=='R') && (exp[i+1]=='A') && (exp[i+2]=='D') && (exp[i+3]=='t') && (exp[i+4]=='n'))
		        {
		            exp[i]='N';
		            exp[i+1]=',';		           
		            exp[i+2]=',';
		            exp[i+3]=',';
		            exp[i+4]=',';		            
															 
		        }
		        i++;
		    }				
		}
		
		i=0; //Kondisi SECANT Radian
		if(strstr(exp,"RADsc")!=0){
		    while(exp[i]!='\0')
		    {
		        if((exp[i]=='R') && (exp[i+1]=='A') && (exp[i+2]=='D') && (exp[i+3]=='s') && (exp[i+4]=='c'))
		        {
		            exp[i]='P';
		            exp[i+1]=',';		           
		            exp[i+2]=',';
		            exp[i+3]=',';
		            exp[i+4]=',';		            
															 
		        }
		        i++;
		    }				
		}	
		
		i=0; //Kondisi COSECANT Radian
		if(strstr(exp,"RADcc")!=0){
		    while(exp[i]!='\0')
		    {
		        if((exp[i]=='R') && (exp[i+1]=='A') && (exp[i+2]=='D') && (exp[i+3]=='c') && (exp[i+4]=='c'))
		        {
		            exp[i]='Q';
		            exp[i+1]=',';		           
		            exp[i+2]=',';
		            exp[i+3]=',';
		            exp[i+4]=',';		            
															 
		        }
		        i++;
		    }				
		}										
	
		i=0; //Kondisi COTANGENT Radian
		if(strstr(exp,"RADct")!=0){
		    while(exp[i]!='\0')
		    {
		        if((exp[i]=='R') && (exp[i+1]=='A') && (exp[i+2]=='D') && (exp[i+3]=='c') && (exp[i+4]=='t'))
		        {
		            exp[i]='Z';
		            exp[i+1]=',';		           
		            exp[i+2]=',';
		            exp[i+3]=',';
		            exp[i+4]=',';		            
															 
		        }
		        i++;
		    }				
		}	
		
		/* ==================================== */	
		/*  									*/
		/* T R I G O N O M E T R I  B I A S A	*/
		/*  									*/
		/* ==================================== */			
				
		i=0; //Kondisi COS degree
		if(strstr(exp,"sin")!=0){
		    while(exp[i]!='\0')
		    {
		        if((exp[i]=='s') && (exp[i+1]=='i') && (exp[i+2]=='n'))
		        {
		            exp[i]='i';
		            exp[i+1]=',';		           
		            exp[i+2]=',';		            							 
		        }
		        i++;
		    }				
		}
		
		i=0; //Kondisi SIN degree
		if(strstr(exp,"cos")!=0){
		    while(exp[i]!='\0')
		    {
		        if((exp[i]=='c') && (exp[i+1]=='o') && (exp[i+2]=='s'))
		        {
		            exp[i]='X';
		            exp[i+1]=',';		           
		            exp[i+2]=',';	            
															 
		        }
		        i++;
		    }				
		}
		
		i=0; //Kondisi TAN degree
		if(strstr(exp,"tan")!=0){
		    while(exp[i]!='\0')
		    {
		        if((exp[i]=='t') && (exp[i+1]=='a') && (exp[i+2]=='n'))
		        {
		            exp[i]='a';
		            exp[i+1]=',';		           
		            exp[i+2]=',';	            
															 
		        }
		        i++;
		    }				
		}
		
		i=0; //Kondisi SECANT degree
		if(strstr(exp,"sec")!=0){
		    while(exp[i]!='\0')
		    {
		        if((exp[i]=='s') && (exp[i+1]=='e') && (exp[i+2]=='c'))
		        {
		            exp[i]='E';
		            exp[i+1]=',';		           
		            exp[i+2]=',';		            
															 
		        }
		        i++;
		    }				
		}	
		
		i=0; //Kondisi COSECANT degree
		if(strstr(exp,"csc")!=0){
		    while(exp[i]!='\0')
		    {
		        if((exp[i]=='c') && (exp[i+1]=='s') && (exp[i+2]=='c'))
		        {
		            exp[i]='K';
		            exp[i+1]=',';		           
		            exp[i+2]=',';	            							 
		        }
		        i++;
		    }				
		}										
	
		i=0; //Kondisi COTANGENT degree
		if(strstr(exp,"cot")!=0){
		    while(exp[i]!='\0')
		    {
		        if((exp[i]=='c') && (exp[i+1]=='o') && (exp[i+2]=='t'))
		        {
		            exp[i]='D';
		            exp[i+1]=',';		           
		            exp[i+2]=',';		            
															 
		        }
		        i++;
		    }				
		}
		
		
		i=0; //Kondisi DIV
		if(strstr(exp,"DIV")!=0){
		    while(exp[i]!='\0')
		    {
		        if((exp[i]=='D') && (exp[i+1]=='I') && (exp[i+2]=='V'))
		        {
		            exp[i]='d';
		            exp[i+1]=',';		           
		            exp[i+2]=',';		            
															 
		        }
		        i++;
		    }				
		}		
		
	return exp;		
	
}

/*=============================================================================================*/
/*1. Input (initial state) = T,90*/
/*2. Output (final state) = T90*/
/*note: untuk menghapus char ','*/
/*=============================================================================================*/
char * trimLog(char * e){
	char* x = malloc (255*sizeof(char));
	int i,j;
		
	for(i=0,j=0; e[i]!='\0'; i++,j++)
	{
        while(e[j]==','){
			j++;       	
		}		   
        x[i]=e[j];		
	}			
    x[i]='\0';	
	return x;				
}

/*=============================================================================================*/
/*1. Input (initial state) = E,,90*/
/*2. Output (final state) = E90*/
/*note: untuk menghapus char ','*/
/*=============================================================================================*/
char * trimTrigono(char * e){
	char* x = malloc (255*sizeof(char));
	int i,j;
		
	for(i=0,j=0; e[i]!='\0'; i++,j++)
	{
        while(e[j]==','){
			j++;       	
		}
        while(e[j]==','){
			j++;       	
		}		
            
        x[i]=e[j];		
	}			
    x[i]='\0';	
	return x;				
}

/*=============================================================================================*/
/*1. Input (initial state) = P,,,,90*/
/*2. Output (final state) = P90*/
/*note: untuk menghapus char ','*/
/*=============================================================================================*/
char * trimRadian(char * e){
	char* x = malloc (255*sizeof(char));
	int i,j;
		
	for(i=0,j=0; e[i]!='\0'; i++,j++)
	{
        while(e[j]==','){
			j++;       	
		}
        while(e[j]==','){
			j++;       	
		}
        while(e[j]==','){
			j++;       	
		}
		
        while(e[j]==','){
			j++;       	
		}		
            
        x[i]=e[j];		
	}			
    x[i]='\0';	
	return x;				
}

/*=============================================================================================*/
/*1. Input (initial state) = P,,,,90*/
/*2. Output (final state) = P90*/
/*note: untuk menghapus char ','*/
/*=============================================================================================*/
char isValid1(char x){
    if (x == '(' || x == ')' || x == '~' || x == '|' || x == '{'  || x == '}' || x == '<' || x == '>'  || x == '[' || x == ']' ) //yg di masukkin adlh tanda pembuka
        return 1;
    if (x == '+' || x == '-')
        return 1;
    if (x == '*' || x == '/'|| x == '%' || x == 'd')
        return 1;
    if (x == '^' || x == 'v' || x == 'R') 
		return 1;
	if (x == '!' || x == 'i' || x == 'X' || x == 'a' || x == 'e' || x == 'K' || x == 'D' || x == 'L' || x == 'M'|| x == 'N'|| x == 'P'|| x == 'Q' || x == 'Z' || x == 'A' || x == 'B'|| x == 'C'|| x == 'V'|| x == 'G' || x == 'Y'|| x == 'T'|| x == 'U' || x == 'W' || x == 'p' || x == 'E')
		return 1;
    if (x == 'h')
        return 'h';		
    if (isdigit(x)==1){
    	return 1;
	}
	
	return 0;
}


/*=============================================================================================*/
/*1. Input (initial state) = 10/2+5*/
/*2. Output (final state) = 10 2 / 5 +*/
/*3. Referensi: Agam (berdiskusi di bagian kondisi)*/
/*=============================================================================================*/
bool infixkepostfix(char* e){
	char x;
	char y;
	char z;
	int strtCount=0;
	address P, Q;
	address Search, SearchDel;
	bool kurung=false;
	bool kurung2=false;
	
	/* program */
	/* Create list kosong */
	First = Nil;
	Last = Nil;
	infotype ingpo;
	char strings[255]="\0";
	char strings2[255]="\0";
	char strt[255];
	
	bool valid=true;
	
	arresCount=0;
	infotype (*TabStrKt);
	TabStrKt = (infotype *) malloc (100 * sizeof(infotype));
	
	infotype (*ArrRes);
	ArrRes = (infotype *) malloc (100 * sizeof(infotype));
		
	while(*e != '\0')
	{
		//(isValid1(*e) && !isdigit(*(e+1)))
	    	if(isValid1(*e)==0 || ((*e)==')' && isdigit(*(e+1)))   ){
	    		system("cls");
	    		printf("eror, \n simbol (%s) tidak ada di kamus data kami, atau simbolnya tidak memiliki bilangan \ntolong masukin simbol yg bener\n\n\np.s. ketik h untuk minta bantuan\n",e);
	    		system("Pause");
	    		valid = false;
				return;
			}
			
			if(isValid1(*e)=='h'){
	    		system("cLs");
				help();																				    		
	    		system("Pause");
	    		valid = false;
				return;				
			}
								
			//IF ini digunakan untuk memasukkannya ke stack sebagai angka/bilangan (bukan operan apapun)
			//apabila berupa digit (isDigit(*e))
			//cth: 5
			//atau
			//berupa char '-', namun setelah char '-', harus berupa digit, DAN sebelum char '-' tidak boleh berupa digit dan sebelum char '-' gk boleh berupa char ')' DAN sebelum char '-' gk boleh berupa isOperator2 (!, v, dll)
			//cth: 5!-2 (harusnya '..-2' itu - dan 2, bukan -2)
			//atau
			//berupa char '.', namun setelahnya harus berupa digit (utk desimal)
			//cth: 5.34+5 (harusnya 5.34 dihitungnya 5.34, bukan 5, ., dan 34)
			//diluar if, berarti masuk ke kondisi yang lain
			if (isdigit(*e) || ((*e == '-' && isdigit(*(e+1))) && !isdigit(*(e-1)) && *(e-1)!=')' && !isOperator2(*(e-1))) || (*e == '.' && isdigit(*(e+1)))   )
		    {
		    	

		    	
		    	*(TabStrKt+strtCount) = (infotype ) malloc (100 * sizeof(char));
	            float num = 0;
	            float sign = 1;
	            float decimal = 0.1;
	            
				if(*e == '-'){
		            sign = -1;
		            e++;	
				}
	            while (isdigit(*e) || (*e == '.' && isdigit(*(e+1)))) {
	                if (*e == '.') {
	                    e++;
	                    while (isdigit(*e)) {
	                        num = num + (*e - '0') * decimal;
	                        decimal *= 0.1;
	                        e++;
	                    }
	                }
	                else {
	                    num = num * 10 + (*e - '0');
	                    e++;
	                }
	            }
		        
		        sprintf(strt, "%g", num * sign);
  				
  				*(ArrRes+arresCount)=strt;

		        strcpy(*(TabStrKt+strtCount), *(ArrRes+arresCount));
		        
		        insLast (&First, &Last, *(TabStrKt+strtCount));
				strtCount++;
  				arresCount++;

		        e--;
		    }
	        else if(*e == '('){
	            push(*e);
				kurung=true;        	
			}
	        else if(*e == ')')
	        {
	        	kurung2=true;
	            while((x = pop()) != '('){
	            	*(TabStrKt+strtCount) = (infotype ) malloc (100 * sizeof(char));
	            	printf("%c ", x);	
	            	strncat(strings, &x, 1);
	            	*(ArrRes+arresCount)=strings;
	            	strcpy(*(TabStrKt+strtCount),*(ArrRes+arresCount));
	            	insLast (&First, &Last, *(TabStrKt+strtCount));
//					insLast (&First, &Last, ")");
					strcpy(strings,"\0");
					strtCount++;
					arresCount++;	            	
				}     
	        }
	        else if(*e == '~'){ //utk buka
				push(*e);        	
			}
	        else if(*e == '|') //utk tutup
	        {
	            while((x = pop()) != '~'){ //berhenti klo ada logo buka
	            	*(TabStrKt+strtCount) = (infotype ) malloc (100 * sizeof(char));
	            	printf("%c ", x);	
	            	strncat(strings, &x, 1);
	            	*(ArrRes+arresCount)=strings;
	            	strcpy(*(TabStrKt+strtCount),*(ArrRes+arresCount));
	            	insLast (&First, &Last, *(TabStrKt+strtCount));
//					insLast (&First, &Last, "|");
					strcpy(strings,"\0");
					strtCount++;
					arresCount++;	            	
				}
					insLast (&First, &Last, "|"); //push tanda penutup			     
	        }
			
	        else if(*e == '{'){
				push(*e);        	
			}
	        else if(*e == '}')
	        {
	            while((x = pop()) != '{'){
	            	*(TabStrKt+strtCount) = (infotype ) malloc (100 * sizeof(char));
	            	printf("%c ", x);	
	            	strncat(strings, &x, 1);
	            	*(ArrRes+arresCount)=strings;
	            	strcpy(*(TabStrKt+strtCount),*(ArrRes+arresCount));
	            	insLast (&First, &Last, *(TabStrKt+strtCount));
//					insLast (&First, &Last, "|");
					strcpy(strings,"\0");
					strtCount++;
					arresCount++;	            	
				}
					insLast (&First, &Last, "}"); //push tanda penutup					     
	        }				        

	        else if(*e == '<'){
				push(*e);        	
			}
	        else if(*e == '>')
	        {
	            while((x = pop()) != '<'){
	            	*(TabStrKt+strtCount) = (infotype ) malloc (100 * sizeof(char));
	            	printf("%c ", x);	
	            	strncat(strings, &x, 1);
	            	*(ArrRes+arresCount)=strings;
	            	strcpy(*(TabStrKt+strtCount),*(ArrRes+arresCount));
	            	insLast (&First, &Last, *(TabStrKt+strtCount));
//					insLast (&First, &Last, "|");
					strcpy(strings,"\0");
					strtCount++;
					arresCount++;	            	
				}
					insLast (&First, &Last, ">"); //push tanda penutup					     
	        }
	        
	        else if(*e == '['){
				push(*e);        	
			}
	        else if(*e == ']')
	        {
	            while((x = pop()) != '['){
	            	*(TabStrKt+strtCount) = (infotype ) malloc (100 * sizeof(char));
	            	printf("%c ", x);	
	            	strncat(strings, &x, 1);
	            	*(ArrRes+arresCount)=strings;
	            	strcpy(*(TabStrKt+strtCount),*(ArrRes+arresCount));
	            	insLast (&First, &Last, *(TabStrKt+strtCount));
//					insLast (&First, &Last, "|");
					strcpy(strings,"\0");
					strtCount++;
					arresCount++;	            	
				}
					insLast (&First, &Last, "]"); //push tanda penutup					     
	        }	        
	        
	        else
	        {
      	
	            while(priority(stack[top]) >= priority(*e)){
	            	*(TabStrKt+strtCount) = (infotype ) malloc (100 * sizeof(char));
	            	y=pop();  
					strncat(strings, &y, 1);
					*(ArrRes+arresCount)=strings;

	            	strcpy(*(TabStrKt+strtCount),*(ArrRes+arresCount));
					insLast (&First, &Last, *(TabStrKt+strtCount));
					strcpy(strings,"\0");
					strtCount++;
					arresCount++;		
				}
				
	            push(*e);
	        }	        
	        e++;
	}
	
	while(top != -1 && stack[top] != '(')
    {
    	*(TabStrKt+strtCount) = (infotype ) malloc (100 * sizeof(char));
    	z=pop();
    	strncat(strings2, &z, 1);
		*(ArrRes+arresCount)=strings2;
		strcpy(*(TabStrKt+strtCount),*(ArrRes+arresCount));
		insLast (&First, &Last, *(TabStrKt+strtCount));
		strcpy(strings2,"\0");   		
		arresCount++;   	
		strtCount++; 
    }
}

/*=============================================================================================*/
/*1. Input (initial state) = List Kosong*/
/*2. Output (final state) = List terisi dengan operator ataupun bilangan*/
/*3. referensi: reuse dari SDA praktik (buatan sendiri)*/
/*=============================================================================================*/
void insLast (address * First, address * Last, infotype Info){
	address P;
	P = (address) malloc(sizeof (ElmtList));
	info(P) = Info;
	next(P) = Nil;	
	prev(P) = Nil;	

	if(*Last==Nil){
		*First = P;
		*Last = P;			
	}else{
		next(P) = Nil;
		prev(P) = *Last;
		next(*Last) = P;
		*Last = P;			
	}
}

void viewAsc(address First){
	//dari first ke last
//	printf("\nView Ascending: \n");
	while(First!=Nil){
		printf(" ", info(First));
		First = next(First);
	}printf("\n");	
}

void delFirst (address * First, address * Last){
	address PDel,PDel2;
	PDel = *First;
	PDel2 = *Last;
	
//	printf("%s %d",info(*First),strcmp(info(*First),"0"));
	if((strcmp(info(*First),"0")==0) && isNumber(info(next(*First)))==true ){
		printf("");
		*First = next(*First);		
		prev(PDel)=Nil;
		prev(*First)=Nil;
		free(PDel);			
	}	
}

void delAll (address * First, address * Last){
	address PDel,PDel2;
	PDel = *First;
	PDel2 = *Last;
	
	next(prev(*Last)) = Nil;
	prev(*Last) = Nil;
	*Last = Nil;
	free(*Last);
	while(*First != Nil){
		*First = next(*First);
		PDel = *First;
		free(PDel);
	}	
}

/* =================================== */
/* Deskripsi   : Rumus */
/* Keterangan  : Sebelum UTS */
/* =================================== */

int f_operasiBitwiseAnd(int op1, int op2){
	int op3;
	op3 = op1 & op2;
	return op3;
}

int f_operasiBitwiseOr(int op1, int op2){
	int op3;	
	op3 = op1 | op2;
	return op3;
}

int f_operasiBitwiseXor(int op1, int op2){
	int op3;
	op3 = op1 ^ op2;
	return op3;
}

int f_operasiBitwiseNot(int op1){
	int op2;	
	op2 = ~op1;
	return op2;
}

/*=============================================================================================*/
/*1. Input (initial state) = nilai belum diketahui*/
/*2. Output (final state) = menghasilkan hasil pembagi*/
/*=============================================================================================*/
div_t f_div(int x, int y){
	div_t output;
	output=div(x,y);
	return output;
}

/*=============================================================================================*/
/*1. Input (initial state) = nilai belum diketahui*/
/*2. Output (final state) = menghasilkan sisa bagi*/
/*=============================================================================================*/
int f_mod(int x, int y){
	int z;	
	z=x%y;
	return z;
}

/*=============================================================================================*/
/*1. Input (initial state) = -5*/
/*2. Output (final state) = True*/
/*=============================================================================================*/
bool isNegative(float x){
	if(x<0){
		return 1;
	}else{
		return 0;
	}
}

/*=============================================================================================*/
/*1. Input (initial state) = awalan modul itu gimana*/
/*2. Output (final state) = akhir dari modul itu menghasilkan apa*/
/*3. Stack Overflow (dengan beberapa penyesuaian) */
/*4. https://stackoverflow.com/questions/70382318/ex-without-math-h */
/*=============================================================================================*/
float powerex(float x) {
    float a = 1.0;
	float e = 0;
	
    bool invert = isNegative(x);
    int n;
    x = abs1(x);
    for (n = 1; e != e + a ; ++n) {
        e = e+a;
        a = a * x / n;
    }
    
    if(invert==true){
    	return 1/e;
	}else{
		return e;
	}

}

/*=============================================================================================*/
/*1. Input (initial state) = value belum diketahui*/
/*2. Output (final state) = menghasilkan hasil pangkat*/
/*3. prepscholar (berupa teori saja) */
/*4. https://blog.prepscholar.com/natural-log-rules */
/*=============================================================================================*/
float f_pangkat(float basis, float eksp){

	float penampung;
	
    float result; 
    
    float basis2;
    
    int sign=1;
	
	if(basis<0){
		basis2=abs1(basis);
		penampung = log_2(basis2);
		
		if(f_mod(eksp,2)==0){ //saat basis genap
			sign = 1;		
		}else if(f_mod(eksp,2)==1){
			sign = -1;
		}		
		
	}else{
		penampung = log_2(basis);
	}
	
//	penampung = log_2(basis);
	result = powerex(eksp * penampung);

	return (result*sign);	

//	if(f_mod(eksp,2)==0){ //saat basis genap
// 	   return result;		
//	}else if(f_mod(eksp,2)==1){
//		return -result;
//	}


}


/*=============================================================================================*/
/*1. Input (initial state) = value belum diketahui*/
/*2. Output (final state) = menghasilkan hasil akar*/
/*3. referensi = ourcodeworld */
/*4. https://ourcodeworld.com/articles/read/884/how-to-get-the-square-root-of-a-number-without-using-the-sqrt-function-in-c*/
/*=============================================================================================*/

float f_akar(float number)
{
    float temp, sqrt;
    sqrt = number / 2;
    temp = 0;
    while(sqrt != temp){
        temp = sqrt;
        sqrt = ( number/temp + temp) / 2;
    }

    return sqrt;
}

/*=============================================================================================*/
/*1. Input (initial state) = value belum diketahui*/
/*2. Output (final state) = menghasilkan hasil akar*/
/*3. referensi = rico (sbg inspirasi) */
/*=============================================================================================*/
float f_akar_dinamis(float basis, float eksp)
{
	float hasil;
	hasil = f_pangkat(basis, 1 / eksp);
	return hasil;
}

float f_PersenKeAngka(float x){
	float y;
	y = x/100;
	return y;
}

float f_AngkaKePersen(float x){
	float y;	
	y = x*100;
	return y;
}

