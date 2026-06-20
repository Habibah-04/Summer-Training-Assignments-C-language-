#include<stdio.h>
int main(){
	int day;
	printf("enter week day number:\n");
	scanf("%d",&day);
	if(day<1 || day>7){
		printf("error,invalid day number entered...");
		return 1;
	}
	switch(day){
		case 1:
			printf("MONDAY");
			break;
		case 2:
			printf("TUESDAY");
			break;
		case 3:
			printf("WEDNESDAY");
			break;
		case 4:
			printf("THURSDAY");
			break;
		case 5:
			printf("FRIDAY");
			break;		
		case 6:
			printf("SATURDAY");
			break;
		case 7:
			printf("SUNDAY");
			break;
		default:
		    printf("INVALID INPUT");
			break;	
	}
	return 0;
}
