#include <iostream>
using namespace std;
int main()
{
	double a, b;
	double sum, razn, pow, div;

	cout << "Write a";
	cin >> a;
	cout << "Write b";
	cin >> b;
	sum = a * a + b * b;
	razn = a * a - b * b;
	pow = a * a * b * b;
	div = (a * a) / (b * b);
	cout << "sum = " << sum << endl;
	cout << "razn = " << razn << endl;
	cout << "pow = " << pow << endl;
	cout << "div = " << div << endl;
	return 0;

}