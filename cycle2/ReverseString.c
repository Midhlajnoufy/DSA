#include<stdio.h>
#include<string.h>
#define SIZE 40
char stack[SIZE];
int top=-1;
//push function
void push(char ch){
    if(top<SIZE-1){
        top++;
        stack[top]=ch;
    }
}
//pop function
char pop(){
    if(top>-1){
        return stack[top--];
    }
}
//main function
int main(){
    char str[SIZE];
    printf("enter the  string to be reversed(max size of %d):",SIZE-1);
    fgets(str,SIZE,stdin);
    int i=0;
    char reversestr[SIZE];
    while(str[i]!='\0'){
        push(str[i]);
        i++;
    }
int j=0;
    while(top!=-1){
        reversestr[j]=pop();
        j++;
    }
   reversestr[j]='\0';
   printf("the reversed string is %s\n",reversestr);
}
