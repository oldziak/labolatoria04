//zadanie 1
#include <iostream>
#include <math.h>
using namespace std;
void wypisywanie();
string imie;
int main() {
	wpisywanie(imie);
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
	porównanie();
	wyświetlanie();
}
int porównanie() {
	cout << "wprowadź liczbę a: ";
	cin >> a;
	cout << "wprowadź liczbę b: ";
	cin >> b;
}
int wyświetlanie () {
	if (a > b)
		cout << a << " jest wieksze od " << b << endl;
	if (b > a)
		cout << b << " jest wieksze od " << a << endl;
}
//zadanie 4
int a = 0;
int b = 0;
int c = 0;
int main() {
	cout << "Podaj wartosc a = ";
	cin >> a;
	cout << "Podaj wartosc b = ";
	cin >> b;
	cout << "Podaj wartosc c = ";
	cin >> c;
	zwracanie();
	wyswietlanie();
}
int wyswietlanie() {
	if (a >= b && b >= c)
		cout << c << endl;
	else if (a >= c && c >= b)
		cout << b << endl;
	else if (b >= c && c >= a)
		cout << a << endl;
	else if (b >= a && a >= c)
		cout << c << endl;
	else if (c >= b && b >= a)
		cout << a << endl;
	else if (c >= a && a >= b)
		cout << b << endl;
	return 0;
}
int zwracanie(int najmniejsza = 0) {
	if (a < b && a < c)
		najmniejsza = a;
	else if (b < a && a < c)
		najmniejsza = b;
	else if (c < a && c < b)
		najmniejsza = c;
	return najmniejsza;
}
//zadanie 5
float obliczenia();

float podstawa = 0;
float wysokosc = 0;
float pole = 0;
int main() {
	obliczenia();
	cout << "Podwojone pole: " << 2 * pole << endl;
}
float obliczenia() {
	cout << "Podaj wartosc podstawy: ";
	cin >> podstawa;
	cout << "Podaj wysokosc: ";
	cin >> wysokosc;
	pole = (podstawa * wysokosc) / 2;
	cout << "Pole: " << pole << endl;
	return pole;
}
//zadanie 6
void dzielniki();
int liczba = 0;
int i = 0;
int main() {
	dzielniki(liczba, i);
}
void dzielniki(int liczba, int i) {
	cout << "Podaj liczbe: ";
	cin >> liczba;
	for (int j = 1; j < liczba / 2; j++) {
		if (liczba % j == 0)
			cout << j << endl;
	}
}
// zadanie 7 
#include <iostream> 
#include <cmath>
using namespace std;
float srednia();
float x = 0;
float y = 0;
float waga1 = 0;
float waga2 = 0;
float wynik = 0;
int main() {
	srednia();
	cout << wynik << endl;
}
float srednia() {
	cout << "Podaj liczbe: ";
	cin >> x;
	cout << "jej wage: ";
	cin >> waga1;
	cout << "Podaj liczbe: ";
	cin >> y;
	cout << "jej wage: ";
	cin >> waga2;
	wynik = (x * waga1 + y * waga2) / (waga1 + waga2);
	return wynik;
}
//zadanie 8
float pitagoras();
float a = 0;
float b = 0;
float c = 0;

int main() {
	c = pitagoras();
	cout << c << endl;
}
float pitagoras() {
	cout << "Podaj wartosc przyprostokatnej: ";
	cin >> a;
	cout << "Podaj wartosc drugiej przysprostokatnej: ";
	cin >> b;
	a = a * a;
	b = b * b;
	c = c * c;
	c* c == (a * a) + (b * b);
	c = sqrt(c);
	return c;
}
//zadanie 9
float dodawanie();
float odejmowanie();
float mnozenie();
float dzielenie();
float x = 0.0;
float y = 0.0;
float wynik = 0.0;
char znak;
int main() {
	cout << "Podaj liczbe x: ";
	cin >> x;
	cout << "Podaj liczbe y: ";
	cin >> y;
	cout << "Podaj znak: ";
	cin >> znak;
	switch (znak) {
	case '+':
		wynik = dodawanie();
		cout << x << "+" << y << "=" << wynik << endl;
		break;
	case '-':
		wynik = odejmowanie();
		cout << x << "-" << y << "=" << wynik << endl;
		break;
	case '*':
		wynik = mnozenie();
		cout << x << "*" << y << "=" << wynik << endl;
		break;
	case'/':
		wynik = dzielenie();
		cout << x << "/" << y << "=" << wynik << endl;
		break;
	}
}
float dodawanie() {
	wynik = x + y;
	return wynik;
}
float odejmowanie() {
	wynik = x - y;
	return wynik;
}
float mnozenie() {
	wynik = x * y;
	return wynik;
}
float dzielenie() {
	wynik = x / y;
	if (y == 0) {
		cout << "nie wolno przez 0!!!";
	}
	return wynik;
}
//zadanie 10 

//zadanie 11
float obwod();
float p = 0;
float q = 0;
float obwód = 0;
int main() {
	obwod();
	cout << obwód << endl;
}
float obwod() {
	cout << "Podaj podstawe prostokata: ";
	cin >> p;
	cout << "Podaj wysokosc prostokata: ";
	cin >> q;
	obwód = 2 * p + 2 * q;
	return obwód;
}
// zadanie 12
int obietosc();
int a = 0;
int b = 0;
int c = 0;
int v = 0;
int main() {
	obietosc();
	cout << v << endl;
}
int obietosc() {
	cout << "Podaj krawedz podstawy a: ";
	cin >> a;
	cout << "Podaj krawedz podstawy b: ";
	cin >> b;
	cout << "Podaj wysokosc prostopadloscianu c: ";
	cin >> c;
	v = a * b * c;
	return v;
}
//zadanie 13 
int potegowanie();
int a = 0;
int b = 0;
int a1 = 0;
int main() {
	potegowanie();
}
int potegowanie() {
	cout << "Podaj podstawe potegi: ";
	cin >> a;
	cout << "Podaj wartosc potegi: ";
	cin >> b;
	int a1 = a;
	for (int i = 1; i < b; i++) {
		a1 = a1 * a;
	}
	cout << a1 << endl;
	return a1;
}
// zdanie 14 
int silnia();
int n = 0;
int main() {
	silnia();
}
int silnia() {
	cout << "Podaj n: ";
	cin >> n;
	int i = n - 1;
	for (int i = n - 1; i > 0; i--) {
		n = n * i;
	}
	cout << n << endl;
	return n;
}
//zadanie 15
int potegowanie(int i, int n, int wynik);

int main() {
	int i = 1;
	int n = 0;
	int wynik = 1;
	cout << "Podaj wartosc potegi: ";
	cin >> n;
	cout << potegowanie(i, n, wynik) << endl;
}
int potegowanie(int i, int n, int wynik) {
	for (int i = 1; i <= n; i++) {
		wynik = wynik * 2;
	}
	return wynik;
}

// zadanie 16 
void losowanie();
int szczesliwynumerek = 0;
int licznik = 0;
int liczba = 0;
int main() {
	losowanie();
}
void losowanie() {
	cout << "Podaj szczesliwy numerek: ";
	cin >> szczesliwynumerek;
	for (int i = 0; i < 10; i++) {
		liczba = rand() % 11;
		cout << liczba << "\t" << endl;
		if (liczba == szczesliwynumerek)
			licznik++;
	}
	double	procent = licznik / 10.0;
	cout << "Szczesliwy numerek padl " << licznik << " razy\n";
	cout << "Oraz stanowi " << procent << "% wszystkich losowan.";
}
//zadanie 17 
float parzyste(float n);
float nieparzyste(float n);
int main() {
	for (int n = 0; n <= 100; n++) {
		if (n % 2 == 0) {
			cout << parzyste(n) << endl;
		}
		else if (n % 2 == 1) {
			cout << nieparzyste(n) << endl;
		}
	}
}
float parzyste(float n) {
	n = n / 2.0;
	return n;
}
float nieparzyste(float n) {
	n = (n - 1.0) / 2.0;
	return n;
}
//zadanie 18
int podzielnosc();
int n = 0;
int main() {
	podzielnosc();
	cout << n << endl;
}
int podzielnosc() {
	cout << "Podaj liczbe: ";
	cin >> n;
	if (n % 2 == 0) {
		n = n * n;
	}
	else if (n % 3 == 0) {
		n = n * n * n;
	}
	else if (n % 2 == 0 && n % 3 == 0) {
		n = 0;
	}
	return n;
}
