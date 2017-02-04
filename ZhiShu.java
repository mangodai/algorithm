import java.util.*;
public class ZhiShu
{
	public static void main(String[] args)
	{
		int a ;
		a = new Scanner(System.in).nextInt();
		int flag = 2;
		while(a >= flag)
		{
			if( flag == a )
			{
				System.out.print(a);
				break;
			} else if( a%flag == 0 ){
				System.out.print(flag+"*");
				a = a / flag;
			} else {
				flag ++;
			} 
		}			
	}
}