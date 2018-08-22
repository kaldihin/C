#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>

using namespace std ;

char cs( int o ) 
{
	char c ;

		switch (o) 
		{
			case 1: c = '+' ; 
			break;

			case 2: c = '-' ; 
			break;

			case 3: c = '*' ; 		
			break;

			case 4: c = '/' ; 
			break;
		}

	return c ;
}

int csr( int a , int b , int o ) 
{
	int res ; 

		switch (o) 
		{
			case 1: res = a + b ; 
			break;

			case 2: res = a - b ; 
			break;

			case 3: res = a * b ; 
			break;

			case 4: res = a / b ; 
			break;
		}

	return res ;
}

int main()
{
	setlocale( LC_ALL , "Russian" ) ;

	srand(time(NULL));

	int a , b , c , i = 0 , n , r = 0 , s = 0, l , o ;

	cout << "Здравствуйте! Введите уровень сложности 1 или 2 : " ;
	cin >> l ;
	cout << endl << endl;

		while ( l != 1 && l != 2 ) 
		{
			cout << "У нас нет таких уровней сложности!!! хахаха " << endl << endl <<
			"Введите еще раз правильное значение уровня: ";
			cin >> l ;
			cout << endl << endl;
		}

	cout << "А также операцию с которой вы будете работать: " << endl << endl;

	cout << "1 - операция сложения ; " << endl << "2 - операция вычитания ; " <<
	endl << "3 - операция умножения ; " << endl << "4 - операция деления ; " <<
	endl << "5 - случайная операция . " << endl << endl ;

	cin >> o;

		if ( o == 5 )
			o = ( rand() % 4 ) + 1;

		for ( int j = 1 ; j <= 10 ; j++ )
		{ 
			i = 0 ;
			srand(time(NULL)) ;

				if ( l == 1 )
				{
					a = ( rand() % 9 ) + 1 ;
					b = ( rand() % 9 ) + 1 ;
				}

				else
				{
					a = ( rand() % 99 ) + 1;
					b = ( rand() % 99 ) + 1;
				}

				if ( o == 4 ) 
				{
					while ( a % b != 0 ) 
					{
						if ( l == 1 )
						{
							a = ( rand() % 9 ) + 1 ;
							b = ( rand() % 9 ) + 1 ;
						}

						else
						{
							a = ( rand() % 99 ) + 1;
							b = ( rand() % 99 ) + 1;
						}

					}

				}

			if ( o == 2 ) 
			{
				if ( a - b < 0 ) 
				{
					int bu ;

					bu = a;
					a = b;
					b = bu;
				}
			}

			while ( i != 1 ) 
			{
				cout << "Сколько будет " << a << cs(o) << b << "?" << endl ;
				cout << endl ;
				cin >> c ;
				s++ ;
				cout << endl ;

					if ( csr( a , b , o ) == c )
					{ 
						i = 1 ;
						n = (rand() % 4) + 1 ;
							
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
						n = (rand() % 4 ) + 1 ;
							
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
	return 0 ;
}