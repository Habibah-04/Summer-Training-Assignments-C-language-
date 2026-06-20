#include<stdio.h>
void main(){
	int a,b,c;
	printf("enter three numbers:\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c){
		printf("a=%d is greatest",a);
	}
	else if(b>a && b>c){
		printf("b=%d is greatest",b);
	}
	else{
		printf("c=%d is greatest",c);
	}
}
