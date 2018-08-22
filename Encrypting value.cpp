#include <iostream>
#include <string>
#include <cmath>

using namespace std;		// Encrypting value

int main()
{
	setlocale(LC_ALL, "Russian");
	int a , n1 , n2 , n3 , n4, buf, s;
	
	cout << "Выберите необходимое действие: 1 - для шифрования, 2 - для дешифрования" << endl << endl;
	cin >> s;
	cout << endl << endl;
	
		if ( s == 1 ) 
		{
	
			cout << "Введите значение: ";
			cin >> a ;
			cout << endl;
	
			n1 = a % 10;
			cout << "n1 = " << n1 << endl;
			a = a / 10;
	
			n2 = a % 10;
			cout << "n2 = " << n2 << endl;
			a = a / 10;
	
			n3 = a % 10;
			cout << "n3 = " << n3 << endl;
			a = a / 10;
	
			n4 = a % 10;
			cout << "n4 = " << n4 << endl << endl;
	
			n1 = (n1 + 7) % 10;
			n2 = (n2 + 7) % 10;
			n3 = (n3 + 7) % 10;
			n4 = (n4 + 7) % 10;
	
			cout << "n1 = " << n1 << " n2 = " << n2 << " n3 = " << n3 << " n4 = " << n4 << endl << endl ;
	
			buf = n1 ;
			n1 = n3 ;

			n3 = buf ;
			buf = n2 ;

			n2 = n4 ;
			n4 = buf ;
	
			cout << "n1 = " << n1 << " n2 = " << n2 << " n3 = " << n3 << " n4 = " << n4 << endl << endl ;
	
			buf = n1 + n2*10 + n3*100 + n4*1000 ;
	
			cout << "Зашифрованное значение равно: " << buf << endl << endl ;
	
		}
	
		else 
		{

	    	cout << "Введите зашифрованное значение: ";
	    	cin >> a ;
	    	cout << endl;
	
			n1 = a % 10;
			cout << "n1 = " << n1 << endl;
			a = a / 10;
	
			n2 = a % 10;
			cout << "n2 = " << n2 << endl;
			a = a / 10;
	
			n3 = a % 10;
			cout << "n3 = " << n3 << endl;
			a = a / 10;
	
			n4 = a % 10;
			cout << "n4 = " << n4 << endl << endl;
	
			buf = n1 ;
			n1 = n3 ;
	
			n3 = buf ;
			buf = n2 ;
	
			n2 = n4 ;
			n4 = buf ;	
	
			cout << "n1 = " << n1 << " n2 = " << n2 << " n3 = " << n3 << " n4 = " << n4 << endl << endl ;

    		n1 = ((n1 + 10) - 7) % 10;
			n2 = ((n2 + 10) - 7) % 10;
			n3 = ((n3 + 10) - 7) % 10;
			n4 = ((n4 + 10) - 7) % 10;
	
			cout << "n1 = " << n1 << " n2 = " << n2 << " n3 = " << n3 << " n4 = " << n4 << endl << endl ;
	
			buf = n1 + n2*10 + n3*100 + n4*1000 ;
	
			cout << "Дешифрованное значение равно: " << buf << endl << endl ;
	
		}
	    
	cin.get();
	return 0;

}