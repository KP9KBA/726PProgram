#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	double x1, y1, P, S, AC, BC;
	int x2 = 0;
	int y2 = 0;
	cout << "Введите координаты точки А (х) " << endl;
	cin >> y1;
	cout << "Введите координаты точки В (у)" << endl;
	cin >> x1;
	AC = abs(x2 - x1);//Т.к. отрезки параллельны осям, то пусть каждый отрезок начинается от точки О (0,0). Отрезок ОА соответствует оси Х
	BC = abs(y2 - y1);//Отрезок ОВ соответствует оси У
	P = 2 * (AC + BC);
	S = (AC * BC) / 2;
	cout << "Периметр прямоугольника равен " << P << endl;
	cout << "Площадь прямоугольника равна " << S << endl;


	return 0;
}