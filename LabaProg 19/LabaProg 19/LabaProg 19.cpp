#include <iostream>
#include <locale>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "Введите номер задания ";
	cin >> a;
	switch (a) {
	case 1: {
		/*Дана матрица размера M × N. Преобразовать матрицу,
		поменяв местами минимальный и максимальный элемент в каждой строке.*/
		int M, N;
		int** a;
		int i, j;
		int min = 0, max = 0;
		int mini = 0, minj = 0, maxi = 0, maxj = 0;
		int c = 0;
		cout << "Введите размер матрицы ";
		cin >> M >> N;
		a = new int* [M];// M-строки N-столбцы
		cout << "Введите элементы матрицы " << endl;
		for (i = 0; i < M; i++) {
			a[i] = new int[N];
			for (j = 0; j < N; j++) {
				printf("a[%d][%d] = ", i, j);
				cin >> a[i][j];
			}
		}
		for (i = 0; i < M; i++) {//поиск минимального и максимального, перестановка
			for (j = 0; j < M; j++)
			{
				if (a[i][j] < a[i][min]) min = j;
				if (a[i][j] > a[i][max]) max = j;
			}
			c = a[i][min];
			a[i][min] = a[i][max];
			a[i][max] = c;

		}
		for (i = 0; i < M; i++) {//вывод измененной матрицы
			for (j = 0; j < N; j++) {
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
		delete[]a;
	}break;
	case 2: {
		/*Дана матрица размера M × N.
		Поменять местами столбцы, содержащие минимальный и максимальный элементы матрицы.*/
		int M, N;
		int** a;
		int i, j;
		int min = 9999, max = -9999;
		int mini = 0, minj = 0, maxi = 0, maxj = 0;
		int c = 0;
		cout << "Введите размер матрицы ";
		cin >> M >> N;
		a = new int* [M];// M-строки N-столбцы
		cout << "Введите элементы матрицы " << endl;
		for (i = 0; i < M; i++) {
			a[i] = new int[N];
			for (j = 0; j < N; j++) {
				printf("a[%d][%d] = ", i, j);
				cin >> a[i][j];
			}
		}
		for (i = 0; i < N; i++) {//ищем макс и мин элементы
			for (j = 0; j < M; j++) {
				if (a[i][j] < min) {
					min = a[i][j];
					minj = j;
				}
				if (a[i][j] > max) {
					max = a[i][j];
					maxj = j;
				}
			}
		}
		for (i = 0; i < N; i++) {//перестановка
			c = a[i][maxj];
			a[i][maxj] = a[i][minj];
			a[i][minj] = c;
		}
		for (i = 0; i < M; i++) {//вывод измененной матрицы
			for (j = 0; j < N; j++) {
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
		delete[]a;

	}break;
	case 3: {
		/*Дана матрица размера M × N (M и N — четные числа).
		Поменять местами левую верхнюю и правую нижнюю четверти матрицы*/
		int M, N;
		int** a;
		int i, j;
		int min = 9999, max = -9999;
		int mini = 0, minj = 0, maxi = 0, maxj = 0;
		int c = 0;

		cout << "Введите размер матрицы ";
		cin >> M >> N;
		if (M % 2 != 0 && N % 2 != 0) {
			a = new int* [M];// M-строки N-столбцы
			cout << "Введите элементы матрицы " << endl;
			for (i = 0; i < M; i++) {
				a[i] = new int[N];
				for (j = 0; j < N; j++) {
					printf("a[%d][%d] = ", i, j);
					cin >> a[i][j];
				}
			}
			for (i = 0; i < N / 2; i++)
			{
				for (j = 0; j < M / 2; j++)
				{
					c = a[i][j];
					a[i][j] = a[N / 2 + i][M / 2 + j];
					a[N / 2 + i][M / 2 + j] = c;
				}
			}
			for (i = 0; i < M; i++) {//вывод измененной матрицы
				for (j = 0; j < N; j++) {
					cout << a[i][j] << " ";
				}
				cout << endl;
			}
			delete[]a;
		}
		else cout << "Размерами матрицы должны быть четные числа ";

	}break;
	case 4: {
		/*Дана матрица размера M × N.
		Упорядочить ее строки так, чтобы их первые элементы образовывали
		возрастающую последовательность.*/
		int M, N;
		int** a;
		int i, j;
		int k;
		int c = 0;
		cout << "Введите размер матрицы ";
		cin >> M >> N;
		a = new int* [M];// M-строки N-столбцы
		cout << "Введите элементы матрицы " << endl;
		for (i = 0; i < M; i++) {
			a[i] = new int[N];
			for (j = 0; j < N; j++) {
				printf("a[%d][%d] = ", i, j);
				cin >> a[i][j];
			}
		}
		for (k = 0; k < N; k++) {
			for (i = 1; i < N; i++) {
				if (a[i - 1][0] > a[i][0])
					for (j = 0; j < M; j++) {
						c = a[i - 1][j];
						a[i - 1][j] = a[i][j];
						a[i][j] = c;
					}
			}
		}
		for (i = 0; i < M; i++) {//вывод измененной матрицы
			for (j = 0; j < N; j++) {
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
		delete[]a;
	}break;
	case 5: {
		/*Дана квадратная матрица A порядка M. Найти сумму элементов каждой ее диагонали,
		параллельной главной (начиная с одноэлементной диагонали).*/
		int M, N;
		int** a;
		int* b;
		int i, j;
		int k;
		int c = 0;
		int sum = 0;
		cout << "Введите размер матрицы ";
		cin >> M;
		a = new int* [M];
		cout << "Введите элементы матрицы " << endl;
		for (i = 0; i < M; i++) {
			a[i] = new int [M];
			for (j = 0; j < M; j++) {
				printf("a[%d][%d] = ", i, j);
				cin >> a[i][j];
			}
		}
		c = M;
		b = new int [M * 2 - 1];
		for (k = 0; k < M*2 - 1; k++) {
			for (i = 0; i < M; i++) {
				for (j = 0; j < M; j++) {
					if (i == j + c - 1)
					{
						sum += a[i][j];
					}
				}
			}
			b[k] = sum;
			sum = 0;
			c--;
		}
		for (i = 0; i < M; i++) {//вывод измененной матрицы
				cout << b[i] << " ";
			cout << endl;
		}
		delete[]a;
		delete[]b;
	}break;
	}
	return 0;
}