#ifndef Ridha_h
#define Ridha_h
#include<stdio.h>
#include<string.h>
#define MAX 30
#include<stdlib.h>
#include <stdbool.h>
#include<math.h>


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

div_t f_div(int x, int y){
	div_t output;
	output=div(x,y);
	return output;
}

int f_mod(int x, int y){
	int z;	
	z=x%y;
	return z;
}

int f_pangkat(int x, int y){
	int z;	
	z=pow(x,y);
	return z;
}

float f_akar(float x){
	float y;
	y=sqrt(x);
	return y;
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

float f_HitungDiskon(float x, float y){
	float z, hsl;
	z = y * x;
	hsl = x - z;
	return hsl;
}

float f_HitungBunga(float x, float y){
	float z, hsl;
	z = y * x;
	hsl = x + z;
	return hsl;
}


char* addSpaces(char* s, int n, int* stars)
{
	char* ans = (char*)malloc(2 * n * sizeof(char));
	int i;
	int j = 0;
	int idx = 0;
	
	for (i = 0; i < strlen(s); i++) {
	    if (j < n && i == stars[j]) {
	        ans[idx++] = ' ';
	        j++;
	    }
	    ans[idx++] = s[i];
	}
	
	ans[idx] = '\0';
	
	return ans;
}

char * getIndex(char str[])
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
	
	int loopstr;    
	if(strstr(str,"+")!=NULL){
		strcpy(sub,"+");
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
	        	chars[founds] = i;
	            ktemu++;		        	
	        	founds+=1;
	        	chars[founds] = i+1;
	            ktemu++;
	            founds++;
	        }
	    }

	    if (found == 0)
	    {

	    }
	}
	
	if(strstr(str,"-")!=NULL){
		strcpy(sub,"-");
	
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
	        	chars[founds] = i;
	        	ktemu++;
	        	founds+=1;
	        	chars[founds] = i+1;
				ktemu++;
	            founds++;
	        }
	    }

	    if (found == 0)
	    {

	    }
	}

	if(strstr(str,"*")!=NULL){
		strcpy(sub,"*");

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
	        	chars[founds] = i;
	            ktemu++;		        	
	        	founds+=1;
	        	chars[founds] = i+1;
	            ktemu++;
	            founds++;
	        }
	    }

	    if (found == 0)
	    {

	    }
	}
	
	if(strstr(str,"/")!=NULL){
		strcpy(sub,"/");
	
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
	        	chars[founds] = i;
	        	ktemu++;
	        	founds+=1;
	        	chars[founds] = i+1;
				ktemu++;
	            founds++;
	        }
	    }

	    if (found == 0)
	    {
	    	
	    }
	}


	if(strstr(str,"v")!=NULL){
		strcpy(sub,"v");
	    len = strlen(str);
	    sub_len = strlen(sub);
	
	    // Loop through the string
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
	        	chars[founds] = i;
	            ktemu++;		        	
	        	founds+=1;
	        	chars[founds] = i+1;
	            ktemu++;
	            founds++;
	        }
	    }

	    if (found == 0)
	    {

	    }
	}
	
	if(strstr(str,"^")!=NULL){
		strcpy(sub,"^");
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
	        	chars[founds] = i;
	        	ktemu++;
	        	founds+=1;
	        	chars[founds] = i+1;
				ktemu++;
	            founds++;
	        }
	    }

	    if (found == 0)
	    {

	    }
	}

	if(strstr(str,"%")!=NULL){
		strcpy(sub,"%");
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
	        	chars[founds] = i;
	            ktemu++;		        	
	        	founds+=1;
	        	chars[founds] = i+1;
	            ktemu++;
	            founds++;
	        }
	    }

	    if (found == 0)
	    {

	    }
	}
	
	
	if(strstr(str,"!")!=NULL){
		strcpy(sub,"!");
	
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
	        	chars[founds] = i;
	        	ktemu++;
	        	founds+=1;
	        	chars[founds] = i+1;
				ktemu++;
	            founds++;
	        }
	    }

	    if (found == 0)
	    {

	    }
	}

	if(strstr(str,"(")!=NULL){
		strcpy(sub,"(");	
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
	        	ktemu++;
	        	founds+=1;
	        	chars[founds] = i+1;
				ktemu++;
	            founds++;
	        }
	    }

	    if (found == 0)
	    {

	    }
	}

	if(strstr(str,")")!=NULL){
		strcpy(sub,")");
	
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
	        	chars[founds] = i;
	        	ktemu++;
	        	founds+=1;
	        	chars[founds] = i+1;
				ktemu++;
	            founds++;
	        }
	    }

	    if (found == 0)
	    {
	    }
	}


	if(strstr(str,"[")!=NULL){
		strcpy(sub,"[");
	
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
	        	ktemu++;
	        	founds+=1;
	        	chars[founds] = i+1;
				ktemu++;    	        
	            founds++;
	        }
	    }

	    if (found == 0)
	    {
	    	
	    }
	}

	if(strstr(str,"]")!=NULL){
		strcpy(sub,"]");
	
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
	        	chars[founds] = i;
	        	ktemu++;
	        	founds+=1;
	        	chars[founds] = i+1;
				ktemu++;    	        	
	            founds++;
	        }
	    }

	    if (found == 0)
	    {

	    }
	}

	if(strstr(str,"{")!=NULL){
		strcpy(sub,"{");
	
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
	        	ktemu++;
	        	founds+=1;
	        	chars[founds] = i+1;
				ktemu++;    	        	
	            founds++;
	        }
	    }

	    if (found == 0)
	    {
	    	
	    }
	}

	if(strstr(str,"}")!=NULL){
		strcpy(sub,"}");
	
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
	        	chars[founds] = i;
	        	ktemu++;
	        	founds+=1;
	        	chars[founds] = i+1;
				ktemu++;
	            founds++;
	        }
	    }

	    if (found == 0)
	    {

	    }
	}

	if(strstr(str,"<")!=NULL){
		strcpy(sub,"<");
	
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
	        	ktemu++;
	        	founds+=1;
	        	chars[founds] = i+1;
				ktemu++;
	            founds++;
	        }
	    }

	    if (found == 0)
	    {
	    	
	    }
	}

	if(strstr(str,">")!=NULL){
		strcpy(sub,">");
	
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
	        	chars[founds] = i;
	        	ktemu++;
	        	founds+=1;
	        	chars[founds] = i+1;
				ktemu++;
	            founds++;
	        }
	    }

	    if (found == 0)
	    {

	    }
	}

	if(strstr(str,"|")!=NULL){
		strcpy(sub,"|");
	
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
	        	chars[founds] = i;
	        	ktemu++;
	        	founds+=1;
	        	chars[founds] = i+1;
				ktemu++;
	            founds++;
	        }
	    }

	    if (found == 0)
	    {

	    }
	}



//trigonometri

	if(strstr(str,"sin")!=NULL){
		strcpy(sub,"sin");
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
	        	chars[founds] = i+3;
	            printf("chars[%d]: %d\n",founds,chars[founds]);	        	
	        	
	            ktemu++;		        	
	        	founds+=1;
	            ktemu++;					       	
	            printf("chars[%d]: %d\n",founds,chars[founds]);
	            founds++;
	        }
	    }
	
	    if (found == 0)
	    {

	    }		
	}

	if(strstr(str,"cos")!=NULL){
		strcpy(sub,"cos");
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
	        	chars[founds] = i+3;
	            printf("chars[%d]: %d\n",founds,chars[founds]);	        	
	        	
	            ktemu++;		        	
	        	founds+=1;
	            ktemu++;					       	
	            printf("chars[%d]: %d\n",founds,chars[founds]);
	            founds++;
	        }
	    }

	    if (found == 0)
	    {
	    	
	    }		
	}

	if(strstr(str,"tan")!=NULL){
		strcpy(sub,"tan");
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
	        	chars[founds] = i+3;
	            printf("chars[%d]: %d\n",founds,chars[founds]);	        	
	        	
	            ktemu++;		        	
	        	founds+=1;
	            ktemu++;					       	
	            printf("chars[%d]: %d\n",founds,chars[founds]);
	            founds++;
	        }
	    }

	    if (found == 0)
	    {

	    }		
	}

	if(strstr(str,"sec")!=NULL){
		strcpy(sub,"sec");
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
	        	chars[founds] = i+3;
	            printf("chars[%d]: %d\n",founds,chars[founds]);	        	
	        	
	            ktemu++;		        	
	        	founds+=1;
	            ktemu++;					       	
	            printf("chars[%d]: %d\n",founds,chars[founds]);
	            founds++;
	        }
	    }

	    if (found == 0)
	    {
	    	
	    }		
	}

	if(strstr(str,"csc")!=NULL){
		strcpy(sub,"csc");
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
	        	chars[founds] = i+3;
	            printf("chars[%d]: %d\n",founds,chars[founds]);	        	
	        	
	            ktemu++;		        	
	        	founds+=1;
	            ktemu++;					       	
	            printf("chars[%d]: %d\n",founds,chars[founds]);
	            founds++;
	        }
	    }

	    if (found == 0)
	    {

	    }		
	}

	if(strstr(str,"cot")!=NULL){
		strcpy(sub,"cot");
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
	        	chars[founds] = i+3;
	            printf("chars[%d]: %d\n",founds,chars[founds]);	        	
	        	
	            ktemu++;		        	
	        	founds+=1;
	            ktemu++;					       	
	            printf("chars[%d]: %d\n",founds,chars[founds]);
	            founds++;
	        }
	    }
	
	    if (found == 0)
	    {

	    }		
	}

//trigonometri invers

	if(strstr(str,"arcsin")!=NULL){
		strcpy(sub,"arcsin");
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
	        	chars[founds] = i+6;
	            printf("chars[%d]: %d\n",founds,chars[founds]);	        	
	        	
	            ktemu++;		        	
	        	founds+=1;
	            ktemu++;					       	
	            printf("chars[%d]: %d\n",founds,chars[founds]);
	            founds++;
	        }
	    }
	
	    if (found == 0)
	    {

	    }		
	}

	if(strstr(str,"arccos")!=NULL){
		strcpy(sub,"arccos");
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
	        	chars[founds] = i+6;
	            printf("chars[%d]: %d\n",founds,chars[founds]);	        	
	        	
	            ktemu++;		        	
	        	founds+=1;
	            ktemu++;					       	
	            printf("chars[%d]: %d\n",founds,chars[founds]);
	            founds++;
	        }
	    }
	
	    if (found == 0)
	    {
	    	
	    }		
	}

	if(strstr(str,"arctan")!=NULL){
		strcpy(sub,"arctan");
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
	        	chars[founds] = i+6;
	            printf("chars[%d]: %d\n",founds,chars[founds]);	        	
	        	
	            ktemu++;		        	
	        	founds+=1;
	            ktemu++;					       	
	            printf("chars[%d]: %d\n",founds,chars[founds]);
	            founds++;
	        }
	    }

	    if (found == 0)
	    {

	    }		
	}

	if(strstr(str,"arcsec")!=NULL){
		strcpy(sub,"arcsec");
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
	        	chars[founds] = i+6;
	            printf("chars[%d]: %d\n",founds,chars[founds]);	        	
	        	
	            ktemu++;		        	
	        	founds+=1;
	            ktemu++;					       	
	            printf("chars[%d]: %d\n",founds,chars[founds]);
	            founds++;
	        }
	    }

	    if (found == 0)
	    {

	    }		
	}

	if(strstr(str,"arccot")!=NULL){
		strcpy(sub,"arccot");
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
	        	chars[founds] = i+6;
	            printf("chars[%d]: %d\n",founds,chars[founds]);	        	
	        	
	            ktemu++;		        	
	        	founds+=1;
	            ktemu++;					       	
	            printf("chars[%d]: %d\n",founds,chars[founds]);
	            founds++;
	        }
	    }

	    if (found == 0)
	    {

	    }		
	}

	if(strstr(str,"arccsc")!=NULL){
		strcpy(sub,"arccsc");
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
	        	chars[founds] = i+6;
	            printf("chars[%d]: %d\n",founds,chars[founds]);	        	
	        	
	            ktemu++;		        	
	        	founds+=1;
	            ktemu++;					       	
	            printf("chars[%d]: %d\n",founds,chars[founds]);
	            founds++;
	        }
	    }

	    if (found == 0)
	    {
	    	
	    }		
	}

//misc

	if(strstr(str,"DIV")!=NULL){
		strcpy(sub,"DIV");
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
	        	chars[founds] = i;
	            printf("chars[%d]: %d\n",founds,chars[founds]);	        	
	        	
	            ktemu++;		        	
	        	founds+=1;
	        	chars[founds] = i+3;	        	
	            ktemu++;					       	
	            printf("chars[%d]: %d\n",founds,chars[founds]);
	            founds++;
	        }
	    }

	    if (found == 0)
	    {

	    }		
	}

	if(strstr(str,"log")!=NULL){
		strcpy(sub,"log");
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
	        	chars[founds] = i;
	            printf("chars[%d]: %d\n",founds,chars[founds]);	        	
	        	
	            ktemu++;		        	
	        	founds+=1;
	        	chars[founds] = i+3;	        	
	            ktemu++;					       	
	            printf("chars[%d]: %d\n",founds,chars[founds]);
	            founds++;
	        }
	    }

	    if (found == 0)
	    {

	    }		
	}

	if(strstr(str,"ln")!=NULL){
		strcpy(sub,"ln");
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
	        	chars[founds] = i;
	            printf("chars[%d]: %d\n",founds,chars[founds]);	        	
	        	
	            ktemu++;		        	
	        	founds+=1;
	        	chars[founds] = i+2;	        	
	            ktemu++;					       	
	            printf("chars[%d]: %d\n",founds,chars[founds]);
	            founds++;
	        }
	    }

	    if (found == 0)
	    {

	    }		
	}

	if(strstr(str,"pi")!=NULL){
		strcpy(sub,"pi");
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
	        	chars[founds] = i;
	            printf("chars[%d]: %d\n",founds,chars[founds]);	        	
	        	
	            ktemu++;		        	
	        	founds+=1;
	        	chars[founds] = i+2;	        	
	            ktemu++;					       	
	            printf("chars[%d]: %d\n",founds,chars[founds]);
	            founds++;
	        }
	    }

	    if (found == 0)
	    {

	    }		
	}

	if(strstr(str,"phi")!=NULL){
		strcpy(sub,"phi");
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
	        	chars[founds] = i;
	            printf("chars[%d]: %d\n",founds,chars[founds]);	        	
	        	
	            ktemu++;		        	
	        	founds+=1;
	        	chars[founds] = i+3;	        	
	            ktemu++;					       	
	            printf("chars[%d]: %d\n",founds,chars[founds]);
	            founds++;
	        }
	    }
	
	    if (found == 0)
	    {
	    	
	    }		
	}


	if(strstr(str,"negate")!=NULL){
		strcpy(sub,"negate");
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
	        	chars[founds] = i+6;
	            printf("chars[%d]: %d\n",founds,chars[founds]);	        	
	        	
	            ktemu++;		        	
	        	founds+=1;
	            ktemu++;					       	
	            printf("chars[%d]: %d\n",founds,chars[founds]);
	            founds++;
	        }
	    }
	
	    if (found == 0)
	    {
	    	
	    }		
	}

	if(strstr(str,"R")!=NULL){
		strcpy(sub,"R");
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
	        	chars[founds] = i;	        	
	            ktemu++;		        	
	        	founds+=1;
	        	chars[founds] = i+1;
	            ktemu++;					       	
	            founds++;
	        }
	    }
	
	    if (found == 0)
	    {
	    	
	    }
	}

	if(strstr(str,"E")!=NULL){
		strcpy(sub,"E");
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
	        	chars[founds] = i;	
	            ktemu++;		        	
	        	founds+=1;
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

	n = sizeof(chars) / sizeof(chars[0]);
	ans = addSpaces(str, n, chars);
	
	return ans;

}	 

#endif
