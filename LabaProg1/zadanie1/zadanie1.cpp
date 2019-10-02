#include <iostream>
using namespace std;
int main()
{
	int a;
	cout << "Write a";
	cin >> a;
	int b;
	cout << "Write b";
	cin >> b;
	int S = a * b;
	int P = 2 * (a + b);
	cout << "S = " << S << endl;
	cout << "P = " << P << endl;
	return 0;

	/*
	int score = 9;
	cout << &score << endl;
	*/
}
