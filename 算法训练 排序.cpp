#include <iostream>
#include <stdlib.h>
using namespace std;
#include <cstdio>

int main()
{
	freopen("d:\\input.txt" , "r" , stdin);
	long long a[3] , tmp;
	cin >> a[0] >> a[1] >> a[2];
	
	for(int i=0 ; i<3-1;i++){ 
		for(int j=i+1 ; j<3 ;j++){
			if(a[i] < a[j] ){
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}	
	}
	cout << a[0] << " " << a[1] << " "<<a[2]<<endl;; 
	return 0;
}


