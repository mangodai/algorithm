#include <cstdio>
#include<iostream>  
#include <stdlib.h> 
using namespace std;




int main()
{
	freopen("d:\\input.txt","r",stdin);
	int n = 0;
	cin >> n ;
	int *p = (int*) malloc(n*sizeof(int));
	
	for( int i = 0 ; i < n ; i++ )
	{
		cin >> *(p + i);
	} 
	int flag = 1;
	for(int i = 1 ; i < n && flag == 1 ; i++ )
	{
		flag = 0;
		for(int j = 0 ; j < n-i ; j++ )
		{//cout << *(p+j) << " * " <<*(p+j+1)<<endl;
			if( *(p+j) > *(p+j+1) )
			{
				flag = 1;
			//	cout << *(p+i) << " * " <<*(p+j)<<endl;
				int tmp = *(p+j);
				*(p+j) = *(p+j+1);
				*(p+j+1) = tmp;
			//	cout << *(p+i) << " * " <<*(p+j)<<endl;
			}
		}
	}
	for( int i = 0 ; i < n ; i++ )
	{
		cout << *(p + i) <<" ";
	} 
	free(p);
}
