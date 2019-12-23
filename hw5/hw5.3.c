#include <stdio.h>
#include <stdlib.h>
void mabna(int a,int n);
int main() {
	int a,n;
	scanf("%d %d",&a,&n);
	mabna(a,n);
}
void mabna(int a,int n){
	int b,x;
	char y;
	b=a/n;
	x=a%n;
	if(a/n!=0){mabna(b,n);}
	if(x<10){printf("%d",x);}
	else{
		y=x+55;
		printf("%c",y);
	}
	if(a/n==0){return;}
}
