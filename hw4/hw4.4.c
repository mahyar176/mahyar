#include <stdio.h>
#include <stdlib.h>
#define pf 6000
#define ps 18000
#define pd 30000
int garson(int money,char food,char p1,char p2,char p3,int tn,int ts,int tg);
int monshi(char food,char p1,char p2,char p3,int tn,int ts,int tg);
int chef1(int tn);
int chef2(int ts);
int chef3(int tg);
int main() {
	int a,money,tn,ts,tg,n,i;
	char food,p1,p2,p3;
	scanf("%d %d %d\n",&tn,&ts,&tg);
	scanf("%c %c %c\n",&p1,&p2,&p3);
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		scanf("%d %c",&money,&food);
		a=garson(money,food,p1,p2,p3,tn,ts,tg);
		if(a==1)
			printf("No enough money\n");
		if(a==2)
			printf("Not a chef\n");
		if(a==3)
			printf("Material is not enough\n");
		if(a==4){
			printf("Food is ready\n");
			tn--;
		}
		if(a==5){
			printf("Food is ready\n");
			ts--;
		}
		if(a==6){
			printf("Food is ready\n");
			tg--;
		}	
	}
}
int garson(int money,char food,char p1,char p2,char p3,int tn,int ts,int tg){
	int a=1;
	if((food=='f'&&money<pf)||(food=='s'&&money<ps)||(food=='d'&&money<pd))
		a=1;
	else
		a+=monshi(food,p1,p2,p3,tn,ts,tg);
	return a;
}
int monshi(char food,char p1,char p2,char p3,int tn,int ts,int tg){
	int a=1;
	if((food=='f'&&p1=='a')||(food=='s'&&p2=='a')||(food=='d'&&p3=='a'))
		a=1;
	else if(food=='f')
		a+=chef1(tn);
	else if(food=='s')
		a+=chef2(ts);
	else if(food=='d')
		a+=chef3(tg);
	return a;	
}
int chef1(int tn){
	int a=1;
	if(tn==0)
		a=1;
	else
		a=2;
	return a;
}
int chef2(int ts){
	int a=1;
	if(ts==0)
		a=1;
	else
		a=3;
	return a;
}
int chef3(int tg){
	int a=1;
	if(tg==0)
		a=1;
	else
		a=4;
	return a;
}
