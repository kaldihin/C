#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <iomanip>
#include <windows.h>

using namespace std; // System of saling airtickets

void PrintPlaces1 ( int a[] ) 
{
	
	for ( int i = 0 ; i < 5 ; i++ )
		cout << a[i] << " ";
			
}

void PrintPlaces2 ( int a[] ) 
{
	
		for ( int i = 5 ; i < 10 ; i++ )
			cout << a[i] << " ";
			
}

void FreePlaces1 ( int a[]) 
{
	
	cout << " На Ваш выбор доступны места : " ;

		for ( int i = 0 ; i < 5 ; i++ ) 
		{

			if ( a[i] != 1 )
				cout << i + 1 << " ";

		}
			
}

void FreePlaces2 ( int a[]) 
{
	
	cout << " На Ваш выбор доступны места : " ;
	
				for ( int i = 5 ; i < 10 ; i++ ) 
				{
					if ( a[i] != 1 )
						cout << i + 1 << " ";
				}

}

void EnterPlace1 (int a[] , int &con1 , int &pl1 , int &sum1) 
{
	
	cout << endl << endl << "Введите желаемое место (или -1 для выхода): " ;

		con1 = 1;
			
			while ( con1 != 0 ) 
			{

				cin >> pl1 ;

				cout << endl ;
						
					if (pl1 == -1)
						con1 = 0;

						else if ( a[pl1 - 1] != 1 && (pl1 >= 1 && pl1 <= 5)) 
						{
							a[pl1 - 1] = 1 ;

							cout << endl << "Ваше место №" << pl1 << " в салоне для курящих. Приятного полёта!!! " << endl << endl;
							
							Sleep(3000);
							
							sum1 += 1;

							con1 = 0;
							
						}
									
						else if ((pl1 >= 1 && pl1 <= 5 ) && a[pl1 - 1] == 1)
						
							cout << " Это место уже занято. Выберите другое. ";

						else cout << "Такого места нет, попробуйте ввести еще раз. ";

			}
	
}

void EnterPlace2 (int a[] , int &con2 , int &pl2 , int &sum2) 
{
	
		cout << endl << endl << "Введите желаемое место (или -1 для выхода): " ;
			
			con2 = 1;
				
				while ( con2 != 0 ) 
				{

					cin >> pl2 ;
					
					cout << endl ;
					
					if ( pl2 == -1 )
					con2 = 0 ;

					else if ( a[pl2 - 1] != 1 && (pl2 >= 6 && pl2 <= 10)) 
					{
						a[pl2 - 1] = 1 ;
						
						cout << endl << "Ваше место №" << pl2 << " в салоне для некурящих. Приятного полёта!!! " << endl << endl;
						
						Sleep(3000);

						con2 = 0 ;
						
						sum2 += 1;

					} 

					else if ((pl2 >= 6 && pl2 <= 10 ) && a[pl2 - 1] == 1)
					
						cout << " Это место уже занято. Выберите другое. ";
					
						else cout << "Такого места нет, попробуйте ввести еще раз. ";

				}
	
}



int main() 
{
	
	setlocale(LC_ALL , "Russian");

	int a[11] = {0} , type = 0 , pl1 = 0 , sum1 = 0 , sum2 = 0 , con1 = 1 , con2 = 1 , pl2 = 0 ;

		while ( type != -1 )
		{
	
			cout << endl << endl << " Добро пожаловать в авиакомпанию Калдихина Е.А. " << endl << endl << endl << endl;	
	
			if (sum1 != 5 || sum2 != 5)
				
				cout << " В данный момент свободны места, обозначенные '0' и занятые - '1' : " << endl << endl << endl;
	
			if (sum1 != 5) 
			{

				cout << " В салоне для курящих : " << endl << endl << " ";

				PrintPlaces1(a);
		
			}

			if (sum2 != 5) 
			{
			
				cout << endl << endl << " В салоне для некурящих : " << endl << endl << " ";

				PrintPlaces2(a);
		
			}

			cout << endl << endl ;

			if (sum1 != 5 && sum2 != 5) 
			{
	
				cout << endl << endl << " Выберите тип салона 1 - для курящих, 2 - для некурящих или -1 для выхода " << endl << endl << endl;

				cin >> type ;
		
				cout << endl ;
		
			}	

			else if (sum1 != 5 && sum2 == 5) 
			{
		
				type = 2;
		
			}
	
			else if (sum2 != 5 && sum1 == 5) 
			{
		
				type = 1;
		
			}
	
			else if (sum1 == 5 && sum2 == 5) 
			{
		
				cout << " Все места заняты. Следующий полёт состоится через три часа. ";
						
				type = -1 ;
		
			}

			if ( type == 1 ) 
			{

				if ( sum1 == 5 ) 
				{

					cout << " Все места в салоне для курящих заняты. " << endl << endl;

					cout << endl << " Если желаете лететь в салоне для некурящих, введите 2 , для выхода введите -1 " << endl << endl;

					cin >> type ;

					cout << endl ;
				
						if ( type == 2 ) 
						{
					
							if ( sum2 == 5 || ( sum1 == 5 && sum2 == 5 ))
							{
				
								cout << " Все места заняты. Следующий полёт состоится через три часа. ";
						
								type = -1 ;
						
							}
				
							else 
							{

								FreePlaces2 (a);
						
								EnterPlace2(a , con2 , pl2 , sum2);

							}
				
						}
				
				}
				
				else 
				{
				
					FreePlaces1 (a);
					
					EnterPlace1 (a , con1 , pl1 , sum1);
				
				}
			
			}

			else if ( type == 2 ) 
			{

				if ( sum2 == 5 ) 
				{

					cout << " Все места в салоне для некурящих заняты. " << endl << endl;

					cout << endl << " Если желаете лететь в салоне для курящих, введите 1, для выхода введите -1 " << endl << endl;

					cin >> type ;
				
					cout << endl ;

						if ( type == 1 ) 
						{

							if ( sum1 == 5 || ( sum1 == 5 && sum2 == 5)) 
							{
								
								cout << " Все места заняты. Следующий полёт состоится через три часа. ";
						
								type = -1;
							} 
					
							else 
							{

								FreePlaces1 (a);
					
								EnterPlace1 (a , con1 , pl1 , sum1);

							}


						}
				
				}

				else 
				{

					FreePlaces2(a);
				
					EnterPlace2(a , con2 , pl2 , sum2);

				}

			}
		
			system("cls");

		}
	
	cout << " До свиданья!!! ";

	cin.get();
	return 0 ;
}