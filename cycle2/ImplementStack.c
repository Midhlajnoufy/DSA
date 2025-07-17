#include<stdio.h>
#define SIZE 10
int top=-1;
int stack[SIZE];
//peep function
void peep(){
if(top>-1){
printf("the top element is %d",stack[top]);
}else{
printf("no elementsin the stack");
}
}
//view function
void view(){
if(top>-1){
printf("the elements in the stack now: \n");
for(int i=0;i<=top;i++){
printf("%d ",stack[i]);
}
printf("\n");
}else{
printf("no elementsin the stack");
}
printf("\n");
}

//push function
void push(int n){
if(top<=SIZE-1){
top++;
stack[top]=n;
}else{
printf("stack overflow,\n max size is 10");
}
view();
}
//pop function
void pop(){
if(top>-1){
int temp;
temp=top;
top--;
printf("popped the element at the index %d \n",stack[temp]);
}else{
printf("stack underflow");
}
view();
}
//check full or not
void check(){
if (top<0){
printf("the stack is full");
}else{
printf("the stack is not full \n there is %d elements in the stack",top+1);
}
}
//main function
int main(){
push(1);
push(2);
push(3);
push(4);
pop();
pop();
check();
return 0;
}
