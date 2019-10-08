#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");

	int N, x;
	cout << "Введите количество секунд " << endl;
	cin >> N;
	x = N % 60;
	cout << "Количество секунд, прошедшее с начала последней минуты " << x << endl;
	return 0;
}