#include <bits/stdc++.h>
using namespace std;

const int N = 55;
int data[N*2][N];
int card[N];
int main()
{
	freopen("d:\\input.txt" , "r" , stdin);
	int t;
	cin >>t;
	while(t--)
	{
		int n;
		cin >> n;
		for( int i = 1 ; i<=n ; i++ )
			for( int j=1 ; j<53 ; j++)
				cin >> data[i][j];
		for( int i = 1 ; i<53 ; i++ )
		{
			card[i]=i;
		}
		
	}
	
	return 0;
}


