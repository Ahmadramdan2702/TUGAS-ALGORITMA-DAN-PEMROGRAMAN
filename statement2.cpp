#include <iostream>
using namespace std;

int main () {
	int nilai;
	cout << "Masukan nilai : ";
	cin >> nilai ;
	switch(nilai){
		case 1: cout <<"jelek" << endl;
		break;
		case 2: cout <<"cukup" << endl;
		break;
		case 3: cout <<"lumayan" << endl;
		break;
		case 4: cout <<"bagus" << endl;
		break;
		default : cout <<"Tidak ada nilai" << endl;
	}

	return 0;
}