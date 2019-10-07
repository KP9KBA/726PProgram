#include <iostream>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	double a, p = 3.14;
	cout << "Введите значение угла a в радианах " << endl;
	cin >> a;
	float b = -1;
	if (a > 0 && a < 360) {
		b = (a * 180) / p;
	}
	cout << "Значение этого же угла в градусах " << b << endl;

	return 0;
}