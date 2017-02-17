#include <iostream>
//I.S Aplikasi Call By Value
//F.S Menampilkan Aplikasi dari Call By Value

using namespace std; 
//Prototype
void swap (int x, int y); //swaplib.h 

// swap.cpp
int main () {
	// Kamus
	int a = 100;
	int b = 200;

	// Sebelum menampilkan call by value
	cout << "Before swap, value of a :" << a << endl;
	cout << "Before swap, value of b :" << b << endl;

	// Menampilkan Fungsi swap dibawah
swap (a, b);
	// menampilkan hasil call by value
	cout << "After swap, value of a :" << a << endl;
	cout << "After swap, value of b :" << b << endl;
return 0; }

//swaplib.cpp
// Fungsi Swap
void swap (int x, int y) {
		int temp;
		temp = x;
		x = y;
		y = temp;
		return;
	}