/*******************
	Name: l1-003
	Copyright: 
	Author: daichao
	Date: 03/03/17 23:55
	Description: 
 *******************/

#include <iostream>
using namespace std;
char str[1001];
int numbers[11];

void println(){
	for (int i = 0 ; i < 11 ;i++) {
		if (numbers[i] != 0) {
			cout << i << ":" << numbers[i] << endl;	
		}
	}
}

int main(){
	int i = 0;
	int judge = 0;
	cin >> str;
	for (i = 0; str[i] != '\0' ; i++) {
		judge = str[i] - '0';
		numbers[judge] ++;
	}
	println();
	return 0;
}


