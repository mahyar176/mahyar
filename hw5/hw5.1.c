#include<stdio.h>
#include<stdlib.h>
int bmm(int a,int b);
int main(){
	int a,b,i,n,be_mim_mim;
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		be_mim_mim=bmm(a,b);
		printf("%d\n",be_mim_mim);
	}
}
int bmm(int a,int b){
	if(b==0)
		return a;
	return bmm(b,a%b);
}
