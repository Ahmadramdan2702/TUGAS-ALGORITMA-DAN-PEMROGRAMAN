#include <iostream>
using namespace std;

int main () {

	char name ;
cout << "Masukan nama : ";
cin >> name;
	
	switch(name){
		case 'A' : cout <<"nama saya amir" << endl;
		break;
		case 'R' : cout <<"nama saya ridwan" << endl;
		break;
		case 'N' : cout <<"nama saya rina" << endl;
		break;
		case 'J' : cout <<"nama saya " << endl;
		break;
		default : cout <<"Tidak ada nama" << endl;
	}

	return 0;
}