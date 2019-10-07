#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	double A, B, c;
	cout << "Введите длины отрезков А и В соответственно " << endl;
	cin >> A >> B;
	if (A > 0 && B > 0) {
		if (A > B) {
			c = A - B;
			cout << "Длина незанятой части отрезка А равна " << c << endl;
		}
		else {
			cout << "Нет решения" << endl;
		}
	}
	else {
		cout << "Нет решения" << endl;

	}
	return 0;
}
