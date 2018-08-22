#include <iostream>
#include <cstring>


using namespace std;


class Date {

public:

	Date(int D, int M, int Y)
	{
		setDay(D);
		setMonth(M);
		setYear(Y);
		
	}

	void setDay(int D)
	{
		if ( D <= 31 && D >= 1 )
			Day = D;
		
		else 
		{
			cout << "Вы неверно указали значение дня, установлено значение по умолчанию: 1 " << endl << endl;
			Day = 1;
		}
	}

	void setMonth( int  M )
	{
		if ( M <= 12 && M >= 1 )
			Month = M;
		else 
		{
			cout << "Вы неверно указали значение месяца, установлено значение по умолчанию: 1" << endl << endl;
			Month = 1;
		}
	}

	void setYear(int Y)
	{
		if (Y >= 1 && Y <= 3000)
			Year = Y;
		else 
		{
			cout << "Вы ввели неверное значение года, уствновлено значение по умолчанию: 2016" << endl << endl;
			Year = 2016;
		}
	}

	int getDay()
	{
		return Day;
	}

	int getMonth()
	{
		return Month;
	}

	int getYear()
	{
		return Year;
	}

	void displayDate()
	{
		cout << "  " << Day << "/" << Month << "/" << Year << endl << endl;
	}
	
private:
	int Day, Month, Year;

};

int main()
{
	setlocale(LC_ALL, "");

	int D, M, Y;

	cout << "Введите день: " << endl << endl;
	cin >> D;

	cout << endl << endl;


	cout << "Введите месяц: " << endl << endl;
	cin >> M;

	cout << endl << endl;


	cout << "Введите год: " << endl << endl;
	cin >> Y;

	cout << endl << endl;
	

	Date Date1(D, M, Y);

	cout << "Проверим методы класса: " << endl << endl;

	cout << "Метод getDay() : " << Date1.getDay() << endl << endl;
	cout << "Метод getMonth() : " << Date1.getMonth() << endl << endl;
	cout << "Метод getYear() : " << Date1.getYear() << endl << endl;
	cout << "Метод displayDate() : " << endl << endl;
	Date1.displayDate();
	

	cin.get();
	return 0;
}