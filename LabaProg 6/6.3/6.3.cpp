#include <iostream>

using namespace std;

int main() {
	int x, K;
	cout << "Введите день" << endl;
	cin >> K;
	if (0 < K && K < 366) {
		x = (K % 7)+1;
	
		if (x == 1) {
			cout <<"понедельник";
		}
		if (x == 2) {
			cout << "вторник";
		}
		if (x == 3) {
			cout << "среда";
		}
		if (x == 4) {
			cout << "четверг";
		}
		if (x == 5) {
			cout << "пятница";
		}
		if (x == 6) {
			cout << "суббота";
		}
		if (x == 7) {
			cout << "воскресенье";
		}
	}
	return 0;
}
