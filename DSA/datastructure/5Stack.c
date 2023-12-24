#include<stdio.h>
#include<stdlib.h>
struct Stack{
    int data;
    struct Stack *next;
};
struct Stack *head = NULL;
void push()
{
    struct Stack *new_node;
    new_node=(struct Stack*)malloc(sizeof(struct Stack));
    printf("Enter the element : ");
    int value;
    scanf("%d",&value);
    new_node->data=value;
    new_node->next=NULL;
    if(head==NULL){
        head = new_node;
        printf("The element is pushed");
    }
    else{
        struct Stack *temp;
        temp = head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new_node;
        printf("The element is pushed");
    }
}
void pop()
{
    struct Stack *temp;
    temp=head;
    if(temp==NULL){
        printf("The stack is empty !");
    }
    else if(head->next==NULL){
        head=NULL;
        printf("The element is poped !");
    }
    else{
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=NULL;
        printf("The element is poped !");
    }
}
void display()
{
    struct Stack *temp;
    temp=head;
    if(temp==NULL){
        printf("The stack is empty !");
    }
    else{
        printf("The values are : ");
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
}
void size()
{
    struct Stack *temp;
    temp=head;
    int size=0;
    if(temp==NULL){
        printf("The stack is empty !");
    }
    else{
    while(temp!=NULL){
        size++;
        temp=temp->next;
    }
    printf("The size of stack is %d",size);
   }
}
int main()
{
    int n=0;
    while(n!=5){
        printf("\nEnter 1 to push the element : ");
        printf("\nEnter 2 to pop the element : ");
        printf("\nEnter 3 to show the size of Stack : ");
        printf("\nEnter 4 to display : ");
        scanf("%d",&n);
        switch(n){
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            size();
            break;
            case 4:
            display();
            break;
        }
    }
}