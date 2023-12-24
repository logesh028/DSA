#include<stdio.h>
int search(int a[],int size)
{
    printf("Enter the search element : ");
    int n;
    scanf("%d",&n);
    for(int i=0;i<size;i++){
        if(n==a[i])
            return i;   
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
    int res = search(a,size);
    printf("%d\n",res);
}