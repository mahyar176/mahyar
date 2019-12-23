#include<stdio.h>
#include<stdlib.h>
int f(int n);
int main(){
    int n;
    scanf("%d", &n);
    int* b = f(n);
	for(int i = 0; i < n; i++){
        printf("%d ", b[i]);
    }
}
int f(int n){
	int *pn=malloc(n*sizeof(int));
	int i;
	for(i=0;i<n;i++){
		*(pn+i)=i*i;
	}
	return pn;
	free(pn);
}
