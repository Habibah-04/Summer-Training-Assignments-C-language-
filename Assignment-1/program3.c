#include<stdio.h>
void main(){
	char name[20];
	int rollnum;
	printf("Enter student's name:");
	scanf("%s",name);
	printf("Enter student's roll number:");
	scanf("%d",&rollnum);
	printf("Student Name: %s \n",name);
	printf("Student Roll Number: %d",rollnum);
}
