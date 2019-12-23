#include <stdio.h>
int main(){
	int b,i,j=0,k=0,n,m;
	char c;
	long long int x=0,y=0;
	scanf("%d %d",&n,&m);
	while(j<m){
		y=0;
		i=0;
		scanf("\n");
		while(i<n){
			scanf("%c",&c);
			if(c=='W'){
				y++;
			}
			i++;
			y<<=1;
		}
		y>>=1;
		x=x^y;
		j++;
	}
	while(k<n){
		b=(x>>(n-k-1))&1;
		if(b==1)
			printf("F");
		else
			printf("B");
		k++;		
	}
}
