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
    int temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\nAfter Sorting Array :");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}