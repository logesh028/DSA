#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,*ptr,size1,size2;
    printf("Enter size of array to allocate :\n");
    scanf("%d",&size1);
    ptr=(int*)malloc(size1 *sizeof(int));
    printf("Address of allocated memory:");
    for(i=0;i<size1;i++){
        scanf("%d",ptr+i);
    } 
    printf("Enter the size of array to reallocate:");
    scanf("%d",&size2);
    ptr=realloc(ptr,size2);
    printf("\nAddress of realloc memory:");
    for(i=0;i<size2;i++){
        printf("%d\t",ptr+i);
    }
    return 0;
}
