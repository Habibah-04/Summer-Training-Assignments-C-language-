#include<stdio.h>
void main(){
	int a,b,c,d,max;
	printf("enter any four numbers to find greatest:\n");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	max=(a>b && a>c && a>d)?a:((b>c && b>d)?b:(c>d ?c:d));
	printf("%d is greatest",max);
}
