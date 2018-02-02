#include <iostream>

using namespace std;

int main()
{
	int menor=0;
	int mayor=0;
	int valores;
	int arreglo[5];
	for (int x = 0; x < 5; x++) {
		cout << "Ingrese un valor :"<<endl;
		cin >> valores;

		arreglo[x] = valores;
	}

	for (int i = 0; i < 5; i++) {
	
	if(arreglo[i]>mayor)
	{
	
		mayor = arreglo[i];
	}
	
	}

	for (int i = 0; i < 5; i++) {

		if (arreglo[i]<menor)
		{

			menor = arreglo[i];
		}

	}


	cout << "El menor es :" << menor << endl;
cout << "El mayor es :" << mayor << endl;

	system("pause");
}