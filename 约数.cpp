#include <iostream>
using namespace std;
#include <cstdio>
#include <cmath>
#include <algorithm>
int main()
{
	freopen("d:\\input.txt" , "r" , stdin);
	long long x, y, a, b;
	int q;
	cin >> x>>y;
	cin >> q;
	int tmp;
	
	while(q--){
		cin>> a >> b;
		tmp = -1;
		for(int i = b  ; i >= a ; i--){
			if(x%i == 0 && y%i == 0){
				tmp = i;
				break;
			}	
		}
		cout << tmp << endl ;
	}
	return 0;
}


