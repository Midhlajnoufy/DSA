#include<stdio.h>
#define SIZE 10
int top=-1;
int stack[SIZE];
//peep function
void peep(){
if(top>-1){
printf("\nthe top element is %d",stack[top]);
}else{
printf("\nno elementsin the stack");
}
}
//view function
void view(){
if(top>-1){
printf("\nthe elements in the stack now: \n");
for(int i=0;i<=top;i++){
printf("%d ",stack[i]);
}
printf("\n");
}else{
printf("\nno elements in the stack");
}
printf("\n");
}

//push function
void push(){
if(top<=SIZE-1){
top++;
int n;
printf("\nenter the element to be pushed: ");
scanf("%d",&n);
stack[top]=n;
}else{
printf("\nstack overflow,\n max size is 10\n");
}
}
//pop function
void pop(){
if(top>-1){
int temp;
temp=top;
top--;
printf("\npopped the element at the index %d \n",stack[temp]);
}else{
printf("\nstack underflow");
}
}
//check full or not
void check(){
if (top<0){
printf("\nthe stack is full\n");
}else{
printf("\nthe stack is not full \n there is %d elements in the stack\n",top+1);
}
}
//main function
int main(){
int choice;
do{
printf("1.push \n2.pop \n3.peep \n4.view stack \n5.check full or not \n6.exit");
printf("\nchoose an  option: ");
scanf("%d",&choice);
switch(choice){
case 1:
push();
break;
case 2:
pop();
break;
case 3:
peep();
break;
case 4:
view();
break;
case 5:
check();
break;
case 6:
printf("\nthank you! \nexiting from the program");
break;
default:
printf("\nchoose a valid option from [1,2,3,4,5,6]\n");
break;
}
}while(choice!=6);
return 0;
}
