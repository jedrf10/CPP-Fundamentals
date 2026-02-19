#include <iostream>

using namespace std;

int main (){
	
	int y, m, d;
	
	cout << "Calendario" << endl;
	while (true)
	{
		
		cout << "Por favor ingresa un año: " << endl;
		if (cin >> y && y > 0)
		{
		break; // Si el año es correcto el programa continua	
		}else 
		{
		
		cout << "Los valores ingresados son incorrectos, intentelo nuevamente" << endl;
		cin.clear();
		cin.ignore(10000, '\n');
		
		}
		
	}
	
	while (true)
	{
		
		cout << "Por favor ingresa un mes (En numeros, entre el 1 y el 12): " << endl;
		if ((cin >> m) && (m <= 12))
		{
			
			break; //El formato del mes es correcto, continua al siguiente bucle
			
		} else {
			
			cout << "Los valores ingresados son incorrectos, intentelo nuevamente" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
		}
		
	}
	
	while (true)
	{
		
		cout << "Por favor ingresa un dia (En numeros, entre el 1 y el 31): " << endl;
		if ((cin >> d) && (d >= 1) && (d <= 31))
		{
			
			break; //El formato del dia es correcto, continua al siguiente bucle
			
		} else {
			
			cout << "Los valores ingresados son incorrectos, intentelo nuevamente" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
		}
		
	}
	
	m -= 2;
	if (m <= 0){
		m += 12;
		y--;
	}
	m = m * 83 /32;
	m += d;
	m += y;
	m += y / 4;
	m -= y / 100;
	m += y / 400;
	cout << m % 7 << endl;
	
	
	return 0;
}
