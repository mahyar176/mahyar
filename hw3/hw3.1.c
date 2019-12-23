#include<stdio.h>
int main(){
	int a,b,c,d;
	scanf("%d",&a);
	a=a%10;
	while(a==1||a==3||a==5||a==7||a==9)
	{
		printf("N");
		a++;
	}
	while(a==0)
	{
		printf("N");
		a--;
	}	
	printf("OK");
	return 0;
}
