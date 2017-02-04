#include <bits/stdc++.h> 
using namespace std;
int nums[101]; //政党总数 
int days[3655]; //总天数 
int main()
{
	freopen("d:\\input.txt" , "r" , stdin);
	int n , t , p;
	while (~scanf("%d",&t))
	while (t--)
	{
		scanf("%d%d",&n,&p);  
		memset(days , 0 , sizeof(days));
	//	cout << sizeof(days)<< " " << sizeof(int) <<endl;
	    for (int i = 0 ; i < p ; ++ i)  
            scanf("%d",&nums[i]);  
        
        for (int i = 0 ; i < p ; ++ i)  
        for (int j = 0 ; j <= n ; j += nums[i])  //遍历天数和党派 
            days[j] = 1;  
        for (int j = 0 ; j <= n ; j += 7)  //去掉礼拜六 
            days[j] = 0;  
        for (int j = 6 ; j <= n ; j += 7)  //去掉礼拜五 
            days[j] = 0;  
			
        int sum = 0;  
        for (int i = 1 ; i <= n ; ++ i)  //遍历天数, 有就相加  
            sum += days[i]; 
		printf("%d\n",sum); 
	}
	return 0;
}


