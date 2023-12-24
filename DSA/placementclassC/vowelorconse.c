#include<stdio.h>
void main()
{
    char c;
    printf("Enter the character : ");
    scanf("%c",&c);
    switch(c){
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        printf("Vowels\n");
        break;
        default:
        printf("Constant\n");
    }
}