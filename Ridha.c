#include "Ridha.h"
#include "Rico.h"
#include "Agam.h"
#include "Mutia.h"
#include "Marshya.h"
#include "Naufal.h"

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
char* addSymbolCsc(char* s, int n, int* zeros)
{
	char* ans = (char*)malloc(2 * n * sizeof(char)); //alokasi string bernama "ans", sebagai variable output, memesan sebanyak 2 x ukuran n x ukuran tipe data char
	int i; //iterasi
	int j = 0; //iterasi
	int idx = 0; //penanda indeks
	
	for (i = 0; i < strlen(s); i++) { //akan di "cari" berdasarkan panjang string (dari parameter)
	    if (j < n && i == zeros[j]) { //jika jumlah karakter sama dengan array "zeros", tambahkan value '0'
	        ans[idx++] = '0'; //penambahan value '0' di string, misalkan e, menjadi e0
	        // e 0
	        //	 ^ char '0' akan diselipkan ke 1 char setelahnya
	        j++; //iterasi utk memenuhi syarat
	    }
	    ans[idx++] = s[i]; //utk nyalin karakter saat ini dari s ke array hasil ans
	}
	
	ans[idx] = '\0'; //penambahan null di akhir indeks
	
	return ans;
}

/*=============================================================================================*/
/*1. Input (initial state) = e*/
/*2. Output (final state) = e0*/
/*3. utk mengetahui indeks yang mengandung char e itu ada di mana saja*/
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
	
	memset(chars, 0, sizeof(chars));	//karena setiap looping array itu tidak ter-"reset", oleh karena itu untuk membersihkan array, perlunya memset
	
	int negate[255],nega=0,negaKetemu=0;	//tidak terpakai
	int arrayHasilAkhir[255],l;				//tidak terpakai
	
	int loopstr;    
	
//trigonometri

	if((strstr(str,"e")!=NULL) && !(strstr(str,"sec")!=NULL)){ //kalau string yang dimasukkan itu mengandung string 'e', namun BUKAN mengandung 'sec' 
		strcpy(sub,"e");										//string 'e' akan di salin ke variabel sub
	    len = strlen(str);										//untuk mengetahui berapa panjang string str (string)
	    sub_len = strlen(sub);									//untuk mengetahui berapa panjang string sub (substring)	
																//note: len itu pasti akan lebih besar dari sub_len, karena len itu dihitung null nya juga
																//contoh: e+92 (len: 5), termasuk null (\0)
	
	    for (i = 0; i <= len - sub_len; i++)					//kalau i <= selisih dari len dan sub_len, lakukan hal di bawah
	    {
	        found = 1;			        						//penanda bahwa found itu sudah ditemukan
	        for (j = 0; j < sub_len; j++)
	        {
	            if (str[i + j] != sub[j])						//kalau sudah ada yang berbeda
	            {
	                found = 0;									//maka found = 0
	                break;										//dan looping for dihentikan
	                											//IF disini untuk menghentikan proses loopnya
	            }
	        }
	
	        if (found == 1)										//kalau ketemu
	        {	
	        	chars[founds] = i+1;							//maka masukkan ke array yang berisi kumpulan index berapakah yang perlu "diisi" (posisinya 1 langkah di depan target, atau 'e')
	            ktemu++;
	            founds++;
	        }
	    }

	    if (found == 0)
	    {

	    }		
	}
	else{
		return str;												//kalau gk ketemu, maka kembalikan string semula
	}

	int loop, arrLoopi, arrLoopj, temp=0;
	int length = sizeof(chars)/sizeof(chars[0]);    			//menentukan panjang suatu array		


	n = sizeof(chars) / sizeof(chars[0]);						//menentukan panjang suatu array
	ans = addSymbolCsc(str, n, chars);							//pemanggilan fungsi untuk menambahkan char '0', dengan indeks yang sudah ditentukan berdasarkan letak si char 'e'
	
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
	angkas=floorr(1000*angkas)/1000; 	//misalkan 19.241029410248 itu akan dikalikan 1000, menjadi 19241.029410248, dan itu akan dibulatkan jadi 19241 menggunakan floor, lalu dibagi 1000 lagi menjadi 19.241
	return angkas; 						//return value
}


/*=============================================================================================*/
/*1. Input (initial state) = 2.3*/
/*2. Output (final state) = true*/
/*=============================================================================================*/
bool isDecimal(float angkas){
	char str[255]; 				//array of char
	sprintf(str,"%g",angkas); 	//konversi angka yang masuk menjadi string, inputan dari parameter, dengan format float, dan di assign ke array str
	if(strstr(str,".")!=NULL){ 	//kalau ada string yang mengandung char '.'
		return 1; 				//maka return 1, atau bisa disebut true, bukan termasuk desimal
	}else{
		return 0; 				//maka return 0, atau bisa disebut false, bukan termasuk desimal
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
	
	sprintf(str, "%g", angkas); 					//konversi angka yang masuk menjadi string, inputan dari parameter, dengan format float, dan di assign ke array str
	
	len = strlen(str);								//menghitung panjang string yang sudah dikonversi
	
	len = len-1;									//mengurang 1 setiap panjang string, karena indeks pada array itu dihitung dari 0 - (panjang string-1)
	
	while(kondisi==true && strstr(str,".")!=NULL){ 	//kalau kondisinya true (default) DAN string nya mengandung char '.'
		len--; 										//ukuran len mengurang 1
		if(str[len]=='.')							//kalau value dari array str indeks ke len sama dengan '.', maka matikan proses loop nya
			kondisi=false;							//utk mematikan proses loop
		counters++;									//kalau tidak, variabel counters bertambah 1 setiap loop
													
		//1	 9  .  2  4  1 <-value
		//0  1  2  3  4  5 <-indeks	
		//			  ^ akan dihitung dari sini, karena terdapat len--
		//		   ^ kalau belum bertemu mundur lagi ke indeks 3 (counters = 1)
		//		^ kalau belum bertemu mundur lagi ke indeks 2 (counters = 2)
		// karena sama dengan char '.', maka "matikan" kondisi loopnya, namum counter TETAP dihitung menjadi 3
		//sehingga hasil akhirnya adalah 3
	}
	
	return counters;

}

/*=============================================================================================*/
/*1. Input (initial state) = -4*/
/*2. Output (final state) = true*/
/*3. Referensi: Agam, dengan penyesuaian tipe data parameter*/
/*=============================================================================================*/
bool isNegativeDigit2(char c[], int elmt) {
    if (c[elmt] == '-') { 			//kalau value dari array adalah '-'
        elmt++; 					//maka elmt bertambah 1 setiap loop (bergeser kesebelahnya)
        return isdigit(c[elmt]); 	//untuk mengembalikan nilai
    }
    return false;					//false apabila tidak memenuhi syarat
}

/*=============================================================================================*/
/*1. Input (initial state) = 5*/
/*2. Output (final state) = true*/
/*3. Referensi: Agam, dengan penyesuaian tipe data parameter*/
/*=============================================================================================*/
bool isNumber2(char info[], int elmt){
	bool infoNumber;
	
	//apabila info[elmt] adalah digit (angka)
	//atau
	//info[elmt] adalah char '-' DAN termasuk negative digit, DAN BUKAN digit untuk char sebelumnya
	//misal: -429, termasuk angka/number,
	//namun 4-429 itu bukan angka, melainkan perintah/operasi untuk pengurangan
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
		
		if(strstr(exp,"pi")!=0){  				    			//kalau string yang dimasukkan mengandung string "PI"
		    while(exp[i]!='\0')									//kalau belum ampe mentok (\0 = null) 
		    {											
		        if((exp[i]=='p') && (exp[i+1]=='i'))			//apabila value dari array exp adalah p DAN indeks sebelahnya adalah i
		        {
					j=0;										//value default
		            exp[i]='1';									//replace yang awalnya p menjadi menjadi 1
		            exp[i+1]='p';								//replace yang awalnya i menjadi p										 
		        }
		        i++;											//iterasi, maju ke indeks selanjutnya
		    }
																//hasil akhir "1p"
																//dirubah menjadi 1p, bukan pi langsung, dikarenakan kalkulator kami harus ada angka yang "menempel" di setiap fungsi
																//jadi 1 itu utk pemancing saja (seperti faktorial, dll)				
		}
		
		i=0;
		
		if((strstr(exp,"e")!=0) && !(strstr(exp,"sec")!=0)){	//kalau string yang dimasukkan mengandung string "e", namun BUKAN string "sec"
		    while(exp[i]!='\0')									//kalau belum ampe mentok (\0 = null), lanjut
		    {
		        if((exp[i]=='e') && (exp[i+1]=='0'))			//apabila value dari array exp adalah p DAN indeks sebelahnya adalah i
		        {
					j=0;										//value default
		            exp[i]='1';									//replace yang awalnya e menjadi menjadi 1
		            exp[i+1]='e';								//replace yang awalnya 0 menjadi e																																															 
		        }
		        i++;											//iterasi, maju ke indeks selanjutnya
		    }
																//hasil akhir "1e"
																//dirubah menjadi 1e, bukan e0 langsung, dikarenakan kalkulator kami harus ada angka yang "menempel" di setiap fungsi
																//jadi 1 itu utk pemancing saja (seperti faktorial, dll)								
		}		

		i=0;
		
		if(strstr(exp,"|")!=0){									//kalau string yang dimasukkan mengandung string "|"
		    while(exp[i]!='\0')									//kalau belum ampe mentok (\0 = null)
		    {
		        if((exp[i]=='|') && (isNumber2(exp,i+1)))		//apabila value dari array exp adalah | DAN indeks sebelahnya adalah angka (bisa negatif, desimal, dll)
		        {
					j=0;										//value default
		            exp[i]='~';									//maka | di replace menjadi ~						 
		        }
		        i++;											//iterasi, maju ke indeks selanjutnya
		    }
																//hasil akhir "~[angka]|"
																//proses demikian digunakan untuk membedakan kurung fungsi absolut 
																//misal: |-32| menjadi ~-32|
																//karena stack yang kami buat itu membutuhkan kurung buka dan kurung tutupnya
																//sedangkan simbol | dengan | itu tidak ada bedanya
																//oleh karena itu salah satunya harus dibedakan
		}
			
		i=0;
		
		if(strstr(exp,"log")!=0){								//kalau string yang dimasukkan mengandung string "log"	
		    while(exp[i]!='\0')									//kalau belum ampe mentok (\0 = null)
		    {
		        if((exp[i]=='l') && (exp[i+1]=='o') && (exp[i+2]=='g')) //apabila value dari array exp adalah 'l', indeks sebelahnya adalah 'o', dan indeks sebelahnya adalah 'g'
		        {														
					j=0;										//value default
		            exp[i]='T';									//maka 'l' di replace menjadi 'T'
		            exp[i+1]=',';		           				//maka 'o' di replace menjadi ','
		            exp[i+2]=',';								//maka 'g' di replace menjadi ','							 
		        }
		        i++;											//iterasi, maju ke indeks selanjutnya
		    }
																//hasil akhir "T,,"
																//",," itu akan dihapus oleh modul selanjutnya (modul trim)
		}
		
		i=0;
		
		if(strstr(exp,"ln")!=0){								//kalau string yang dimasukkan mengandung string "ln"	
		    while(exp[i]!='\0')									//kalau belum ampe mentok (\0 = null)
		    {
		        if((exp[i]=='l') && (exp[i+1]=='n'))			//apabila value dari array exp adalah p DAN indeks sebelahnya adalah i
		        {
					j=0;										//value default
		            exp[i]='W';									//maka 'l' di replace menjadi 'W'
		            exp[i+1]=',';		          				//maka 'n' di replace menjadi ',' 															 
		        }
		        i++;											//iterasi, maju ke indeks selanjutnya
		    }
																//hasil akhir "W,"
																//',' itu akan dihapus oleh modul selanjutnya (modul trim)
		}
		
		i=0;
		
		if(strstr(exp,"lg")!=0){								//kalau string yang dimasukkan mengandung string "ln"	
		    while(exp[i]!='\0')									//kalau belum ampe mentok (\0 = null)
		    {
		        if((exp[i]=='l') && (exp[i+1]=='g'))			//apabila value dari array exp adalah p DAN indeks sebelahnya adalah i
		        {
					j=0;										//value default
		            exp[i]='U';									//maka 'l' di replace menjadi 'U'
		            exp[i+1]=',';		           				//maka 'g' di replace menjadi ',' 											 
		        }
		        i++;											//iterasi, maju ke indeks selanjutnya
		    }
																//hasil akhir "U,"
																//',' itu akan dihapus oleh modul selanjutnya (modul trim)							
		}							
	
		/* ==================================== */	
		/*  									*/
		/* I N V E R S  T R I G O N O M E T R I */
		/*  									*/
		/* ==================================== */			
//		int i;
		i=0; //Kondisi COS Radian
		if(strstr(exp,"arccs")!=0){								//kalau string yang dimasukkan mengandung string "arccs"
		    while(exp[i]!='\0')									//kalau belum ampe mentok (\0 = null)
		    {	
		        if((exp[i]=='a') && (exp[i+1]=='r') && (exp[i+2]=='c') && (exp[i+3]=='c') && (exp[i+4]=='s')) //apabila value dari array exp adalah 'a', indeks sebelahnya adalah 'r', indeks sebelahnya adalah 'c', indeks sebelahnya adalah 'c', dan indeks sebelahnya adalah 's'
		        {
		            exp[i]='A';									//maka 'a' di replace menjadi 'A'
		            exp[i+1]=',';		           				//maka 'r' di replace menjadi ','
		            exp[i+2]=',';								//maka 'c' di replace menjadi ','
		            exp[i+3]=',';								//maka 'c' di replace menjadi ','
		            exp[i+4]=',';		            			//maka 's' di replace menjadi ','
															 
		        }
		        i++;											//iterasi, maju ke indeks selanjutnya
		    }	
																//hasil akhir "A,,,,"
																//',,,,' itu akan dihapus oleh modul selanjutnya (modul trim)
																//menulis "arccs" bukannya arccos, dikarenakan berpotensi konflik dengan cos							
		}
		
		i=0; //Kondisi SIN Radian
		if(strstr(exp,"arcsn")!=0){								//kalau string yang dimasukkan mengandung string "arcsn"
		    while(exp[i]!='\0')									//kalau belum ampe mentok (\0 = null)
		    {
		        if((exp[i]=='a') && (exp[i+1]=='r') && (exp[i+2]=='c') && (exp[i+3]=='s') && (exp[i+4]=='n')) //apabila value dari array exp adalah 'a', indeks sebelahnya adalah 'r', indeks sebelahnya adalah 'c', indeks sebelahnya adalah 's', dan indeks sebelahnya adalah 'n'
		        {
		            exp[i]='B';									//maka 'a' di replace menjadi 'B'
		            exp[i+1]=',';								//maka 'r' di replace menjadi ','
		            exp[i+2]=',';								//maka 'c' di replace menjadi ','
		            exp[i+3]=',';								//maka 's' di replace menjadi ','
		            exp[i+4]=',';								//maka 'n' di replace menjadi ','
															 
		        }
		        i++;											//iterasi, maju ke indeks selanjutnya
		    }	
																//hasil akhir "B,,,,"
																//',,,,' itu akan dihapus oleh modul selanjutnya (modul trim)
																//menulis "arcsn" bukannya arcsin, dikarenakan berpotensi konflik dengan sin							
						
		}
		
		i=0; //Kondisi TAN Radian
		if(strstr(exp,"arctn")!=0){								//kalau string yang dimasukkan mengandung string "arctn"
		    while(exp[i]!='\0')									//kalau belum ampe mentok (\0 = null)
		    {
		        if((exp[i]=='a') && (exp[i+1]=='r') && (exp[i+2]=='c') && (exp[i+3]=='t') && (exp[i+4]=='n')) //apabila value dari array exp adalah 'a', indeks sebelahnya adalah 'r', indeks sebelahnya adalah 'c', indeks sebelahnya adalah 't', dan indeks sebelahnya adalah 'n'
		        {
		            exp[i]='C';									//maka 'a' di replace menjadi 'C'
		            exp[i+1]=',';		      					//maka 'r' di replace menjadi ','     
		            exp[i+2]=',';								//maka 'c' di replace menjadi ','
		            exp[i+3]=',';								//maka 't' di replace menjadi ','
		            exp[i+4]=',';		            			//maka 'n' di replace menjadi ','
															 
		        }
		        i++;											//iterasi, maju ke indeks selanjutnya
		    }
																//hasil akhir "C,,,,"
																//',,,,' itu akan dihapus oleh modul selanjutnya (modul trim)
																//menulis "arctn" bukannya arctan, dikarenakan berpotensi konflik dengan tan							
		}
		
		i=0; //Kondisi SECANT Radian
		if(strstr(exp,"arcsc")!=0){								//kalau string yang dimasukkan mengandung string "arcsc"
		    while(exp[i]!='\0')									//kalau belum ampe mentok (\0 = null)
		    {
		        if((exp[i]=='a') && (exp[i+1]=='r') && (exp[i+2]=='c') && (exp[i+3]=='s') && (exp[i+4]=='c')) //apabila value dari array exp adalah 'a', indeks sebelahnya adalah 'r', indeks sebelahnya adalah 'c', indeks sebelahnya adalah 's', dan indeks sebelahnya adalah 'c'
		        {
		            exp[i]='V';									//maka 'a' di replace menjadi 'V'
		            exp[i+1]=',';		     					//maka 'r' di replace menjadi ','      
		            exp[i+2]=',';								//maka 'c' di replace menjadi ','
		            exp[i+3]=',';								//maka 's' di replace menjadi ','
		            exp[i+4]=',';		            			//maka 'c' di replace menjadi ','
															 
		        }
		        i++;											//iterasi, maju ke indeks selanjutnya
		    }
																//hasil akhir "V,,,,"
																//',,,,' itu akan dihapus oleh modul selanjutnya (modul trim)
																//menulis "arcsc" bukannya arcsec, dikarenakan berpotensi konflik dengan sec
		}	
		
		i=0; //Kondisi COSECANT Radian
		if(strstr(exp,"arccc")!=0){								//kalau string yang dimasukkan mengandung string "arccc"
		    while(exp[i]!='\0')									//kalau belum ampe mentok (\0 = null)
		    {
		        if((exp[i]=='a') && (exp[i+1]=='r') && (exp[i+2]=='c') && (exp[i+3]=='c') && (exp[i+4]=='c')) //apabila value dari array exp adalah 'a', indeks sebelahnya adalah 'r', indeks sebelahnya adalah 'c', indeks sebelahnya adalah 'c', dan indeks sebelahnya adalah 'c'
		        {
		            exp[i]='G';									//maka 'a' di replace menjadi 'G'
		            exp[i+1]=',';								//maka 'r' di replace menjadi ','	           
		            exp[i+2]=',';								//maka 'c' di replace menjadi ','
		            exp[i+3]=',';								//maka 'c' di replace menjadi ','
		            exp[i+4]=',';		  						//maka 'c' di replace menjadi ','          
															 
		        }
		        i++;											//iterasi, maju ke indeks selanjutnya
		    }
																//hasil akhir "G,,,,"
																//',,,,' itu akan dihapus oleh modul selanjutnya (modul trim)
																//menulis "arccc" bukannya arccsc, dikarenakan berpotensi konflik dengan csc							
		}										
	
		i=0; //Kondisi COTANGENT Radian
		if(strstr(exp,"arcct")!=0){								//kalau string yang dimasukkan mengandung string "arcct"
		    while(exp[i]!='\0')									//kalau belum ampe mentok (\0 = null)
		    {
		        if((exp[i]=='a') && (exp[i+1]=='r') && (exp[i+2]=='c') && (exp[i+3]=='c') && (exp[i+4]=='t')) //apabila value dari array exp adalah 'a', indeks sebelahnya adalah 'r', indeks sebelahnya adalah 'c', indeks sebelahnya adalah 'c', dan indeks sebelahnya adalah 't'
		        {
		            exp[i]='Y';									//maka 'a' di replace menjadi 'Y'
		            exp[i+1]=',';		    					//maka 'r' di replace menjadi ','       
		            exp[i+2]=',';								//maka 'c' di replace menjadi ','
		            exp[i+3]=',';								//maka 'c' di replace menjadi ','
		            exp[i+4]=',';		            			//maka 't' di replace menjadi ','
															 
		        }
		        i++;											//iterasi, maju ke indeks selanjutnya
		    }
																//hasil akhir "Y,,,,"
																//',,,,' itu akan dihapus oleh modul selanjutnya (modul trim)
																//menulis "arcct" bukannya arccot, dikarenakan berpotensi konflik dengan cot							
							
		}
			
		/* ==================================== */	
		/*  									*/
		/* T R I G O N O M E T R I  R A D I A N	*/
		/*  									*/
		/* ==================================== */			
				
		i=0; //Kondisi COS Radian
		if(strstr(exp,"RADcs")!=0){								//kalau string yang dimasukkan mengandung string "RADcs"
		    while(exp[i]!='\0')									//kalau belum ampe mentok (\0 = null)
		    {
		        if((exp[i]=='R') && (exp[i+1]=='A') && (exp[i+2]=='D') && (exp[i+3]=='c') && (exp[i+4]=='s')) //apabila value dari array exp adalah 'R', indeks sebelahnya adalah 'A', indeks sebelahnya adalah 'D', indeks sebelahnya adalah 'c', dan indeks sebelahnya adalah 's'
		        {
		            exp[i]='L';									//maka 'R' di replace menjadi 'L'
		            exp[i+1]=',';		    					//maka 'A' di replace menjadi ','
		            exp[i+2]=',';								//maka 'D' di replace menjadi ','
		            exp[i+3]=',';								//maka 'c' di replace menjadi ','
		            exp[i+4]=',';		            			//maka 's' di replace menjadi ','
															 
		        }
		        i++;											//iterasi, maju ke indeks selanjutnya
		    }
																//hasil akhir "L,,,,"
																//',,,,' itu akan dihapus oleh modul selanjutnya (modul trim)
																//menulis "RADcs" bukannya RADcos, dikarenakan berpotensi konflik dengan cos							
							
		}
		
		i=0; //Kondisi SIN Radian
		if(strstr(exp,"RADsn")!=0){								//kalau string yang dimasukkan mengandung string "RADsn"
		    while(exp[i]!='\0')									//kalau belum ampe mentok (\0 = null)
		    {
		        if((exp[i]=='R') && (exp[i+1]=='A') && (exp[i+2]=='D') && (exp[i+3]=='s') && (exp[i+4]=='n')) //apabila value dari array exp adalah 'R', indeks sebelahnya adalah 'A', indeks sebelahnya adalah 'D', indeks sebelahnya adalah 's', dan indeks sebelahnya adalah 'n'
		        {
		            exp[i]='M';									//maka 'R' di replace menjadi 'M'
		            exp[i+1]=',';		        				//maka 'A' di replace menjadi ','   
		            exp[i+2]=',';								//maka 'D' di replace menjadi ','
		            exp[i+3]=',';								//maka 's' di replace menjadi ','
		            exp[i+4]=',';		            			//maka 'n' di replace menjadi ','
															 
		        }
		        i++;											//iterasi, maju ke indeks selanjutnya
		    }
																//hasil akhir "M,,,,"
																//',,,,' itu akan dihapus oleh modul selanjutnya (modul trim)
																//menulis "RADsn" bukannya RADsin, dikarenakan berpotensi konflik dengan sin							
								
		}
		
		i=0; //Kondisi TAN Radian
		if(strstr(exp,"RADtn")!=0){								//kalau string yang dimasukkan mengandung string "RADtn"
		    while(exp[i]!='\0')									//kalau belum ampe mentok (\0 = null)
		    {
		        if((exp[i]=='R') && (exp[i+1]=='A') && (exp[i+2]=='D') && (exp[i+3]=='t') && (exp[i+4]=='n')) //apabila value dari array exp adalah 'R', indeks sebelahnya adalah 'A', indeks sebelahnya adalah 'D', indeks sebelahnya adalah 't', dan indeks sebelahnya adalah 'n'
		        {
		            exp[i]='N';									//maka 'R' di replace menjadi 'N'
		            exp[i+1]=',';		          				//maka 'A' di replace menjadi ',' 
		            exp[i+2]=',';								//maka 'D' di replace menjadi ','
		            exp[i+3]=',';								//maka 't' di replace menjadi ','
		            exp[i+4]=',';		            			//maka 'n' di replace menjadi ','
															 
		        }
		        i++;											//iterasi, maju ke indeks selanjutnya
		    }
																//hasil akhir "N,,,,"
																//',,,,' itu akan dihapus oleh modul selanjutnya (modul trim)
																//menulis "RADtn" bukannya RADtan, dikarenakan berpotensi konflik dengan tan							
		}
		
		i=0; //Kondisi SECANT Radian
		if(strstr(exp,"RADsc")!=0){								//kalau string yang dimasukkan mengandung string "RADsc"
		    while(exp[i]!='\0')									//kalau belum ampe mentok (\0 = null)
		    {
		        if((exp[i]=='R') && (exp[i+1]=='A') && (exp[i+2]=='D') && (exp[i+3]=='s') && (exp[i+4]=='c')) //apabila value dari array exp adalah 'R', indeks sebelahnya adalah 'A', indeks sebelahnya adalah 'D', indeks sebelahnya adalah 's', dan indeks sebelahnya adalah 'c'
		        {
		            exp[i]='P';									//maka 'R' di replace menjadi 'P'
		            exp[i+1]=',';		       					//maka 'A' di replace menjadi ','
		            exp[i+2]=',';								//maka 'D' di replace menjadi ','
		            exp[i+3]=',';								//maka 's' di replace menjadi ','
		            exp[i+4]=',';		            			//maka 'c' di replace menjadi ','
															 
		        }
		        i++;											//iterasi, maju ke indeks selanjutnya
		    }
																//hasil akhir "P,,,,"
																//',,,,' itu akan dihapus oleh modul selanjutnya (modul trim)
																//menulis "RADsc" bukannya RADsec, dikarenakan berpotensi konflik dengan sec							
		}	
		
		i=0; //Kondisi COSECANT Radian
		if(strstr(exp,"RADcc")!=0){								//kalau string yang dimasukkan mengandung string "RADcc"
		    while(exp[i]!='\0')									//kalau belum ampe mentok (\0 = null)
		    {
		        if((exp[i]=='R') && (exp[i+1]=='A') && (exp[i+2]=='D') && (exp[i+3]=='c') && (exp[i+4]=='c')) //apabila value dari array exp adalah 'R', indeks sebelahnya adalah 'A', indeks sebelahnya adalah 'D', indeks sebelahnya adalah 'c', dan indeks sebelahnya adalah 'c'
		        {
		            exp[i]='Q';									//maka 'R' di replace menjadi 'Q'
		            exp[i+1]=',';		   						//maka 'A' di replace menjadi ','
		            exp[i+2]=',';								//maka 'D' di replace menjadi ','
		            exp[i+3]=',';								//maka 's' di replace menjadi ','
		            exp[i+4]=',';		            			//maka 'c' di replace menjadi ','
															 
		        }
		        i++;											//iterasi, maju ke indeks selanjutnya
		    }
																//hasil akhir "Q,,,,"
																//',,,,' itu akan dihapus oleh modul selanjutnya (modul trim)
																//menulis "RADcc" bukannya RADcsc, dikarenakan berpotensi konflik dengan csc							
							
		}										
	
		i=0; //Kondisi COTANGENT Radian
		if(strstr(exp,"RADct")!=0){								//kalau string yang dimasukkan mengandung string "RADct"
		    while(exp[i]!='\0')									//kalau belum ampe mentok (\0 = null)
		    {
		        if((exp[i]=='R') && (exp[i+1]=='A') && (exp[i+2]=='D') && (exp[i+3]=='c') && (exp[i+4]=='t')) //apabila value dari array exp adalah 'R', indeks sebelahnya adalah 'A', indeks sebelahnya adalah 'D', indeks sebelahnya adalah 'c', dan indeks sebelahnya adalah 't'
		        {
		            exp[i]='Z';									//maka 'R' di replace menjadi 'Z'
		            exp[i+1]=',';		           				//maka 'A' di replace menjadi ','
		            exp[i+2]=',';								//maka 'D' di replace menjadi ','
		            exp[i+3]=',';								//maka 'c' di replace menjadi ','
		            exp[i+4]=',';		            			//maka 't' di replace menjadi ','
															 
		        }
		        i++;											//iterasi, maju ke indeks selanjutnya
		    }
																//hasil akhir "Z,,,,"
																//',,,,' itu akan dihapus oleh modul selanjutnya (modul trim)
																//menulis "RADct" bukannya RADcot, dikarenakan berpotensi konflik dengan cot								
		}	
		
		/* ==================================== */	
		/*  									*/
		/* T R I G O N O M E T R I  B I A S A	*/
		/*  									*/
		/* ==================================== */			
				
		i=0; //Kondisi COS degree
		if(strstr(exp,"sin")!=0){								//kalau string yang dimasukkan mengandung string "sin"
		    while(exp[i]!='\0')									//kalau belum ampe mentok (\0 = null)
		    {
		        if((exp[i]=='s') && (exp[i+1]=='i') && (exp[i+2]=='n')) //apabila value dari array exp adalah 's', indeks sebelahnya adalah 'i', dan indeks sebelahnya lagi adalah 'n'
		        {
		            exp[i]='i';									//maka 's' di replace menjadi 'i'
		            exp[i+1]=',';		           				//maka 'i' di replace menjadi ','
		            exp[i+2]=',';		            			//maka 'n' di replace menjadi ','					 
		        }
		        i++;											//iterasi, maju ke indeks selanjutnya
		    }
																//hasil akhir "i,,"
																//',,' itu akan dihapus oleh modul selanjutnya (modul trim)
		}
		
		i=0; //Kondisi SIN degree
		if(strstr(exp,"cos")!=0){								//kalau string yang dimasukkan mengandung string "cos"
		    while(exp[i]!='\0')									//kalau belum ampe mentok (\0 = null)
		    {
		        if((exp[i]=='c') && (exp[i+1]=='o') && (exp[i+2]=='s')) //apabila value dari array exp adalah 'c', indeks sebelahnya adalah 'o', dan indeks sebelahnya lagi adalah 's'
		        {
		            exp[i]='X';									//maka 'c' di replace menjadi 'X'
		            exp[i+1]=',';		           				//maka 'o' di replace menjadi ','
		            exp[i+2]=',';	            				//maka 's' di replace menjadi ','	
															 
		        }
		        i++;											//iterasi, maju ke indeks selanjutnya
		    }
																//hasil akhir "X,,"
																//',,' itu akan dihapus oleh modul selanjutnya (modul trim)
							
		}
		
		i=0; //Kondisi TAN degree
		if(strstr(exp,"tan")!=0){								//kalau string yang dimasukkan mengandung string "tan"
		    while(exp[i]!='\0')									//kalau belum ampe mentok (\0 = null)
		    {
		        if((exp[i]=='t') && (exp[i+1]=='a') && (exp[i+2]=='n'))	//apabila value dari array exp adalah 't', indeks sebelahnya adalah 'a', dan indeks sebelahnya lagi adalah 'n'
		        {
		            exp[i]='a';									//maka 't' di replace menjadi 'a'
		            exp[i+1]=',';		           				//maka 'a' di replace menjadi ','
		            exp[i+2]=',';	            				//maka 'n' di replace menjadi ','
															 
		        }
		        i++;											//iterasi, maju ke indeks selanjutnya
		    }
																//hasil akhir "a,,"
																//',,' itu akan dihapus oleh modul selanjutnya (modul trim)							
		}
		
		i=0; //Kondisi SECANT degree
		if(strstr(exp,"sec")!=0){								//kalau string yang dimasukkan mengandung string "sec"
		    while(exp[i]!='\0')									//kalau belum ampe mentok (\0 = null)
		    {
		        if((exp[i]=='s') && (exp[i+1]=='e') && (exp[i+2]=='c')) //apabila value dari array exp adalah 's', indeks sebelahnya adalah 'e', dan indeks sebelahnya lagi adalah 'c'
		        {
		            exp[i]='E';									//maka 's' di replace menjadi 'E'
		            exp[i+1]=',';		           				//maka 'e' di replace menjadi ','
		            exp[i+2]=',';		            			//maka 'c' di replace menjadi ','
															 
		        }
		        i++;											//iterasi, maju ke indeks selanjutnya
		    }
																//hasil akhir "E,,"
																//',,' itu akan dihapus oleh modul selanjutnya (modul trim)								
		}	
		
		i=0; //Kondisi COSECANT degree
		if(strstr(exp,"csc")!=0){								//kalau string yang dimasukkan mengandung string "csc"
		    while(exp[i]!='\0')									//kalau belum ampe mentok (\0 = null)
		    {
		        if((exp[i]=='c') && (exp[i+1]=='s') && (exp[i+2]=='c'))
		        {
		            exp[i]='K';									//maka 'c' di replace menjadi 'K'
		            exp[i+1]=',';		           				//maka 's' di replace menjadi ','		           
		            exp[i+2]=',';		           				//maka 'c' di replace menjadi ','	            							 
		        }
		        i++;											//iterasi, maju ke indeks selanjutnya
		    }
																//hasil akhir "K,,"
																//',,' itu akan dihapus oleh modul selanjutnya (modul trim)								
							
		}										
	
		i=0; //Kondisi COTANGENT degree
		if(strstr(exp,"cot")!=0){								//kalau string yang dimasukkan mengandung string "cot"
		    while(exp[i]!='\0')									//kalau belum ampe mentok (\0 = null)
		    {
		        if((exp[i]=='c') && (exp[i+1]=='o') && (exp[i+2]=='t'))
		        {
		            exp[i]='D';									//maka 'c' di replace menjadi 'D'
		            exp[i+1]=',';		           				//maka 'o' di replace menjadi ','		           
		            exp[i+2]=',';		           				//maka 't' di replace menjadi ','		            
															 
		        }
		        i++;											//iterasi, maju ke indeks selanjutnya
		    }
																//hasil akhir "D,,"
																//',,' itu akan dihapus oleh modul selanjutnya (modul trim)								
							
		}
		
		
		i=0; //Kondisi DIV
		if(strstr(exp,"DIV")!=0){								//kalau string yang dimasukkan mengandung string "DIV"
		    while(exp[i]!='\0')									//kalau belum ampe mentok (\0 = null)
		    {
		        if((exp[i]=='D') && (exp[i+1]=='I') && (exp[i+2]=='V'))
		        {
		            exp[i]='d';									//maka 'D' di replace menjadi 'd'
		            exp[i+1]=',';		           				//maka 'I' di replace menjadi ','		           
		            exp[i+2]=',';		           				//maka 'V' di replace menjadi ','		            
															 
		        }
		        i++;											//iterasi, maju ke indeks selanjutnya
		    }
																//hasil akhir "d,,"
																//',,' itu akan dihapus oleh modul selanjutnya (modul trim)								
							
		}		
		
	return exp;		
	
}

/*=============================================================================================*/
/*1. Input (initial state) = T,90*/
/*2. Output (final state) = T90*/
/*note: untuk menghapus char ','*/
/*=============================================================================================*/
char * trimLog(char * e){
	char* x = malloc (255*sizeof(char)); //alokasi string yang nantinya dijadikan value yang baru
	int i,j;
		
	for(i=0,j=0; e[i]!='\0'; i++,j++)	//proses pencarian char per index, kalau belum null terus lakukan pencarian
	{
        while(e[j]==','){				//apabila ketemu char ',' saat pencarian indeks
			j++;       					//lanjutkan pencarian ke indeks berikutnya / hingga ',' nya habis / bukan char ',' lagi
		}		   
			// T  ,  ,  ,  null
			// 0  1  2  3  4
			// ^  karena tidak termasuk perintah while(e[j]==','), maka value yg ditunjuk indeks langsung dipindahkan ke array baru
			//    ^ karena yg indeks yg ditunjuk itu sama dengan ',' maka terus menunjuk hingga bukan ',' lagi
			//       ^
			//		     ^
			//              ^ karena null, maka masukkan ke array baru
        x[i]=e[j]; //memasukkan char di dalam array ke array yang baru yang nantinya akan di dikembalikan						
	}			
    x[i]='\0';	//memberikan nilai null di akhir indeks
	return x;				
}

/*=============================================================================================*/
/*1. Input (initial state) = P,,,,90*/
/*2. Output (final state) = P90*/
/*note: untuk menghapus char ','*/
/*=============================================================================================*/
char isValid1(char x){
	// kalau char yang dimasukkan memenuhi syarat di bawah, maka menghasilkan 1, yang artinya True
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
	// kalau char yang dimasukkan memenuhi syarat di bawah, maka akan mengembalikan char 'h' (utk help)
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
	
	//pencarian teks hingga selesai / null	
	while(*e != '\0')
	{
		//(isValid1(*e) && !isdigit(*(e+1)))
		
			//kalau pointer yang ditunjuk tidak valid ATAU kurung nya tidak memiliki operator
	    	if(isValid1(*e)==0 || ((*e)==')' && isdigit(*(e+1)))   ){
	    		//error dikarenakan kalkulator kami tidak memiliki fungsi kurung sebagai kali 
				//misal: 2(30+2), yang benar adalah 2*(30+2)
	    		system("cls");
	    		printf("eror, \n simbol (%s) tidak ada di kamus data kami, atau simbolnya tidak memiliki bilangan \ntolong masukin simbol yg bener\n\n\np.s. ketik h untuk minta bantuan\n",e);
	    		system("Pause");
	    		valid = false; // disebut invalid agar tidak dibuatkan infiks to postfix dan tree
				return;
			}
			
			//kalau pointer yang menunjuk menghasilkan char 'h'
			if(isValid1(*e)=='h'){
	    		system("cLs");
	    		
	    		//akan dipanggilnya help atau bantuan
				help();																				    		
	    		system("Pause");
	    		valid = false; // disebut invalid agar tidak dibuatkan infiks to postfix dan tree
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
		    	

		    	
		    	*(TabStrKt+strtCount) = (infotype ) malloc (100 * sizeof(char)); //alokasi
	            float num = 0;
	            float sign = 1;
	            float decimal = 0.1;
	            
				if(*e == '-'){ //apabila pointer menunjuk '-'
		            sign = -1; //maka sign akan diberi negatif
		            e++;	   //next ke pointer berikutnya
				}
				
				//selagi pointer yang ditunjuk itu berupa angka
				//atau
				//berupa '.' DAN pointer setelahnya adalah digit (angka)
	            while (isdigit(*e) || (*e == '.' && isdigit(*(e+1)))) {
	            	//kalau pointer yang ditunjuk sama dengan '.'
	                if (*e == '.') {
	                    e++; //lanjut ke pointer setelahnya
	                    while (isdigit(*e)) { //selagi pointer yang ditunjuk adalah digit (angka)
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
		        
		        sprintf(strt, "%g", num * sign); //kalau negatif, sign nya -1, dan akan dikali 
		        //misal: -23; num:23 sign:-1
  				
  				*(ArrRes+arresCount)=strt; //string berbentuk array / statis akan di assign ke string berbentuk dinamis (dengan posisi yang dinamis pula)
										   // perlu dipindah karena error apabila langsung dimasukkan ke dalam linkedlist
		        strcpy(*(TabStrKt+strtCount), *(ArrRes+arresCount)); //karena strcpy itu butuh tipe data yang sama (yaitu string dengan string)
		        
		        insLast (&First, &Last, *(TabStrKt+strtCount)); //insertion angka ke linkedlist
				strtCount++;
  				arresCount++;

		        e--;
		    }
	        else if(*e == '('){
	            push(*e);		//apabila pointer yang ditunjuk sama dengan '(', maka masukkan '(' ke dalam stack
				kurung=true;        	
			}
	        else if(*e == ')')
	        {
	        	kurung2=true;
	            while((x = pop()) != '('){												//selagi belum char '(' apabila di hapus stacknya
	            	*(TabStrKt+strtCount) = (infotype ) malloc (100 * sizeof(char));	//alokasi dinamis
	            	printf("%c ", x);													//print char
	            	strncat(strings, &x, 1);											//penambahan operator (yg didalam kurung) ke string
	            	printf("\nSTRINGSSSS: %s\n",strings);
	            	*(ArrRes+arresCount)=strings;										//hasil nya akan ditampung ke array dinamis
	            	strcpy(*(TabStrKt+strtCount),*(ArrRes+arresCount));					//disalin ke array yang baru
	            	insLast (&First, &Last, *(TabStrKt+strtCount));						//insert last
//					insLast (&First, &Last, ")");
					strcpy(strings,"\0");												//strings akan di 'reset' buat looping selanjutnya
					strtCount++;
					arresCount++;	            	
				}     
	        }
	        //catatan: dari line di bawah ini hingga line else if(*e == ']'), semuanya sama prosesnya dengan yang kurung
	        //hal yang membedakan adalah push tanda penutupnya (utk fungsi mutlak, round, ceil dll)
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
					insLast (&First, &Last, "|"); //push tanda penutup (dihitung sbg operator)			     
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
					insLast (&First, &Last, "}"); //push tanda penutup (dihitung sbg operator)					     
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
					insLast (&First, &Last, ">"); //push tanda penutup (dihitung sbg operator)					     
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
					insLast (&First, &Last, "]"); //push tanda penutup (dihitung sbg operator)
	        }	        
	        
	        else
	        {
      			//else ini dilakukan sebagai OPERATOR (+,-,*,/, dll.)				
	            while(priority(stack[top]) >= priority(*e)){ //while ini digunakan apabila kondisinya berupa operasi berulang (ex: 5+5+5+5, 5-2+4+4), ATAU berupa priority yang sama (misal: 5*2/2)

	            	*(TabStrKt+strtCount) = (infotype ) malloc (100 * sizeof(char));
	            	y=pop();				//karena priority nya sama, jadi gk bisa dimasukkin, jadi char dengan priority yg sama akan di pop dan dimasukkan ke dalam var y utk digantikan dengan yang baru   
					
					//kode dibawah ini hanya untuk merubah tipe data saja, agar bisa langsung dimasukkan ke linkedlist, karena bentukan linkedlist itu string, sedangkan yang di pop itu adalah char
					strncat(strings, &y, 1);
					*(ArrRes+arresCount)=strings;
	            	strcpy(*(TabStrKt+strtCount),*(ArrRes+arresCount));
	            	
					insLast (&First, &Last, *(TabStrKt+strtCount)); //lalu dimasukkan hasil yang "ditendang" itu akan dimasukkan ke dalam linkedlist string (postfix)
					strcpy(strings,"\0");
					strtCount++;
					arresCount++;		
				}
				
	            push(*e); //operatornya masuk ke stack
	        }	        
	        e++;
	}
	
	//while ini digunakan untuk memasukkan semua apa yang ada di stack ke linkedlist / postfix string
	//atau bisa disebut pemindahan sisa operator yg ada di stack ke linkedlist (postfix)
	while(top != -1 && stack[top] != '(')
    {
    	*(TabStrKt+strtCount) = (infotype ) malloc (100 * sizeof(char));
    	z=pop();						//klo ada sisanya, pop terus hingga habis
    									//misal stack nya ada sisa + dan /, pop terus hingga habis (-1) 

		//perubahan tipe data
    	strncat(strings2, &z, 1);
		*(ArrRes+arresCount)=strings2;
		strcpy(*(TabStrKt+strtCount),*(ArrRes+arresCount));
		
		//memasukkan ke dalam linkedlist
		insLast (&First, &Last, *(TabStrKt+strtCount)); //yang di pop itu akan dipindahkan z, karena z itu char dan linkedlist butuh string, maka rubah dlu ke string, baru dimasukkan ke linkedlistnya
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
	P = (address) malloc(sizeof (ElmtList));	//alokasi pointer (pembuatan kotak linkedlist)
	info(P) = Info;								//info akan dimasukkan dengan parameter info
	next(P) = Nil;								//di null kan (default)
	prev(P) = Nil;								//di null kan (default)

	if(*Last==Nil){								//kalau apa yang ditunjuk last itu null / masih belum nunjuk siapa"
		*First = P;								//first akan menunjuk p
		*Last = P;								//last akan menunjuk P
												//keduanya menunjuk "kotak" yang sama
	}else{										//kalau tidak
		next(P) = Nil;							//next dari kotak P akan menunjuk null
		prev(P) = *Last;						//prev dari kotak P akan menunjuk apa yang ditunjuk last
		next(*Last) = P;						//next dari apa yang ditunjuk last, menunjuk kotak P
		*Last = P;								//last sekarang menunjuk ke kotak P (karena insert last)
	}
}

void viewAsc(address First){
	//dari first ke last
//	printf("\nView Ascending: \n");
	while(First!=Nil){				//selagi first nya belum ke null
		printf(" ", info(First));	//print (kosong) info yang ditunjuk oleh first
		First = next(First);		//pointer akan menunjuk setelahnya (next)
	}printf("\n");//tidak terlalu penting
}


/*=============================================================================================*/
/*1. Input (initial state) = nilai belum diketahui*/
/*2. Output (final state) = menghasilkan hasil pembagi*/
/*=============================================================================================*/
div_t f_div(int x, int y){
	div_t output;		//harus tipe data div_t (tipe data komposit)
	output=div(x,y);	//hasilnya akan ditampung ke output
	return output;		//hasilnya akan dikembalikan
}

/*=============================================================================================*/
/*1. Input (initial state) = nilai belum diketahui*/
/*2. Output (final state) = menghasilkan sisa bagi*/
/*=============================================================================================*/
int f_mod(int dividend, int divisor){ //2 % 3 = dividend 3, divisor 2
    float quotient = 0;
    
	int i;
    int helper,helper2,helper3;
	int helper4,helper5;
          
    while (dividend >= divisor) {	//kalau dividend lebih besar / sama dengan divisor
        dividend -= divisor;		//sama artinya dengan dividend = dividend - divisor, artinya dividend dikurang dengan divisor, yang nantinya akan di assign ke dividend
    }
    
    return dividend;				//return sisa pembagi
}

/*=============================================================================================*/
/*1. Input (initial state) = -5*/
/*2. Output (final state) = True*/
/*=============================================================================================*/
bool isNegative(float x){
	if(x<0){		//kalau x nya itu kurang dari 0
		return 1;	//true
	}else{
		return 0;	//false
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
/*3.1 prepscholar (berupa teori saja) */
/*3.2 advernesia (berupa teori saja, utk pangkat negatif)*/
/*4.1 https://blog.prepscholar.com/natural-log-rules */
/*4.2 https://www.advernesia.com/blog/matematika/perpangkatan/*/
/*=============================================================================================*/
float f_pangkat(float basis, float eksp){

	float penampung;
	
    float result; 
    
    float basis2;
    
    int sign=1;							//untuk penanda
	
	if(basis<0){						//kalau basisnya kurang dari 0 (atau negative)
		basis2=abs1(basis);				//tetap harus di mutlakkan terlebih dahulu, menggunakan fungsi yang sudah ada
		penampung = log_2(basis2);		//rumus perpangkatan itu dasarnya dari logaritma, dan ditampung ke var penampung
		
		if(f_mod(eksp,2)==0){ 			//kalau basis genap
			sign = 1;					//positif
		}else if(f_mod(eksp,2)==1){		//kalau basis ganjil
			sign = -1;					//negatif
		}								//dilakukan decision di atas karena perpangkatan negatif itu kalau basis nya ganjil, hasilnya negatif, sedangkan kalau basisnya genap, hasilnya positif
		
	}else{
		penampung = log_2(basis);		//kalau bukan negatif, lakukan logaritma seperti biasa
	}
	
	result = powerex(eksp * penampung);	//karena rumus dasar perpangkatan itu adalah exponent(exp x penampung)

	return (result*sign);				//dikalikan sign untuk negative ataupun tidak
}


/*=============================================================================================*/
/*1. Input (initial state) = value belum diketahui*/
/*2. Output (final state) = menghasilkan hasil akar*/
/*3. referensi = ourcodeworld */
/*4. https://ourcodeworld.com/articles/read/884/how-to-get-the-square-root-of-a-number-without-using-the-sqrt-function-in-c*/
/*=============================================================================================*/

float f_akar(float number)
{
    float temp, sqrt;						//variabel float
    sqrt = number / 2;						//angka dari parameter akan dibagi 2
    temp = 0;								//pengisian nilai default
    while(sqrt != temp){					//selama sqrt(yg dibagi 2 itu) tidak sama dengan temp
        temp = sqrt;						//assignment nilai sqrt ke temp
        sqrt = ( number/temp + temp) / 2;	//akan dilakukan rumus di samping, nilai value nya akan berbentuk koma, dan akan terus dilakukan hingga berbentuk bulat kembali
        									//apabila angkanya sudah bulat kembali, akan dilakukan looping sekali lagi, dan rumus dilakukan lagi, karena hasilnya sama, loopingnya langsung berhenti
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
	hasil = f_pangkat(basis, 1 / eksp);	//karena akar dinamis itu rumusnya (basis ^ 1/exp), jadi angka nya dijadikan parameter
	return hasil;						
}

