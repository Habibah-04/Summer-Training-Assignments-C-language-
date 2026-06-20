#include<stdio.h>
void main(){
	char ch;
	printf("enter any character to check upper or lower case:\n");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z'){
		printf("Uppercase Letter");
	}
	else if(ch>='a' && ch<='z'){
		printf("Lowercase Letter");
	}
	else{
		printf("not an alphabet");
	}
}
