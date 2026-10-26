//zadanie 1
#include <iostream>
using namespace std;
void wypisywanie();
string imie;
int main() {
	wpisywanie();
}
void wpisywanie(string imie) {
	cout << "Czesc " << imie << endl;
}
//zadanie 2
int i = 0;
int mnożnik = 10;
int a = 0;
int main() {
	mnożenie();
}
void mnożenie() {
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++) {
			cout << j * i << "\t";
		}
		cout << endl;
	}
}
//zadanie 3
int wyświetlanie();
int porównanie();
int a = 0;
int b = 0;
int main() {
	cout << "wprowadź liczbę a: ";
	cin >> a;
	cout << "wprowadź liczbę b: ";
	cin >> b;
	return 0;
}
int wyświetlanie{
	if (a > b)
		cout << a << " jest wieksze od " << b << endl;
	if (b > a)
		cout << b << " jest wieksze od " << a << endl;
}