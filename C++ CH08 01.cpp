#include <iostream>
using namespace std;
int main()
{
int fun(int a , int b);
	int a , b , c , d;
	cin >> a >> b >> c >> d;
	int divisor[2];
	divisor[0] = fun(a,b);
	divisor[1] = fun(c,d);
	a /= divisor[0];
	b /= divisor[0];
	c /= divisor[1];
	d /= divisor[1];
	cout << "zrf is:"<<a<<"/"<<b<<"; "<<"ssh is:"<<c<<"/"<<d<<endl;
	double z = a/b;
	double s = c/d;
	if(z==s)
	{
		cout << "(zrf==ssh) is:1; (zrf<ssh) is:0";
	}
	else
	{
		if( z > s)
		{
			cout << "(zrf==ssh) is:0; (zrf<ssh) is:0";
		}
		else
		{
			cout << "(zrf==ssh) is:0; (zrf<ssh) is:1";
		}
	}
	return 0;
}
int fun(int a , int b)
{
	int c;
	while(b!=0)
   	{
		c=a%b; 
		a=b;  
		b=c;
   	}
  // 	cout << a << endl;
	return a;
}


