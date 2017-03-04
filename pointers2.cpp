#include <iostream>
using namespace std;
// I.S : menyimpan data di pointers
// F.S : menampilkan alamat dari variabel

int main () {
	int A = 20;
	int *p; //*p : untuk menyimpan alamat variabel 

	p = &A; //&A : mengambil alamat variabel di p (pointers)

	cout << "Nilai dari A: "; // untuk menampilkan nilai dari A
	cout << A << endl;

	cout << "Alamat variabel A: "; // untuk menampilkan alamat variable A

	cout << "Nilai dari *p: "; // untuk menampilkan data dari variable A
	cout << *p << endl;

	return 0;
}