#include <iostream>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	double A, B, x;
	cout << "Введите коэффициенты А и В соответсвенно " << endl;
	cin >> A >> B;
	if (A > 0) {
		x = -(B / A);
		cout << "Решение линейного уравнения = " << x << endl;

	}
	else {
		cout << "Решений нет " << endl;
	}


	return 0;
}