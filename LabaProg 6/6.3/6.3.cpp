#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int x, K;
	cout << "Введите день" << endl;
	cin >> K;
	if (0 < K < 366) {
		x = K % 7;
		if (x != 0) {
			cout << x;
		}
		else {
			cout << "ochipka" << endl;
		}
	}
	return 0;
}