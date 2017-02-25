//#include <iostream>
//
#include <stdlib.h>
#include <cstdio>
#include <string.h>
using namespace std;
int main()
{
//	freopen("D:\\input.txt" , "r" , stdin);
	int n ;
	scanf("%d" , &n);
	int *p = (int*) malloc( n*sizeof(int) );

	for( int i = 0 ; i < n ; i++ )
	{
	//	printf("%d , %d\t" , n , i );
		scanf("%x" , (p+i) );
	} 
	for( int i =0 ; i < n ; i++ )
	{
		printf("%o\n" , *(p+i) );
	}
	
	free(p);
} 
