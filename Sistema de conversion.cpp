#include <iostream>

using namespace std;

int main (){
	
	int y, m, d;
	while (true)
{
	cout << "Ingresa un anio: " << endl;
	cin >> y;
	cout << "Ingresa un mes (En numero): " << endl;
	cin >> m;
	if (cin >= 0)	
	{
		cout << "ERROR: Ingresa solo valores numericos" << endl;
		cin.clear();
		cin.ignore(10000, '\n');
		continue;
	}
	
	
	
}
	return 0;
}
