#include<stdio.h>
const float pi=3.14;
void main(){
    int d;
    printf("Enter the diameter of the circle :");
    scanf("%d",&d);
    float r = d/2;
    float p;
    p=pi*(r*r);
    printf("The area of circle %.2f",p);

}