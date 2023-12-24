#include<stdio.h>
#include<stdlib.h>
int main(){
    int num,i,*ptr;
    printf("Enter no of elements :");
    scanf("%d",&num);
    ptr=(int*)calloc(num*,sizeof(int));
    if(ptr==NULL){
        printf("\nMemory not allocated.");
        
        exit(0);
    }
    printf("\nEnter element:\n");
    for(i=0;i<num;i++){
        scanf("%d",ptr+i);
    }
    printf("Entered elements:\n");
    for(i=0;i<num;i++){
        printf("%d ",*(ptr+i));
    }
    free(ptr);
    return 0;
}