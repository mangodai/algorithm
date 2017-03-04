/*
	Name: Lucky money
	Copyright: 
	Author: daichao
	Date: 04/03/17 13:52
*/

#include <iostream>
using namespace std;
#include <cstdio>
#include <string.h>
#include <algorithm>
double money[105];
int num[105];

struct DataType {
	double mon;
	int time; 
	int index;
};

bool compare(DataType a, DataType b) {
	if ( (a.mon) == (b.mon) && (a.time) == (b.time) ) {
		return a.index > b.index;
	}
	if ( (a.mon) == (b.mon) ) {
		return a.time > b.time;
	}
	return (a.mon) > (b.mon);
}

int main()
{
	memset(num, 0, 105);
	memset(money, 0, 105);
//	freopen("d:\\input.txt" , "r" , stdin);
	int n, i, j;
	int k;
	int ni, pi;
	cin >> n;
	for (i = 1 ; i <= n ; i++) {
		cin >> k;
		while (k--) {
			cin >> ni >> pi;
			num[ni] ++;
			money[ni] += pi;
			money[i] -= pi;
		}
	}
	
	DataType data[n+1];
	for (i = 1; i <= n ; i++) {
		data[i].mon = money[i];
		data[i].time = num[i];
		data[i].index = i;
	}
	
	// sort money order by desc
	sort(data+1, data+n+1, compare);
	//println money
	
	for (i = 1; i <= n ; i++) {
	/*	double tmp = money[i];
		for (j = 1; j <= n ; j++){
			if (tmp < money[j]) {
				tmp = money[j];
			}
		}*/
		cout << (data[i].index) << " " << (data[i].mon)/100 << " count " << (data[i].time) << endl; 
	}
	
	return 0;
}


