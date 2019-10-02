#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	float x1, x2, y1, y2, AB;
	cout << "Введите координаты точки A " << endl;
	cin >> x1 >> y1;
	cout << "Введите координаты точки B " << endl;
	cin >> x2 >> y2;
	AB = fabs(sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)));
	cout << "Расстояние между точками равно " << AB << endl;

	return 0;
}

