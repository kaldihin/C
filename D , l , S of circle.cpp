#include <iostream>
#include <string>
#include <cmath>

using namespace std;		// D , l , S of circle
const double PI = 3.14159;

int main()
{
	setlocale(LC_ALL, "Russian");
	double r, l , S ;

    cout << "Введите радиус вашей окружности: ";
    cin >> r;
    
    l = 2 * PI * r ;
    S = PI * pow( r , 2 );
    
    cout << "Диаметр окружности равен: " << r*2 << endl << endl << "Длина окружности составляет: " << l << endl << endl
    << "Площадь окружности с радиусом: " << r << " составляет: " << S << endl << endl ;
    
	cin.get();
	return 0;

}
