#include <iostream>
using namespace std;

//
//arithmatic pointers


int main () {
	int var = 10;
	int *ptr = &var;

	cout << ptr << endl;
	cout << ptr++ << endl;
	cout << ptr++ << endl;
	cout << ptr++ << endl;
	cout << ptr++ << endl;

	
	return 0;
}