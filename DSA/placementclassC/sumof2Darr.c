#include<stdio.h>
void main(){
    int r,c;
    int sum=0;
    printf("Enter the rows & colums :");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
        scanf("%d",&arr[i][j]);
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
        sum +=arr[i][j];
    }
    printf("\nThe sum 2D array is  %d ",sum);
}
