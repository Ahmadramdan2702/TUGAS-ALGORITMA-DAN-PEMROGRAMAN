#include <iostream>
using namespace std;

// Tugas E-learning
// pengukuran berat badan

int main () {

	//Kamus
	int x, y;
	cout << "***PENGUKURAN BERAT BADAN***" << endl;
	cout << "1. Laki-laki" << endl;
	cout << "2. Perempuan" << endl;

	//Masukan Data X
	cout << "Masukan Pilihan :" ;
	cin >> x;

	//Masukan Data Y
	cout << "Masukan Berat Badan :" ;
	cin >> y;

	if (x == 1) {
		if (y >= 60 ) { cout << "**Memenuhi Syarat  Calon Polisi**" << endl; }
		else { cout << "**Tidak Memenuhi Syarat Calon Polisi**" << endl; }
	}
	
	if (x == 2) {
		if (y >= 45 ) { cout << "**Memenuhi Syarat  Calon Polwan**" << endl; }
		else { cout << "**Tidak Memenuhi Syarat Calon Polwan**" << endl; }
	}
	return 0;
}