#include <cmath>
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdlib.h>
#include <string>

using namespace std;



class Invoice {

public:

	Invoice(string A, string D, int N, int P)
	{
		setArticul(A);
		setDescription(D);
		setNumber(N);
		setPrice(P);

	}

	void setArticul(string A)
	{
		Art = A;
	}

	void setDescription(string D)
	{
		Des = D;
	}

	void setNumber(int N)
	{
		Num = N;
	}

	void setPrice(int P)
	{
		Pri = P;
	}

	void getArticul()
	{
		cout << Art << "   ";
	}

	void getDescription()
	{
		cout << Des << "   ";
	}

	void getNumber()
	{
		cout << Num << "   ";
	}

	void getPrice()
	{
		cout << Pri << "   ";
	}

	void getInvoiceAmount()
	{
		cout << endl;
		cout << "На складе осталось " << Num << " изделий, с артикулом: " << Art
			<< " стоимостью: " << Pri << " . Соответственно, суммарная стоимость" <<
			" изделий, равна: " << Num * Pri << endl;
	}

private:
	string Art, Des;
	int Num, Pri;

};

int main()
{
	setlocale(LC_ALL, "");

	string A, D;
	int N, P;

	cout << "Введите артикул изделия: " << endl << endl;
	getline(cin , A);

	cout << endl << endl;

	

	cout << "Введите описание изделия: " << endl << endl;
	getline(cin , D);

	cout << endl << endl;

	

	cout << "Введите количество изделий: " << endl << endl;
	cin >> N;

	cout << endl << endl;

	

	cout << "Введите цену изделия: " << endl << endl;
	cin >> P;

	cout << endl << endl;



	Invoice Invoice1(A, D, N, P);

	cout << endl << endl;



	cout << "Проверим методы класса: " << endl << endl;

	Invoice1.getArticul();
	
	Invoice1.getDescription();
	
	Invoice1.getNumber();
	
	Invoice1.getPrice();
	
	Invoice1.getInvoiceAmount();

	_getch();
	return 0;
}