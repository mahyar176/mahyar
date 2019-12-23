#include<stdio.h>
int main(){
	int n , a , b;
	char f[50] , max[50];
	scanf("%d\n",&n);
	scanf("%s %d",f,&a);
	b=a;
	int j,i;
	for(j=0;j<50;j++)
		max[j]=f[j];
	for(i=1;i<n;i++){
		scanf("%s %d",f,&a);
		if(a>b){
			b=a;
			for(j=0;j<50;j++)
				max[j]=f[j];
		}
	}
	printf("%s",max);
}
