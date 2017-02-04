#include <iostream>  
using namespace std;  
/* run this program using the console pauser or add your own getch, system("pause") or input loop */  
int num[14][14] = {0};  
  
int main(int argc, char *argv[]) {  
    for(int i=9; i<=13; i++){  
        num[1][i] = 1;  
    }  
    for(int i = 2; i <= 13;i++){  
        for(int k = 0; k<=13 ;k++){  
            for(int preK = k; preK <= k+4 && preK <=13; preK++){  
                num[i][k] += num[i-1][preK];                  
            }  
        }  
    }  
    cout<<num[13][0];  
    return 0;  
}  
