#include<iostream>
#include<cstring>
#include<algorithm>
const int N=1000010;
const int inf=1000000000;
using namespace std;

int a[N];
int dp[N],pre[N];//dp[i][j]表示第j个数前组成i组的最大值;
//为了节省内存，可以用pre[j]来保存前一次求得的dp[j-1]的最大值,这样相当于数组在不断进行滚动
//最后输出temp即可;

int main(){
    int m,n;
    while(scanf("%d%d",&m,&n)!=EOF){
        for(int i=1;i<=n;i++){
            scanf("%d",&a[i]);
        }
        memset(dp,0,sizeof(dp));
        memset(pre,0,sizeof(pre));
        int temp;
        for(int i=1;i<=m;i++){
        	
            temp=-inf;
            for(int j=i;j<=n;j++){
                dp[j]=max(dp[j-1]+a[j],a[j]);
                temp=max(temp,dp[j]);
            }
            
        }
        printf("%d\n",temp);
    }
    return 0;
}