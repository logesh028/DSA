/**#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    printf("%d",n)
}
**/
#include <stdio.h>
int Prime(int num) {
    if (num <= 1) {6 
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}
void printPrimeNumbers(int n) {
    int count = 0;
    int num = 2;
    while (count < n) {
        if (Prime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
}
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The first %d prime numbers are: ", n);
    printPrimeNumbers(n);
    return 0;
}


