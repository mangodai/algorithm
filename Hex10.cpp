#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;


int main()
{
	int i = 0 , len;
	string s;
	long long sum = 0;
	char hex[8];
	cin >> hex;
//	cout <<hex;
	len = strlen(hex);
	for( i = len-1 ; i >=0  ; i-- )
	{
		switch(hex[i])
		{
			case '0' : sum += 0*pow(16,len-1-i);break;
			case '1' : sum += 1*pow(16,len-1-i);break;
			case '2' : sum += 2*pow(16,len-1-i);break;
			case '3' : sum += 3*pow(16,len-1-i);break;
			case '4' : sum += 4*pow(16,len-1-i);break;
			case '5' : sum += 5*pow(16,len-1-i);break;
			case '6' : sum += 6*pow(16,len-1-i);break;
			case '7' : sum += 7*pow(16,len-1-i);break;
			case '8' : sum += 8*pow(16,len-1-i);break;
			case '9' : sum += 9*pow(16,len-1-i);break;
			case 'A' : sum += 10*pow(16,len-1-i);break;
			case 'B' : sum += 11*pow(16,len-1-i);break;
			case 'C' : sum += 12*pow(16,len-1-i);break;
			case 'D' : sum += 13*pow(16,len-1-i);break;
			case 'E' : sum += 14*pow(16,len-1-i);break;
			case 'F' : sum += 15*pow(16,len-1-i);break;
			default:break;
		}
	}
	cout <<sum;
	return 0;
}
