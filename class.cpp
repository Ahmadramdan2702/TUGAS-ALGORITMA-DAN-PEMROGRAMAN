#include <iostream>
using namespace std;


class printData {
public:
	// output 1
	void print (int i) {
		cout << "Printing int: " << i << endl;}

	//output 2
	void print (double f) {
		cout << "Printing float:" << f << endl;
}

	//output 3
	void print (string c) {
		cout << " Printing character:" << c << endl;
}
};

int main (void) {
// kamus
printData pd;

pd.print (5); // input 1
pd.print (500.263); // input 2
pd.print ("Heloo C++"); // input 3
return 0;
}
