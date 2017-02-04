#include <iostream>
using namespace std;

int main()
{

	int i , j , k;
	int sum;
	int tmp;
	for( i =1 ; i < 10 ; i++ )
	{
		for(  j = 0 ; j < 10 ; j++ )
		{
			for( k = 0 ; k < 10 ; k++ )
			{
				sum = (k*k*k) + (j*j*j) + (i*i*i);
				tmp = (i*100) + (j*10) +k;
				if( sum == tmp )
				{
					cout << i << j << k << endl;
				}
			}
		}
	}
	return 0;
}

