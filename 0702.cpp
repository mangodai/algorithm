#include <iostream>
using namespace std;

int main(){
	int i = 1 ; 
	int j = 0;
	for( ; i <50 ; i++ ){
		int sum = 0;
		for( j=i ; j<100 ; j++ ){
			sum += j; 
			if(sum == 236){
				cout << i << "  " << j << endl;
				//return 0;
			}
		}
		
	}
	return 0;
}
