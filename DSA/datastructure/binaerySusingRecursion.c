#include<stdio.h>
int search(int a[],int l,int r,int n)
{
    while(l<=r){
        int mid=(l+r)/2;
        if(a[mid]==n){
            return mid;
        }
        else if(a[mid]<n){
           return search(a,mid+1,r,n);
        }
        else{
           return  search(a,l,mid-1,n);
        }
    }
    return -1;
}
int main()
{
    int size;
    printf("\nEnter the number of elements : ");
    scanf("%d",&size);
    printf("Enter the elements : ");
    int a[size];
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the search element : ");
    int n;
    scanf("%d",&n);
    int res = search(a,0,size-1,n);
    printf("%d\n",res);
}