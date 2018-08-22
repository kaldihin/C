#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std ;

int main()
{
	setlocale(LC_ALL , "Russian") ;
	int a , b , c , i = 0 , n , r = 0 , s = 0 ;

		for ( int j = 1 ; j <= 10 ; j++ )
		{ 
			i = 0 ;

			srand(time(NULL)) ;

			a = rand()%10 ;

			b = rand()%10 ;

				while ( i != 1 ) 
				{
					cout << "Сколько будет " << a << "*" << b << "?" << endl ;
					cout << endl ;
					cin >> c ;

					s++ ;

					cout << endl ;

						if ( a * b == c )
						{ 
							i = 1 ;
							n = ( rand() % 4 ) + 1 ;
							
								switch ( n ) 
								{
									case 1 : cout << "Очень хорошо !" << endl ;
									break ;

									case 2 : cout << "Отлично!" << endl ; 
									break ;

									case 3 : cout << "Чудесная работа!" << endl ; 
									break ;

									case 4 : cout << "Продолжайте работать так же хорошо!" << endl ; 
									break ;
								}

							r++ ;
						}

						else 
						{
							n = ( rand() % 4 ) + 1 ;
								
								switch ( n ) 
								{
									case 1 : cout << "Нет. Попытайтесь, пожалуйста, снова. " << endl ; 
									break ;

									case 2 : cout << "Неверно. Попытайтесь еще раз. " << endl ; 
									break ;

									case 3 : cout << "Не опускайте руки! " << endl ; 
									break ;

									case 4 : cout << "Нет. Продолжайте ваши попытки." << endl ; 
									break ;
								}

							cout << endl ;
						}
				}

			cout << endl ;

		}

	if ( r < ( s - r ) )
		cout << "Вы тупите..." << endl ;

	cin.get() ;
	Sleep(1000) ;
	return 0 ;
}
