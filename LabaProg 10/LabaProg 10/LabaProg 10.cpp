﻿#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int a;
	cout << "Введите номер задания" << endl;
	cin >> a;
	switch (a)
	{
	case 1: {
		/* Дано вещественное число — цена 1 кг конфет. Вывести стоимость 0.1, 0.2, . . . , 1 кг конфет.*/
		float b, i;
		cout << "Введите цену 1 кг конфет" << endl;
		cin >> b;
		for (i = 0.1; i <1.1; i += 0.1) {
			cout <<"Цена за "<<i<<" кг конфет "<< i * b << endl;
		}
	
	}break;
	case 2: {
	/*Дано целое число N (> 0). Найти произведение 1.1 · 1.2 · 1.3 · . . . (N сомножителей).*/
		int N, j = 1;
		cout << "Введите целое число N" << endl;
			cin >> N;
		if (N > 0) {
			do { j *= N; N--; } while (N != 1);
		}
		cout << "Произведение N сомножителей равно " << j << endl;
	}break;
	case 3: {
	/* Дано целое число N (> 0). Найти квадрат данного числа, используя для его вычисления следующую формулу:
	N2 = 1 + 3 + 5 + . . . + (2·N − 1).
	После добавления к сумме каждого слагаемого выводить текущее значение суммы*/
		double N, i = 1, j=0;
		cout << "Введите целое число N" << endl;
		cin >> N;
		if (N > 0) {
			for (i; i <= N; i++) {
				j += 2 * i - 1;
			}
			cout << "Вычесление квадрата числа методом математической индукции " << j << endl;
		}

	}break;
	case 4: {
	/*Дано вещественное число A и целое число N (> 0). 
	Используя один цикл, найти сумму 1 + A + A2 + A3 + . . . + AN*/
		double A, N, i, C = 1;
		cout << "Введите число A" << endl;
		cin >> A;
		cout << "Введите число N" << endl;
		cin >> N;
		if (N > 0) {
			for (i = 0; N >= i; i++) {
				C += pow(A,i) ; 
				
			}
		}cout << "Сумма этих чисел " << C << endl;

	}break;
	case 5: {
	/*Дано вещественное число A и целое число N (> 0). Используя один цикл, найти значение выражения 
1 − A + A^2 − A^3 + . . . ± A^N .
Условный оператор не использовать. (if() || switch() || тернарный оператор*/
		double A, N, i = 1, pow = 1, sum = 1;
		cout << "Введите число A" << endl;
		cin >> A;
		cout << "Введите число N" << endl;
		cin >> N;
		for (; i <= N; i++) {
			pow *= A;
			pow *= -1;
			sum += pow;
		}
		cout << "Результат " << sum << endl;

	}break;
		break;
	}
	return 0;
}