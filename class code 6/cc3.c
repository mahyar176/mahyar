#include<stdio.h>
#include<stdlib.h>
int main(){
	long long int n,i,a,sum1=0,sum2=0;
	scanf("%lld",&n);
	long long int *pa=malloc(100000*sizeof(long long int));
	for(i=0;i<n;i++){
		scanf("%lld",&a);
		*(pa+i)=a;
	}
	for(i=0;i<n;i++){
		if(*(pa+i)>=0){
			if(sum2>0){
				if(sum2>= *(pa+i)){
					sum2-= *(pa+i);
				}
				else{
					*(pa+i)-=sum2;
					sum2=0;
					sum1+= *(pa+i);
				}
			}
			else{
				sum1+= *(pa+i);
			}
		}
		if(*(pa+i)<0)
			sum2-= *(pa+i);
	}
	printf("%lld",sum1);
	free(pa);
}

