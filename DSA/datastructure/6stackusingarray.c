#include<stdio.h>
#include<stdlib.h>
int top=-1,n;
void push(int a[]){
    int x;
    printf("Enter The Value :");
    scanf("%d",&x);
    if(top==n-1){
        printf("Stack is Overflow !!");
    }
    else{
        top++;
        a[top]= x;
    }
}
void pop(int a[]){
    if(top==-1){
        printf("Stack is Underflow !!");
    }
    else{
        top--;
    }
}
void display(int a[]){
    int i;
    if(top==-1){
        printf("Stack is Empty !!");
    }
    else{
        for(i=0;i<=top;i++){
        printf("%d\t\n",a[i]);
    }
    }
    
}
int main(){
    printf("Enter the Number of Element :");
    scanf("%d",&n);
    int a[n];
    int select=0;
    while(select !=4){
        printf("Enter the Select Option 1 for push value:");
        printf("\nEnter the Select Option 2 for pop value:");
        printf("\nEnter the Select Option 3 for display stack:");
        scanf("%d",&select);
        switch(select){
            case 1:
            push(a);
            break;
            case 2:
            pop(a);
            break;
            case 3:
            display(a);
            break;
        }
    }
}
