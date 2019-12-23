#include<stdio.h>
#include<math.h>
float dickdodol(float  z);
int main(){
	float x,y;
	printf("sin mikhay jigar?:");
	scanf("%f",&x);
	y=dickdodol(x);
	if(isnan (y))
		printf("ridi bad");
	printf("%f",y);   
}

float dickdodol(float z){
	float i,sum,f,d,saverd;
	sum=z;
	f=3;
	saverd=1;

	for(i=1;i<=200;i++){
		for(d=1;d<=f;d++){
			saverd*=d;
		}
	sum+=((int)pow(-1,i))*(pow(z,2*i+1)/saverd);
	f+=2;
	saverd=1;
	}
	return sum;
}
