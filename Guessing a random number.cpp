#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std ; 

int main()
{
	int n , a = 0 , c = 0 ;
	char dn = 'y' ;

	cout << "           Угадай число" << endl << endl ;

		while ( dn != 'n' ) 
		{

			srand(time(NULL)) ;

			n = (rand() % 1000) + 1 ;

			cout << "Мое число между 1 и 1000." << endl << endl
			
			<< "Вы можете его отгадать?" << endl << endl
			
			<< "Пожалуйста, напечатайте вашу первую догадку." << endl << endl ;

				while ( a != n ) 
				{
					cin >> a ;
					c++ ;
					cout << endl ;

						if ( a < n )
							cout << "Слишком мало. Попытайтесь снова." << endl << endl ;
						else if ( a > n )
							cout << "Слишком много. Попытайтесь снова." << endl << endl ;
						else if ( a == n )
							cout << "Отлично! Вы отгадали число!" << endl << endl ;
				}

				if ( c <= 10 )
					cout << "Или вы знаете секрет, или вы счастливчик! " << endl << endl ;
				else if ( c == 10 )
					cout << "Ага! Вы знаете секрет! " << endl << endl ;
				else if ( c >= 10 )
					cout << "Вы должны развивать свои пособности!" << endl << endl ;

			cout << "Хотели бы сыграть еще раз? ( y или n ) " << endl << endl ;

			cin >> dn ;

		}

		cin.get();
		return 0;

}