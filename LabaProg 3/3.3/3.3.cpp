#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	double a, b, c, d;
	cout << "Введите числа a, b, c по порядку" << endl;
	cin >> a >> b >> c;
	d = a; a = c; c = b; b = d;
	cout << "Теперь a равно " << a << endl;
	cout << "b равно " << b << endl;
	cout << "c равно " << c << endl;

	return 0;
}
