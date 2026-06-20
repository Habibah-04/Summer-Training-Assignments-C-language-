#include <stdio.h>
void main() {
    int n,i;
    printf("enter a number to be print even numbers upto that number:");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
    	if(i%2==0){
    		printf("%d\n",i);
		}
	}
}

