#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	char str[100]={},str1[100]={};
	scanf("%s", str);
	int counter = 0;
	int m=0,saverm;
	while (m<n) {
		if (str [m]==str[m+1]) {
			saverm=m;
			counter ++;
			for (saverm=m; saverm<n-2 ; saverm++) {
				str [saverm]= str[saverm+2];
			}
			n-=2;
			m--;
		}
		else
            m++;
        }
    for(m=0;m<n;m++)
    	str1[m]=str[m];
	printf("%s",str1);
	}
