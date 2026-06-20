#include<stdio.h>
void main(){
	char ch;
	printf("enter any character to vowel or consonant:\n");
	scanf("%c",&ch);
	if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U'){
		printf("VOWEL");
	}
	else{
		printf("CONSONANT");
	}
}
