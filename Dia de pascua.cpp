#include <iostream>

using namespace std;

//Sistema que determina cuando cae el dia de pascua
int main ()
{
	
	int year, a, b, c, d, e;
	
	cout << "Ingresa un año: " << endl;
	cin >> year;
	
	//Formula de Gauss por el año
	a = year % 19;
	b = year % 4;
	c = year % 7;
	d = (a * 19 + 24) % 30;
	e = ((2 * b) + (4 * c) + (6 * d) +5) % 7;
	
	if (d + e < 10)
	{
		
		cout << "El dia de pascua cae: " << d + e + 22 << " de marzo" << endl;
		
	} else {
		
		cout << "El dia de pascua cae: " << d + e - 9 << " de abril" << endl;
	}
	
	
	
	return 0;
}
