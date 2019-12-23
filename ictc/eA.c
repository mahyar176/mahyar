#include <stdio.h>

int main (void)
{int n , a , b, c , d;
	int counter = 0;
	scanf("%d %d %d %d %d",&n,&a,&b,&c,&d);
	int i;
	for ( i =1 ; i<=n ; i++){
		if (i%a== 0 ||i%b==0 || i%c==0 || i%d==0){
			counter++;
		}
					
	}
	printf ("%d" , counter);
	return 0;
}
