#include <iostream>
#include <ctime>
#include <locale.h>
using namespace std;


int main() {
	setlocale(LC_ALL, "rus");
	srand(time(0));
	int a;
	cout << "Введите номер задания" << endl;
	cin >> a;
	switch (a) {
	case 1: {
		/*Дан целочисленный массив размера N. Удалить из
		массива все соседние одинаковые элементы, оставив их первые вхождения.*/
		const int N = 10;
		int* a = new int[N];
		int i;
		int  k = 0;

		for (i = 0; i < N; i++) {
			printf("Введите элемент массива a[%d] ", i);
			scanf_s("%d", &a[i]);
		}
		for (i = 0; i < N; i++) {
			if (a[k] != a[i]) {
				k++;
				a[k] = a[i];
			}
		}
		k++;
		for (i = 0; i < k; i++) {
			printf("%d ", a[i]);
		}
		delete[] a;
	} break;
	case 2: {
		/*Дан целочисленный массив размера N. Удалить из массива все элементы,
		встречающиеся ровно два раза, и вывести размер полученного массива и его содержимое.*/
		int a[8];
		int count;
		int i, j, b = 0, c;
		int N = 8;
		for (i = 0; i < N; i++) {
			printf("Введите элемент массива a[%d] ", i);
			scanf_s("%d", &a[i]);
		}
		cout << "\n";
		for (i = 0; i < N-b; i++)
		{
			count = 0;
			for (j = 0; j < N; j++)
			{
				if (a[i] == a[j])//&&i!=j
					count++;
			}
			if (count == 2)
			{
				b++;
				for (j = i; j < N-1; j++)
				{
					c = a[j + 1];
					a[j + 1] = a[j];
					a[j] = c;
				}
				i--;
			}
		}
		cout << "Обработанный массив " << endl;
		for (i = 0; i < N-b; i++)
			printf("%d ", a[i]);

	} break;
	case 3: {
		/*Дан массив размера N. Вставить элемент с нулевым значением
		перед минимальным и после максимального элемента массива.*/
		const int N = 6;
		int a[N];
		int b[N + 2];
		int i;
		int max, min;
		int k = 0;
		for (i = 0; i < N; i++) {
			printf("a[%d] = ", i);
			cin >> a[i];
		}
		cout << endl;
		min = 9999; max = -9999;
		for (i = 0; i < N ; i++) {//нахождение макс и мин
			if (a[i] < min) {
				min = a[i];
			}
			if (a[i] > max) {
				max = a[i];
			}
		}
		
		for (i = 0; i < N; i++)
		{
			if (a[i] == max)
			{
				b[i + k] = a[i];
				b[i + k + 1] = 0;
				max++;
				k++;
			}
			else if (a[i] == min)
			{
				b[i + k] = 0;
				b[i + k + 1] = a[i];
				min--;
				k++;
			}
			else b[i + k] = a[i];
		}
		for (i = 0; i < N+2; i++)
			printf("%d ", b[i]);
	} break;
	case 4: {
		/*Дан массив размера N. После каждого отрицательного элемента
		массива вставить элемент с нулевым значением.*/
		int N = 9;
		int* a = new int[N];
		int* b;
		int i;
		int k = 0;

		for (i = 0; i < N; i++) {
			printf("a[%d] = ",i);
			cin >> a[i];
			if (a[i] < 0)k++;
		}
		cout << endl;
		b = new int[N + k];
		k = 0;
		for (i = 0; i < N; i++) {
			if (a[i] < 0) {
				b[i + k] = a[i];
				b[i + k + 1] = 0;
				k++;
			}else b[i + k] = a[i];
		}
		for (i = 0; i < N + k; i++)
			printf("%d ", b[i]);
		
			delete[]a;
			delete[]b;
		} break;
	case 5: {
		/*Дан массив размера N. Перед каждым положительным элементом
		массива вставить элемент с нулевым значением.*/
		const int n = 10;
		int* a = new int[n];
		int* b;
		int i;
		int k = 0;

		for (i = 0; i < n; i++) {
			printf("a[%d] = ", i);
			scanf_s("%d", &a[i]);
			if (a[i] > 0)k++;
		}
		cout << endl;
		b = new int[n + k];
		k = 0;
		for (i = 0; i < n; i++) {
			if (a[i] > 0) {
				b[i + k] = 0;
				b[i + k + 1] = a[i];
				k++;
			}
			else b[i + k] = a[i];
		}
		for (i = 0; i < n+k; i++) {
			printf("%d ", b[i]);
		}
		delete[]a;
		delete[]b;
	} break;
	}
	return 0;
}	
