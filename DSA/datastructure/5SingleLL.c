#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *head=NULL;
void addNodeatend(){
    int x;
    printf("Enter the number :");
    scanf("%d",&x);
    struct Node *new_node;
    new_node=(struct Node *)malloc(sizeof(struct Node));
    new_node->data=x;
    new_node->next=NULL;
    if(head==NULL){
        head=new_node;
        printf("The data is inserted ");
    }
    else{
       struct Node *temp=head;
       while(temp->next!=NULL){
        temp=temp->next;
       }
       temp->next=new_node;
      printf("The data is inserted ");
    }
}
void addNodeatfirst(){
    int value;
    printf("\nEnter the number : ");
    scanf("%d",&value);
    struct Node *new_node;
    new_node=(struct Node*)malloc(sizeof(struct Node));
    new_node->data=value;
    new_node->next=NULL;
    if(head==NULL){
        head=new_node;
        printf("The data is inserted ");
    }
    else{
        new_node->next=head;
        head=new_node;
        printf("The data is in inserted ");
    }
}
void addNodeatMiddle(){
    int value,index;
    printf("Enter the number and index : ");
    scanf("%d %d",&value,&index);
    struct Node *temp,*new_node;
    new_node=(struct Node *)malloc(sizeof(struct Node));
    new_node->data=value;
    new_node->next=NULL;
    temp=head;
    int i=0;
    while(i!=index-1){
        temp->next;
        i++;
    }
    new_node->next=temp->next;
    temp->next=new_node;
    printf("The data is inserted ");
}
void display(){
    struct Node *temp;
    temp=head;
    printf("The values are : ");
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void delfir(){

    if(head==NULL){
        printf("Deltion Not Pssible");
    }
    else{
        head=head->next;
    }
}
void dellast(){
    struct Node *temp;
    temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    temp->next=NULL;
}
void delmid(){
    int n;
    printf("\nEnter the data to be delete :");
    scanf("%d",&n);
    struct Node *temp;
    temp=head;
    if(head==NULL){
        printf("Delete not Possible");
    }
    else{
        while (temp->next->data==n)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
    }
}
void main()
{
    int n=0;
    while(n!=8){
        printf("\nEnter 1 for Insert at end : ");
        printf("\nEnter 2 for Insert at front : ");
        printf("\nEnter 3 for Insert at middle :");
        printf("\nEnter 4 for delete First Node:");
        printf("\nEnter 5 for delete last node:");
        printf("\nEnter 6 for delete middle Node:");
        printf("\nEnter 7 for display :");
        printf("\nEnter 8 for exit : ");
        scanf("%d",&n);
        switch (n)
        {
            case 1:
            addNodeatend();
            break;
            case 2:
            addNodeatfirst();
            break;
            case 3:
            addNodeatMiddle();
            break;
            case 4:
            delfir();
            break;
            case 5:
            dellast();
            case 6:
            delmid();
            break;
            case 7:
            display();
            break;
        }
    }
    printf("Thankyou") ;
}