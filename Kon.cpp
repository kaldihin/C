#include <iostream>
#include <iomanip>
#include <cstdio>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <ctime>

using namespace std;  // Chess horse moving Eilers task

const int ei = 8 ;

int main() {
	
	int ni , nj , floor[ei][ei] , sh = 0 , exit , yes , r;
	
		for ( int i = 0 ; i < ei ; i++ ) 
		{
			for ( int j = 0 ; j < ei ; j++ ) 
			{
				floor[i][j] = 0 ;
			}
		}
			
				for ( int i = 0 ; i < ei ; i++ ) 
				{
					for ( int j = 0 ; j < ei ; j++ ) 
					{
						ni = i ; 
						nj = j ; 
						exit = 0 ; 
						yes = 0 ;
						sh = 1 ;
						
						for ( int ai = 0 ; ai < ei ; ai++ ) 
						{	
							for ( int aj = 0 ; aj < ei ; aj++ ) 
							{
								floor[ai][aj] = 0 ;
							}
						}
						
						while ( exit != 1 ) 
						{
							yes = 0 ;
							srand((unsigned int)time(NULL));
							r = rand() % 8 ;
							
							 switch ( r )  
      						 {  
         						case 0:  
            					{	
									if ( (yes == 0) && (ni - 1 >= 0) && (nj + 2 <= 7) && (floor[ni-1][nj+2] == 0) ) 
									{
										ni -= 1 ; nj += 2 ;
										floor[ni][nj] = sh ;
										sh++ ;
										yes = 1 ;
									}  
								}
            					break;  
         						
								case 1:  
            					{
            						if ( (yes == 0) && (ni - 2 >= 0) && (nj + 1 <= 7) && (floor[ni-2][nj+1] == 0) ) 
									{
										ni -= 2 ; nj += 1 ;
										floor[ni][nj] = sh ;
										sh++ ;
										yes = 1 ;
									}
								}
            					break;
            					
            					case 2:
            					{
            						if ( (yes == 0) && (ni - 2 >= 0) && (nj - 1 >= 0) && (floor[ni-2][nj-1] == 0) ) 
									{
										ni -= 2 ; nj -= 1 ;
										floor[ni][nj] = sh ;
										sh++ ;
										yes = 1 ;
									}
								}
								break;
								
								case 3:
								{
										if ( (yes == 0) && (ni - 1 >= 0) && (nj - 2 >= 0) && (floor[ni-1][nj-2] == 0) ) 
										{
											ni -= 1 ; nj -= 2 ;
											floor[ni][nj] = sh ;
											sh++ ;
											yes = 1 ;
										}
								}
								break;
								
								case 4:
								{
									if ( (yes == 0) && (ni + 1 <= 7) && (nj - 2 >= 0) && (floor[ni+1][nj-2] == 0) ) 
									{
										ni += 1 ; nj -= 2 ;
										floor[ni][nj] = sh ;
										sh++ ;
										yes = 1 ;
									}
								}
								break;
								
								case 5:
								{
									if ( (yes == 0) && (ni + 2 <= 7) && (nj - 1 >= 0) && (floor[ni+2][nj-1] == 0) ) 
									{
										ni += 2 ; nj -= 1 ;
										floor[ni][nj] = sh ;
										sh++ ;
										yes = 1 ;
									}
								}
								break;
								
								case 6:
								{
									if ( (yes == 0) && (ni + 2 <= 7) && (nj + 1 <= 7) && (floor[ni+2][nj+1] == 0) ) 
									{
										ni += 2 ; nj += 1 ;
										floor[ni][nj] = sh ;
										sh++ ;
										yes = 1 ;
									}
								}
								break;
								
								case 7:
								{
									if ( (yes == 0) && (ni + 1 <= 7) && (nj + 2 <= 7) && (floor[ni+1][nj+2] == 0) ) 
									{
										ni += 1 ; nj += 2 ;
										floor[ni][nj] = sh ;
										sh++ ;
										yes = 1 ;
									}
								}
								break;
								
								default:
									exit = 1 ;
        					}
						}
						
						/*for ( int bi = 0 ; bi < ei ; bi++ ) 
						{
							for ( int bj = 0 ; bj < ei ; bj++ ) 
							{
								cout << floor[bi][bj] << " " ;
							}
						cout << endl ;
						}*/
						
						cout << sh ;
						
						cout << endl << endl ;
						
						Sleep(1000) ;
						
					}
				}
		
	cin.get();
	return 0;
}
