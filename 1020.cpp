#include <iostream>
using namespace std;
int main(){
	
	int n;//nums
	cin >> n;
	getchar();
	cout <<n<<endl;

	for(;n>0;n--){
		char c[10000];
		int count=1;//length
		cin >>c;
		cout <<c<<endl;
		char temp[2]={0};
		int c_len=strlen(c);
		cout<< c_len<<endl;
/*
		for(int flag=0, i=0;i<c_len;i++){
			temp[flag]=c[i];
			if(temp[0]==temp[1]){
				count++;
			}
			else{
				if(count!=1){
					cout<<count;
				}
				cout <<temp[1];
				temp[1]=temp[0];
			}	
		}*/	
		cout <<endl;	
	}
	return 0;
} 