#include <iostream>
using namespace std;

int main()
{
	int numero1;
	int numero2;
	cout << "Ingrese el primero numero :" << endl;
	cin >> numero1;
	cout << "Ingrese el segundo numero :" << endl;
	cin >> numero2;
	if (numero1%numero2 == 0)
		cout << "Numero " << numero1 << " es multiplo de " << numero2;
	else
		cout << "Numero " << numero1 << "No es multiplo de " << numero2;
	
	
	
	


	system("pause");
}