#include<stdio.h>
void main(){
	int num;
	printf("enter a number to find positive or negative:\n");
	scanf("%d",&num);
	if(num>0){
		printf("number is positive");
	}
	else if(num<0){
		printf("number is negative");
	}
	else{
		printf("number is zero");
	}
}
