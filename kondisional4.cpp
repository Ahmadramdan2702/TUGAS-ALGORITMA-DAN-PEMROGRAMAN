#include <iostream>
using namespace std;
//program masukan data
//menampilkan masukan data
int main () {

int a;
cout << "Masukan angka : ";
cin >> a;
// Perintah jika masukan pertama benar (true)
if ( a == 1   ) {
	cout << "angka 1;" << endl; // menampilkan perintah pertama

// Perintah jika masukan kedua benar (true)
} else if ( a == 2 ) {
	cout << "angka 2" << endl; // menampilkan perintah kedua

// Perintah jika masukan ketiga benar (true)
} else if ( a == 3 ) {
	cout << "angka 3" << endl; // menampilkan perintah ketiga

// Perintah jika masukan keempat benar (true)
} else if ( a == 4 ) {
	cout << "angka 4" << endl; // menampilkan perintah keempat

// Perintah jika masukan kelima benar (true)
} else if ( a == 5 ) {
	cout << "angka 5" << endl; // menampilkan perintah kelima

// Perintah jika masukan salah (false)
} else {
	cout << "tidak ada angka" << endl;} // menampilkan perintah keenam
return 0;
}
