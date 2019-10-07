#include <iostream>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	double A1, A2, B1, B2, C1, C2, x, y;
	cout << "Введите коэффициенты для первого уравнения (А1, В1, С1 соответственно) " << endl;
	cin >> A1 >> B1 >> C1;
	cout << "Введите коэффициенты для второго уравнения (А2, В2, С2) " << endl;
	cin >> A2 >> B2 >> C2;
	x = (C2 * B1 - B2 * C1) / (A2 * B1 - B2 * A1);
	y = (C1 - A1 * x) / B1;
	cout << "х = " << x << endl;
	cout << "у = " << y << endl;



	return 0;
}