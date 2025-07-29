#include<stdio.h>
#include<stdlib.h>
//function prototypes
void push(int *arr,int *max,int *top,int n);
int pop(int *arr,int *max,int *top);
void sort(int *arr,int *max,int *ptr1,int *ptr2, int *temp);
void clear(int *ptr1);
//main function
int main(){
	int Max;
	int top=-1;
    int temptop=-1;
	int *ptr1=&top;
	int *ptr2=&temptop;
	printf("enter the max entries to be sorted: ");
    scanf("%d",&Max);
	int stack[Max];
	int *max=&Max;
	int choice;
	int temp[Max];
	do{
		printf("choose any from options below:\n 1.push\n 2.pop\n 3.sort\n 4.clear\n 5.exit\n    choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
			int n;
			printf("enter the element to be pushed: ");
			scanf("%d",&n);
			push(stack,max,ptr1,n);
			break;
			case 2:
			int x=pop(stack,max,ptr1);
			if(x!=-1){
			printf("the popped element is %d\n",x);}
			break;
			case 3:
			sort(stack,max,ptr1,ptr2,temp);
			break;
			case 4:
			clear(ptr1);
			break;
			case 5:
			exit(0);
			default:
			printf("enter any one of the three choice\n");
			break;
		}
	}while(choice!=5);
	return 0;
}
//push function
void push(int *arr,int *max,int *top,int n){
	if(*top<*max-1){
		arr[++*top]=n;
	}else{
		printf("stack overflow\n");
	}
}
//pop function
int pop(int *arr,int *max,int *top){
	if(*top>-1){
		return arr[(*top)--];
	}else{
		printf("stack underflow\n");
		return -1; 
		}
}
//sort function
void sort(int *arr,int *max,int *ptr1,int *ptr2, int *temp){
	int var;
	if(*ptr2==-1){
		temp[++*ptr2]=pop(arr,max,ptr1);
	}
	while(*ptr1>-1){
		var=pop(arr,max,ptr1);
		if(var<=temp[*ptr2]){
			push(temp,max,ptr2,var);
		}else{
			while(var>temp[*ptr2] && *ptr2!=-1){
				push(arr,max,ptr1,pop(temp,max,ptr2));
			}
			push(temp,max,ptr2,var);
		}
		
	}
	while(*ptr2!=-1)
	{   int n=pop(temp,max,ptr2);
		push(arr,max,ptr1,n);
		printf("%d ",n);
	}
	printf("\n")
	
}
//clear function
void clear(int *ptr1){
	*ptr1=-1;
}
