#include <iostream>
using namespace std;
//Rekursi



	
	void numberFunction(int i) {
		cout << "The Number Is : " << i << endl;
		i++; //Penghenti
		if(i<10) {
			numberFunction(i);
		}
	}

int main () {
	int i = 0;
	numberFunction(i);
	return 0;
}