#include<stdio.h>
int main(){
	int n,i,j,k=0,t=0;
	scanf("%d",&n);
	int a[n],saver_a;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                saver_a=a[j];
                a[j]=a[j+1];
                a[j+1]=saver_a;
            }
        }
    }
    for(i=0;i<n-1;){
    	if(a[i]==a[i+1]){
    		for(j=i+1;j<n;j++)
    			a[j]=a[j+1];
    		n--;
		}
		else
			i++;
	}
	int saver_size,saver_i,used_n=n-1,size,up,down;
    size=n*(n-1)/2;
    long long int h[size],min;
    for(i=0;i<n;i++){
    	for(j=i+1;j<n;j++){
    		h[k]=a[j]-a[i];
    		k++;
		}
	}
    for(t=0;t<size;t++){
    	min=10000000000;
		for(i=0;i<size;i++){
    		if(h[i]<min){
    			min=h[i];
    			saver_i=i;
			}
		}
		h[saver_i]=10000000000;
		saver_i++;
		for(used_n=n-1;used_n<saver_i;used_n--){
			saver_i-=used_n;
		}
		up=n-used_n-1;
		down=up+saver_i;
		printf("[%d, %d]\n",a[up],a[down]);
	}
		
}
