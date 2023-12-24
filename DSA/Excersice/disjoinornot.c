#include<stdio.h>
#include<stdbool.h>
int main()
{
    int n1,n2;
    printf("Enter the size of array1 : ");
    printf("\nEnter the size of array2 : ");
    scanf("%d",&n1);
    scanf("%d",&n2);
    int a[n1],b[n2];
    bool s = true;
    for(int i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++)
        {
            if(a[i]==b[j]){
                s=false;
                break;
            }
        }
    }
    if(s){
        printf("Disjoint\n");
    }
    else{
        printf("Not Disjoint\n");
    }
}