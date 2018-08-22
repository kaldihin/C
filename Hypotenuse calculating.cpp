#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;


int hypotenuse( double a , double b );

int main()
{
	setlocale( LC_ALL, "Russian" ) ;

	double a , b ;

	cout << "Введите значение первого катета: " ;

	cin >> a ;


	cout << "Введите значение второго катета: " ;

	cin >> b ;


	cout << "Гипотенуза равна: " << hypotenuse( a , b ) ;

	cin.get();
	return 0 ;
}

int hypotenuse( double a , double b )
{
	double r ;

	r = a*a + b*b ;
	r = sqrt(r) ;

	return r ;
}