#include <iostream>
using namespace std;

// contoh null pointers
//

int main () {
	int *ptr = NULL;
	//coba int *ptr

	cout << "The Value of ptr is " << ptr;
	if (ptr)
		cout << "not null" << endl;
	else
		cout << "null" << endl;



	if (!ptr)
		cout << "null"<< endl;
	else
		cout << "not null" << endl;
	
	return 0;
}