#include <iostream>
#include <cstdio>
using namespace std;
#include <string.h>
char num[19];
 

int main()
{
	int k ;
	while(cin>>num>>k){
		if(k==0){
			cout << num << endl;
			continue;
		}
		//sprintf(num, "%d", n);
		int length = strlen(num);
		int start = 0 ; //从第一个开始遍历
		int step = 0; //交换次数不可以超过k多少步; 
		char tmp ;

		for( int i = 0 ; i < length ; i++ ){
			tmp = num[i];//初始比较值 
			int index = 0;
			int flag = 1;
			for(int j = i+1 ; j<=i+k && j<length ; j++){//从i 后面一个开始查找最大数  查找范围是现有步长之内
				if(num[j]>tmp){
					tmp = num[j];
					index = j;
					flag = 0 ;
				}
			}
			if(!flag){
				for( int q=index; q>i ; q--){
					tmp = num[q];
					num[q] = num[q-1];
					num[q-1] = tmp;
				}	
				k = k - index + i;	
			}
			if(k==0){
				break;
			}
		} 
		cout << num<< endl;
	}
	return 0;
}


