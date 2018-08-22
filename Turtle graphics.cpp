#include <iostream>
#include <iomanip>
#include <cstdio>
#include <conio.h>
#include <windows.h>

using namespace std;  // turtle graphics ( uncommitted )

int main() {
	
	setlocale( LC_ALL , "Russian");
	
	int floor[20][20] , p = 0 , r = 0 , l = 0 , com[15] = { 2 , 5 , 4 , 3 , 5 , 6 , 4 , 5 , 11 , 4 , 4 , 5 , 15 , 6 , 9 }; 
	// 1 - поднять перо, 2 - опустить перо, 3 - поворот направо, 4 - поворот
	//налево, 5,10 - движение вперед на 10 шагов или на 5, 6 - печать массива, 9
	
	for ( int i = 0 ; i <= 19 ; i++ )
		for ( int j = 0 ; j <= 19 ; j++ )
		floor[i][j] = 0 ;
		
		int ni = 0 , nj = 0 , s = 0 , ch = 0 ;
		
			while ( com[s] != 9 && ch != 1 ) {
		
				if ( com[s] == 1 )
					p = 0 ;
					
					if ( com[s] == 2 )
						p = 1;
						
						if ( com[s] == 3 )
							r++;
						
							if ( com[s] == 4 )
								l++;
						
								if ( com[s] == 5 ) {
				
									int sh = com[s+1] , marker = 0 , pov = 0 ;
									
										if ( p == 1 )
											marker = 1;
										else marker = 0;
										
										int rc = r % 4;
										int lc = l % 4;
										
										if ( rc >= lc )
											pov = rc - lc;
										if ( lc > rc )
											pov = lc - rc;
											
											if ( pov == 0 ) {
												
												if ( ( nj + ( sh - 1 ) ) < 20 ) {
													
													for ( int b = nj ; b < nj + sh ; b++ )
														floor[ni][b] = marker;
														
														nj += sh;
												}
												
												else {
												
												cout << " Out of area limits. Check your data! " << endl;
												
												ch = 1 ;
												
												}
											
											}
											
											if ( pov == 1 ) {
												
												if ( ( ni + ( sh - 1 ) ) < 20 ) {
													
													for ( int b = ni ; b < ni + sh ; b++ )
														floor[b][nj] = marker;
														
														ni += sh ;
													}
													
													else {
												
												cout << " Out of area limits. Check your data! " << endl;
												
												ch = 1 ;
												
												}
												
											}
											
											if ( pov == 2 ) {
												
												if ( ( nj - ( sh + 1 ) ) >= 0 ) {
													
													for ( int b = nj ; b > nj - ( sh + 1 ) ; b-- )
														floor[ni][b] = marker;
														
														nj -= sh ;
													}
													
													else {
												
												cout << " Out of area limits. Check your data! " << endl;
												
												ch = 1 ;
												
												}
												
											}
					
											if ( pov == 3 ) {
												
												if ( ( ni - ( sh + 1 ) ) >= 0 ) {
													
													for ( int b = ni ; b > ni - ( sh + 1 ) ; b-- )
														floor[b][nj] = marker;
														
														ni -= sh ;
													}
													
													else {
												
												cout << " Out of area limits. Check your data! " << endl;
												
												ch = 1 ;
												
												}
												
											}
											
											s++;
											
										}
										
											if ( com[s] == 6 && com[s-1] != 5) {
												
												for ( int i = 0 ; i <= 19 ; i++ ) {
			
													for ( int j = 0 ; j <= 19 ; j++ ) {
				
														if ( floor[i][j] == 0 )
															cout << " ";
														else cout << "*";

													}
			
													cout << endl ;
	
												}
												
											}
											
											s++;
											
			}
		
		
		
	cin.get();
	return 0;
}
