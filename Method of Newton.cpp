#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std; // Method of Newton

double MethodN(double x, double eps)
{
	double f, df; int iter = 0;

	cout << "x0= " << x << " ";

	do 
	{
		f = pow(x, 3) - 0.2 * pow(x, 2) + 0.5 * x + 1.5;

		df = 3 * x * x - 0.2 * 2 * x + 0.5;

		x = x - f / df;

		iter++;

	} 
	while (fabs(f) > eps && iter < 20000);

	cout << iter << " итераций" << endl;

	return x;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << fixed << setprecision(10) << MethodN(-1.0, 0.00001);

	cin.get();
	return 0;
}