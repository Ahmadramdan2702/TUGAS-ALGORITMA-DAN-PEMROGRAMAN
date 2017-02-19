#include <iostream>

// I.S Program Kalkulator (Aritmatika dan Relasional)
// F.S Hasil Perhitungan Kalkulator 

using namespace std;

//Prototype
int tambah (int a, int b);
int kurang (int a, int b);
int kali (int a, int b);
int bagi1 (int a, int b);
int bagi2 (int a, int b);
    
    
int main () {

    // Kamus    
    int a,b ;
    
    cout << "               Program Aplikasi Kalkulator             " << endl << endl;
    
    // Input Data A
    cout << "Masukan Nilai A : ";
    cin >> a;
    
    // Input Data B
    cout << "Masukan Nilai B : "; 
    cin >> b;
    
    cout << endl; // Untuk Enter
    
    //----------------------------ARITMATIKA-----------------------------
    cout << "               Hasil Aritmatika                " << endl << endl;
    
    // Menampilkan Hasil Operasi Pertambahan
    cout << "Hasil Pertambahan A dan B adalah " << tambah (a, b) << endl; 

    //Menampilkan Hasil Operasi Pengurangan
    cout << "Hasil Pengurangan A dan B adalah " << kurang (a, b) << endl;

    //Menampilkan Hasil Operasi Perkalian
    cout << "Hasil Perkalian A dan B adalah " << kali (a, b) <<endl;

    //Menampilkan Hasil Operasi Pembagian (Division/Div) Tanpa Sisa
    cout << "Hasil Pembagian A dan B adalah " << bagi1 (a, b) <<endl;

    //Menampilkan Hasil Operasi Pembagian (Modulus/Mod) Dengan Sisa Pembagian
    cout << "Hasil Sisa Pembagian A dan B adalah " << bagi2 (a, b) <<endl << endl;
    
    //---------------------------RELASIONAL------------------------------
    
    cout << "               Hasil Relasional                " << endl << endl;
    
    //Menampilkan Hasil Operasi Jika Nilai A Sama dengan B (==)
    if (a == b) { cout << " Nilai A sama dengan Nilai B " << endl; } 
    else { cout << " Nilai A Tidak sama dengan Nilai B " << endl; }
    
    //Menampilkan Hasil Operasi Jika Nilai A Tidak sama dengan B (!=)
    if (a != b) { cout << " Nilai A Tidak sama dengan Nilai B " << endl; } 
    else { cout << " Nilai A sama dengan Nilai B " << endl; }
    
    //Menampilkan Hasil Operasi Jika Nilai A Kurang dari sama dengan B (<=)
    if (a <= b) { cout << " Nilai A Kurang dari Nilai B " << endl; } 
    else { cout << " Nilai A Lebih Besar dari Nilai B " << endl; }
    
    //Menampilkan Hasil Operasi Jika Nilai B Lebih dari sama dengan A (>=)
    if (a >= b) { cout << " Nilai A Lebih Besar dari Nilai B " << endl; }
    else { cout << " Nilai A Kurang dari Nilai B " << endl; }
    
    //Menampilkan Hasil Operasi Jika Nilai A Kurang dari B (<)
    if (a < b) { cout << " Nilai A Lebih Kecil dari Nilai B " << endl; } 
    else { cout << " Nilai A Tidak Lebih Kecil dari Nilai B " << endl; }
    
    //Menampilkan Hasil Operasi Jika Nilai A Lebih dari B (>)
    if (a > b) { cout << " Nilai A Lebih Besar dari Nilai B " << endl; } 
    else { cout << " Nilai A Tidak Lebih Besar dari Nilai B " << endl; }
     

return 0;
}

//Fungsi Aritmatika

//Pertambahan
int tambah (int a, int b) {
    return a + b;
}

//Pengurangan
int kurang (int a, int b) {
    return a - b;
}

//Perkalian
int kali (int a, int b) {
    return a * b;
}

//Pembagian Div
int bagi1 (int a, int b) {
    return a / b;
}

//Pembagian Modulus
int bagi2 (int a, int b) {
    return a % b;
}