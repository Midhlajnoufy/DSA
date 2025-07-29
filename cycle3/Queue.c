#include<stdio.h>
#include<stdlib.h>
//function prototypes
void enqueue(int *arr,int *size,int *fptr,int *rptr,int n);
int dequeue(int *arr,int *size,int *fptr,int *rptr);
//main function
int main(){
    int size;
    printf("enter the max size of queue: ");
    scanf("%d",&size);
    int front=-1;
    int rear=-1;
    int *fptr=&front;
    int *rptr=&rear;
    int choice;
    int queue[size];
    int *max=&size;
    do{
        printf("\nchoose from the below options \n 1.Enqueue \n 2.Dequeue \n 3.clear \n 4.exit \n   Enter the choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            int n;
            printf("enter the value: ");
            scanf("%d",&n);
            enqueue(queue,max,fptr,rptr,n);
            break;
            case 2:
            int x=dequeue(queue,max,fptr,rptr);
            printf("\n the dequeued element is %d",x);
            break;
            case 3:
            *fptr=*rptr=-1;
            break;
            case 4:
            exit(0);
            default:
            printf("enter a valid choice from [1,2,3,4]");

        }
    }while(choice!=4);
    return 0;
}
//enqueue
void enqueue(int *arr,int *size,int *fptr,int *rptr,int n){
    if(*rptr<*size-1){
       if(*fptr==-1){
        (*fptr)++;
        (*rptr)++;
       }else{
        (*rptr)++;
       }
       
       arr[*rptr]=n;
    }else{
        printf("queue overflow\n");
    }
}
//dequeue
int dequeue(int *arr,int *size,int *fptr,int *rptr){
    if(*fptr>-1 && *fptr<=*rptr){
        int val=arr[(*fptr)++];
        if(*fptr>*rptr){
            *fptr=*rptr=-1;
        }
        return val;
    }else{
        printf("queue underflow");
        return -1;
    }
}
