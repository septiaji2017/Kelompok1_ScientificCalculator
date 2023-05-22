#include "Mutia.h"
#include "pi.h"
#include "Ridha.h"
#include "Agam.h"
#define EPSILON .0000000000001
 

/********************************/
/* M O D U L  F A K T O R I A L */
/********************************/

/***************************************************************************************************/
/* Initial State: Menampung angka bertipe integer, pada modul ini berperan sebagai function 	   */
/* Final State: Mengembalikan nilai dari variabel result setelah perulangan for selesai dieksekusi */
/* Referensi Modul: - 																		       */
/* Referensi Link: https://www.simplilearn.com/tutorials/c-tutorial/c-program-for-factorial        */ 
/***************************************************************************************************/
int factorial(int n){              // fungsi menerima parameter n, yang merupakan bilangan bulat non-negatif yang akan dihitung faktorialnya
	int i;                         // Variabel i dideklarasikan sebagai variabel iterasi dalam loop. Variabel ini dimulai dari nilai 2 karena faktorial dari 0 dan 1 adalah 1
	double result = 1;             // Variabel result diinisialisasi dengan nilai 1. Ini adalah variabel tempat hasil faktorial akan dikumpulkan
    for (i = 2; i <= n; i++) {     // Dilakukan loop for dengan kondisi i <= n. Ini berarti loop akan berjalan selama i bernilai kurang dari atau sama dengan n
        result *= i;               // Pada setiap iterasi, nilai result dikalikan dengan nilai i menggunakan operator *=. Ini berarti result = result * i. Dengan melakukan ini, setiap faktor dari 2 hingga n akan dikalikan dengan result
    }                              // Setelah selesai perulangan, nilai result akan berisi hasil faktorial dari n
    return result;                 // nilai result dikembalikan sebagai hasil dari fungsi
}


/**************************/
/* M O D U L  M O D U L O */
/**************************/

/*******************************************************************************************/
/* Initial State: Menampung angka bertipe double, pada modul ini berperan sebagai function */
/* Final State: Mengembalikan nilai dari variabel r setelah perhitungan selesai dieksekusi */
/* Referensi Modul: - 																	   */
/* Referensi Link:  -                                                                      */ 
/***************************************************************************************** */
double my_fmod(double x, double y){              // fungsi menerima dua parameter: x dan y, yang merupakan bilangan pecahan yang akan dihitung sisa hasil bagi antaranya
    if (y == 0.0) {                              // dilakukan pengecekan apakah y sama dengan 0.0. Jika benar, artinya pembaginya adalah nol, dan dalam kasus ini, fungsi mengembalikan nilai x itu sendiri. Hal ini dilakukan untuk menghindari pembagian dengan nol yang tidak valid
        return x;                                
    }                                            // Jika y bukan 0.0, maka dilanjutkan dengan perhitungan sisa hasil bagi menggunakan pendekatan matematika
    double q = x / y;                            // Variabel q diinisialisasi sebagai hasil pembagian x dengan y. Ini merupakan nilai perbandingan antara x dan y
    double n = q > 0 ? floorr(q) : ceil1(q);     // Variabel n diinisialisasi berdasarkan kondisi q > 0. Jika q lebih besar dari 0, maka n dihitung sebagai nilai floor dari q, yaitu pembulatan ke bawah. Jika q lebih kecil dari atau sama dengan 0, maka n dihitung sebagai nilai ceil dari q, yaitu pembulatan ke atas. Pemilihan pembulatan bergantung pada tanda hasil bagi q
    double r = x - n * y;                        // Variabel r diinisialisasi sebagai selisih antara x dan perkalian n dengan y. Ini menghasilkan sisa hasil bagi sejauh ini
    if ((y > 0 && r < 0) || (y < 0 && r > 0)) {  // Dilakukan pengecekan kondisi (y > 0 && r < 0) || (y < 0 && r > 0). Jika benar, berarti tanda sisa hasil bagi tidak konsisten dengan tanda y
        r += y;                                  // nilai r disesuaikan dengan menambahkannya dengan y. Hal ini dilakukan agar sisa hasil bagi memiliki tanda yang konsisten dengan y
    }
    return r;                                    // nilai r dikembalikan sebagai hasil dari fungsi
}


/***************************************************/
/* M O D U L  T R I G O N O M E T R I  R A D I A N */
/***************************************************/

/***************************************************************************************************************/
/* Initial State: Menampung angka bertipe double, pada modul ini berperan sebagai function                     */
/* Final State: Mengembalikan nilai dari input radian setelah perhitungan trigonometri selesai                 */
/* Referensi Modul: - 																	                       */
/* Referensi Link: https://stackoverflow.com/questions/2284860/how-does-c-compute-sin-and-other-math-functions */ 
/***************************************************************************************************************/

// Fungsi untuk menghitung nilai sinus menggunakan Polinomial Chebyshev
double sinRadian(double x) {
	const double PI = pi;                       // Konstanta PI dideklarasikan sebagai nilai pi
    const double TWO_PI = 2 * pi;               // Konstanta TWO_PI dideklarasikan sebagai 2 kali nilai pi
    const double PI_OVER_TWO = pi / 2;          // Konstanta PI_OVER_TWO dideklarasikan sebagai nilai pi dibagi 2
    
    // Kurangi x ke kisaran [-2pi, 2pi]
    x = my_fmod(x, TWO_PI);                     // dilakukan penyesuaian sudut x ke dalam kisaran [-2pi, 2pi] menggunakan fungsi my_fmod. Ini dilakukan untuk memastikan bahwa sudut x dalam kisaran yang dapat ditangani oleh pendekatan deret yang digunakan
    
    // Kurangi x ke kisaran [-pi/2, pi/2]
    // dilakukan penyesuaian sudut x menjadi dalam kisaran [-pi/2, pi/2]
    if (x > PI_OVER_TWO) {                      // Jika x lebih besar dari PI_OVER_TWO, sudutnya dikurangi dari nilai pi (x = pi - x)
        x = pi - x;
    } else if (x < -PI_OVER_TWO) {              // Jika x lebih kecil dari -PI_OVER_TWO, sudutnya dikurangi dengan nilai negatif dari pi (x = -pi - x)
        x = -pi - x;
    }
    
    double result = x;                          // Variabel result diinisialisasi dengan nilai awal x, karena suku pertama dalam deret Taylor sinus adalah nilai x itu sendiri
    double term = x;                            // Variabel term diinisialisasi dengan nilai x, karena suku pertama dalam deret adalah nilai x
    double denominator = 1;                     // Variabel denominator diinisialisasi dengan nilai 1, karena faktor pembagi dalam deret dimulai dari 1
    double numerator = x;                       // Variabel numerator diinisialisasi dengan nilai x, karena faktor pengali dalam deret dimulai dari nilai x
    int k = 1;                                  // Variabel k diinisialisasi dengan nilai 1, yang akan digunakan untuk menghitung faktor pembagi dalam setiap iterasi
    
    while (term > EPSILON || term < -EPSILON)   // Dilakukan perulangan while dengan kondisi term > EPSILON || term < -EPSILON, di mana EPSILON adalah suatu nilai ambang batas yang ditentukan sebelumnya. Hal ini dilakukan untuk menghitung deret Taylor sinus dengan terus menambahkan suku-suku deret sampai nilai suku terakhir sangat kecil (mendekati nol)
    {
        numerator *= -x * x;                    // Pada setiap iterasi, numerator dikalikan dengan -x * x untuk memperoleh faktor pengali berikutnya dalam deret
        denominator *= (k + 1) * (k + 2);       // denominator dikalikan dengan (k + 1) * (k + 2) untuk memperoleh faktor pembagi berikutnya
        term = numerator / denominator;         // term dihitung sebagai hasil pembagian numerator dengan denominator
        result += term;                         // result ditambah dengan nilai term untuk mengakumulasi hasil deret
        k += 2;                                 // Nilai k ditambah dengan 2 untuk menghitung faktor pembagi berikutnya
    }
    
    return result;                              // Setelah perulangan selesai, nilai result berisi hasil akhir dari perhitungan Polinomial Chebyshev
}

// Fungsi untuk menghitung nilai cosinus menggunakan Polinomial Chebyshev
double cosRadian(double x) {
	const double PI = pi;                       // Konstanta PI dideklarasikan sebagai nilai pi
    const double TWO_PI = 2 * pi;               // Konstanta TWO_PI dideklarasikan sebagai 2 kali nilai pi
    const double PI_OVER_TWO = pi / 2;          // Konstanta PI_OVER_TWO dideklarasikan sebagai nilai pi dibagi 2
    
    // Kurangi x ke kisaran [-2pi, 2pi]
    x = my_fmod(x, TWO_PI);                     // dilakukan penyesuaian sudut x ke dalam kisaran [-2pi, 2pi] menggunakan fungsi my_fmod. Ini dilakukan untuk memastikan bahwa sudut x dalam kisaran yang dapat ditangani oleh perhitungan
    
    // Kurangi x ke kisaran [-pi, pi]
    if (x > PI || x < -PI) {                    // dilakukan penyesuaian sudut x menjadi dalam kisaran [-pi, pi]. Jika x lebih besar dari PI atau lebih kecil dari -PI, sudutnya dikurangi dengan nilai PI menggunakan fungsi my_fmod(x, PI). Hal ini dilakukan untuk memanfaatkan sifat periodikitas kosinus pada kisaran tersebut
        x = my_fmod(x, PI);
    }
    
    // Hitung cosinus menggunakan rumus sinus
    double sin_x;                               // Variabel sin_x diinisialisasi dengan nilai sinus dari sudut x
    if (x < 0) {                                // jika x negatif, nilai sinus dihitung dengan mengambil nilai sinus dari -x
        sin_x = sinRadian(-x);
    } else {                                    // Jika x positif atau nol, nilai sinus dihitung dengan mengambil nilai sinus dari x
        sin_x = sinRadian(x);
    }
    double cos_x = f_akar(1 - sin_x * sin_x);   // Variabel cos_x dihitung menggunakan rumus kosinus dalam hubungannya dengan sinus: cos_x = sqrt(1 - sin_x * sin_x). Hal ini didasarkan pada identitas trigonometri bahwa kosinus kuadrat plus sinus kuadrat adalah sama dengan 1. Dalam perhitungan ini, nilai akar kuadrat dihitung menggunakan fungsi f_akar
    if (x > PI_OVER_TWO && x < 3 * PI_OVER_TWO) { // Dilakukan pengecekan kondisi x > PI_OVER_TWO && x < 3 * PI_OVER_TWO. Jika benar, artinya sudut x berada dalam kisaran (pi/2, 3pi/2), yang merupakan kisaran di mana kosinus bernilai negatif. Dalam kasus ini, nilai cos_x dikalikan dengan -1 untuk mengubah tanda kosinus
        cos_x = -cos_x;
    }
    return cos_x;
}

// Fungsi untuk menghitung nilai tangent
double tanRadian(double x) {
    return (sinRadian(x) / cosRadian(x));
}

// Fungsi untuk menghitung nilai Cosecant
double cosecRadian(double x) {
   return (1/sinRadian(x));
}

// Fungsi untuk menghitung nilai Secant
double secRadian(double x) {
   return (1/cosRadian(x));
}

//Fungsi untuk menghitung nilai Cotant
double cotRadian(double x) {
   return (1/tanRadian(x));
}


/*****************************************************/
/* M O D U L  T R I G O N O M E T R I  D E R A J A T */
/*****************************************************/

/************************************************************************************************/
/* Initial State: Menampung angka bertipe double, pada modul ini berperan sebagai function      */
/* Final State: Mengembalikan nilai dari input derajat setelah perhitungan trigonometri selesai */
/* Referensi Modul: - 																	        */
/* Referensi Link:  -                                                                           */ 
/************************************************************************************************/

// Fungsi untuk menghitung nilai Sinus
double sinDerajat(double x) {
	return sinRadian(x*pi/180);
}

// Fungsi untuk menghitung nilai cosinus
double cosDerajat(double x) {
    return cosRadian(x*pi/180);
}

// Fungsi untuk menghitung nilai tangent
double tanDerajat(double x) {
    return (sinDerajat(x) / cosDerajat(x));
}

// Fungsi untuk menghitung nilai Cosecant
double cosecDerajat(double x) {
   return (1/sinDerajat(x));
}

// Fungsi untuk menghitung nilai Secant
double secDerajat(double x) {
   return (1/cosDerajat(x));
}

// Fungsi untuk menghitung nilai Cotant
double cotDerajat(double x) {
   return (1/tanDerajat(x));
}

