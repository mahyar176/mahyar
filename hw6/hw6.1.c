#include<stdio.h>
double f(double r[1000],double h[1000],int i);
int main(){
	int saver_i,n,i=0,j=0;
	double v,vout,hmax,v0;
	scanf("%d %lf",&n,&v);
	double r[1000],h[1000];
	for(i=0;i<n;i++){
		scanf("%lf %lf",&r[i],&h[i]);
	}
	double saver_h,saver_r;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(r[j]>r[j+1]){
                saver_r=r[j];
                r[j]=r[j+1];
                r[j+1]=saver_r;
                saver_h=h[j];
                h[j]=h[j+1];
                h[j+1]=saver_h;
            }
        }
    }
	for(i=0;i<n;i++){
		v0=f(r,h,i);
		if(v0>=v){
			vout=0;
			break;
		}
		else if((i==n-1)&&(v0<v)){
			vout=v-v0;
			break;
		}	
	}
	printf("%.2lf %.2lf",r[i],vout);
}
double f(double r[1000],double h[1000],int i){
	double v0=0;
	if(i==0){
		v0=r[0]*r[0]*3.14*h[0];
		return v0;
	}
	else{
		if(h[i]>=h[i-1]){
			v0+=((r[i]*r[i])-(r[i-1]*r[i-1]))*3.14*h[i];
			h[i-1]=h[i];
		}
		else{
			v0+=((r[i]*r[i])-(r[i-1]*r[i-1]))*3.14*h[i];
		}
		return v0+f(r,h,i-1);
	}
}
