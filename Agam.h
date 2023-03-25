#ifndef Agam_H
#define Agam_H
#include <stdio.h>
#include<stdlib.h>
#define pi 3.14159265358979323846
#define MAX 30
#include <conio.h>
//#define true 1
//#define false 0
#define boolean unsigned char

/*************************************/
/* T I P E  D A T A  K O M P O S I T */
/*************************************/

typedef struct { int Tgl; int Bln; int Thn;} date;

typedef struct{
     float angka;
     char operasi;
} Matematika;


/*************************************/
/* S P E S I F I K A S I   M O D U L */
/*************************************/

int GetTgl (date D);

int GetBln (date D);

int GetThn (date D);

boolean isValid(date D);

boolean isKabisat (date D);

int TglAkhir (date D);

int GetTgl (date D);

int GetBln (date D);

int GetThn (date D);

boolean isValid(date D);

boolean isKabisat (date D);

int TglAkhir (date D);

//Konvert Jam
int JamKeDetik(int JamInput);

int JamKeMenit(int JamInput);

int MenitKeJam(int MenitInput);

int sisaMenitkeDetik(int MenitInput);

int MenitKeDetik(int MenitInput);

int DetikKeJam(int DetikInput);

int sisaDetikKeJam(int DetikInput);

int sisaDetikKeJam1(int DetikInput);

int sisaDetikKeJam2(int DetikInput);

int sisaDetikKeJam3(int DetikInput);

//Bangun Datar
//Menghitung luas persegi
float luaspersegi(float sisiInput);

//Menghitung keliling persegi
float kelilingpersegi(float sisiInput);

//Menghitung luas persegi panjang
float persegipanjang(float panjang, float lebar);

//Menghitung keliling persegi panjang
float kelilingpersegipanjang(float panjang, float lebar);

//Menghitung luas segitiga
float luassegitiga(float alas, float tinggi, float sisi);

//Menghitung keliling segitiga
float kelilingsegitiga(float alas, float tinggi, float sisi);

//Menghitung luas lingkaran
float luaslingkaran(float jari);

//Menghitung keliling lingkaran
float kelilinglingkaran(float jari);

//Menghitung luas jajargenjang
float luasjajargenjang(float alas, float tinggi);

//Menghitung keliling jajargenjang
float kelilingjajargenjang(float alas, float sisimiring);

//Menghitung luas belah ketupat
float luasbelahketupat(float diagonal1, float diagonal2);

//Menghitung keliling belah ketupat
float kelilingbelahketupat(float sisi);

//Bangun Ruang
//Menghitung luas kubus
float luaskubus(float rusuk);

//Menghitung volume kubus
float volumekubus(float rusuk);

//Menghitung luas balok
float luasbalok(float panjang, float lebar, float tinggi);

//Menghitung volume balok
float volumebalok(float panjang, float lebar, float tinggi);

//Menghitung Luas kerucut
float luaskerucut(float jari, float sisi);

//Menghitung volume kerucut
float volumekerucut(float jari, float tinggi);

//Menghitung luas bola
float luasbola(float jari);

//Menghitung volume bola
float volumebola(float jari);

//Menghitung luas tabung
float luastabung(float jari, float tinggi);

//Menghitung volume tabung
float volumetabung(float jari, float tinggi);


//himpunan
int member(int set[],int x);

int himpunanA(int set1[]);

int himpunanB(int set2[]);

int hasil(int set3[]);

int gabungan(int set1[],int set2[],int set3[]);

int irisan(int set1[],int set2[],int set3[]);

int selisih(int set1[],int set2[],int set3[]);

int bedasetangkup(int set1[],int set2[],int set3[]);

float floorr(float x);

float ceil1(float x);

float round1(float x);

int abs1(int x);

float kalku(Matematika arr[], int Operan, int CekAngka, int CekOperan);


#endif
