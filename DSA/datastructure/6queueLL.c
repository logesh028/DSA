#include<stdio.h>
#include<stdlib.h>
struct Queue
{
    int data;
    struct Queue *next;
};
struct Queue *front=NULL;
struct Queue *rear=NULL;
void enqueue()
{
    struct Queue *new_node;
    new_node=(struct Queue*)malloc(sizeof(struct Queue));
    int n;
    printf("Enter the element : ");
    scanf("%d",&n);
    new_node->data=n;
    new_node->next=NULL;
    if(front==NULL){
        front=new_node;
        rear=new_node;
        printf("The element is inserted");
    }
    else{
        struct Queue *temp;
        temp=front;
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        rear=new_node;
        temp->next=new_node;
        printf("The element is inserted");
    }
}
void dequeue(){
    front=front->next;
    printf("The element is deleted");
}
void display()
{
    struct Queue *temp;
    temp=front;
    printf("The values are : ");
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main()
{
    int n=0;
    while(n!=4){
        printf("\nEnter 1 for enqueue : ");
        printf("\nEnter 2 for dequeue : ");
        printf("\nEnter 3 for display : ");
        printf("\nEnter 4 for exit : ");
        scanf("%d",&n);
        switch(n){
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            display();
            break;- 
        }
    }
}



