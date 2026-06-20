#include<stdio.h>
void main(){
	int num;
	printf("enter a number to find even or odd:\n");
	scanf("%d",&num);
	if(num%2==0){
		printf("number is even");
	}
	else{
		printf("number is odd");
	}
}
