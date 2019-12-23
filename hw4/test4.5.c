#include<stdio.h>
#include<math.h>
double f(double x,int y,int z);
int main(){
	int n,z,y,i;
	double sum=0,j,k,x;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		k=0;
		j=0;
		scanf("%lf %d %d",&x,&y,&z);
		printf("%lf\n",sin(x));
		x=1+sin(x);
		k=pow(x,2*y);
		j=pow(2,z);
		k=k/j;
		j=exp(k);
		sum+=j;
		printf("%lf\n",j);
	}
	sum=sum/n;
	printf("%lf",sum);
}
