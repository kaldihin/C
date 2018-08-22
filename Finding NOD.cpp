#include <iostream>
#include <cstring>

using namespace std ;

int nod ( int , int ) ;

int main()
{
	int x , y ;

	cout << "Введите два числа: " ;
	cin >> x ;
	cout << endl << endl ;
	cin >> y ;
	cout << endl << endl ;

	cout << "Наибольший общий делитель равен: " << nod(x,y) << endl << endl ;

	cin.get() ;
	return 0 ;
}

int nod ( int x , int y )
{
	if ( y == 0 )
		return x ;
	else return nod( y , x % y );
}