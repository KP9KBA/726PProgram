#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	double x1, x2, x3, y1, y2, y3, P, S, AB, BC, AC, p;

	cout << "Введите координаты точки А (х,y) " << endl;
	cin >> x1 >> y1;
	cout << "Введите координаты точки В (x,у)" << endl;
	cin >> x2 >> y2;
	cout << "Введите координаты точки C (х,y) " << endl;
	cin >> x3 >> y3;
	AB = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));//Длина отрезков
	BC = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
	AC = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
	P = AC + BC + AB;
	p = P / 2;
	S = sqrt(p * (p - AB) * (p - BC) * (p - AC));//Формула Герона
	cout << "Периметр прямоугольника равен " << P << endl;
	cout << "Площадь прямоугольника равна " << S << endl;


	return 0;
}