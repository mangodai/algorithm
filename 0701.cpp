#include <iostream>
using namespace std;

int main(){
	int i = 1;
	int sum = 0;
	for( ; i <= 100 ; ){
		sum = sum + (i++);
		cout << i-1 <<" " << sum << endl;
	}
	return 0;
}
