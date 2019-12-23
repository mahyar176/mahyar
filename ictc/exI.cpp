#include<stdio.h>
int main()
{

    int n,q,i,l;
    int no,number,money;
    char bodje[1000000];
    char actual[1000000]={0};
    bodje[0]=0;
    scanf("%d %d",&n,&q);
    for(i=1;i<=n;i++){
        scanf("%d",&bodje[i]);

    }
    for(i=1;i<=q;i++){
        scanf("%d ",&no);
        if(no==2){
            scanf("%d",&number);
            printf("%d\n",actual[number]);
        }
        if(no==1){
            scanf("%d %d",&number,&money);
            actual[number]+=money;
            if(actual[number]>bodje[number]){
                    actual[number+1]+=actual[number]-bodje[number];
            actual[number]=bodje[number];

            }
            
			}
            for(l=1;l<=n;l++){
                if(actual[i]>bodje[i]){
                    actual[i+1]+=actual[i]-bodje[i];
                    actual[i]=bodje[i];
                }
            }

        
    }
}
