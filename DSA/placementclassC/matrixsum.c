#include<stdio.h>
void main(){
    int r,c;
    int sum=0;
    printf("Enter the rows & colums :");
    scanf("%d%d",&r,&c);
    int arr[r][c],b[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
        scanf("%d",&arr[i][j]);
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
        scanf("%d",&b[i][j]);
    }
    printf("The sum of Two matrix :\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        sum =arr[i][j]+b[i][j];
        printf("%d ",sum);
        }
    }
}