#include <iostream>
using namespace std;

// // Tugas E-learning nested switch 
// pengukuran berat badan

int main () {

	//KAMUS
	int a, b;

	//ALGORITMA
	cout << "** PERBANDINGAN TARIF TRANSPORTASI ONLINE**" << endl;

	// INPUT PENYEDIA JASA

	cout << "1. GOJEK " << endl;
	cout << "2. UBER " << endl;
	cout << "3. GRAB" << endl;

	cout << "Pilih Transportasi Anda :" << endl;
	cin >> a ;

	// INPUT JARAK TEMPUH
	cout << " 1. Jarak tempuh 1-5KM" << endl;
	cout << " 2. Jarak tempuh 6-10KM" << endl;
	cout << " 3. Jarak tempuh 11-15KM" << endl;

	cout << "Pilih jarak tempuh tujuan anda: " << endl;
	cin >> b ;


	switch(a) {
		case 1 : cout << "***GOJEK***" << endl;
	switch(b) {
		case 1 : cout << "Rp 2000 s.d 10.000" << endl;break;
		case 2 : cout << "Rp 12000 s.d 20000" << endl;break;
		case 3 : cout << "Rp 2000 s.d 10.000" << endl;break;
	}
	break;
	
		case 2 : cout << "***UBER***" << endl;
		switch(b) {
		case 1 : cout << "Rp 2500 s.d 12500" << endl;break;
		case 2 : cout << "Rp 15000 s.d 25000" << endl;break;
		case 3 : cout << "Rp 27500 s.d 35000" << endl;break;
	
		}
	break;

	case 3 : cout << "***GRAB***" << endl;
		switch(b) {
		case 1 : cout << "Rp 1500 s.d 7500" << endl;break;
		case 2 : cout << "Rp 9000 s.d  15000" << endl;break;
		case 3 : cout << "Rp 16500 s.d 22500" << endl;break;
		
	}
	break;
	default: cout << "TIdak terdaftar" << endl;
}
	return 0;
}