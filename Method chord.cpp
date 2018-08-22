#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std; // Method chord

double MethodH(double x0, double x1, double eps) 
{
	double rez = x1, f0, f;
	int iter = 0;

	cout << "x0= " << x0 << "; x1= " << x1 << " ";

	do 
	{
		f = pow(rez, 3) - 0.2 * pow(rez, 2) + 0.5 * rez + 1.5;

		f0 = pow(x0, 3) - 0.2 * pow(x0, 2) + 0.5 * x0 + 1.5;

		rez = rez - f / (f - f0) * (rez - x0);

		iter++;

	} 
	while (fabs(f) > eps && iter < 20000);

	cout << endl << endl << iter << " итераций" << endl << endl;

	return rez;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << fixed << setprecision(10) << MethodH(-1.0, -0.8, 0.000001);

	cin.get();
	return 0;
}