#include<stdio.h>
int main(){
    int i,n;

    printf("Enter the no of element:");
    scanf("%d",&n);
    printf("Enter element values :");
    int num[n];
    for ( i = 0; i < n; i++)
    {
       scanf("%d",&num[i]);
    }
    int s;
    int check=0;
    printf("Enter the element to find :");
    scanf("%d",&s);
    for ( i = 0; i < n; i++)
    {
        if(num[i]==s){
            check=i;
            break;
        }
    }
    if(check!=0){
        printf("element found at %d",i);
    }
    else{
        printf("Element not found");
    }

    return 0;
}