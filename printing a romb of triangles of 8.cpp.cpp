#include <iostream>
#include <string>

using namespace std; // printing a romb of triangles of "8"

int main()
{
    setlocale( LC_ALL , "Russian" ) ;

    int a = 10 ;
    
        for ( int i = 1 ; i <= 10 ; i++ )
        {
            for ( int j = 1 ; j < a ; j++ )
            {
                cout << " ";
            }
        
            for ( int z = a ; z <= 10 ; z++ )
            {
                cout << "8";
            }

            for ( int j = 10 ; j >= a ; j-- )
            {
                cout << "8" ;
            }
        
        cout << endl ;
        a--;

        }
  
    int b = 10 ;
    a = 1 ;
    
        for ( int i = 1 ; i <= 10 ; i++ )
        {
            for ( int j = 1 ; j < a ; j++ )
            {
                cout << " ";
            }
        
            for ( int z = a ; z <= 10 ; z++ )
            {
                cout << "8";
            }
        
            for ( int z = 1 ; z <= b ; z++ )
            {
                cout << "8";
            }
        
            for ( int j = 10 ; j > b ; j-- )
            {
                cout << " ";
            }
        
        cout << endl ;
        a++;
        b--;
        
        }
   
  cin.get();
  return 0;
  
}