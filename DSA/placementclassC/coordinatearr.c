#include<stdio.h>
#include<stdbool.h>
int main(){
    int r,c;
    printf("Enter the rows & colums :");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
        scanf("%d",&arr[i][j]);
    }
    int s,row,clo;
    bool t=false;
    printf("Enter the index:");
    scanf("%d",&s);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
        if(arr[i][j]==s){
            t=true;
            row=i;
            clo=j;
            break;
        }
    }
    if(t){
        printf("%d,%d",row,clo);
    }
    else{
        printf("-1,-1");
    }
    return 0;
}