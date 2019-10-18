#include <iostream>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int A, B, C;
	
	//zadanie 1 
	/*cout << "Введите два числа" << endl;
	cin >> A >> B;
	if (A == B) {
		A = 0; B = 0;
		cout << "Новые значения переменных A и B " << endl << A << endl << B;
	}
	else {
		if (A > B) {
			B = A;
			cout << "Новые значения переменных A и B " << endl << A << endl << B;
		}
		else {
			A = B;
			cout << "Новые значения переменных A и B" << endl << A << endl << B;
		}
	}*/

	//zadanie 2  Найти сумму двух наибольших из них
	/*cout << "Введите три числа" << endl;
	cin >> A >> B >> C;
	if (B > A && C > A) {
		cout << "Сумма двух наибольших чисел " << B+C << endl;
	}
	
	if (A>B&&C>B) {
		cout << "Сумма двух наибольших чисел " << C + A << endl;
	}
	
	if (A>C && B> C) {
		cout << "Сумма двух наибольших чисел " << A + B<< endl;
	}
	else {
		cout << "Сумма двух наибольших чисел " << A + B << endl;
	}*/
	
	//zadanie 3 Определить, какая из двух последних точек (B или C) расположена ближе к A, и вывести эту точку и ее расстояние от точки A.
	/*int x1, x2, x3, y1, y2, y3, AB, AC;
	cout << "Введите координаты точки А (х,у)" << endl;
	cin >> x1 >> y1;
	cout << "Введите координаты точки В (х,у)" << endl;
	cin >> x2 >> y2;
	cout << "Введите координаты точки С (х,у)" << endl;
	cin >> x3 >> y3;
	B = abs((x2 - x1) + (y2 - y1));
	C = abs(x3 - x1 + y3 - y1);
	AB = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	AC = sqrt(pow((x2 - x1), 2) + pow((y3 - y1), 2));
	if (AB > AC) {
		cout << "" << B << (x2, y2) << "" << AB << endl;
	}
	else {
		cout << "" << C << (x3, y3) << "" << AC << endl;
	}*/
	
	//Используются не коордиинаты
	/*int d, e;
	cout << "Введите точку А" << endl;
	cin >> A;
	cout << "Введите точку В" << endl;
	cin >> B;
	cout << "Введите точку С" << endl;
	cin >> C;
	if ((B-A)<(C-A)) {
		cout << "Точка B расположена ближе к А. На расстоянии " << B-A << endl;
	}
	else {
		cout << "Точка C расположена ближе к А. На расстоянии " << C-A << endl;
	}
	*/

	//zadanie 4 Даны координаты точки, не лежащей на координатных осях OX и OY. Определить номер координатной четверти, в которой находится данная точка



	return 0;
}