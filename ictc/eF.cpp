#include<stdio.h>
int main()
{
	char hamood[1000000];
	int n,i,counter=0,d,hamood2;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&hamood[i]);
	}
	for(i=0;i<n;i++){
		for(d=n-1;d>=i;d--){
			if(hamood[d]==hamood[i]){
				counter++;
				break;
			}
			if(hamood[d]<hamood[i]){
				i=d;
				counter++;
				break;
			}
			if(d==i+1){
				counter++;
				break;
			}
			if(i==n-1)
			break;
			}
		}
	
	printf("%d",counter);
}
