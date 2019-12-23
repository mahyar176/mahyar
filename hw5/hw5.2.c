#include <stdio.h>
#include <stdlib.h>
long long int tedad(int n);
int main() {
	int n;
	long long int a;
	scanf("%d",&n);
	a=tedad(n);
	printf("%lld",a);
}
long long int tedad(int n){
	long long int a=0;
	if(n>=5){a=tedad(n-5)+tedad(n-2)+tedad(n-1);}
	if(n<5&&n>=2){a=tedad(n-2)+tedad(n-1);}
	if(n==1||n==0){a++;}
	return a;
}

