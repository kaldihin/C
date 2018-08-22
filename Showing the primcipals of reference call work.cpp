#include <iostream>
#include <string>

using namespace std ; // Showing the primcipals of reference call work

int tripleCallByValue( int count );

int tripleCallByReference( int& count );

int main()
{
    setlocale( LC_ALL , "Russian" ) ;
    
    int x = 12 ;
    
    cout << "Before tripleCallByValue , x = " << x << endl << endl ;
    cout << "Result of tripleCallByValue: " << tripleCallByValue(x) << endl << endl ;
    cout << "After tripleCallByValue: x = " << x << endl << endl ;
    
    cout << "Before tripleCallByReference , x = " << x << endl << endl ;
    cout << "Result of tripleCallByReference: " << tripleCallByReference(x) << endl << endl ;
    cout << "After tripleCallByReference: x = " << x << endl << endl ;
    
    cin.get() ;
    return 0 ;
}

int tripleCallByValue( int count )
{
    count *= 3 ;
    return count ;
}

int tripleCallByReference( int& count )
{
    count *= 3 ;
    return count ;
}