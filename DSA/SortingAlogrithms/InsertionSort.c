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
    for(int i=1;i<n;i++){
        int j=i-1;
        int key = a[i];
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
    printf("\nAfter Sorting Array :");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}                         
0