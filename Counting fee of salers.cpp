#include <iostream>
#include <iomanip>
#include <cstdio>
#include <conio.h>
#include <windows.h>

using namespace std;  // counting fee of salers

int main() 
{
	
	setlocale( LC_ALL , "Russian");
	
	int sizea = 5 , sizeb = 6  , day = 0 , k0 = 2 , k1 = 0 , k2 = 0 , k3 = 0 , 
	a[sizea][sizeb] , buf = 0 , np , npr ;
	
		for ( int i = 0 ; i < 5 ; i++ ) 
		{
			for ( int j = 0 ; j < 6 ; j++ )
				a[i][j] = 0 ;
		}
	
		while ( day != 31 ) 
		{
			
		k0 = 2 , k1 = 0 , k2 = 0 , k3 = 0 , buf = 0 ;
			
			while ( k1 != 1 ) 
			{
				
				cout << "Введите номер продавца(чтобы отказаться от ввода, введите -1): " << endl << endl ;
				cin >> np ;
				
				cout << endl << endl ;
				
					if ( (np >= 1 && np <= 4) || np == -1 )
					k1 = 1 ;
					else cout << "Номер введен неверно, попробуйте еще раз. " << endl << endl ;
				
			}
			
			if ( np != -1 ) 
			{
				
				while ( k2 != 1 ) 
				{
				
					cout << "Введите номер продукта(чтобы отказаться от ввода, введите -1): " << endl << endl ;
					cin >> npr ;
				
					cout << endl << endl ;
				
						if ( ( npr >= 1 && npr <= 5 ) || npr == -1 )
						k2 = 1 ;
						else cout << "Номер продукта введен неверно, попробуйте еще раз. " << endl << endl ;
				
				}
			
			}

			if ( np != -1 && npr != -1 ) 
			{
				
				while ( k3 != 1 ) 
				{
				
					cout << "Введите выручку за этот продукт(чтобы отказаться от ввода, введите -1): " << endl << endl ;
					cin >> buf ;
				
					cout << endl << endl ;
				
						if ( buf >= 0 || buf == -1 ) 
						{
					
							a[np-1][npr-1] += buf ;
		
							k3 = 1 ;
			
						}

						else cout << "Выручка за продукт введена неверно, попробуйте еще раз. " << endl << endl ;
				
				}
			
			
			}
		
		if ( np == -1 || npr == -1 || a[np-1][npr-1] == -1 )
			day = 31 ;	
			
			else 
			{
			
				cout << "За этот день было продано что-то еще? Введите 1 - если да, 0 - если нет. " << endl << endl;
				cin >> k0 ;
		
				cout << endl << endl ;
		
				if ( k0 == 0 )	
					day++;
			
			}
		
	}
		
		for ( int i = 0 ; i <= 5 ; i++ )
		{
			for ( int j = 0 ; j < 4 ; j++ )
			{
		
				a[4][i] += a[j][i] ;
		
			}
	
		}

		for ( int i = 0 ; i < 5 ; i++ )
		{
			for ( int j = 0 ; j < 5 ; j++ )
			{
		
				a[i][5] += a[i][j] ;
		
			}
	
		}
	
	for ( int i = 0 ; i < 5 ; i++ )
	{
		for ( int j = 0 ; j < 6 ; j++ )
		{
		
			cout << '\t' << a[i][j] << " " ;
		}
	
		cout << endl << endl ;
	
	}
	
	cin.get();
	return 0;
}