#include<stdio.h>
#include<ctype.h>
//main function
int main(){
	int size;
	printf("size of string to be converted into postfix: ");
	scanf("%d",&size);
	char string[size];
	char out[size];
	printf("enter the infix expression as string: ");
	fgets(string,size,stdin);
	int i=0;
	while(string[i]!='\0'){
		if(isalnum(string[i]){
			out[i]=string[i];
		}else{
			if(prec(string[i])>prec(stack[top]) )
