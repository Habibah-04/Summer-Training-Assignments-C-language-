#include<stdio.h>
void main(){
	int n,remainder,sum=0;
    printf("enter the number to print its digits sum:\n");
    scanf("%d",&n);
	int temp=n;
	if(temp<0){
		temp=-temp;
	}
	while(temp>0){
		remainder=temp%10;
		sum+=remainder;
		temp/=10;
	}
	printf("Sum of digits of number %d is %d",n,sum);
}

