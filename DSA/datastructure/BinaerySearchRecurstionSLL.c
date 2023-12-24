#include<stdio.h>
#include<stdlib.h>
struct Node *root = NULL;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
struct Node *createNode(int data){
        struct Node *new_node;
        new_node=(struct Node *)malloc(sizeof(struct Node));
        new_node->data=data;
        new_node->left=NULL;
        new_node->right=NULL;
        return new_node;
}
struct Node *insertNode(int data,struct Node *root)
{
    if(root==NULL){
        return createNode(data);
    }
    if(data  < root->data){
        root->left=insertNode(data,root->left);
    }
    else if(data  > root->data){
        root->right=insertNode(data,root->right);
    }
    return root;
}
void inorder(struct Node *root)
{
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}
void deleteLeafNode(struct Node *root){

}
int search(struct Node *root,int data){
    if(root==NULL){
        return 0;
    }
    else if(root->data == data){
        return 1;
    }
    else if(root->data > data){
        return search(root->left,data);
    }
    else if(root->data < data){
        return search(root->right,data);
    }
}
int main()
{
    int n=0;
    int data,serachelement;
    struct Node *temp;
    while(n!=5){
        printf("Enter 1 for inserting a element : ");
        printf("\nEnter 2 for deleteing a element : ");
        printf("\nEnter 3 for searching a element : ");
        printf("\nEnter 4 for display a element : ");
        printf("\nEnter 5 for exit : ");
        scanf("%d",&n);
        switch(n){
            case 1:
            printf("Enter the element to insert");
            scanf("%d",&data);
            if(root==NULL){
                root=insertNode(data,root);
                printf("The data is inserted\n");
            }
            else{
                if(insertNode(data,root)==NULL){
                    printf("The data not is inserted\n");
                }
                else{
                     printf("The data  is inserted\n");
                }
            }
            break;
            //case 2:
            //deleteLeafNode(root);
            case 3:
            printf("Enter the element to search : ");
            scanf("%d",&serachelement);
            int s =search(root,serachelement);
            if(s==1){
                printf("The element is found\n");
            }
            else{
                printf("The element is not found\n");
            }
            break;
            case 4:
            temp=root;
            inorder(temp);
            printf("\n");
            break;
        }
    }
    printf("Thankyou");
}