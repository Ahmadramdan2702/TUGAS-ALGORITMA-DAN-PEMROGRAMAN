#include <iostream>
using namespace std;

int main() {
int a = 5;
int b = 20;
int c;

if ( a && b ) {
cout << "TRUE"<< endl ;
}
if ( a || b ) {
cout << "TRUE"<< endl ;
}
/* Pergantian nilai*/
a = 0;
b = 10;

if ( a && b ) {
cout << "TRUE"<< endl;
} else {
cout << "FALSE"<< endl ;
}
if ( !(a && b) ) {
	cout << "TRUE"<< endl ; }
return 0;
}