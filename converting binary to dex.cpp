#include <iostream>
#include <string>

using namespace std;			// converting binary to dex

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c = 0 , h = 1;

	cout << "Введите двоичное число: ";
	cin >> a;
	cout << endl << endl;

		while ( a != 0 )
		{
			b = a % 2;
			c += b * h;
			h *= 2;
			a = a / 10;
		}

	cout << c;

	cin.get();
	return 0;

}