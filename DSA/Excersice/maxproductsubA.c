//Given an integer array of size N.write Program to find maximum product subarray in a given array??

#include<stdio.h>
int main(){
    int n;
    int max=0;
    printf("Enter the Number of array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        int t=arr[i];
        for(int j=i+1;j<n;j++)
        {
            t*=arr[j];
            if(t>max)
            {
                max=t;
            }
        }

    }
    printf("%d",max);
}