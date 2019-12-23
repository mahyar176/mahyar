#include <stdio.h>
int main() {
	int n,l,d,r,g,d2=0,i=0,t=0,T,t1=0;
	scanf("%d %d",&n,&l);
	while(i<n){
		scanf("%d %d %d",&d,&r,&g);
		d2=t1+d;
		T=r+g;
		d=d2%T;
		if(r>d){
			t=t+r-d;
			t1=t1+r-d;
		}	
		i++;
	}
	t=t+l;
	printf("%d",t);
	return 0;
}
