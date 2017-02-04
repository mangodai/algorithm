#include <iostream>
using namespace std;
#include <cstdio>
int main()
{
	freopen("d:\\input.txt" , "r" , stdin);
	int n , m;
	cin >> n >> m;
	int i , j , k;
	//初始化数据 
	char a[m];
	for( i = 0 ; i < m ; i++ )
	{
		a[i] = (char)( 65+i);
	}

	for( i = 0 ; i < n ; i++)
	{
		for( j = 0 ; j < m ; j++)
		{
			k = (i-j);
			if( k < 0)
			{
				k=( j - i);
			}
			cout << (char)( 65+k );	
		}
		cout << endl;
	}
	return 0;
}


