#include <iostream>
using namespace std;

int gcd(int a, int b){
	if(b == 0)	return a;
	if(a < b) return gcd(b, a);
	return gcd(b, a%b);
}


int lcm(int a, int b){
	return a*b/gcd(a,b);
}


int main()
{
	int a = 125;
	int b = 71;
	cout << lcm(a,b); 
	return 0;
}



