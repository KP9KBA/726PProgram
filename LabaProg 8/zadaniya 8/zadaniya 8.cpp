#include <iostream>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int A, B;
	
	//zadanie 1
	cout << "Введите два числа" << endl;
	cin >> A >> B;
	if (A == B) {
		A = 0; B = 0;
		cout << "Новые значения переменных A и B " << endl << A << endl << B;
	}
	else {
		if (A > B) {
			B = A;
			cout << "Новые значения переменных A и B " << endl << A << endl << B;
		}
		else {
			A = B;
			cout << "Новые значения переменных A и B" << endl << A << endl << B;
		}
	}


	return 0;
}