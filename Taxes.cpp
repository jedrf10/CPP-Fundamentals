#include <iostream>

using namespace std;

int main ()
{
	
	double precioBruto, precioNeto, taxPer, taxTotal;
	
	while (true){
		
		cout << "Por favor ingrese el valor de su compra (Presione 0 para salir): " << endl;
		cin >> precioBruto;
		cout << "Ingrese el porcentaje de impuestos de su compra: " << endl;
		cin >> taxPer;
		
		if ((precioBruto > 0.0) && (taxPer > 0.0 && taxPer <= 100.0))
		{
			
			precioNeto = precioBruto / (1.0 + taxPer / 100.0);
			taxTotal = precioBruto - precioNeto;
			
			cout << "El valor neto de su compra es: " << precioNeto << endl;
			cout << "El porcentaje de impuesto es: " << taxTotal << "%" << endl;
			
			
		} else {
			cout << "Los valores ingresados no estan dentro del rango permitido." << endl;
		
		}
		
		cout << "\n................................../n" << endl;
	}
	return 0;
}
