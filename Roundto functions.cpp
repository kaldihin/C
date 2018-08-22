#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;


double roundToInteger( double number ) ;
double roundToTenths( double number ) ;
double roundToHundredths( double number ) ;
double roundToThousandths( double number ) ;

int main ()
{
	setlocale( LC_ALL,"Russian" ) ;

	double x ;


	cout << " Введите число Х: " << endl ;

	cin >> x ;


	cout << " Округление до целых: " << ' ' << x << "       " << roundToInteger( x ) << endl
	<< " Округление до десятых: " << ' '<< x << "       " << roundToTenths( x ) << endl
	<< " Округление до сотых: " << ' ' << x << "       " << roundToHundredths( x ) << endl
	<< " Округление до тысячных: " << ' ' << x << "       " << roundToThousandths( x ) << endl ;

cin.get();
return 0 ;

}

double roundToInteger( double number )
{
	return floor( number ) ;
}

double roundToTenths( double number )
{
	return floor( number * 10 + .5 ) / 10 ;
}

double roundToHundredths( double number )
{
	return floor( number * 100 + .5 ) / 100 ;
}

double roundToThousandths( double number )
{
	return floor( number * 1000 + .5 ) / 1000 ;
}