#include<stdio.h>
void main(){
	int n,i,fact=1;
    printf("enter the number to print its factorial:\n");
    scanf("%d",&n);
	for(i=1;i<=n;i++){
	   fact=fact*i;
	}
	printf("factorial of %d is %d",n,fact);
}

