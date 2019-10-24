#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int a;
	cout << "Введите номер задания" << endl;
	cin >> a;
	switch (a) {
	case 1: {
		int N, x;
		cout << "Введите количество секунд " << endl;
		cin >> N;
		x = N % 60;
		cout << "Количество секунд, прошедшее с начала последней минуты " << x << endl;
		return 0;
	}break;
	case 2: {

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
	}break;
	case 3: {
		/*int N, K, x;
		cout << "Введите день" << endl;
		cin >> K;
		cout << "Введите день начала года" << endl;
		cin >> N;
		if (0 < K && K < 366 && N<=7&&N>0) {
			
		}*/
		string days[7] = { "Понедельник", "Вторник", "Среда","Четверг", "Пятница", "Суббота", "Воскресенье"};
	    int k, N;//к-день, Н-номер начала года(1-пн, 2-вторник и тд)
	    cout << "Ведите k,N : ";
	    cin >> k >> N;
	    if (k > 0 && k < 366 && N > 0 && N < 8)
	    {
		cout << "  день недели  : " << days[(k + N - 2) % 7 ].c_str() << endl;
	     }
	else
	{
		cout << "не соответствие условию " << endl;
	}
	
	}break;
	case 4: {
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
	}break;
	case 5: {
		int x, y; //x-god y-vek
		cout << "Введите год" << endl;
		cin >> x;
		y = floor(x / 100) + 1;
		cout << "Это " << y << " век" << endl;
	}break;

	}





	return 0;
}