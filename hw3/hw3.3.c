#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,ans=0,x,y,a,b,y1,x1;
	float c=0,d;
	scanf("%d",&n);
	for(y=1;y<=n;y++){
		for(x=1;x<=y;x++){
			x1=x;
			y1=y;
			while(x1!=y1){
				if(y1>x1)
					y1=y1-x1;
				if(x1>y1)
					x1=x1-y1;		
			}
			if(x1==y1&&x1==1)
				ans++;
		}
			if(ans==0)
				ans=1;
			if(c<(float)y/ans){
				a=y;
				b=ans;
				c=(float)y/ans;
			}
		ans=0;
	}
	printf("%d %d %.2f",a,b,c);
}
