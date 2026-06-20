#include<stdio.h>
void main(){
	int year;
	printf("enter any year as yyyy to check leap year:\n");
	scanf("%d",&year);
	if((year%4==0 && year%100!=0)||(year%400==0)){
		printf("LEAP YEAR");
	}
	else{
		printf("NOT A LEAP YEAR");
	}
}
