#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>
#include <iomanip>

using namespace std;		// finding number e

double fi ( double N )
{
    double buf = 1;
    
    	while ( N != 1 )
		{
	    	buf *= N;
	    	--N;
		}
	
	return buf;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	double a , n ; double e = 1;
	
	cout << "Введите точность (число суммируемых членов ряда): " << endl << endl;
	cin >> a;
	
	n = a;
	
	while ( a != 0 )
	{
	    e = e + (1 / fi(a)) ;
	    --a;
	}
	
	cout << " Значение числа е с заданной точностью: " << n << " равно = " << fixed << setprecision(10) << e << endl << endl ; ;
	    
	cin.get();
	return 0;

}