#include <iostream>
#include <stdlib.h>
using namespace std;
int data[3][4]={0};


int main(){
	int a[10];
	
	for (int i=0; i<10; i++){
		
		for (int j=0; j<10; j++){
			if (abs(j-i)=1 || i==j) continue;
			
			for (int k=0; k<10; k++){
				if (abs(k-j)=1 || k==j || k==i) continue;
				
				for (int a=0; a<10; a+=){
					if (abs(a-i)=1 || a==i || a==j || a==k) continue;
					
					for (int b=0; b<10; k++){
						if ( abs(i-j)=1 || i==j) continue;
						
					}
			
				}
			}
		}
	}
	cout<<endl;
	
	return 0;
}
