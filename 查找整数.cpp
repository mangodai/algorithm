#include <iostream>
using namespace std;
//#include <cstdio>
int main()
{
//	freopen("d:\\input.txt" , "r" , stdin);
	int n , i , flag, index;
	cin >> n;
	if(n==0) return 0;
	int a[n];
	for( i = 0 ; i < n ; i++ )
	{
		cin >> a[i];
	}
	cin >> index;
	flag=-1;
	for( i = 0 ; i < n&& flag==-1 ; i++ )
	{
		if(index == a[i])
		{
			flag=1;
			cout << i+1;
			return 0;
		}
	}
	cout << flag ;
	return 0;
}

