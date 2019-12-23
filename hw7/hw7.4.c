#include<stdio.h>
#include<stdlib.h>
void spin(int *num,int size){
	int i, saver;
	for(i=0;i<size/2;i++){
		saver= *(num+i);
		*(num+i)= *(num+size-i-1);
		*(num+size-i-1)=saver;
	}
}
int main(){
	int num1=0,num2=0,n,i,j;
	int *n1=(int *)calloc(100000,sizeof(int));
	int *n2=(int *)calloc(100000,sizeof(int));
	int *answer=(int *)calloc(100000,sizeof(int));
	for(i=0;i<100000;i++){
		scanf("%c",&n);
		if(n=='\n'){break;}
		*(n1+i)=n;
	}
	num1=i;
	for(i=0;i<100000;i++){
		scanf("%c",&n);
		if(n=='\n'){break;}
		*(n2+i)=n;
	}
	num2=i;
	spin(n1,num1);
	spin(n2,num2);
	int max;
	if(num1>num2){max=num1;}
	else{max=num2;}
	for(i=0;i<max;i++){
		if(*(n1+i)==0){*(answer+i)+=*(n2+i) -'0';}
		else if(*(n2+i)==0){*(answer+i)+=*(n1+i) -'0';}
		else{*(answer+i)+= *(n1+i) + *(n2+i) - 2*'0';}
		if(*(answer+i)>9){
			*(answer+i+1)=*(answer+i+1)+1;
			*(answer+i)%=10;
		}
		if(*(answer+max)==1){printf("1");}
	}
	for(i=max-1;i>=0;i--)
       	printf("%d",*(answer+i));
}
