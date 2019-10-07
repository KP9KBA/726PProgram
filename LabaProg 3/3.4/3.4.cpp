#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	double x, y;
	cout << "Введите число " << endl;
	cin >> x;
	y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
	cout << "Значение функции равно " << y << endl;

	return 0;
}