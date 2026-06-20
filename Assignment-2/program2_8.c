#include<stdio.h>
int main(){
	int marks;
	printf("enter total marks of student:\n");
	scanf("%d",&marks);
	if(marks<0 || marks>100){
		printf("error,invalid mark entered...");
		return 1;
	}
	switch(marks/10){
		case 10:
		case 9:
			printf("grade A");
			break;
		case 8:
			printf("grade B");
			break;
		case 7:
			printf("grade C");
			break;
		case 6:
			printf("grade D");
			break;
		case 5:
			printf("grade E");
			break;	
		default:
		    printf("F:Fail");
			break;		
	}
	return 0;
}
