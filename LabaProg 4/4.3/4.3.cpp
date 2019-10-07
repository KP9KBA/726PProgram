#include<iostream>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	double x, a, b, c, y; //x - кг   A-цена икс кг  b-цена одного кг  c-цена угрик килограмм
	cout << "Заданные X килограммы конфет " << endl;
	cin >> x;
	cout << "Цена этих конфет за килограмм X " << endl;
	cin >> a;
	cout << "Y килограммы, цену которых мы хотим найти" << endl;
	cin >> y;
	b = a / x;
	c = b * y;
	cout << "Цена 1 кг конфет " << b << endl;
	cout << "Цена Y кг конфет" << c << endl;

	return 0;
}