#include <iostream>
#include <fstream>
#include <Math.h>
#include <windows.h>
#include <string>

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "Введите номер задания " << endl;
	cin >> a;
	switch (a) {
	case 1: {
		/*Дан символьный файл, содержащий по крайней мере один 
		символ пробела. Удалить все его 
		элементы, расположенные перед первым символом пробела, 
		включая и этот пробел.*/
		string file = "", s = "";
		fstream F;
		int i;
		cout << "Введите имя файла: " << endl;
		cin.ignore();
		getline(cin, file);
		F.open(file);
		if (F) {
			while (!F.eof()) {
				getline(F, s, '\0');
				for (i = s.find(' ') + 1; i < s.length(); i++) F << s[i];
			}
			F.close();
		}
		else cout << "Файл не существует" << endl;

		F.open(file, ios::out);
		if (F)
		{
			for (i = s.find(' ') + 1; i < s.length(); i++) F << s[i];
			cout << "Готово!" << endl;
			F.close();
		}
		else cout << "Файл не существует" << endl;
	}break;
	case 2: {
		/*Дано имя файла и целые положительные числа N и K. 
		Создать текстовый файл с указанным именем и записать в него N строк, 
		каждая из которых состоит из K символов «*» (звездочка).*/
		string file = "";
		fstream F;
		int i, j;
		int n, k;
		cout << "Введите имя файла: " << endl;
		cin.ignore();
		getline(cin, file);
		cout << "Введите целые N и K: " << endl;
		cin >> n >> k;
		F.open(file, ios::out);
		if (F)
		{
			for (i = 0; i < n; i++)
			{
				for (j = 0; j < k; j++) F << '*';
				F << endl;
			}
			cout << "Дело сделано!" << endl;
			F.close();
		}
		else cout << "Файл не существует" << endl;
	}break;
	case 3: {
		/*Даны два текстовых файла. Добавить в начало первого 
		файла содержимое второго файла*/
		string file = "", s = "", s0 = "", file2 = "";
		fstream F, G;
		int i;
		cout << "Введите имя первого файла: " << endl;
		cin.ignore();
		getline(cin, file);
		F.open(file);
		if (F)
		{
			getline(F, s0, '\0');
			F.close();
		}
		else cout << "Первый файл не существует" << endl;

		cout << "Введите имя второго файла: " << endl;
		getline(cin, file2);
		G.open(file2);
		if (G)
		{
			getline(G, s, '\0');
			G.close();
		}
		else cout << "Второй файл не существует" << endl;

		F.open(file, ios::out);
		if (F)
		{
			F << s << s0;
			cout << "Дело сделано!" << endl;
			F.close();
		}
		else cout << "Файл не существует" << endl;
	}break;
	case 4: {
		/*Дан текстовый файл. Заменить в нем все подряд 
		идущие пробелы на один пробел.*/
		string file = "", s = "";
		fstream F;
		int i;
		cout << "Введите имя файла: " << endl;
		cin.ignore();
		getline(cin, file);
		F.open(file);
		if (F)
		{
			getline(F, s, '\0');
			F.close();
		}
		else cout << "Первый файл не существует" << endl;

		for (i = 1; i < s.length(); i++)
		{
			if (s[i - 1] == ' ' && s[i] == ' ')
			{
				s.erase(i, 1);
				i--;
			}
		}

		F.open(file, ios::out);
		if (F)
		{
			F << s;
			cout << "Дело сделано!" << endl;
			F.close();
		}
		else cout << "Файл не существует" << endl;
	}break;
	case 5: {
		/*Дан текстовый файл. Найти количество абзацев 
		в тексте, если первая строка каждого абзаца 
		начинается с 5 пробелов («красная строка»). 
		Пустые строки между абзацами не учитывать.*/
		string file = "", s = "";
		fstream F;
		int i, b;
		cout << "Введите имя файла: " << endl;
		cin.ignore();
		getline(cin, file);
		F.open(file);
		if (F)
		{
			getline(F, s, '\0');
			F.close();
		}
		else cout << "Первый файл не существует" << endl;
		b = 0;
		for (i = 4; i < s.length(); i++)
		{
			if (s[i - 4] == ' ' && s[i - 3] == ' ' && s[i - 2] == ' ' && s[i - 1] == ' ' && s[i] == ' ')
			{
				b++;
			}
		}

		cout << "Количество абзацев в тексте: " << b << endl;
	}break;
	}
	return 0;
}