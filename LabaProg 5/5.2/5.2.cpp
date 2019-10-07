#include<iostream>
#include<cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	double A, B, c;
	cout << "Введите длины отрезков А и В соответсвтвенно" << endl;
	cin >> A >> B;
	if (A > 0 && B > 0) {
		if (A > B) {
			c = A / B;
			cout << "Максимально возможное количество отрезков длины B " << c << endl;
		}
		else {
			cout << "Решений нет " << endl;
		}
	}
	else {
		cout << "Нет решения" << endl;
	}



	return 0;
}