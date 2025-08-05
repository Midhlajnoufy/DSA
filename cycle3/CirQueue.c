#include<stdio.h>
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
        printf("\n\n\nchoose from the below options \n 1.Enqueue \n 2.Dequeue \n 3.clear \n 4.exit \n 5.view \n  Enter the choice: ");
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
            case 5:
            view(queue,max,fptr,rptr);
            break;
            default:
            printf("enter a valid choice from [1,2,3,4]");

        }
    }while(choice!=4);
    return 0;
}
// enqueue
void enqueue(int *arr,int *size,)