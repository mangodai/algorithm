#include <iostream>
using namespace std;
int a, b, c, d, e, f, g, h, i;
int count = 0;
int main(){
	for( a = 1 ; a <= 9 ; a++){
		for( b = 1 ; b <= 9 ; b++){
			if(b == a) continue;
			
			for( c = 1 ; c <= 9 ; c++){
				if(c == a||c ==b) continue;
				
				for( d = 1 ; d <= 9 ; d++){
					if(d==c|| d== b||d ==a) continue;
					
					for( e = 1 ; e <= 9 ; e++){
						if(e==d|| e== c|| e==b || e ==a) continue;
						
						for( f = 1 ; f <= 9 ; f++){
							if(f==e||f==d|| f== c|| f==b || f ==a) continue;
							
							for( g = 1 ; g <= 9 ; g++){
								if(g==f||g==e||g==d|| g== c|| g==b || g ==a) continue;
								
								for( h = 1 ; h <= 9 ; h++){
									if(h==g||h==f||h==e||h==d|| h== c|| h==b || h ==a) continue;
									
									for( i = 1 ; i <= 9 ; i++){
										if(i==h||i==g||i==f||i==e||i==d|| i== c|| i==b || i ==a) {
											continue;
										} else {
											int x = a*a*c*(g*100+h*10+i);
											int y = b*a*(g*100+h*10+i);
											int z = (d*100+e*10+f)*a*c;
											int sum = 10*a*c*(g*100+h*10+i);
											if ( (x + y +z) == sum){
												cout << a << " " << b << " " << c << " " << d << " "  << e  << " " << f << " " << g << " " << h << " " << i <<endl;
												count ++;	
											}	
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	cout << " count : " << count << endl;
	return 0;
}

