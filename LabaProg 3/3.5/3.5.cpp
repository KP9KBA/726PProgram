﻿#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	double x, y;
	cout << "Введите число " << endl;
	cin >> x;
	y = 4 * pow((x - 3), 6) - 7 * pow((x - 3), 3) + 2;
	cout << "Значение функции равно " << y << endl;





	return 0;
}