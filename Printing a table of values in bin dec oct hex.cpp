#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std; // printing a table of values in bin dec oct hex

int bin(int b)
{
    int r = 1, buf, sum = 0, c = 9;

        while (c != 0) 
        {
            buf = b % 2;
            sum += buf * r;
            b /= 2;
            r *= 10;
            c--;
        }

    return sum;
}

int oct(int o)
{
    int r = 1, buf, sum = 0, c = 4;

        while (c != 0) 
        {
            buf = o % 8;
            sum += buf * r;
            o /= 8;
            r *= 10;
            c--;
        }

    return sum;
}

void hex(int h)
{
    int buf = bin(h) , r = 10000 , a1 = 0 , a2 = 0 , c = 2;
    char h1 = '0' , h2 = '0';

        while (c != 0) 
        {
            if ( c == 2 )
                a2 = buf % r ;

            if ( c == 1 )
                a1 = buf % r;

            buf /= r ;
            c--;
        }
 
    if ( a2 != 0 )
    switch (a2)
    {
        case 1: h2 = '1';
        break;
        case 10: h2 = '2';
        break;
        case 11: h2 = '3';
        break;
        case 100: h2 = '4';
        break;
        case 101: h2 = '5';
        break;
        case 110: h2 = '6';
        break;
        case 111: h2 = '7';
        break;
        case 1000: h2 = '8';
        break;
        case 1001: h2 = '9';
        break;
        case 1010: h2 = 'A';
        break;
        case 1011: h2 = 'B';
        break;
        case 1100: h2 = 'C';
        break;
        case 1101: h2 = 'D';
        break;
        case 1110: h2 = 'E';
        break;
        case 1111: h2 = 'F';
        break;
    }
    
    if ( a1 != 0 )
    switch (a1)
    {
        case 1: h1 = '1';
        break;
        case 10: h1 = '2';
        break;
        case 11: h1 = '3';
        break;
        case 100: h1 = '4';
        break;
        case 101: h1 = '5';
        break;
        case 110: h1 = '6';
        break;
        case 111: h1 = '7';
        break;
        case 1000: h1 = '8';
        break;
        case 1001: h1 = '9';
        break;
        case 1010: h1 = 'A';
        break;
        case 1011: h1 = 'B';
        break;
        case 1100: h1 = 'C';
        break;
        case 1101: h1 = 'D';
        break;
        case 1110: h1 = 'E';
        break;
        case 1111: h1 = 'F';
        break;
    }
    
    cout << h1 << h2;
    
}

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << '\t' << "DEC" << '\t' << '\t' << '\t' << "BIN" << '\t' << '\t' << "OCT" << '\t' << '\t' << "HEX" << endl << endl;

    for (int i = 1; i <= 256; i++) 
    {
        cout << '\t' << i << '\t' << '\t' << '\t' << bin(i) << '\t' << '\t' << oct(i) << '\t' << '\t' ;
        
        hex(i);
        
        cout << endl << endl;
    }

    cin.get();
    return 0;
}