#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int A, B, C, x, y;
	cout << "Введите 1 сторону прямоугольника" << endl;
	cin >> A;
	cout << "Введите 2 сторону прямоугольника" << endl;
	cin >> B;
	cout << "Введите сторону квадрата" << endl;
	cin >> C;
	x = A * B;
	y = floor(x / pow(C, 2));
	cout << y;

	return 0;
}