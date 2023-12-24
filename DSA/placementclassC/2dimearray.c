#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the rows & colums :");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
        scanf("%d",&arr[i][j]);
    }

    printf("The values os 2D array :");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
        printf("\n arr[%d][%d] is = %d ",i,j,arr[i][j]);
    }
    return 0;
}