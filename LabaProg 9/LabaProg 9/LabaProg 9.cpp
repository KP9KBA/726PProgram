﻿#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int a;
	cout << "Введите номер задания" << endl;
	cin >> a;
	switch (a) {
	case 1: {
		/*Дан номер дня – целое число от 1 до 31 и месяца — целое число в
		диапазоне 1–12(1 — январь, 2 — февраль и т.д.).Вывести дату в виде текста
		(например, «пятое января»).*/

		int a, b;
		cout << "Введите дату" << endl;
		cin >> a >> b;
		if (a <= 31 && a > 0 && b > 0 && b <= 12) {
			if (a > 9 && a < 21 || a == 30) {
				switch (a) {
				case 10: { cout << "Десятое "; }break;
				case 11: { cout << "Одинадцатое "; }break;
				case 12: { cout << "Двенадцатое "; }break;
				case 13: { cout << "Тринадцатое "; }break;
				case 14: { cout << "Четырнадцатое "; }break;
				case 15: { cout << "Пятнадцатое "; }break;
				case 16: { cout << "Шестнадцатое "; }break;
				case 17: { cout << "Семнадцатое "; }break;
				case 18: { cout << "Восемнадцатое "; }break;
				case 19: { cout << "Девятнадцатое "; }break;
				case 20: {cout << "Двадцатое "; }break;
				case 30: {cout << "Тридцатое "; }break;
				}
			}
			else {
				switch (a / 10) {
				case 2: { cout << "Двадцать "; }break;
				case 3: { cout << "Тридцать "; }break;
				}
				switch (a % 10) {
				case 1: { cout << "Первое "; }break;
				case 2: { cout << "Второе "; }break;
				case 3: { cout << "Третье "; }break;
				case 4: { cout << "Четвертое "; }break;
				case 5: { cout << "Пятое "; }break;
				case 6: { cout << "Шестое "; }break;
				case 7: { cout << "Седьмое "; }break;
				case 8: { cout << "Восьмое "; }break;
				case 9: { cout << "Девятое "; }break;
				}
			}switch (b) {
			case 1: { cout << "Января" << endl; }break;
			case 2: { cout << "Февраля" << endl; }break;
			case 3: { cout << "Марта" << endl; }break;
			case 4: { cout << "Апреля" << endl; }break;
			case 5: { cout << "Мая" << endl; }break;
			case 6: { cout << "Июня" << endl; }break;
			case 7: { cout << "Июля" << endl; }break;
			case 8: { cout << "Августа" << endl; }break;
			case 9: { cout << "Сентября" << endl; }break;
			case 10: { cout << "Октября" << endl; }break;
			case 11: { cout << "Ноября" << endl; }break;
			case 12: { cout << "Декабря" << endl; }break;
			}

		}
		else {
			cout << "Такой даты нет))))0" << endl;
		}
	}break;
	case 2: {/*Робот может перемещаться в четырех направлениях(«С» — север, «З» — запад, «Ю» — юг, «В» — восток) и принимать три цифровые команды :
		0 — продолжать движение, 1 — поворот налево, −1 — поворот направо.
		Дан символ C — исходное направление робота и целое число N — посланная ему команда.
		Вывести направление робота после выполнения полученной команды*/

		string s;
		int K;
		char c;
		int dir;
		cout << "Введите команду робота" << endl;
		cin >> K;//команда
		cout << "Введите направление робота N-север W - запад S - юг  E - восток" << endl;
		cin >> c;//направления
		switch (c) {
		case 'N': dir = 1; break;
		case 'W': dir = 2; break;
		case 'S': dir = 3; break;
		case 'E': dir = 4; break;
		}
		switch (K) {
		case 0: cout << s; break;
		case 1: dir ++; break;
		case -1: dir--; break;
		default: cout << "неправильная команда";
		}
		if (dir < 0) dir = 4;
		if (dir > 4)dir = 0;
		switch (dir) {
		case 1: s = "север"; cout << s; break;
		case 2:s = "запад"; cout << s; break;
		case 3:s = "Юг"; cout << s; break;
		case 4:s = "Восток"; cout << s; break;
		}
		

	}break;
	case 3: {
		/*Дано целое число в диапазоне 10–40, определяющее количество учебных заданий по некоторой теме.
		Вывести строку-описание указанного количества заданий,
		обеспечив правильное согласование числа со словами «учебное задание»,
		например: 18 — «восемнадцать учебных заданий».*/

		int a;
		cout << "Введите номер учебного задания" << endl;
		cin >> a;
		if (10 <= a && a <= 40) {
			if (a / 10 == 1) {
				switch (a) {
				case 10: cout << "десять учебных заданий"; break;
				case 11: cout << "однадцать учебных заданий"; break;
				case 12: cout << "двенадцать учебных заданий"; break;
				case 13: cout << "Тринадцать учебных заданий"; break;
				case 14: cout << "четырнадцать учебных заданий"; break;
				case 15: cout << "пятнадцать учебных заданий"; break;
				case 16: cout << "шестнадцать учебных заданий"; break;
				case 17: cout << "семнадцать учебных заданий"; break;
				case 18: cout << "восемнадцать учебных заданий"; break;
				case 19: cout << "девятнадцать учебных заданий"; break;
				}break;
			}
			switch (a / 10) {
			case 2: cout << "двадцать "; break;
			case 3: cout << "тридцать "; break;
			case 4: cout << "сорок "; break;
			}

			switch (a % 10) {
			case 1: cout << "одно "; break;
			case 2: cout << "два "; break;
			case 3: cout << "три "; break;
			case 4: cout << "четыре "; break;
			case 5: cout << "пять "; break;
			case 6: cout << "шесть "; break;
			case 7: cout << "семь "; break;
			case 8: cout << "восемь "; break;
			case 9: cout << "девять "; break;

			}
			switch (a % 10) {
			case 0: cout << "учебных заданий"; break;
			case 1: cout << "учебное задание"; break;
			case 2: cout << "учебных задания"; break;
			case 3: cout << "учебных задания"; break;
			case 4: cout << "учебных задания"; break;
			case 5: cout << "учебных заданий"; break;
			case 6: cout << "учебных заданий"; break;
			case 7: cout << "учебных заданий"; break;
			case 8: cout << "учебных заданий"; break;
			case 9: cout << "учебных заданий"; break;

			}
		}
		else { cout << "Число вне указанного диапазона" << endl; }
	}break;
	case 4: {
		/*Дано целое число в диапазоне 100–999. Вывести строку-описание данного числа, например: 256 — «двести пятьдесят шесть», 814 — «восемьсот четырнадцать».*/
		int a;
		cout << "Введите число" << endl;
		cin >> a;
		if (a > 99 && a < 1000) {
			switch (a / 100) {
			case 1: cout << "сто "; break;
			case 2: cout << "двести "; break;
			case 3: cout << "триста "; break;
			case 4: cout << "четыреста"; break;
			case 5: cout << "пятьсот "; break;
			case 6: cout << "шестьсот "; break;
			case 7: cout << "семьсот "; break;
			case 8: cout << "восемьсот "; break;
			case 9: cout << "девятьсот "; break;
			}
			switch ((a % 100) / 10) {
			case 2: cout << "двадцать "; break;
			case 3: cout << "тридцать "; break;
			case 4: cout << "сорок "; break;
			case 5: cout << "пятьдесят "; break;
			case 6: cout << "шестьдесят "; break;
			case 7: cout << "семьдесят "; break;
			case 8: cout << "восемьдесят "; break;
			case 9: cout << "девяносто "; break;
			}

			switch (a % 10) {
			case 1: cout << "один"; break;
			case 2: cout << "два"; break;
			case 3: cout << "три"; break;
			case 4: cout << "четыре"; break;
			case 5: cout << "пять"; break;
			case 6: cout << "шесть"; break;
			case 7: cout << "семь"; break;
			case 8: cout << "восемь"; break;
			case 9: cout << "девять"; break;
			}
			switch (a % 100) {
			case 10: cout << "десять"; break;
			case 11: cout << "одинадцать"; break;
			case 12: cout << "двенадцать"; break;
			case 13: cout << "ринадцать"; break;
			case 14: cout << "четырнадцать"; break;
			case 15: cout << "пятнадцать"; break;
			case 16: cout << "шестнадцать"; break;
			case 17: cout << "семьнадцать"; break;
			case 18: cout << "восемьнадцать"; break;
			case 19: cout << "девятнадцать"; break;
			}
		}
		else { cout << "Число вне указанного диапазона" << endl; }
	}break;
	case 5: {
		/*. В восточном календаре принят 60-летний цикл, состоящий из 12- летних подциклов, обозначаемых названиями цвета: зеленый, красный, желтый, белый и черный.
		В каждом подцикле годы носят названия животных: крысы, коровы, тигра, зайца, дракона, змеи, лошади, овцы, обезьяны, курицы, собаки и свиньи.
		По номеру года определить его название, если 1984 год — начало цикла: «год зеленой крысы».*/
		int k, b, c, n;
		string arr1[5] = { "год зелен","год красн","год желт","год бел","год черн" }, arr2[12] = { "ой крысы","ой коровы","ого тигра","ого зайца","ого дракона","ой змеи","ой ошади","ой овцы","ой обезьяны","ой курицы","ой собаки","ой свиньи"};
		cout << "Введите год" << endl;
		cin >> n;
		k = (n - 1984);
		b = k % 5;
		c = k % 12;                                //ЭТО МАССИВАМИ
		cout << arr1[b] << arr2[c] << endl;
		//ЭТО КЕСАМИ
		 /*int n, k, f;
		cout << "Введите год" << endl;
		cin >> n;
		k = (n-1984)%5;
		switch (k) { 
		case 3:cout << "год бел"; break;
		case 4:cout << "год черн"; break;
		case 0:cout << "год зелен"; break;
		case 1:cout << "год красн"; break;
		case 2:cout << "год желт"; break;
         }
		f = (n-1984) % 12;
		switch (f) {
		case 0:cout << "ой крысы" << endl; break;
		case 1:cout << "ой коровы" << endl; break;
		case 2:cout << "ого тигра" << endl; break;
		case 3:cout << "ого зайца" << endl; break;         
		case 4:cout << "ого дракона" << endl; break;
		case 5:cout << "ой змеи" << endl; break;
		case 6:cout << "ой лошади" << endl; break;
		case 7:cout << "ой овцы" << endl; break;
		case 8:cout << "ой обезьяны" << endl; break;
		case 9:cout << "ой курицы" << endl; break;
		case 10:cout << "ой собаки" << endl; break;
		case 11:cout << "ой свиньи" << endl; break;
		}*/  //ЭТО КЕСАМИ
	}break;
	default:cout << "Неправильный номер задания" << endl;
	}

	return 0;
}