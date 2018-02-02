#include <iostream>

	using std::cout;
		using std::cin;
		using std::endl;
		using std::fixed;

#include <iomanip>

		using std::setprecision;

	
		int main()
		{
			double distancia;   		double litros;     
			double resultado;   
			double totalkms = 0; 
			double totLitros = 0; 

			do
			{
			
	
				cout << "Introduzca los litros utilizados (-1 en adelante): ";
				cin >> litros;

				if (litros != -1)
				{ 
					cout << "Introduzca los kilometros recorridos: ";
					cin >> distancia;

					resultado = distancia / litros; 
					totLitros += litros;            
					totalkms += distancia;        

													
					cout << fixed << setprecision(6);
					cout << "Los kilometros / litro para este tanque fueron " << resultado
						<< "\n" << endl;
				}

			} while (litros != -1);

			cout << "\nEl promedio total de kilometros/litro fue de "
				<< totalkms / totLitros << endl;

			return 0; 

		} 