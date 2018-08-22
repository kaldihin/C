#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std; // Calculating feed of some clarks

void r1()
{
    double okl = 100 ;
    cout << "Зарплата менеджера за неделю равна: " << okl << endl << endl ;
}

void r2()
{
    double chas , stavka = 3 , zp , pere;
    
    cout << "Введите количество отработанных часов работника: " << endl << endl ;
    cin >> chas ;
    
    if ( chas <= 40 )
    zp = chas * stavka ;

    else 
    {
        pere = stavka - 40 ;
        zp = ( 40 * 3 ) + 1.5 * ( pere * 3 ) ;
    }
    
    cout << "Зарплата работника, отработавшего - " << chas << "часов за неделю, равна: " << zp << endl << endl ;
    
}

void r3()
{
    double sum , zp , okl = 250 ;
    
    cout << "Введите сумму продаж работника на комиссионных началах: " << endl << endl ;
    cin >> sum ;
    
    if ( sum >= 0 )
        zp = okl + (sum - ( ( sum / 100 ) * 5.7 ) ) ;
        
        cout << "Зарплата работника на комиссионных началах за неделю, продавшего товара, на сумму - " << sum << " равна: " << zp << endl << endl ;
        
}

void r4()
{
    double kol = 0 , sto = 10 , zp ;
    
    cout << "Введите количество проданного сотрудником товара, за неделю: " << endl << endl ;
    cin >> kol ;
    
    if ( kol >= 0 )
    zp = kol * sto ;
    
    cout << "Зарплата сдельщика, реализовавшего за неделю - " << kol << " единиц товара, равна: " << zp << endl << endl ;
    
}

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int i = 0 ;

    cout << "Зарплаты" << endl << endl;
    
    while ( i != -1 ) 
    {
    
        cout << "Введите тип сотрудника : " << endl << endl << " - для менеджера 1 " << endl << endl << " - для почасовых работников 2 " ;
        cout << endl << endl << " - для работников на комиссионной основе 3 " << endl << endl << " - для сдельщиков 4 " << endl << endl ; 
        cout << " - для выхода из программы введите -1 " << endl << endl ;
    
        cin >> i ;
    
            switch ( i ) 
            {
                 case 1: r1(); break;
        
                 case 2: r2(); break;
        
                 case 3: r3(); break;
        
                 case 4: r4(); break;
            }

    }

    cin.get();
    return 0;
}