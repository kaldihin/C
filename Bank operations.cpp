#include <cmath>
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

using namespace std; // Bank operations
int b = 0 ;

	class Account 
	{

		public:	


		Account ( int &b )
		{
			balance = b ;
		}


		void credit ( int badd )
		{
			balance += badd ;
		}


		void debit( int bsub )
		{
			if ( bsub <= balance )
				balance -= bsub ;

			else cout << " Данная сумма превосходит сумму баланса вашего лицевого счета " ;

			cout << endl << endl ;
		}


		void getBalance ()
		{
			cout << "Баланс вашего лицевого счета равен: " << balance ;
		}


		private:
		int balance ;

	};


int main() {

setlocale(LC_ALL , "Russian" ) ;
int i = 0 , f = 0 , badd = 0 , bsub = 0, eop = 1 ;

	while ( i != -1 )
	{
		cout << " Введите начальное значение баланса вашего лицевого счета: "
		<< endl << endl ;

		cin >> b ;

		Account	Account1( b );

		cout << endl << endl ;

		cout << endl << endl ;

		while ( eop == 1 )
		{

			cout << " Введите желаемую операцию: " << endl << endl
			<< " 1 - для пополнения баланса вашего лицевого счета ;" << endl << endl <<
			" 2 - для снятие средств с вашего лицевого счета ;" << endl << endl <<
			" 3 - для отображения баланса вашего лицевого счета ;" << endl << endl <<
			" -1 - для завершения работы с вашим лицевым счетом ;" << endl << endl ;

			cout << endl << endl ;

			cin >> i ;

			cout << endl << endl ;

				if ( i == 1 )
				{
					cout << " Введите сумму которую хотите внести на ваш лицевой счет: " << endl << endl ;
					cin >> badd ;
					cout << endl ;

					Account1.credit( badd ) ;

					Account1.getBalance() ;

					cout << endl << endl ;
					cout << endl << endl ;
				}

				if ( i == 2 )
				{
					cout << " Введите сумму которую хотите снять с вашего лицевого счета: " << endl << endl ;
					cin >> bsub ;
					cout << endl << endl ;
					cout << endl ;

					Account1.debit( bsub ) ;

					Account1.getBalance() ;

					cout << endl << endl ;
					cout << endl << endl ;
				}

				if ( i == 3 )
				{
					Account1.getBalance() ;

					cout << endl << endl ;
					cout << endl << endl ;
				}

				if ( i == -1 )
				{
					f = 0 ;
					break;
					eop = 0 ;
				}
		}

	}

return 0 ;

}