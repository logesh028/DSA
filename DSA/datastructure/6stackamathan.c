#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int top_stack=-1;
int size;
void push(int stack[])
{
    if(top_stack+1==size){
        printf("The stack is overflow");
    }
    else{
        top_stack++;
        int n;
        printf("Enter the element : ");
        scanf("%d",&n);
        stack[top_stack]=n;
        printf("The element is pushed into stack");
    }
}
void pop(int stack[])
{
    if(top_stack==-1){
        printf("The stack is underflow");
    }
    else{
        stack[top_stack]=0;
        top_stack--;
        printf("The element is poped");
    }
}ik
void display(int stack[])
{
    if(top_stack==-1){
        printf("The stack is empty");
    }
    else{
        printf("The values are : ");
        for(int i=top_stack;i>=0;i--){
            printf("%d ",stack[i]);
        }
    }
}
void search(int stack[])
{
    int searchelement;
    bool s =false;
    printf("Enter the search element : ");
    scanf("%d",&searchelement);
    if(top_stack==-1){
        printf("The stack is empty");
    }
    else{
        for(int i=0;i<=top_stack;i++){
            if(stack[top_stack]==searchelement){
                s=true;
            }
        }
        if(s){
            printf("The element is found");
        }
        else{
            printf("The element is not found");
        }
    }
}
int main()
{
    printf("Enter the size of element : ");
    scanf("%d",&size);
    int stack[size];
    int i=0;
    while(i!=5){
        printf("\nEnter 1 for push a element : ");
        printf("Enter 2 for pop a element : ");
        printf("Enter 3 for display the elements : ");
        printf("Enter 4 for search a element :  ");
        printf("Enter 5 for exit : ");
        scanf("%d",&i);
        switch(i){
            case 1:
            push(stack);
            break;
            case 2:
            pop(stack);
            break;
            case 3:
            display(stack);
            break;
            case 4:
            search(stack);
            break;
        }
    }
    printf("Exit");
}