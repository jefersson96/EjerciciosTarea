#include <iostream>
using namespace std;
int main() {


	int numero, a, a1, b, b1, c, c1, d, d1, e;
	cout << "Ingrese un numero " << endl;
	cin >> numero;
	a = numero / 10000;
	a1 = numero % 10000;
	b = numero % 10;
	if (a = !b)
		cout << "No palindromo" << endl;
	else {
		c = a1 / 1000;
		c1 = a1 % 1000;
		d = c1 / 100;
		d1 = c1 % 100;
		e = d1 / 10;
		if (c == e)
			cout << "Si es palindromo" << endl;
		else
			cout << "No es palindromo" << endl;
	}
	system("pause");
}