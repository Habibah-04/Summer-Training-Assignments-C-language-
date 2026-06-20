#include<stdio.h>
void main(){
	int a,b;
	printf("Enter 1st number: ");
	scanf("%d",&a);
	printf("Enter 2nd number: ");
	scanf("%d",&b);
	printf("Unswapped value of a is %d and b is %d \n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Swapped value of a is %d and b is %d",a,b);
}
