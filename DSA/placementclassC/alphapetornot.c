#include<stdio.h>
void main()
{
    char var;
    printf("Enter the Character : ");
    scanf("%c",&var);
    if((var>=65 && var<=90) || (var>=97 && var<=122))   /**((var>='a' && var<='z') || (var>='A' && VAR<='Z'))**/
    {
        printf("ALPHAPET");
    }
    else{
        printf("NOT AN ALPHAPET");
    }
}