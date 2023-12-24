#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *head=NULL;
void addNode(){
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
void main(){
    int n;
    printf("Enter 1 for continue : ");
    printf("Enter 2 for exit: ");
    scanf("%d",&n);
    while(n==1){
        addNode();
        printf("Enter 1 for continue : ");
        printf("Enter 2 for exit: \n");
        scanf("%d",&n);
        }
        printf("Thankyou");
}
