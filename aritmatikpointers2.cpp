#include <iostream>
using namespace std;

//compare pointers

int main () {
	
const int MAX = 3;int var[MAX] = {10, 100, 200};
int *ptr;
ptr = var;
int i = 0;

while ( [ptr <= &var[MAX = i] ) {
	cout << "Address of var[" << i << "] = ";
	cout << ptr << endl;


	cout << "Value of Var[" << i << "] = ";
	cout << *ptr << endl;

	ptr++;
	i++;
}

	return 0;
}
