#include <iostream>
#include <string>
#include <cmath>

using namespace std;		// Sides of a 90 grad triangle

int main()
{
	setlocale(LC_ALL, "Russian");
	double a , b , c ;
	
	cout << "Введите три стороны треугольника: ";
	cin >> a ;
	cout << endl;
	cin >> b ;
	cout << endl;
	cin >> c ;
	cout << endl;
	
	if ( ( (a*a) == (b*b) + (c*c) ) || ( (b*b) == (a*a) + (c*c) ) || ( (c*c) == (a*a) + (b*b) ) )
	cout << "Стороны: a = " << a << " , b = " << b << " , c = " << c << " , действительно являются сторонами прямоугольного треугольника. " << endl << endl;
    
    else cout << "Стороны: a = " << a << " , b = " << b << " , c = " << c << " , не являются сторонами прямоугольного треугольника. " << endl << endl;
	
	cin.get();
	return 0;

}