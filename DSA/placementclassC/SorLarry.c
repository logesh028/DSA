#include<stdio.h>
int main(){
    int i,n;
    printf("Enter  values of element :");
    scanf("%d",&n);
    int num[n];
    for ( i = 0; i < n; i++)
    {
       scanf("%d",&num[i]);
    }  
    int min=num[0];
    int max=0;
    for(int i=0;i<n;i++){
        if(min>num[i]){
            min=num[i];
        }
        if(max<num[i]){
            max=num[i];
        }
    }
    printf("min is %d\n",min);
    printf("max is %d\n",max);
    return 0;
}