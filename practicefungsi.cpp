#include <iostream>
using namespace std;
//Program Kalkulator
//I.S : program menunggu masukan nilai
//F.S : Hasil perhitungan ditampilkan

int hasiltambah (int a, int b) ; // prototype fungsi hasil tambah
int hasilkurang (int a, int b) ; // prototype fungsi hasil kurang
int hasilkali (int a, int b) ; // prototype hasil kali
int hasilbagi (int a, int b) ; // prototype hasil bagi

main(){
  int a, b;

  cout << "Masukan Nilai :";
  cin >> a; // input variable a

  cout << "Masukan Nilai :";
  cin >> b; // input variable b
  
  cout << endl;
  cout << "Hasil Pertambahan a dan B adalah : " << hasiltambah(a,b) ; // menjalankan fungsi pertambahan
  cout << endl;
  cout << "Hasil Pengurangan a dan B adalah : " << hasilkurang(a,b) ; // menjalankan fungsi pengurangan
  cout << endl;
  cout << "Hasil Perkalian a dan B adalah : " << hasilkali(a,b) ; // menjalankan fungsi perkalian
  cout << endl;
  cout << "Hasil Pembagian a dan B adalah : " << hasilbagi(a,b) ; // menjalankan fungsi pembagian

  return 0;
}

int hasiltambah(int a, int b){ // fungsi pertambahan
    return a + b;
}
int hasilkurang(int a, int b){ // fungsi pengurangan
    return a - b;
}
int hasilkali(int a, int b){ // fungsi perkalian
    return a * b;
}
int hasilbagi(int a, int b){ // fungsi pembagian
    return a / b;
}