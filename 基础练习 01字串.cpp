#include <iostream>
using namespace std;

int main()
{
	int i , j , k , m , n;
	for( i = 0 ; i < 2 ; i++ )
	{
		for( j = 0 ; j < 2 ; j++ )
		{
			for( k = 0 ; k < 2 ; k++ )
			{
				for( m = 0 ; m < 2 ; m++ )
				{
					for( n=0; n<2 ; n++)
					{
						cout <<i<<j<<k<<m<<n<<endl;
					}
				}
			}
		}
	}
	return 0;
}


