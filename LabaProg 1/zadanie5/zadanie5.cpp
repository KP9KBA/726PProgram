#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float a, b;
	float Suma, Razni, Umn, Del;
	cout << "Write a";
	cin >> a;
	cout << "Write b";
	cin >> b;
	Suma = abs(a) + abs(b);
	Razni = abs(a) - abs(b);
	Umn = abs(a) * abs(b);
	Del = abs(a) / abs(b);
	cout << "Suma = " << Suma << endl;
	cout << "Razni = " << Razni << endl;
	cout << "Umn = " << Umn << endl;
	cout << "Del = " << Del << endl;

	return 0;



}