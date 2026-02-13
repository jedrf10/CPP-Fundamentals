#include <iostream>

using namespace std; 

int main ()
{
	
	int year; 
	
	while (true)
	{
		
		cout << "Year checked (enter 0 for exit): " << endl;
		cin >> year;
		
		if (year >= 1582)
		{
			if (year % 4 != 0)
			{
				cout << " This year is a Common year." << endl;
			} 
			else if (year % 100 != 0)
			{
				cout << " This year is a Leap year." << endl;
			}
			else if (year % 400 != 0)
			{
				cout << " This year is a Common year." << endl;
			} else 
			{
				cout << " This year is a Leap year." << endl;
			}
			
			
			
		} 
		
		
		
		
		
		
	}
	
	
	
	
	
	return 0;
}
