#include <iostream>
#include <queue>
using namespace std;
#include <cstdio>

int main()
{
	freopen("d:\\input.txt" , "r" , stdin);
	queue<long long> q;
	int n ;
	int com;
	long long data;
	cin>>n;
	while(n--){
		cin>>com;
		if(com == 1){
			cin>>data;
			q.push(data);
		} else {
			if(com == 2){
				if(q.size() == 0){
					cout << "no" << endl;
					break;
				}
				cout << q.front() << endl;
				q.pop();
			} else {
				if(com == 3){					
					cout << q.size() <<endl;
				}
			}
		}
		
	}
	return 0;
}


