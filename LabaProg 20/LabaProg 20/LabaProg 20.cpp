#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

using namespace std;

int lenstr(const char* s) {
	int i = 0;
	while (*s++)
		++i;
	return i;
}
char Return_2(char S, int s, char C) {
	s = S;
	S = C;
	C = s;
	cout << S << " " << S << " ";
	return 0;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "Введите номер задания ";
	cin >> a;
	switch (a) {
	case 1: {
		/*Дан символ C. Вывести два символа, первый из которых предшествует 
		символу C в кодовой таблице, а второй следует за символом C.*/
		char C;
		cout << "Введите символ ";
		cin >> C;
		cout << char(C - 1) << " " << char(C + 1);
	}break;
	case 2: {
		/*Дана непустая строка S. Вывести строку, 
		содержащую символы строки S, между которыми вставлено по одному пробелу.*/
		char S[50];
		cout << "Введите строку ";
		cin.ignore();
		cin.getline(S, lenstr(S));
		for (int i = 0; i < lenstr(S); i++) {
			cout << S[i] << " ";
		}
	

	}break;
	case 3: {
		/*Дана строка. Подсчитать количество содержащихся в ней прописных латинских букв.*/
		char S[50];
		int n = 0;
		cout << "Введите строку ";
		cin.ignore();
		cin.getline(S, lenstr(S));
		for (int i = 0; i < lenstr(S); i++)
			if (S[i] >= 'A' && S[i] <= 'Z') n++;
		cout << "Прописных букв в сроке:  " << n << endl;
	}break;
	case 4: {
		/*Дан символ C и строка S. Удвоить каждое вхождение символа C в строку S*/
		char C, S[50];
		cout << "Введите строку ";
		cin.ignore();
		cin.getline(S, lenstr(S));
		cout << "Введите символ ";
		cin >> C;
		for (int i = 0; i < lenstr(S); i++) {
			if (S[i] == C) Return_2(S[i], 1, C);
			else cout << S[i] << " ";
		}
	}break;
	case 5: {
		/*Даны строки S и S0. Найти количество вхождений строки S0 в строку S.*/
		char S0[50], S[50];
		int n = 0;
		cout << "Введите строку s ";
		cin.ignore();
		cin.getline(S, lenstr(S));
		cout << "Введите строку s0 ";
		cin.ignore();
		cin.getline(S0, lenstr(S0));
		if (lenstr(S) > lenstr(S0)) {
			for (int i = 0; i < lenstr(S); i++) {
				if (S[i] == S0[i]) n++;
			}
		}
		else {
			for (int i = 0; i < lenstr(S0); i++) {
				if (S[i] == S0[i]) n++;
			}
		}
		cout << endl << "Количество вхождений равно " << n << endl;
	}break;
	}
	return 0;
}