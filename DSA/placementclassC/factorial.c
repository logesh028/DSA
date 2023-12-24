#include<stdio.h>
int factorial(int a){
    if(a!=0){
        return a * factorial(a-1);
    }
    else{
        return 1;
    }
}
void main(){
    int a;
    a= factorial(3);
    printf("Factorial of a is %d",a);
   
}
