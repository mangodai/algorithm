#include <iostream>
#include <string>
using namespace std;
char arr[100000];
int main()
{
	int n , i ,nums ,len;
	cin >> n;
	string str1, str2;
	
	while( n-- )
	{	
	
		cin >> str1;
		str2 = "";
		len = str1.length();
		
		for( i = 0 ; i < len ; i++ )
		{
			switch ( str1[i] )
			{
				case '0' : str2 += "0000";break;
				case '1' : str2 += "0001";break;
				case '2' : str2 += "0010";break;
				case '3' : str2 += "0011";break;
				case '4' : str2 += "0100";break;
				case '5' : str2 += "0101";break;
				case '6' : str2 += "0110";break;
				case '7' : str2 += "0111";break;
				case '8' : str2 += "1000";break;
				case '9' : str2 += "1001";break;
				case 'A' : str2 += "1010";break;
				case 'B' : str2 += "1011";break;
				case 'C' : str2 += "1100";break;
				case 'D' : str2 += "1101";break;
				case 'E' : str2 += "1110";break;
				case 'F' : str2 += "1111";break;
				default :break;
			}
		}
		
		if( str2.length()%3 == 1 )
			str2 = "00" + str2;	
		else if( str2.length()%3 == 2)
			str2 = "0" + str2;
			
		len = str2.length();
		nums = 0;
		
		for( i = 0 ; i < len-2 ; i += 3 )
		{
			arr[nums] = (char)(48 + ( str2[i] - '0' )*4 + ( str2[ i+1 ] - '0' )*2 + ( str2[ i+2 ] - '0' )) ;
			nums++;
		}
		
		for( i = 0 ; i < nums ; i++ )
		{
			if( i == 0 && arr[i]=='0' ) continue;
			 cout << arr[i];
		}
		cout << endl;
	}
	return 0;
}
