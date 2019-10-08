#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");

	//0-vockresenie 1-pon 2-vtornic 3-sreda 4-chetverg 5-pyatniza 6-subota
	int K, x;
	cout << "Введите день" << endl;
	cin >> K;
	if (0 < K < 366) {
		x = K % 7;
		if (x == 0) {
			cout << "voskresenie" << endl;
		}
		if (x == 1) {
			cout << "ponedelnic" << endl;
		}
		if (x == 2) {
			cout << "vtornic" << endl;
		}
		if (x == 3) {
			cout << "sreda" << endl;
		}
		if (x == 4) {
			cout << "chetverg" << endl;
		}
		if (x == 5) {
			cout << "pyatniza" << endl;
		}
		if (x == 6) {
			cout << "subbota" << endl;
		}
	}
	return 0;
}