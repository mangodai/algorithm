#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	freopen("d:\\output.txt" , "w" , stdout);
	int i , j; 
	//处理四位 
	for( i = 1 ; i < 10 ; i++ )
	{	
		for( j = 0 ; j < 10 ; j++ )
		{
			cout << i << j << j << i << endl;  
		}
	}
	return 0;
}
