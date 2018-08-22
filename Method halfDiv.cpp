#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std; // Method halfDiv

double function(double x)
{
	return (pow(x, 3) - 0.2 * pow(x, 2) + 0.5 * x + 1.5);
}

double MethodPD(double x0, double x1, double eps)
{
	double left = x0, right = x1, x, f;
	int iter = 0;

	cout << "x0= " << x0 << "; x1= " << x1 << " ";

	do 
	{
		x = (left + right) / 2;

		f = function(x);

		if (f > 0)
			right = x;
		else
			left = x;

		iter++;

	} 
	while (fabs(f) > eps && iter < 20000);

	cout << endl << endl << iter << " итераций" << endl << endl;

	return x;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << fixed << setprecision(10) << MethodPD(-1.0, -0.8, 0.000001);

	cin.get();
	return 0;
}