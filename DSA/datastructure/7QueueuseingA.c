#include<stdio.h>
#include<stdlib.h>
int front=-1,rear=0,size;
void enqueue(int queue[]){
    if(rear==size-1){
        printf("The queue is full");
    }
    else if(front==-1){
        front++;
        printf("Enter the element : ");
        int n;
        scanf("%d",&n);
        queue[front]=n;
        printf("The element is inserted ");
    }
    else{
        rear++;
        printf("Enter the element : ");
        int n;
        scanf("%d",&n);
        queue[rear]=n;
        printf("The element is inserted ");
    }
}
void dequeue(int queue[]){
    if(front==-1){
        printf("The Queue is empty");
    }
    else{
        queue[front]=0;
        front++;
        printf("The first element is deleted");
    }
}
void display(int queue[])
{
    if(front==-1){
        printf("The Queue is empty");
    }   
    else{
        printf("The values are :");
        for(int i=front;i<=rear;i++)
        {
        printf("%d ",queue[i]);
        }
    }
}
int main()
{
    int n=0;
    printf("Enter the size of queue : ");
    scanf("%d",&size);
    int queue[size];
    while(n!=4){
        printf("\nEnter 1 for enqueue a element : ");
        printf("\nEnter 2 for dequeue a element : ");
        printf("\nEnter 3 for display a element : ");
        printf("\nEnter 4 for exit  a element : ");
        scanf("%d",&n);
        switch(n){
            case 1:
            enqueue(queue);
            break;
            case 2:
            dequeue(queue)
            break;
            case 3:
            display(queue);
            break;
        }
    }
    printf("Thank you");
}