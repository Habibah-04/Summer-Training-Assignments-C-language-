#include<stdio.h>
void main(){
	float F,C;
	printf("Enter temperature in fahrenheit:");
	scanf("%f",&F);
	C=(F-32)*5/9;
	printf("Temperature in celsius: %f",C);
}
