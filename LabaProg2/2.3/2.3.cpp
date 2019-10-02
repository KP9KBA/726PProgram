#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	double x1, x2, x3, BC, AC;
	cout << "Введите координаты точки A " << endl;
	cin >> x1;
	cout << "Введитеде координаты точки B " << endl;
	cin >> x2;
	cout << "Введите координаты точки C " << endl;
	cin >> x3;
	AC = abs(x3 - x1);
	BC = abs(x3 - x2);
	cout << "Произведение отрезков АС и АВ " << AC * BC << endl;
	return 0;
}