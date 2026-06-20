#include<stdio.h>
void main(){
	int P,R,T,SI;
	printf("Enter principal amount:");
	scanf("%d",&P);
	printf("Enter rate of interest:");
	scanf("%d",&R);
	printf("Enter time period:");
	scanf("%d",&T);
	SI=(P*R*T)/100;
	printf("Simple Interest: %d",SI);
}
