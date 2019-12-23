#include<stdio.h>
int main(){
	int max,n,i,j,maxp;
	scanf("%d",&n);
	int g[26][26],p[26]={0},t[26]={0};
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&g[i][j]);
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			if(g[i][j]>g[j][i]){
				p[i]+=3;
				t[i]+=g[i][j]-g[j][i];
				t[j]+=g[j][i]-g[i][j];
			}
				
			if(g[i][j]<g[j][i]){
				p[j]+=3;
				t[i]+=g[i][j]-g[j][i];
				t[j]+=g[j][i]-g[i][j];
			}
				
			if(g[i][j]==g[j][i]){
				p[i]++;
				p[j]++;
			}
		}
	}
	for(i=0;i<n;i++){
		max=0;
		maxp=p[0];
		for(j=1;j<n;j++){
			if(p[j]>maxp){
				maxp=p[j];
				max=j;
			}
			else if(p[j]==maxp){
				if(t[i]>t[max]){
					maxp=p[j];
					max=j;
				}
			}
		}
		p[max]=-1;
		t[max]=-10000000;
		printf("%c",max+'a');
	}
}
