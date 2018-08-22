#include <iostream>
#include <conio.h>

using namespace std; // Looking for a palindrom

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, n = 1, v , d = 1, z = -1;

	cout << "Введите число: " << endl << endl; 
	cin >> a ;
	cout << endl << endl ;

	while ( n != 0 )
	{
		n = a / d ;
		d *= 10;
		z += 1;
	}

	cout << "Число имеет : " << z << " разрядов" << endl << endl ;

		if ( z == 1)
			cout << "Число - цифра." << endl << endl;

		 else if ( (a % 10) == (a / 10) ) 
			 cout << "Число палиндром!" << endl << endl;

		 else if ( (a % 10) == (a / 100) )
			cout << "Число палиндром!" << endl << endl;

		  else if ( (a % 10) == (a / 1000) && ( (a / 100)% 10 ) == (( a % 100) / 10 ) )
			cout << "Число палиндром!" << endl << endl;
		
	getch();
	return 0;
}