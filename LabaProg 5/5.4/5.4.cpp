#include <iostream>
#include <cmath>
using namespace std;

void Swap(int&, int&);

int main() {
	setlocale(LC_ALL, "ru");
	int x, y, z;
	cout << "Введите двузначное число через пробел " << endl;
	cin >> x >> y;
	if (x >= 1 && x < 10 && y >= 1 && y < 10) {
		Swap(x, y);
		cout << x << y;
	}
	else {
		cout << "Нет решения " << endl;
	}



	return 0;
}
void Swap(int& x, int& y) {
	int z = x;
	x = y;
	y = z;
}