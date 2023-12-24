#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *head=NULL;
void addend(){
    int x;
    printf("Enter the Number :");
    scanf("%d",&x);
    struct Node *new_node;
    new_node=(struct Node *)malloc(sizeof(struct Node));
    new_node->data=x;
    new_node->next=NULL;
    if(head==NULL){
        head=new_node;
        printf("The data is inserted");
    }
    else{
        struct Node *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new_node;
       printf("The data is inserted");
    }
}

void addfirst()
{
	struct Node *new_node;
    new_node=(struct Node*)malloc(sizeof(struct Node));
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    new_node->data=n;
    new_node->next=NULL;
    if(head==NULL){
        head=new_node;
        printf("The data is inserted");
    }
    else{
        new_node->next=head;
        head=new_node;
        printf("The data is inserted");
    }
}
void addmid(){
    struct Node *new_node;
    new_node=(struct Node*)malloc(sizeof(struct Node));
    int n,index;
    printf("Enter the number and index : ");
    scanf("%d %d",&n,&index);
    struct Node *temp;
    temp = head;
    new_node->data=n;
    int i=0;
    while(i!=index-1){
        temp=temp->next;
        i++;
    }
    new_node->next=temp->next;
    temp->next=new_node;
    printf("The data is inserted");
}
void display(){
    struct Node *temp;
    temp=head;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
    
}
void main(){
    int n=0;
    while(n!=5){
        printf("enter 1 for insert end:");
        printf("\nEnter 2 for insert first");
        printf("\nEnter 3 for insert mid");
        printf("\nEnter 4 for display");
        printf("\nenter 5 for exit:");
        scanf("%d",&n);
        switch (n)
        {
            case 1:
            addend();
            break;
            case 2:
            addfirst();
            break;
            case 3:
            addmid();
            break;
            case 4:
            display();
            break;
            case 5:
            break;
        }
    }
    printf("Thankyou");
}
