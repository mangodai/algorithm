#include <iostream>
using namespace std;

int main()
{
//	string s = "";
	int i , j ,k; 
	int n ; 
	cin >> n; 

	//处理五位 
	for( i = 0 ; i < 10 ; i++ )
	{	
		for( j = 0 ; j < 10 ; j++ )
		{
			for( k = 0 ; k < 10 ; k++ )
			{
				if( (i+i+j+j+k) == n )
				{
					cout << i << j << k << j << i << endl;
				}

			}
		}
	}
	for( i = 0 ; i < 10 ; i++ )
	{	
		for( j = 0 ; j < 10 ; j++ )
		{
			for( k = 0 ; k < 10 ; k++ )
			{
				if( (i+i+j+j+k+k) == n)
				cout << i << j << k << k << j << i << endl;		
			}
		}
	}
}
