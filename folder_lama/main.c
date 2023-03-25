#include "Ridha.h"
#include "Agam.h"
#include "Mutia.h"
#include "Rico.h"
#include "Naufal.h"
#include "Marshya.h"
//digabungkan oleh ridha septiaji

char header(){
	printf  ("\n");
	printf	("\t\t\t++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf  ("\t\t\t  _____________________  \n");
	printf  ("\t\t\t |  _________________  |  $$\\   $$\\          $$\\                                             $$\\               $$\\   \n");
	printf  ("\t\t\t | |     PROYEK 2    | |  $$ | $$  |         $$ |                                            $$ |            $$$$ |  \n");
	printf  ("\t\t\t | |_________________| |  $$ |$$  / $$$$$$\\  $$ | $$$$$$\\  $$$$$$\\$$$$\\   $$$$$$\\   $$$$$$\\  $$ |  $$\\       \\_$$ |  \n");
	printf  ("\t\t\t |  ___ ___ ___   ___  |  $$$$$  / $$  __$$\\ $$ |$$  __$$\\ $$  _$$  _$$\\ $$  __$$\\ $$  __$$\\ $$ | $$  |        $$ |  \n");
	printf  ("\t\t\t | | 7 | 8 | 9 | | + | |  $$  $$<  $$$$$$$$ |$$ |$$ /  $$ |$$ / $$ / $$ |$$ /  $$ |$$ /  $$ |$$$$$$  /         $$ |  \n");
	printf  ("\t\t\t | |___|___|___| |___| |  $$ |\\$$\\ $$   ____|$$ |$$ |  $$ |$$ | $$ | $$ |$$ |  $$ |$$ |  $$ |$$  _$$<          $$ |  \n");
	printf  ("\t\t\t | | 4 | 5 | 6 | | - | |  $$ | \\$$\\\\$$$$$$$\\ $$ |\\$$$$$$  |$$ | $$ | $$ |$$$$$$$  |\\$$$$$$  |$$ | \\$$\\       $$$$$$\\  \n");
	printf  ("\t\t\t | |___|___|___| |___| |  \\__|  \\__|\\_______|\\__| \\______/ \\__| \\__| \\__|$$  ____/  \\______/ \\__|  \\__|      \\______|  \n");
	printf  ("\t\t\t | | 1 | 2 | 3 | | x | |                                                 $$ |                                         \n");
	printf  ("\t\t\t | |___|___|___| |___| |                                                 $$ |                                         \n");
	printf  ("\t\t\t | | . | 0 | = | | / | |                                                 \\__|                                         \n");
	printf  ("\t\t\t | |___|___|___| |___| |  \n");
	printf  ("\t\t\t |_____________________| \n\n");
	printf	("\t\t\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
}

int main(){
	int choice, pilihan;
	int choice2;
	char lagi;
	/* Himpunan */

	for (;;)
	{
	
		system("cls");		
	
		Matematika arr[100];
		Matematika arr1[100];
		char *p;
		char *string;
		char input[200];
		char delimit[]=" ";
		int CekOperan, CekAngka, Operan, cekstr, Cekmutlak=0;
		int r,k,i,j,l,pilihan,hasil,a, kurung, hitung, hitung1;
		int loop1, loop2, loop3;
		int CekBuka, CekTutup;
		float hasilAkhir;
	
			FILE *pf;
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
			printf  ("\t\t\t\t\t\t\t      | |   pi  ||   ln  |  log  |   E   |  sin  | | \n");
			printf  ("\t\t\t\t\t\t\t      | |_______||_______|_______|_______|_______| | \n");
			printf  ("\t\t\t\t\t\t\t      | |   cos ||   tan |  sec  |  csc  |  cot  | | \n");
			printf  ("\t\t\t\t\t\t\t      | |_______||_______|_______|_______|_______| | \n");
			printf  ("\t\t\t\t\t\t\t      | | arcsin|| arccos| arctan| arcsec| arccsc| | \n");
			printf  ("\t\t\t\t\t\t\t      | |_______||_______|_______|_______|_______| | \n");
			printf  ("\t\t\t\t\t\t\t      | | arccot||[floor]| {ceil}|<round>|  K.1  | | \n");
			printf  ("\t\t\t\t\t\t\t      | |_______||_______|_______|_______|_______| | \n");
			printf  ("\t\t\t\t\t\t\t      |____________________________________________| \n");
//			getchar();
			
			printf("\n\t\t Inputkan angka dan operator yang ingin Anda hitung --> ");
			fgets(input, sizeof(input), stdin);
			char *ret;
			char* ans;
			int len;
			ret = strstr(input,delimit);
			
			len = strlen(input);
			
			if(input[len-1]=='\n'){
				input[len-1]=0;
			}
			
			if(ret == NULL){
				ans = getIndex(input);
				strcpy(input,ans);
			}
			
			
			
			p = strtok(input, delimit);					
			a = 0;
			Operan = 0;
			CekOperan = 0;
			CekAngka = 0;			
				
			while (p != NULL) {
		        if (isdigit(p[0]) || p[0] == '-' && isdigit (p[1])) {
		            arr[a].angka = atof(p);
		            CekAngka++;		            
		        }else if (p[0]=='(') {
		            arr[a].operasi = p[0];
		            Operan++;
		            CekOperan++;
		        }else if (p[0]==')') {
		            arr[a].operasi = p[0];
		            Operan++;
		            CekOperan++;
		        }else if (p[0]='|') {
		        	Cekmutlak++;
		        	if(Cekmutlak % 2 == 0){
		        		arr[a].operasi = '~';
					}else{
						arr[a].operasi = p[0];
					}
		            printf("\nOperasinya %d = %c", a, arr[a].operasi);
		            Operan++;
		            CekOperan++;
		        }else if (p[0]=='+') {
		            arr[a].operasi = p[0];
		            Operan++;
		            CekOperan++;
		        }else if (p[0]=='-' && !isdigit(p[1])) {
		            arr[a].operasi = p[0];
		            Operan++;
		            CekOperan++;
		        }else if (p[0]=='^') {
		        	arr[a].operasi = p[0];
		        	Operan++;
		        	CekOperan++;
		        }else if (p[0]=='v') {
		    		arr[a].operasi = p[0];
		        	Operan++;
		        	CekOperan++;
		        }else if (p[0]=='E') {
		    		arr[a].angka = 2.71828182845904;
		            CekAngka++;				        	
		        }else if (p[0]=='[') {
		    		arr[a].operasi = p[0];
		        	Operan++;
		        	CekOperan++;
		        }else if (p[0]==']') {
		    		arr[a].operasi = p[0];
		        	Operan++;
		        	CekOperan++;
		        }else if (p[0]=='{') {
		    		arr[a].operasi = p[0];
		        	Operan++;
		        	CekOperan++;
		        }else if (p[0]=='}') {
		    		arr[a].operasi = p[0];
		        	Operan++;
		        	CekOperan++;															        	
		        }else if (p[0]=='<') {
		    		arr[a].operasi = p[0];
		        	Operan++;
		        	CekOperan++;
		        }else if (p[0]=='>') {
		    		arr[a].operasi = p[0];
		        	Operan++;
		        	CekOperan++;															        	
		        }else if (p[0]=='*') {
		            arr[a].operasi = p[0];
		            Operan++;
		            CekOperan++;
		        }else if (p[0]=='/') {
		            arr[a].operasi = p[0];
		            Operan++;
		            CekOperan++;
		    	}else if (p[0]=='%' && !isdigit(p[1])) {
		            arr[a].operasi = p[0];
		            Operan++;
		            CekOperan++;
		        }else if (p[0]=='!') {
		            arr[a].operasi = p[0];
		            Operan++;
		            CekOperan++;			            
				}else if (p[0]=='R') {
		            arr[a].operasi = p[0];
		            Operan++;
		            CekOperan++;								            
				}else if (strcmp(p, "sin") == 0){
					arr[a].operasi = 's';
		            Operan++;
		            CekOperan++;							
				}else if (strcmp(p, "Sin") == 0){
					arr[a].operasi = 's';
		            Operan++;
		            CekOperan++;							
				}else if (strcmp(p, "SIN") == 0){
					arr[a].operasi = 's';
		            Operan++;
		            CekOperan++;							
				}else if (strcmp(p, "cos") == 0){
					arr[a].operasi = 'o';
		            Operan++;
		            CekOperan++;							
				}else if (strcmp(p, "Cos") == 0){
					arr[a].operasi = 'o';
		            Operan++;
		            CekOperan++;							
				}else if (strcmp(p, "COS") == 0){
					arr[a].operasi = 'o';
		            Operan++;
		            CekOperan++;							
				}else if (strcmp(p, "tan") == 0){
					arr[a].operasi = 't';
		            Operan++;
		            CekOperan++;							
				}else if (strcmp(p, "Tan") == 0){
					arr[a].operasi = 't';
		            Operan++;
		            CekOperan++;							
				}else if (strcmp(p, "TAN") == 0){
					arr[a].operasi = 't';
		            Operan++;
		            CekOperan++;							
				}else if (strcmp(p, "sec") == 0){
					arr[a].operasi = 'A';
		            Operan++;
		            CekOperan++;							
				}else if (strcmp(p, "Sec") == 0){
					arr[a].operasi = 'A';
		            Operan++;
		            CekOperan++;							
				}else if (strcmp(p, "SEC") == 0){
					arr[a].operasi = 'A';
		            Operan++;
		            CekOperan++;							
				}else if (strcmp(p, "csc") == 0){
					arr[a].operasi = 'c';
		            Operan++;
		            CekOperan++;							
				}else if (strcmp(p, "Csc") == 0){
					arr[a].operasi = 'c';
		            Operan++;
		            CekOperan++;							
				}else if (strcmp(p, "CSC") == 0){
					arr[a].operasi = 'c';
		            Operan++;
		            CekOperan++;							
				}else if (strcmp(p, "cot") == 0){
					arr[a].operasi = 'n';
		            Operan++;
		            CekOperan++;							
				}else if (strcmp(p, "Cot") == 0){
					arr[a].operasi = 'n';
		            Operan++;
		            CekOperan++;							
				}else if (strcmp(p, "COT") == 0){
					arr[a].operasi = 'n';
		            Operan++;
		            CekOperan++;	
		        //
		        }else if (strcmp(p, "arcsin") == 0){
					arr[a].operasi = 'S';
		            Operan++;
		            CekOperan++;							
				}else if (strcmp(p, "arccos") == 0){
					arr[a].operasi = 'O';
		            Operan++;
		            CekOperan++;							
				}else if (strcmp(p, "arctan") == 0){
					arr[a].operasi = 'T';
		            Operan++;
		            CekOperan++;							
				}else if (strcmp(p, "arcsec") == 0){
					arr[a].operasi = 'E';
		            Operan++;
		            CekOperan++;							
				}else if (strcmp(p, "arccot") == 0){
					arr[a].operasi = 'N';
		            Operan++;
		            CekOperan++;							
				}else if (strcmp(p, "arccsc") == 0){
					arr[a].operasi = 'C';
		            Operan++;
		            CekOperan++;
				}else if (strcmp(p, "DIV") == 0){
					arr[a].operasi = 'd';
		            Operan++;
		            CekOperan++;
				}else if (strcmp(p, "log") == 0){
					arr[a].operasi = 'L';
		            Operan++;
		            CekOperan++;	
				}else if (strcmp(p, "ln") == 0){
					arr[a].operasi = 'l';
		            Operan++;
		            CekOperan++;
				}else if (strcmp(p,"negate") == 0){
					arr[a].operasi = 'M';
		            Operan++;
		            CekOperan++;														
				}
				
				else if (strstr(p, "pi") != NULL){
					arr[a].angka = 3.14159265358979323846;
		            CekAngka++;	
				}else if (strstr(p, "phi") != NULL){
					arr[a].angka = 3.14159265358979323846;
		            CekAngka++;								
																
				}
				
				else{
					printf("\n\n\t\t\t\t\t\t\t\t     --> Maaf Anda salah input: %s\n", p);
				}
		
		        p = strtok(NULL, delimit);
				a++;	
		    }
			    
		    if ((pf=fopen("RIWAYAT.txt", "a+")) == NULL){
					printf("\t\t\t\t\t --> File gagal dibuat!\n");
					exit(1);
			}
			hasilAkhir = kalku(arr, Operan, CekAngka, CekOperan);
			printf("\n\n\t\t\t\t\t\t\t\t --> Hasil akhir kalkulasi = %.2lf <--", hasilAkhir);
			pf = fopen("RIWAYAT.txt","a");
			fprintf(pf,"hasil: %.2lf \n",hasilAkhir);			
			fclose(pf);						
	
	
	
		
			printf("\n\n\t\t\t\t\t\t\t\t\t\t Coba Lagi (y/t)?");
			lagi = getch();
			if(lagi!='y'){
				break;
			}	
			
	}
	printf	("\n\n\n\n\n\n\n\n\n\n\n\n\t\t++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf  ("\t\t     _____________________  \n");
	printf  ("\t\t    |  _________________  | \n");
	printf  ("\t\t    | |    KELOMPOK 1   | | \n");
	printf  ("\t\t    | |_________________| |  $$$$$$$$\\                  $$\\                               $$\\   $$\\                    $$\\ $$\\         \n");
	printf  ("\t\t    |  ___ ___ ___   ___  |  \\__$$  __|                 \\__|                              $$ | $$  |                   \\__|$$ |       \n");
	printf  ("\t\t    | | 7 | 8 | 9 | | + | |     $$ | $$$$$$\\   $$$$$$\\  $$\\ $$$$$$\\$$$$\\   $$$$$$\\        $$ |$$  / $$$$$$\\   $$$$$$$\\ $$\\ $$$$$$$\\     \n");
	printf  ("\t\t    | |___|___|___| |___| |     $$ |$$  __$$\\ $$  __$$\\ $$ |$$  _$$  _$$\\  \\____$$\\       $$$$$  /  \\____$$\\ $$  _____|$$ |$$  __$$\\     \n");
	printf  ("\t\t    | | 4 | 5 | 6 | | - | |     $$ |$$$$$$$$ |$$ |  \\__|$$ |$$ / $$ / $$ | $$$$$$$ |      $$  $$<   $$$$$$$ |\\$$$$$$\\  $$ |$$ |  $$ |  \n");
	printf  ("\t\t    | |___|___|___| |___| |     $$ |$$   ____|$$ |      $$ |$$ | $$ | $$ |$$  __$$ |      $$ |\\$$\\ $$  __$$ |\\\\____$$\\ $$ |$$ |  $$ |  \n");
	printf  ("\t\t    | | 1 | 2 | 3 | | x | |     $$ |\\$$$$$$$\\ $$ |      $$ |$$ | $$ | $$ |\\$$$$$$$ |      $$ | \\$$\\$$$$$$$  |$$$$$$$  |$$ |$$ |  $$ |  \n");
	printf  ("\t\t    | |___|___|___| |___| |     \\__| \\_______|\\__|      \\__|\\__| \\__| \\__| \\_______|      \\__|  \\__|\\_______|\\_______/ \\__|\\__|  \\__|   \n");
	printf  ("\t\t    | | . | 0 | = | | / | | \n");
	printf  ("\t\t    | |___|___|___| |___| | \n");
	printf  ("\t\t    |_____________________| \n\n");
	printf	("\t\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

	return 0;
}

