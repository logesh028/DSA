//Given an integer array of size N.write program  to find sum of positive squre elements in the array??.

#include<stdio.h>
int main(){
    int i,n;
    int sum=0;
    printf("Enter the Number of array:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
     for(i=0;i<n;i++){
        sum+=arr[i]*arr[i];
    }
    printf("%d",sum);
}