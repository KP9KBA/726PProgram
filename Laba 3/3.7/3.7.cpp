#include <pch.h>
#include<iostream>
using namespace std;
int main() {
	double A, a, b;
	cout << "Write A" << endl;
	cin >> A;
	a = A * A * A;//3
	b = a * a;//6
	A = b * b;//12
	cout << "A = " << A * a << endl;//15

	return 0;
}
