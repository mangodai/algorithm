#include <bits/stdc++.h>
using namespace std;

int a[100][100];
int main()
{
//	freopen("d:\\input.txt" , "r" , stdin);
	int n , m , i , j ;
	long long sum = 0;
	scanf("%d%d" , &n , &m);
	memset(a , 0 , sizeof(a));
	for( i=0 ; i<n ; i++)
		for( j=0 ; j<m ; j++)
			scanf("%d" , &a[i][j]);
			
	for( i=0 ; i<n ; i++)
		for( j=0 ; j<m ; j++)
			sum += a[i][j];
	printf("%d" , sum);
	return 0;
}
