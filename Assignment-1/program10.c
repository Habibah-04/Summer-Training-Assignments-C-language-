#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	printf("Before swapping value of a is %d and b is %d \n",a,b);
	c=a;
	a=b;
	b=c;
	printf("After swapping value of a is %d and b is %d \n",a,b);
}
