#include<stdio.h>
int main(){
	int a,b,op;
	printf("enter two numbers:\n");
	scanf("%d %d",&a,&b);
	printf("enter operation numbers(1-ADDITION,2-SUBTRACTION,3-Multiplication,4-Division):\n");
	scanf("%d",&op);
	switch(op){
		case 1:
			printf("ADDITION: %d",(a+b));
			break;
		case 2:
			printf("SUBTRACTION: %d",(a-b));
			break;
		case 3:
			printf("Multiplication: %d",(a*b));
			break;
		case 4:
			printf("Division: %d",(a/b));
			break;
		default:
		    printf("INVALID INPUT");
			break;	
	}
	return 0;
}
