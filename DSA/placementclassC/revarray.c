#include<stdio.h>
int main(){
    int i,num[5];
    printf("Enter 5 values :");
    for ( i = 0; i < 5; i++)
    {
       scanf("%d",&num[i]);
    }
    printf("\n The entered values are:");

    for (i=4;i>=0;i--){
        printf("\n num[%d] is = %d",i,num[i]);
    }
    return 0;
}