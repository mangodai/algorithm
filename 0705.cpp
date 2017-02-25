#include <stdio.h>
#define N 6
#define M 5
#define BUF 1024
int sum = 0;
	//	  0     5 ren     zuhe  6
void f(int a[], int k, int m, char b[])
{
	int i,j;
	    //  6 guo
	if(k==N){ 
	//	shuchu
		b[M] = 0;
		if(m==0) {
			sum++;
		printf("%s\n",b);	
		}return;
	}
	
	for(i=0; i<=a[k]; i++){
		for(j=0; j<i; j++) b[M-m+j] = k+'A';
		f(a,k+1,m-j,b);
		//______________________;  //Ìî¿ÕÎ»ÖÃ
	}
}
int main()
{	
	int  a[N] = {4,2,2,1,1,3};
	char b[BUF];
	f(a,0,M,b);
	printf("%d\n",sum);
	return 0;
}
