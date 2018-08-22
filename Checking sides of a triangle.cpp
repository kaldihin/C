#include <iostream>
#include <string>
#include <cmath>

using namespace std;	// Sides of a triangle

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
	
	if ( (a < (b + c)) && (a > ( b -c )) && (b < (a + c)) && (b > (a - c)) && (c < (a +b)) && (c > (a - b)) )
	cout << "Стороны: a = " << a << " , b = " << b << " , c = " << c << " , действительно являются сторонами треугольника. " << endl << endl;
    
    else cout << "Стороны: a = " << a << " , b = " << b << " , c = " << c << " , не являются сторонами треугольника. " << endl << endl;
	
	cin.get();
	return 0;

}