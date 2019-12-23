#include <stdio.h>
#include <math.h>
int qualification(int id);
int zarib(int count);
int main()
{
    int n, dc, rc = 0, m, id;
    scanf("%d %d", &n, &dc);
    int count = n * n;
    for(int i = 0; i < n; i++){
        scanf("%d %d", &id, &m);
        if(qualification(id)){
            count++;
            rc += zarib(count) * m;
        }
    }
    if(rc <= dc)
        printf("right");
    else
        printf("wrong");
}
int qualification(int id){
	int a;
	if(id%100==98){a=1;}
	else{a=0;}
	return a;
}
int zarib(int count){
	int i,a,b;
	for(a=count;1;a++){
		for(i=2;i*i<=a;i++){
			if(a%i==0){
				b=1;
				break;
			}
			else{b=0;}
		}
		if(b==0){break;}
	}
	return a;
}
