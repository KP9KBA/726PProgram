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
		int* a = new int [N]; 
		int i, j;
		int c, k = 0;
		
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
			/*if (b[i] != 0) {
				printf("%d ", b[i]);
			}*/
			printf("%d ", a[i]);
		}
		
	} break;
	case 2: {
		/*Дан целочисленный массив размера N. Удалить из массива все элементы, 
		встречающиеся ровно два раза, и вывести размер полученного массива и его содержимое.*/
		int arr[12];
		int count = 0;
		int i, j, a;
		int N = 12;
		for (i = 0; i < N; i++) {
				printf("Введите элемент массива a[%d] ", i);
				scanf_s("%d", &arr[i]);
		}

		for (i = 0; i < N; i++)
		{
			for (j = 1; j < N; j++)
			{
				if (arr[i] == arr[j])
					count++;
			}
			if (count == 2)
			{
				for (a = i; a < N; a++)
				{
					arr[a] = arr[a + 2];
				}
				N = N - 2;
				i--;
			}
			count = 0;
		}

			for (i = 0; i < N; i++)
				printf("%d ", arr[i]);
		
	} break;
	case 3: {
		/*Дан массив размера N. Вставить элемент с нулевым значением 
		перед минимальным и после максимального элемента массива.*/
		const int N = 13;
		int arr[N];
		int i, j;
		int max, min, maxi=0, mini = 0;
		for (i = 0; i < N-1; i++) {
			arr[i] = rand() % 50 - 25;
			printf("%d ", arr[i]);
		}
		printf("\n");
		min = arr[0]; max = arr[0];
		for (i = 0; i < N-1; i++) {//нахождение макс и мин
				if (arr[i] < min) {
					min = arr[i];
					mini = i;
				}
				if (arr[i] > max) {
					max = arr[i];
					maxi = i;
				}
			
		}
		/*if (mini > maxi) {

			for (i = maxi; i < N-1; i++) {
				arr[i] = arr[i++];
				arr[maxi] = 0;
			}
			for (i = mini; i < N-1; i++) {
				arr[i] = arr[i+1];
				arr[mini-1] = 0;
			}
			
		}
		/*if (maxi > mini) {
			for (i = mini; i < N-1; i++) {
				arr[i] = arr[i+1];
				arr[mini+1] = 0;
			}
			for (i = maxi-1; i < N-1; i++) {
				arr[i] = arr[i++];
				arr[maxi+1] = 0;
			}
		}*/
		for (i = N-1; i >= mini; i--) {
			arr[i] = arr[i - 1];
			arr[mini-1] = 0;
		}
		for (i = N; i >= maxi + 1; i--) {
			arr[i] = arr[i - 1];
			arr[maxi + 2] = 0;
		}
		
		for (i = 0; i < N; i++)
			printf("%d ", arr[i]);
	} break;
	case 4: {
		/*Дан массив размера N. После каждого отрицательного элемента 
		массива вставить элемент с нулевым значением.*/
		const int n = 10;
		int* a = new int[n];
		int i, j;
		int k = 0;
		int n = 10;

		for (i = 0; i < n; i++) {
			printf("Введите элемент массива a[%d] ", i);
			scanf_s("%d", &a[i]);
		}
		for (i = 0; i < n; i++) {
			if (a[i] < 0) {
				printf("%d %d ", a[i],0);
			}else
				printf("%d ", a[i]);
		}

	} break;
	case 5: {
		/*Дан массив размера N. Перед каждым положительным элементом 
		массива вставить элемент с нулевым значением.*/
		const int n = 10;
		int* a = new int[n];
		int i, j;
		int k = 0;

		for (i = 0; i < n; i++) {
			printf("Введите элемент массива a[%d] ", i);
			scanf_s("%d", &a[i]);
		}
		for (i = 0; i < n; i++) {
			if (a[i] > 0) {
				printf("%d %d ", 0,a[i]);
			}
			else
				printf("%d ", a[i]);
		}
	} break;
	}

	return 0;
}