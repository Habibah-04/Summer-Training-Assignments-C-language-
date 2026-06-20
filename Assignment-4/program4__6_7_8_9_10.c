#include<stdio.h>
#include<String.h>
void main(){
char str1[] = "Hello";
char str2[] = "World!";
char str3[20]; 
char str4[]="HELLO";
int len,result;
strcat(str1, str2); 
printf("Concatenated string is %s \n",str1);
len=strlen(str1);
printf("length of string is %d\n",len);
strcpy(str3, str1);
printf("Copied string is %s\n",str3);
result=strcmp(str1,str4);
printf("Comparision result is %d\n",result);
strrev(str4);
printf("Reversed string is %s",str4);
}
