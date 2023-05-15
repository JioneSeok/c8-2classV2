#include <iostream>
#include "health.h"
using namespace std;
int main() {
	CHealth vip2(50), * mickey;  // need for CHealth() to be public 
	mickey = new CHealth(60);

	cout << "  " << vip2.age << "  " << mickey->age << endl;

	vip2.measureCel();
	mickey->measureCel();

	cout << "  " << vip2.cel << "C  " << mickey->faren << "F \n";
	cout << "  size " << sizeof(CHealth) << "\n";
}