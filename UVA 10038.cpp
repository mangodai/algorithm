#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	freopen("d:\\input.txt" , "r" , stdin);
	int a[3050];
	int b[3050];
	while( cin >> n)
	{
		int i , flag=1;
		for( i=0 ; i<n ; i++ )
		{
			cin>>a[i];
		}	
		for( i=0 ; i<n-1 ; i++ )
		{
			b[i] = abs( a[i] - a[i+1] );
		}
		sort(b,b+n-1);// ÊÕ Î²¼ÇµÃ-1 

		for( i=0 ; i<n-1 ; i++)
		{
			if( b[i]!=i+1 )
			{
				flag=0;
				break;	
			}
		}
		if(flag){
			cout<<"Jolly"<<endl;
		}
		else cout<<"Not jolly"<<endl;
	}
	return 0;
}


