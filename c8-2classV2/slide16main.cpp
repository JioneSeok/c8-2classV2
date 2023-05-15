#include <iostream>
#include "health2.h"
using namespace std;
int main() {
	/*
	cout << "  size " << sizeof(CHealth) << "\n";

	CHealth* students = new CHealth[5];

	for (int i = 0; i < 3; i++) {
		students[i].measure(20 + rand() % 4);
		(students + i)->run5min();
	}
	// students[4].GetBMI(); private
	cout << students[1].beat5min[30] << endl;
	// cout << students[5].weight << end; private

	delete[] students;  // delete objects
	*/

	CHealth* student;
	student = new CHealth[2];

	for (int i = 0; i < 2; i++) {
		student[i].Height(1.6 + i * 0.2);
	}
	cout << student[0].heightinCM << endl;
	cout << student[1].heightinCM << endl;

	delete student;
}
