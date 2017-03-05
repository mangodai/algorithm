/*******************
 *    daichao      *
 *      2017       *
 *  03/03/17 23:55 *
 *******************/

#include <iostream>
#include <cstdio>
using namespace std;
#include <set>
set<short> pack[51];
int main(){
	freopen("d:\\input.txt", "r", stdin);
	int n, i;
	short m, data; //  M£¨m<=104£©,M * [0, 109] scope 
	// receive set data
	cin >> n;
	for (i = 1; i <= n ; i++) {
		cin >> m;
		while (m--) {
			cin >> data;
			pack[i].insert(data);
		}
	}
	
	//deal with request
	
	cin >> n;
	int a, b;
	while (n--) {
		cin >> a >> b;	
		set<short> value;
		int diff = 0;
		for (set<short>::iterator it = pack[a].begin() ; it != pack[a].end() ; it++) {
			value.insert((*it));
		}
		for (set<short>::iterator it = pack[b].begin() ; it != pack[b].end() ; it++) {
			value.insert((*it));
		}
		diff = pack[a].size() + pack[b].size() - value.size();
		double result = ( (double) diff / (double) value.size() ) * 100;
		printf("%.2f%%\n", result); // format result
 	}
	
	return 0;
}
