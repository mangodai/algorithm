#include <bits/stdc++.h>
using namespace std;

int main()
{
	int k=4,i=0;
	for( ; i<k ; )
	{
		i++;
		if(i%3 != 0) continue;
		k--;
	}
	cout << k << " " << i;
	return 0;
}


