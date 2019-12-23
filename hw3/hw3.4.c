#include <stdio.h>
#include <stdlib.h>
int main() {
	int i=1,j=1,k,m=0,x;
	scanf("%d",&k);
	while(m!=k){
		x=(((i)*(i+1))/2);
		i++;
		while(j<=x/j){
			if(x%j==0&&x/j!=j){
				m=m+2;
			}
			if(x%j==0&&x/j==j){
				m++;
			}
			j++;	
		}
		if(m!=k){
			m=0;
		}
		j=1;
	}
	printf("%d",x);
	return 0;
}
