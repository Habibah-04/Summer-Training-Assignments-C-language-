#include<stdio.h>
void main(){
	int n,first=0,second=1,next=0;
    printf("enter the number of terms:\n");
    scanf("%d",&n);
	if(n<0){
		printf("enter a positive number:\n");
	}
	else{
		printf("Fibonacci Series: %d, %d",first,second);
		next=first+second;
		while(next<=n){
			printf(", %d",next);
			first=second;
	       	second=next;
	       	next=first+second;
		}
		printf("\n");
    } 
}

