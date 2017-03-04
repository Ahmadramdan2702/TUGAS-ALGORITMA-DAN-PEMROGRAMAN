#include <iostream>
using namespace std;

int double_it(int *x, int *y);

int main () {

	int x, y;
	cout << "Masukan dua angka (pisahkan dengan spasi ex: 1 2) : " << endl;
	cin >> x >> y;

	cout << "Sebelum melewati fungsi double_it " << endl;
	cout << "x \t = \t" << x << endl; //menampilkan nilai variable
	cout << "y \t = \t" << y << endl;

	double_it(&x, &y); //parameter

	cout << "Setelah melewati fungsi double_it " << endl;
	cout << "x \t = \t" << x << endl; // menampilkan variabel yang diambil dari alamat data variabel
	cout << "y \t = \t" << y << endl;
	return 0;
}

int double_it(int *x, int *y) {
	*x *= 2; //dikalikan 2
	*y *= 2; //idem
	return 0;
}