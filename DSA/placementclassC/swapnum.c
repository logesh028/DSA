#include<stdio.h>
void main(){
    int a,b;
    printf("Enter the numbers: ");
    scanf("%d%d",&a,&b);
    a=a-b;
    b=a+b;
    a=b-a ;
    printf("%d %d",a,b);

}