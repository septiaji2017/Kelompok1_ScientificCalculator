#include "Naufal.h"
#include "Ridha.h"
#include "Agam.h"
//#include <math.h>

float CtoK(float Kelvin)
{
	float Celsius;
	Celsius = (Kelvin - 273.15);	
	return Celsius;
}

float FtoK(float Kelvin)
{
	float Fahrenheit;
	Fahrenheit = 1.8 *(Kelvin -273.15) + 32.0;
	return Fahrenheit;
}

float KtoC(float Celsius)
{
	float Kelvin;
	Kelvin = (Celsius + 273.15);
	return Kelvin;
}

float FtoC(float Celsius)
{
	float Fahrenheit;
	Fahrenheit = (Celsius * 1.8) + 32.0;
	return Fahrenheit;
}

float KtoF(float Fahrenheit)
{
	float Kelvin;
	Kelvin = (Fahrenheit - 32.0) * 5/9 +273.15;
	return Kelvin;
}

float CtoF(float Fahrenheit)
{
	float Celsius;
	Celsius = (Fahrenheit - 32.0) * 5/9;
	return Celsius;
}


float perkalianBasic(float a, float b) {
	float hasil = 0;  // inisialisasi hasil dengan 0
    int i;
    
    for (i = 0; i < b; i++) {
        hasil += a;  // tambahkan nilai a sebanyak b kali ke dalam hasil ;hasil = hasil + a
    }
	printf("\nhasil perkalianBasic: %g",hasil);
    return hasil;
}

float perkalianBasis10(float b) {
	float hasil = 1;  // inisialisasi hasil dengan 0
    int i;
    
    for (i = 0; i < b; i++) {
        hasil = hasil * 10;  // tambahkan nilai a sebanyak b kali ke dalam hasil
    }

    return hasil;
}


float pertambahan(float x, float y){
	float hasil=x;
    float i=0;
    int helper,helper2,helper3;
	float helper4=0;
	float helper5=0;
    float bs10, bs10_2, bs10_3;
    float bagiHasil;
    float temp;
    
    if(isNegative(y)==1){
    	temp=x;
    	x=y;
    	y=temp;
	}
    
    //untuk menghitung basis desimal ((0.1)per sepuluhan, (0.01)per seratusan, dll) -> keluaran: 1,2,3,4, dll
    helper = countManyDecimals(x);
    helper2 = countManyDecimals(y);

    if((helper>5) && (helper2>5)){
		x = floorClosest(x);
		y = floorClosest(y);
		helper = countManyDecimals(x);
		helper2 = countManyDecimals(y);
	}else if(helper>5){
		x = floorClosest(x);
		helper = countManyDecimals(x);
	}else if(helper2>5){
		//		y = floorr(1000*y)/1000;
		y = floorClosest(y);
		helper2 = countManyDecimals(y);
	}

    //untuk mencari basis 10 ((1)10,(2)100,(3)1000) -> keluaran: 10, 100, 1000, 10000, dll    
    if(helper>helper2){
    	bs10 = perkalianBasis10(helper);

	}else if(helper<helper2){
		bs10 = perkalianBasis10(helper2);	
	}else{
		bs10 = perkalianBasis10(helper);		
	}
	
    printf("\nBS1000: %g\n\n",bs10);   
	//melakukan perkalian (10,100,1000) agar koma nya hilang
	helper4 = perkalianBasic(x, bs10);
	
	helper5 = perkalianBasic(y, bs10);
	
	helper5 = floorr(10000*helper5)/10000;  //getPrecision, karena angka float itu emg kurang dalam presisi
	
    
    while(i<helper5)
    {
    	helper4+=1;
		i++;    	
	}		

	printf("\nend of loop\n");

 	
    bagiHasil = helper4/bs10;

	printf("\nBAGIHASIL: %g\n\n",bagiHasil);

    return bagiHasil;
}

float pengurangan(float x, float y){

	float hasil=x;
    int i;
    int helper,helper2,helper3;
	float helper4=0;
	float helper5;
    float bs10, bs10_2, bs10_3;
    float bagiHasil;
    
    float temp;
    float z;
    
    if(isNegative(y)==1){
    	z=abs1(y);
    	bagiHasil = pertambahan(x,z);
    	return bagiHasil;
	}else{
		z=y;
	}
    
    //untuk menghitung basis desimal ((0.1)per sepuluhan, (0.01)per seratusan, dll) -> keluaran: 1,2,3,4, dll
    helper = countManyDecimals(x);
//    printf("\ncountmany decimals: %d\n\n",countManyDecimals(x));
    helper2 = countManyDecimals(z);
//    printf("\ncountmany decimals: %d\n\n",countManyDecimals(z));

    if((helper>5) && (helper2>5)){
		x = floorClosest(x);
		z = floorClosest(z);
		helper = 0;
		helper2 = 0;
	}else if(helper>5){
		x = floorClosest(x);
		helper = 0;
	}else if(helper2>5){
		z = floorClosest(z);
		helper2 = 0;
	}

    //untuk mencari basis 10 ((1)10,(2)100,(3)1000) -> keluaran: 10, 100, 1000, 10000, dll    
    if(helper>helper2){
    	bs10 = perkalianBasis10(helper);
	}else if(helper<helper2){
    	bs10 = perkalianBasis10(helper2);	
	}else{
		bs10 = perkalianBasis10(helper);		
	}
    
	//melakukan perkalian (10,100,1000) agar koma nya hilang
	helper4 = perkalianBasic(x, bs10);
	
	helper5 = perkalianBasic(z, bs10);
	
	helper5 = floorr(10000*helper5)/10000;  //getPrecision, karena angka float itu emg kurang dalam presisi	
     
    for (i = 0; i < helper5; i++) {  	
    	helper4-=1;
	}
	
    bagiHasil = helper4/bs10;

    return bagiHasil;

}


float perkalian(float a, float b) {
	float hasil = 0;  // inisialisasi hasil dengan 0
    int i;
    int helper,helper2,helper3;
	float helper4,helper5;
    float bs10, bs10_2, bs10_3;
    float bagiHasil;
    float c=b;
    
    if(isNegative(b)){
    	c = abs1(b);
	}
    
    //untuk menghitung basis desimal ((0.1)per sepuluhan, (0.01)per seratusan, dll)
    helper = countManyDecimals(a);
    helper2 = countManyDecimals(c);
    
    if((helper>5) && (helper2>5)){
		a = floorClosest(a);
		c = floorClosest(c);
		helper = 0;
		helper2 = 0;
	}else if(helper>5){
		a = floorClosest(a);
		helper = 0;
	}else if(helper2>5){
		c = floorClosest(c);
		helper2 = 0;
	}
    
    //untuk mencari basis 10 ((1)10,(2)100,(3)1000)
    bs10 = perkalianBasis10(helper);
    bs10_2 = perkalianBasis10(helper2);
    
	//untuk menjumlahkan basis desimal (per sepuluhan, per seratusan, dll) yg akan dipake di akhir
    helper3 = helper + helper2;
	bs10_3 = perkalianBasis10(helper3);	
		printf("\nbs10_3: %g\n",bs10_3);
	
	//melakukan perkalian (10,100,1000) agar koma nya hilang
	helper4 = perkalianBasic(a, bs10);
		printf("\nhelper4: %g\n",helper4);
	helper5 = perkalianBasic(c, bs10_2);
	    printf("\nhelper5: %g\n",helper5);
    
    for (i = 0; i < helper5; i++) {
        hasil += helper4;  // tambahkan nilai a sebanyak b kali ke dalam hasil
    }
    
    bagiHasil = hasil/bs10_3;
    
    if(((isNegative(a)==1)&&(isNegative(b)==1)) || ((isNegative(a)==1)&&(isNegative(b)==0))){
		return bagiHasil;    	
	}else if(((isNegative(a)==0)&&(isNegative(b)==1))){
		return -bagiHasil;
	}else{
		return bagiHasil;
	}

}

float pembagian(float dividend, float divisor)
{
    float quotient = 0;
    
	int i;
    int helper,helper2,helper3;
	float helper4,helper5;
    float bs10, bs10_2, bs10_3;
    float bagiHasil;    
    int rem;
    bool tes1, tes2;
    float komas;
    
    //untuk menghitung basis desimal ((0.1)per sepuluhan, (0.01)per seratusan, dll)
    helper = countManyDecimals(dividend);
    helper2 = countManyDecimals(divisor);
    
    if((helper>5) && (helper2>5)){
		dividend = round1(dividend);
		divisor = round1(divisor);
		helper = 0;
		helper2 = 0;
	}else if(helper>5){
		dividend = round1(dividend);
		helper = 0;
	}else if(helper2>5){
		divisor = round1(divisor);
		helper2 = 0;
	}    
    
    //untuk mencari basis 10 ((1)10,(2)100,(3)1000)
    bs10 = perkalianBasis10(helper);
    bs10_2 = perkalianBasis10(helper2);
    
	//untuk menjumlahkan basis desimal (per sepuluhan, per seratusan, dll) yg akan dipake di akhir
    helper3 = helper + helper2;
	bs10_3 = perkalianBasis10(helper3);	
	
	//melakukan perkalian (10,100,1000) agar koma nya hilang
	helper4 = perkalianBasic(dividend, bs10);
	helper5 = perkalianBasic(divisor, bs10_2);
    
    while (helper4 >= helper5) {
        helper4 -= helper5;
        quotient++;
    }
    
    printf("\nremainder: %g \n",helper4);    

	if((isDecimal(dividend)==0 && isDecimal(divisor)==1) || (isDecimal(dividend)==1 && isDecimal(divisor)==0)){
		bagiHasil = quotient/bs10_3;
		komas = helper4 / divisor;
		return bagiHasil+komas;
	}	
    else{
    	komas = helper4 / divisor;
		return quotient+komas;	
	}
    
}

