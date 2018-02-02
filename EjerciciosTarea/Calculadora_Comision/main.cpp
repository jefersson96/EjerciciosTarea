#include <iostream>
using namespace::std;
const int Tamano_Arreglo = 10;

int main()

{  

	float A[Tamano_Arreglo + 1];
	int B[Tamano_Arreglo + 1], C[11] = { 0 };
	int i, j, k;
	float ventas;

	cout << "\n\nEste programa calcula los rangos en los que estan los salarios de los " << Tamano_Arreglo << " empleados. " << endl;
	for (i = 1; i <= Tamano_Arreglo; i++)
	{
		cout << endl << endl << endl << "Introduzca las ventas del empleado numero " << i << endl;
		cin >> ventas;
		A[i] = (static_cast<float>(9) / 100)*ventas + 200.00;
		cout << "El salario del empleado " << i << " es: " << A[i] << endl;
		B[i] = static_cast< int >(A[i]) / 100;
	}

	for (k = 1; k <= Tamano_Arreglo; k++)
	{
		if (B[k] < 10)
			C[B[k]]++;
		else
			C[Tamano_Arreglo]++;
	}

	for (j = 2; j < Tamano_Arreglo; j++)

	{
		cout << endl << "Hay " << C[j] << " empleados que cobran entre " << (j * 100) << " y ";
		cout << ((j + 1) * 100) - 1 << " pesos " << endl;
	}

	cout << endl << "Hay " << C[(Tamano_Arreglo)] << " empleados que cobran 1000 o mas." << endl << endl << endl;
	return 0;
} 