//Given an integer array of size N.write a program to srot the array??


#include<stdio.h>
int main(){
    int i,n;
    printf("Enter the Number of array:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]>arr[j]){
                int s=arr[i];
                arr[i]=arr[j];
                arr[j]=s;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}
