#include<stdio.h>
#include<stdlib.h>
char *baz(int j,char w[]);
char *jam(int j,char w[]);
int main(){
	int n,m,i,j=0;
	char w[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d\n%s",&m,&w);
		while(w[j]!='\0')
			j++;
		if(m==1)
			printf("%s\n",jam(j,w));
		if(m==2)
			printf("%s\n",baz(j,w));
	}
}
char *jam(int j,char w[]){
	int i=0,k=0;
	while(i<j){
		k=i+1;
		for(w[i])
	}
}
char *baz(int j,char w[]){
	
}
