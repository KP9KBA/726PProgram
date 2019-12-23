#include <iostream>
#include <locale.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	int a;
	printf("Введите номер задания ");
	scanf_s("%d", &a);
	switch (a) {
	case 1: {
		/*Дан целочисленный массив A размера N. Назовем серией группу 
		подряд идущих одинаковых элементов, а длиной серии — количество 
		этих элементов (длина серии может быть равна 1). Сформировать два 
		новых целочисленных массива B и C одинакового размера, записав 
		в массив B длины всех серий исходного массива, 
		а в массив C — значения элементов, образующих эти серии*/
		int N;
		cout << "N: ";
		cin >> N;
		int* a = new int[N];
		int* b = new int[N];
		int* c = new int[N];
		for (int i = 0; i < N; i++)
		{
			printf("Введите элемент массива a[%d]: ", i);
			cin >> a[i];
		}
		int k = 0;
		b[k] = 1;
		c[k] = a[k];
		for (int i = 1; i < N; i++) {
			if (a[i - 1] == a[i])
			{
				b[k]++;
			}
			else {
				k++;
				b[k] = 1;
				c[k] = a[i];
			}
		}
		for (int i = 0; i <= k; i++)
		{
			printf("Элемент %d - серия %d\n", c[i], b[i]);
			

		}
		cout << endl;
		
	}break;
	case 2: {
		/*Дано целое число L (> 0) и целочисленный массив размера N. 
		Заменить каждую серию массива, длина которой больше L, 
		на один элемент с нулевым значением*/
		int N;
		int k;
		int L;
		cout << "Введите размер массива N: ";
		cin >> N;
		int* a = new int [N];
		int* b = new int[N];
		cout << "Введите L: ";
		cin >> L;
		for (int i = 0; i < N; i++) {
			printf("Введите элемент массива a[%d]: ", i);
			cin >> a[i];
		}
		
		if (L > 0) {
			k = 0; b[0] = a[0];
			for (int i = 1, j = 1; i < N; i++) {
				if (a[i - 1] == a[i]) {
					k++;
				}
				else {
					k++;
					if (k > L) {
						b[j] = 0;
					}
					else {
						b[j] = a[i];
					}
					j++;
				}
				k = 0;
			}
			for (int i = 0; i < N; i++) {
				cout << b[i] << " ";
			}
		}
		else {
			cout << "Число должно быть больше нуля. Повторите попытку ";
		}
		delete[] a;
		delete[] b;
	}break;
	case 3: {
		/* Дано целое число K (> 0) и целочисленный массив размера N. 
		Поменять местами последнюю серию массива и его серию с номером K*/
		int N;
		int l;
		int k, i, j;
		int m, z, c;
		cout << "Введите размер массива N: ";
		cin >> N;
		int* a = new int[N];//старый массив
		int* b = new int[N];//новый массив
		cout << "Введите K: ";
		cin >> k;
		for (int i = 0; i < N; i++) {
			printf("a[%d] = ", i);
			cin >> a[i];
		}
		m = 1;//счетчик колва серий
		c = 0;//запоминает индекс нужной серии
		z = (k == 1 ? 1 : 0);//длина номера серии
		l = 0;
		j = -1;
		for (i = 1; i < N; i++) {
			if (a[i - 1] != a[i]) {
				m++;
				if (m == k) l = i;
				c = i;
			}
			if (m == k) z++;
		}
		for (i = 0; i < l; i++)  b[++j] = a[i];

		for (i = c; i < N; i++) b[++j] = a[i];

		for (i = l + z; i < c; i++) b[++j] = a[i];

		for (i = l; i < l + z; i++)  b[++j] = a[i];

		for (i = 0; i < N; i++) a[i] = b[i];
		cout << "После обмена: " << endl;
		for (i = 0; i < N; i++)
		{
			printf("%d: %d \n", i + 1, a[i]);
		}
		delete[]a;
		delete[]b;
		//ДОДЕЛАТЬ!
	}break;
	case 4: {
		/*Дано множество A из N точек (точки заданы своими координатами x, y). 
		Среди всех точек этого множества, лежащих во второй четверти, найти точку, 
		наиболее удаленную от начала координат. 
		Если таких точек нет, то вывести точку с нулевыми координатами*/
		const int N = 6;
		int a[N];//x
		int b[N];//y
		int i = 0, j = 0;
		int sum = 0;
		cout << "Введите координаты точек ";
		for (int i = 0; i < N; i++) {
			printf("(x,y): ");
			cin >> a[i] >> b[i];
			if (a[i] < 0 && b[i]>0 && sqrt(pow(a[i], 2) + pow(b[i], 2)) > sum) {
				sum = sqrt(pow(a[i], 2) + pow(b[i], 2));
				j = i;
			}
		}
		if (sum > 0) 
			printf("a[%d] и b[%d] лежат во второй четверти на расстоянии %d", j, j, sum);
		else cout << "(0,0)" << endl;
	}break;
	case 5: {
		/*Дано множество A из N точек (N > 2, точки заданы своими координатами x, y). 
		Найти наибольший периметр треугольника, вершины которого принадлежат различным 
		точкам множества A, и сами эти точки (точки выводятся в том же порядке, 
		в котором они перечислены при задании множества A).*/
		int N;
		cout << "Введите размер массива ";
		cin >> N; 
		int sum = 0;
		int ind1=0, ind2=0, ind3=0;
		if (N > 2) {
			int* a = new int[N];//x
			int* b = new int[N];//y
			int i = 0, j = 0;
			
			cout << "Введите координаты точек ";
			for (int i = 0; i < N; i++) {
				printf("(x,y): ");
				cin >> a[i] >> b[i];
			}
			for (i = 0; i < N; i++) {
				for (j = i++; j < N; j++) {
					for (int k = j++; k < N; k++) {
						if (sqrt(pow(a[i] - a[j], 2) + pow(b[i] - b[j], 2)) + sqrt(pow(a[j] - a[k], 2) + pow(b[j] - b[k], 2)) + sqrt(pow(a[k] - a[i], 2) + pow(b[k] - b[i], 2)) > sum) {
							sum = sqrt(pow(a[i] - a[j], 2) + pow(b[i] - b[j], 2)) + sqrt(pow(a[j] - a[k], 2) + pow(b[j] - b[k], 2)) + sqrt(pow(a[k] - a[i], 2) + pow(b[k] - b[i], 2));
							ind1 = i;
							ind2 = j;
							ind3 = k;
						}
					}
				}
			}
			delete[]a;
			delete[]b;
		}
		printf("Периметр треугольника с вершинами (%d,%d),(%d,%d),(%d,%d) наибольший равен %d ", ind1, ind2, ind2, ind3, ind3, ind1, sum);
		
	}break;
	}

	return 0;
}