#include <stdio.h>
int fac (long long int x){
	long long int a = 1;
	while(x>1){
		a*=x;
		x--;
	}
	return a;
}

int main (){
	long long int n , a , b;
	scanf("%lld" , &n);
	long long int i;
	for (i=1 ; i<=n ; i++){
		scanf("%lld %lld" , &a , &b);
		int q = fac(a) / fac(b);
		long long int counter = 0;
		long long int s = 2;
		for(;s<q;s++){
			for (;q%s==0;counter++){
				q/=s;
			}
		}
		printf("%lld\n" , ++counter);
	}
	return 0;
}
