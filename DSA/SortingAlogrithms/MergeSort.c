#include<stdio.h>
int main(){
    int n;
    printf("Enter the Array size:");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the Array Element :");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\nBefore Sorting Array :");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }

} 


