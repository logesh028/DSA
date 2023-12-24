#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
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
    printf("Enter the number : ");
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
void deleteNodefirst(){
    if(head==NULL){
        printf("Deletion is not possible");
    }
    else{
        head=head->next;
        printf("The first node is deleted");
    }
}
void deleteNodeend(){
    struct Node *temp;
    temp=head;
    while (temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=NULL;
    printf("The last node is deleted");
}
void deleteNodemiddle(){
    int index,i=0;
    printf("Enter the index to be deleted : ");
    scanf("%d",&index);
    struct Node *temp;
    temp=head;
    while(i!=index-1){
       temp=temp->next;
       i++;
    }
    temp->next=temp->next->next;
    printf("The node is deleted");
}
void searchaelement(){
    int searchelement;
    printf("Enter the search element : ");
    scanf("%d",&searchelement);
    struct Node *temp;
    temp=head;
    bool s = false;
    while(temp->next!=NULL){
        if(temp->data==searchelement){
            s = true;
        }
        temp=temp->next;
    }
    if(s)
        printf("The element is founded");
    else
        printf("The element is not founded");
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
void main()
{
    int n=0;
    while(n!=9){
        printf("\nEnter 1 for Insert at end : ");
        printf("Enter 2 for Insert at front : ");
        printf("Enter 3 for Insert at middle :");
        printf("Enter 4 for deleteNodefirst : ");
        printf("Enter 5 for deleteNodeend : ");
        printf("Enter 6 for deleteNodemiddle : ");
        printf("Enter 7 for searchaNode : ");
        printf("Enter 8 for display : ");
        printf("Enter 9 for exit : ");
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
            deleteNodefirst();
            break;
            case 5:
            deleteNodeend();
            break;
            case 6:
            deleteNodemiddle();
            break;
            case 7:
            searchaelement();
            break;
            case 8:
            display();
            break;
        }
    }
    printf("Thankyou\n") ;
}