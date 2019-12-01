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
	AC = fabs(sqrt(pow((x2 - x1), 2)));
	BC = fabs(sqrt(pow((x3 - x2), 2)));
	cout << "Длина отрезка АС " << AC << endl;
	cout << "Длина отрезка ВС " << BC << endl;
	cout << "Сумма отрезков АС и ВС " << AC + BC << endl;

	return 0;
}