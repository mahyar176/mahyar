#include <stdio.h>
#include <stdlib.h>
void jolorow(int n){
	if(n>1){
		jolorow(n-1);
		printf("move %d from A to B\n",n);
		aghabrow(n-1);
		printf("move %d from B to C\n",n);
		jolorow(n-1);
	}
	if(n==1){
		printf("move 1 from A to B\n");
		printf("move 1 from B to C\n");
	}
}
void aghabrow(int n){
	if(n>1){
		aghabrow(n-1);
		printf("move %d from C to B\n",n);
		jolorow(n-1);
		printf("move %d from B to A\n",n);
		aghabrow(n-1);
	}
	if(n==1){
		printf("move 1 from C to B\n");
		printf("move 1 from B to A\n");
	}
}
int main() {
	int n;
	scanf("%d",&n);
	jolorow(n);
}
