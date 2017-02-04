#include <iostream>
using namespace std;
//#include <cstdio>
int main()
{
//	freopen("d:\\input.txt" , "r" , stdin);
	int n , i ,	max , min , sum;
	cin >> n;
	int a[n];
	for( i = 0 ; i < n ; i++ )
	{
		cin >> a[i];
	}
	sum = max = min = a[0];
	for( i = 1 ; i < n ; i++ )
	{
		sum += a[i];
		if( min > a[i] )
			min = a[i];
		if( max < a[i] )
			max = a[i];
	} 
	cout << max << endl ;
	cout << min << endl ;
	cout << sum << endl ;	
	return 0;
}

