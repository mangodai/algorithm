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
		int start = 0 ; //�ӵ�һ����ʼ����
		int step = 0; //�������������Գ���k���ٲ�; 
		char tmp ;

		for( int i = 0 ; i < length ; i++ ){
			tmp = num[i];//��ʼ�Ƚ�ֵ 
			int index = 0;
			int flag = 1;
			for(int j = i+1 ; j<=i+k && j<length ; j++){//��i ����һ����ʼ���������  ���ҷ�Χ�����в���֮��
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


