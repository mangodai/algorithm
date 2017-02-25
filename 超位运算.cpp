#include <iostream>
#include <stdlib.h>
//include <cstdio>
#include <string.h>
using namespace std;
#define MAXSIZE 100000;

int char2int (char c)
{
	switch c:
		case '0': return 0000;
		case '1': return 0001;
		case '2': return 0010;
		case '3': return 0011;
		case '4': return 0100;
		case '5': return 0101;
		case '6': return 0110;
		case '7': return 0111;
		case '8': return 1000;
		case '9': return 1001;
		case 'a': return 1010;
		case 'b': return 1011;
		case 'c': return 1100;
		case 'd': return 1101;
		case 'e': return 1110;
		case 'f': return 1111;
}

int main()
{
//	freopen("D:\\input.txt" , "r" , stdin);
	int n ;
	cin >> n; 
	char **p = (char**) malloc( n*sizeof(char*) );
	char **out = (char**) malloc( n*sizeof(char*) );
	for( int i = 0 ; i < n ; i++ )
	{
	//	printf("%d , %d\t" , n , i );
		*(p+i) = (char*) malloc( 100000 * sizeof(char) );	
		*(out+i) = (char*) malloc( 100000 * sizeof(char) );	
		cin >> *(p+i) ;
		for(int j = strlen( *(p+i) )-1 ; j >=0; j-- )
		{
			char2int( *( *(p+i) + j) );
		}
	} 
	for( int i =0 ; i < n ; i++ )
	{
		cout << *(p+i) << endl	; 
	}
	
	free(p);
} 
