#include<stdio.h>
void main(){
	int num1,num2, num3, avg;
	printf("Enter three numbers:");
	scanf("%d %d %d",&num1, &num2, &num3);
	avg=(num1+num2+num3)/3;
	printf("Average of given three numbers is %d: ",avg);
}
