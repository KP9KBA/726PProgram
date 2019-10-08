#include <iostream>
#include<cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int x, y; //x-god y-vek
	cout << "Введите год" << endl;
	cin >> x;
	y = floor(x / 100) + 1;
	cout << "Это " << y << " век" <<endl;


	return 0;
}