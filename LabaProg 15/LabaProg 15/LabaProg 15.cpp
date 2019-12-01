#include <iostream>
#include <ctime>
#define N 15
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	srand(time_t(0));
	int a;
	cout << "Введите номер задания" << endl;
	cin >> a;
	switch (a) {
	case 1: {
		/*Даны массивы A и B одинакового размера N. Поменять местами их содержимое
		и вывести вначале элементы преобразованного массива A,
		а затем — элементы преобразованного массива B.*/
		int A[N], B[N];
		int j;
		cout << "Массив А" << endl;
		for (int i = 0; i <= N - 1; i++) {
			A[i] = rand() % 50 - 25;
			printf("%d ", A[i]);
		}
		cout << endl << "Массив В" << endl;
		for (int i = 0; i <= N - 1; i++) {
			B[i] = rand() % 50 - 25;
			printf("%d ", B[i]);
		}
		for (int i = 0; i <= N - 1; i++) {
			j = A[i];
			A[i] = B[i];
			B[i] = j;
		}
		cout << endl;
		cout << "Новый массив А" << endl;
		for (int i = 0; i <= N - 1; i++) {
			printf("%d ", A[i]);
		}
		cout << endl << "Новый массив В" << endl;
		for (int i = 0; i <= N - 1; i++) {
			printf("%d ", B[i]);
		}

	}break;
	case 2: {
		/*Дан массив A размера N. Сформировать новый массив B того же размера по следующему правилу: элемент
		B(K) равен среднему арифметическому элементов массива A с номерами от 1 до K.*/
		int A[N];
		double B[N];
		int K;
		int sum = 0;
		int i;
		cout << "Массив А" << endl;
		for (int i = 0; i < N; i++) {
			A[i] = rand() % 50 - 25;
			printf("%d ", A[i]);
		}
		cout << endl << "Массив В" << endl;
		for (K = 0; K < N; K++) {
			sum = 0;
			for (i = 0; i <= K; i++) {
				sum += A[i];
			}

			B[K] = sum / (K+1);
			printf("%.2f ", B[K]);
		}

		/*cout << endl << "Массив В" << endl;
		for (int i = 0; i < N; i++) {
			printf("%f ", B[i]);
		}*/
		//исправить для каждого элемента
	}break;
	case 3: {
		/*Дан целочисленный массив размера N. Увеличить все нечетные числа,
		содержащиеся в массиве, на исходное значение последнего нечетного числа.
		Если нечетные числа в массиве отсутствуют, то оставить массив без изменений*/
		int A[N];
		int max = 0;
		for (int i = 0; i <= N - 1; i++) {
			A[i] = rand() % 50 - 25;
			printf("%d ", A[i]);
		}
		for (int i = 1; i <= N - 1; i++) {
			if (A[i] % 2 != 0 && A[i] > A[i - 1] % 2 != 0) {
				max = A[i];
			}
			//сначала нужно найти нечетные числа, среди них макс. а затем уже отнимать (все в одном цикле)
		}
		cout << endl;
		for (int i = 0; i <= N - 1; i++) {
			if (A[i] % 2 != 0) {
				A[i] += max;
			}
			printf("%d  ", A[i]);
		}
	}break;
	case 4: {
		/*Дан массив размера N. Обнулить элементы массива,
		расположенные между его минимальным и максимальным
		элементами (не включая минимальный и максимальный элементы).*/
		int A[N];
		int max = 0, min = 0, imin, imax;
		for (int i = 0; i <= N - 1; i++) {
			A[i] = rand() % 25 - 25;
			printf("%d ", A[i]);
		}
		max = min = A[0];

		for (int i = 1; i <= N - 1; i++) {
			if (A[i] > max) {
				max = A[i];
				imax = i;
			}
			if (A[i] < min) {
				min = A[i];
				imin = i;
			}
		}
		cout << endl;
		if (imin > imax) {
			for (int i = imax + 1; i <= imin - 1; i++) {
				A[i] = 0;
			}
		}
		else {
			for (int i = imin + 1; i <= imax - 1; i++) {
				A[i] = 0;
			}
		}
		for (int i = 0; i <= N - 1; i++) {
			printf("%d ", A[i]);
		}
		//неправильная инн. если все отрицательные
	}break;
	case 5: {
		/*Дан массив размера N, все элементы которого,
		кроме первого, упорядочены по возрастанию.
		Сделать массив упорядоченным, переместив первый элемент на новую позицию.*/
		int A[] = { 3,1,2,4,5,6,7,8,9,10,11,12,13,14,15 };
		int i, j;
		int c;
		for (i = 0; i < N; i++) {
			printf("%d ", A[i]);
		}
		for (j = 0; j < N - 1; j++) {
			if (A[j] > A[j + 1]) {
				// меняем элементы местами
				c = A[j];
				A[j] = A[j + 1];
				A[j + 1] = c;
			}
		}

		cout << endl;
		for (i = 0; i < N; i++) {
			printf("%d  ", A[i]);
		}break;
	}
	default: cout << "Неправильный номер задания" << endl;
	}



	return 0;
}