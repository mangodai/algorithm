#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen("d:\\input.txt" , "r" , stdin);
	char data[10][2];
//	while(true)
	{
		int i=0 ;
		for( i=0 ; i<10 ; i++ ){
			scanf("%c%c" , &data[i][0],&data[i][1]);
		}
		for( i=0 ; i<10 ; i++ ){
			cout << data[i] << " " ;
			//printf("%c%c " , data[10])
		}
		cout << endl;
	}
	return 0;
}


