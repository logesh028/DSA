#include<stdio.h>
void main(){
    int a,b;
    printf("Enter the numbers : ");
    scanf("%d %d",&a,&b);
    int res=1;
for(int i=0;i<b;i++){
    res*=a ;
}
printf("%d",res);

}