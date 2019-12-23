#include<stdio.h>
#include<math.h>
int main(){
	int toff,ang,toff_g,ang_g,num1,num2;
	scanf("%d %d",&num1,&num2);
	scanf("%d %d",&toff_g,&toff);
	if(toff_g==1)
		num1-=toff;
	if(toff_g==2)
		num2-=toff;
	if(num2<num1){
		ang=num1-num2;
		ang_g=1;
	}
	else
	{
		ang=num2-num1;
		ang_g=2;
	}	
	printf("%d %d\n",ang_g,ang);
	while(toff!=0){
		scanf("%d %d",&toff_g,&toff);
		if(toff_g==1)
			printf("2 %d\n",toff);
		if(toff_g==2)
			printf("1 %d\n",toff);
	}
	
}
