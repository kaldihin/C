#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std; // Method of simple iterations

double MethodPI(double x, double eps)
{
	double rez; int iter = 0;

	cout << "x0= " << x << " ";

	do 
	{
		rez = x;

		x = -3 * pow(x, 3) - 0.6 * pow(x, 2) - 0.5 * x - 4.5;

		iter++;

	} 
	while (fabs(rez - x) > eps && iter < 20000);

	cout << iter << " итераций" << endl;

	return x;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << fixed << setprecision(10) << MethodPI(-1.0, 0.000001);

	cin.get();
	return 0;
}