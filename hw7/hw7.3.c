#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,m,max=0,i,j,k=0,b=0;
	double a=0;
	scanf("%d",&n);
	int *size_satr=(int*)malloc(n*sizeof(int));
	int **kol=(int**)malloc(n*sizeof(long long int));
	for(i=0;i<n;i++){
		scanf("%d",&m);
		if(m>max){max=m;}
		*(size_satr+i)=m;
		*(kol+i)=(int*)malloc(m*sizeof(int));
	}
	double *avg_sotoon=(double*)malloc(max*sizeof(double));
	int *size_sotoon=(int*)malloc(max*sizeof(int));
	int *tartib=(int*)malloc(max*sizeof(int));
	for(i=0;i<n;i++){
		for(j=0;j<*(size_satr+i);j++){
			scanf("%d",(*(kol+i)+j));
		}
	}
	for(i=0;i<max;i++){
		for(j=0;j<n;j++){
			if(k < *(size_satr+j) ){
				a+=*(*(kol+j)+k);
				b++;
			}
		}
		*(size_sotoon+i)=b;
		*(avg_sotoon+i)=(double)a/b;
		k++;
		a=0;b=0;
	}
	double c=1000000000;
	int s_j;
	for(i=0;i<max;i++){
		for(j=0;j<max;j++){
			if(*(avg_sotoon+j)<=c){
				c=*(avg_sotoon+j);
				s_j=j;
			}
			if(*(avg_sotoon+j)==c){
                if(*(size_sotoon+j)==*(size_sotoon+s_j)){
                    if(j<s_j){
						c=*(avg_sotoon+j);
                        s_j=j;
                    }
                }
                if(*(size_sotoon+j)<*(size_sotoon+s_j)){
                    c=*(avg_sotoon+j);
                    s_j=j;
                }
            }
		}
		*(avg_sotoon+s_j)=2000000000;
		c=1000000000;
		printf("%d ",s_j+1);
		s_j=0;
	}
}
