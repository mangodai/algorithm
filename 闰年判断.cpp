#include <iostream>
using namespace std;
//#include <cstdio>
int main()
{
//	freopen("d:\\input.txt" , "r" , stdin);
	int year;
	cin >> year;
	if( ( (year%4==0) && (year%100 !=0) ) || year%400==0)
	{
		cout << "yes";
	}
	else
	{
		cout << "no";
	}
	return 0;
}


