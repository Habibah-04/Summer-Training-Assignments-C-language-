#include<stdio.h>
void main(){
	int a,b;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	printf("Addition of %d and %d: %d",a,b,(a+b));
	printf("\n");
    printf("Subtraction of %d and %d: %d",a,b,(a-b));
    printf("\n");
    printf("Multiplication of %d and %d: %d",a,b,(a*b));
    printf("\n");
    printf("Quotient of division of %d by %d: %d",a,b,(a/b));
    printf("\n");
    printf("Remainder of division of %d by %d: %d",a,b,(a%b));
}
