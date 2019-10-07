#include <iostream>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	float a;//a - число байт
	int b;//b - число килобайт
	cout << "Байт " << endl;
	cin >> a;
	b = a / 1024;
	cout << "В КБайт " << b << endl;


	return 0;
}
