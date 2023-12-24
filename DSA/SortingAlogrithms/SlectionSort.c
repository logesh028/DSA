#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of element : ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        int small = a[i];
        int location=i;
        for(int j=i+1;j<n;j++){
            if(small>a[j]){
               small = a[j];
               location = j;
            }
        }
        int temp = a[i];
        a[i]=small;
        a[location]= temp;
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}