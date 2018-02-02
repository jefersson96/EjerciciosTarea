#include <iostream>

using namespace std;

int main() {
	double radio;
	cout << "Ingrese el radio del circulo" << endl;
	cin >> radio;

	cout << "El diametro es :" << 2 * radio << endl;
	cout << "La circunferencia es " << (2 * radio)*3.1416 << endl;
	cout << "El area es :" << (3.1415)*radio*radio<<endl;



	system("pause");
}