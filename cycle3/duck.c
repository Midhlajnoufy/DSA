#include<stdio.h>
int front=-1;
int rear=-1;
void enqueue(int num,int lst[],int n){
    if((rear+1)%n==front){
        printf("queue overflow\n");
    }
    else{
        if(front==-1){
            front=0;}
        rear=(rear+1)%n;
        lst[rear]=num;
    }
}
int dequeue(int lst[],int n){
    if(front==-1){
        printf("queue underflow\n");
        return -1;
    }
    else{
        int temp=front;
        if(front==rear){
            front=rear=-1;
        }else{
            front=(front+1)%n;
        }
        return lst[temp];
    }
}
void display(int lst[],int n){
    int i=front;
    int j=rear;
    if(i==-1){
        printf("the queue is empty\n");
    }
    else{
        while(1){
            printf("%d ",lst[i]);
            if(i==j){
                break;
            }
            i=(i+1)%n;
        }
        printf("\n");
    }
}
int main(){
    int n;
    printf("enter the length of queue");
    scanf("%d",&n);
    int lst[n];
    int choice,num,k;
    while(1){
        printf("enter your choice\n 1.enqueue\n 2.dequeue\n 3.display\n 4.exit\n ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("enter the value to enqueue");
            scanf("%d",&num);
            enqueue(num,lst,n);
            break;
            case 2:
            k=dequeue(lst,n);
            if(k!=-1){
            printf("the dequeued element is %d\n",k);}
            else{
            break;}
            case 3:
            display(lst,n);
            break;
            case 4:
            return 0;
        }
    }
    return 0;
}
