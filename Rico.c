#include "Rico.h"
#include "Ridha.h"
#include "pi.h"

/*********************************************************************************************************************************************/
/* M O D U L  I N V E R S E  T R I G O N O M E T R I */
/*********************************************************************************************************************************************/

/*********************************************************************************************************************************************/
/* Initial State: Menampung angka bertipe double, pada modul ini berperan sebagai function */
/* Final State: Mengembalikan nilai dari masing - masing fungsi inverse trigonometri setelah perhitungan selesai dieksekusi */
/* Referensi Modul:  																	   */
/* Referensi Link:  https://www.milefoot.com/math/trig/32inversebasic.htm, https://www.geeksforgeeks.org/inverse-trigonometric-identities/                                                                     */ 
/*********************************************************************************************************************************************/

double arcsin(double x)			// Menghitung inverse sinus
{
    if (x < -1.0 || x > 1.0) { 
        return UNDEFINED;		// Mengembalikan nilai tidak terdefinisi jika di luar dari range -1 sampai 1
    }
    if (x == -1.0) {
        return -pi/2.0;			// Mengembalikan nilai minus setengah pi jika inputnya adalah -1, jadi arcsin(-1) adalah -1.57.
    }
    if (x == 1.0) {
        return pi/2.0; 			// Mengembalikan nilai setenah pi jika inputnya adalah 1, jadi arcsin(1) adalah 1.57..
    }
    // Baris ini mendeklarasikan dan menginisialisasi variabel yang digunakan dalam aproksimasi iteratif arcsin
    double sum = x; 			// sum adalah hasil penjumlahan berjalan dari suku-suku
    double term = x;			// term mewakili suku saat ini yang ditambahkan ke sum
    int n = 1;					// n adalah penghitung bilangan bulat
    while (n < 1000 && term != 0.0) { // Loop while ini menghitung secara iteratif aproksimasi arcsin, loop berlanjut selama n kurang dari 1000 dan term tidak sama dengan nol.
        term *= x*x*(2.0*n-1)/(2.0*n*(2.0*n+1)); // Meggunakan aproksimasi deret taylor, suku-suku ini berperan dalam mendekati nilai sebenarnya dari fungsi arcsin secara iteratif
        sum += term;			// Mengassign nilai perhitungan term ke dalam sum
        n++;					// Nilai n akan bertambah satu setiap mengulang
    }
    return sum;					// Fungsi mengembalikan hasil penjumlahan yang diperoleh, yang merupakan aproksimasi dari arcsin(x)
}

double arccos(double x)			// Menghitung inverse cosinus
{
    if (x < -1.0 || x > 1.0) {
        return UNDEFINED;		// Mengembalikan nilai tidak terdefinisi jika di luar dari range -1 sampai 1
    }
    if (x == -1.0) {
        return pi;				// Mengembalikan pi jika inputnya adalah -1, jadi arccos(-1) adalah pi/3.14..
    }
    if (x == 1.0) {
        return 0.0;				// Megembalikan nilai 0 jika inputnya adalah 1, jadi arccos(1) adalah 0
    }
    return pi/2.0 - arcsin(x);	// Menggunkan rumus arccos(x) = π/2 - arcsin(x), maka nilai dari inverse cosinus bisa didapatkan dengan nilai pi dibagi 2 lalu dikurangi nilai arcsin
}

double arctan(double x)			// Menghitung inverse tangent
{
    if (x == 0.0) {
        return 0.0;				// Mengembalikan nilai 0 jika inputnya adalah 0, jadi arctan(0) adlaah 0
    }
    if (x > 1.0) {
        return pi/2.0 - arctan(x);	// Menggunakan rumus indentitas, yaitu arccot(x) = pi/2 - arctan(x)
    }
    if (x < -1.0) {
        return -pi/2.0 - arctan(1.0/x);	// Menggunakan rumus indentitas, tetapi dengan tanda negatif yaitu arccot(x) = -pi/2 - arctan(x)
    }
    double sum = x;				// Variabel sum adalah hasil penjumlahan berjalan dari suku-suku
    double term = x;			// term adalah suku saat ini yang ditambahkan ke sum
    int n = 1;					// n adalah penghitung bilangan bulat yang digunakan untuk melakukan iteras
    while (n < 1000 && term != 0.0) {	// loop while yang menghitung aproksimasi arctan menggunakan pendekatan deret taylor akan berlanjut selama nilai n kurang dari 1000 dan nilai term tidak sama dengan 0. 
        term *= -x*x*(2.0*n-1)/(2.0*n+1);	// Rumus deret taylor untuk menghitung arctan
        sum += term;			// Nilai term diassign ke variable sum
        n++;					// Nilai n akan bertambah satu setiap mengulang
    }
    return sum;					// Fungsi mengembalikan hasil penjumlahan yang diperoleh, yang merupakan aproksimasi dari arctan(x)
}

double arcsec(double x)			// Menghitung inverse secant
{
	if(x == 0){
		return UNDEFINED;		// Mengembalikan nilai tidak terdefinisi jika inputnya adalah 0
	}
	return arccos(1.0/x);		// Mengembalikan nilai arcsec(x) dengan menggunakan fungsi arccos(1/x), karena berdasarkan rumus identitas arcsec(x) = arccos(1/x)
}

double arccsc(double x)			// Menghitung inverse cosecant
{
	if(x == 0){
		return UNDEFINED;		// Mengembalikan nilai tidak terdefinisi jika inputnya adalah 0
	}
	return arcsin(1.0/x);		// Mengembalikan nilai arccsc(x) dengan menggunakan fungsi arcsin(1/x), karena berdasarkan rumus identitas arccsc(x) = arcsin(1/x)
}

double arccot(double x)			// Menghitung inverse cotangent
{
	return arctan(1.0/x);		// Mengembalikan nilai arccot(x) dengan menggunakan fungsi arctan(1/x), karena berdasarkan rumus identitas arccot(x) = arctan(1/x)
}

/*********************************************************************************************************************************************/
/* M O D U L  L O G A R I T M A */
/*********************************************************************************************************************************************/

/*********************************************************************************************************************************************/
/* Initial State: Menampung angka bertipe double, pada modul ini berperan sebagai function */
/* Final State: Mengembalikan nilai dari masing - masing fungsi inverse trigonometri setelah perhitungan selesai dieksekusi */
/* Referensi Modul:  https://stackoverflow.com/questions/35968963/trying-to-calculate-logarithm-base-10-without-math-h-really-close-just-having																	   */
/* Referensi Link:  https://www.milefoot.com/math/trig/32inversebasic.htm, https://www.geeksforgeeks.org/inverse-trigonometric-identities/                                                                     */ 
/*********************************************************************************************************************************************/

double log_2(double x)			// Fungsi untuk menghitung logaritma basis natural dari suatu nilai x menggunakan pendekatan deret Taylor.
{
    double old_sum = 0.0;		// Mendeklarasikan dan menginisialisasi variabel old_sum dengan nilai 0.0
    double xmlxpl = (x - 1) / (x + 1);	// Menghitung nilai xmlxpl sebagai (x - 1) / (x + 1)
    double xmlxpl_2 = xmlxpl * xmlxpl;	// Menghitung nilai xmlxpl_2 sebagai kuadrat dari xmlxpl
    double denom = 1.0;			// Mendeklarasikan dan menginisialisasi variabel denom dengan nilai 1.0
    double frac = xmlxpl;		// Mendeklarasikan dan menginisialisasi variabel frac dengan nilai xmlxpl
    double term = frac;			// Mendeklarasikan dan menginisialisasi variabel term dengan nilai frac
    double sum = term;			// Mendeklarasikan dan menginisialisasi variabel sum dengan nilai term

    while (sum != old_sum) {	// Melakukan perulangan selama nilai sum tidak sama dengan old_sum
        old_sum = sum;			// Menyimpan nilai sum ke old_sum
        denom += 2.0; 			// Menambahkan 2.0 ke denom
        frac *= xmlxpl_2; 		// Mengalikan frac dengan xmlxpl_2
        sum += frac / denom; 	// Menambahkan nilai frac dibagi denom ke sum
    }
    return 2.0 * sum; 			// Mengembalikan nilai 2.0 dikalikan dengan sum
}


double log_10(double x) 		// Fungsi untuk menghitung Logaritma basis 10
{
	// LN10 adalah konstanta yang mewakili nilai logaritma natural dari 10 (basis logaritma dalam fungsi log_10)
    return log_2(x) / log_2(10); 	// mengembalikan nilai log_e(nilai)/log_e(10), untuk mendapatkan nilai logartima basis 10
}

double log_b(double x, double b) // Fungsi untuk menghitung Logaritma dengan basis user input
{
    if (x <= 0.0 || b <= 0.0 || b == 1.0) {	//ketika nilainya adalah 0 atau basisnya kurang dari 0 atau sama dengan 1
        return UNDEFINED;					//mengembalikan nilai UNDEFINED				 
    }
    
    return log_2(x)/log_2(b);				//mengembalikan nilai log_e(nilai)/log_e(basis), hal ini berdasarkan sifat sifat logaritma
}


