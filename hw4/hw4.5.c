#include <stdio.h>
#include <math.h>
double f(double x,int y,int z);
int main() {
	int n,y,z;
	double x,k,sum,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lf %d %d",&x,&y,&z);
		k=f(x,y,z);
		sum+=k;
		printf("%.6lf\n",k);
	}
	printf("%.6lf",(double)sum/n);
	return 0;
}

double f(double x,int y,int z){
	double sin=0,exp=1,g,h,e,a,b,c,d,f,j;
	while(x>2*M_PI){x=x-2*M_PI;}
	while(x<0){x=x+2*M_PI;}
	for(j=0;j<100;j++){
		d=1;
		e=1;
		f=1;
		for(a=0;a<j;a++){d*=(-1);}
		for(b=0;b<(2*j+1);b++){e*=x;}
		for(c=1;c<=(2*j+1);c++){f*=c;}
		sin+=(double)d*e/f;
	}
	printf("%lf\n",sin);
	sin++;
	g=1;
	h=1;
	f=1;
	for(a=0;a<(2*y);a++){g*=sin;}
	for(b=0;b<z;b++){h*=2;}
	x=g/h;
	printf("%lf\n",x);
	for(j=100;j>0;j--){
		exp=1+x*exp/j;
	}
	return exp;
}
