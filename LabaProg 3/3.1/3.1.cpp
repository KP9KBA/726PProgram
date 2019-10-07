#include <pch.h>
#include <iostream>
using namespace std;
void Swap(double&, double&);


int main()
{
	setlocale(LC_ALL, "ru");
	double a, b, c;
	cout << "Введите числа a и b" << endl;
	cin >> a >> b;
	Swap(a, b);
	cout << "Теперь а равняется " << a << endl;
	cout << "А b равняется " << b << endl;


	return 0;
}
void Swap(double& a, double& b) {
	double c = a;
	a = b; b = c;
}