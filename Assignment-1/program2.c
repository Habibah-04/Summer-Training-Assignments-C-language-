#include<stdio.h>
void main(){
	int a,b,max;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	max=(a>b)?printf("%d is max number",a):printf("%d is max number",b);
}
