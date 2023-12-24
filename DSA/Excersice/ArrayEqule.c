//  Write  program to find wehther the number of an array be made equle ?? 
// description :
//  chech whter the number of array be made equal or not for eg. for the following inputit should print yes beacsue 50*2*3,75*2*2,150*2 are equal to 300 in all cases.so array numbers can be made equl. in all cases when we use any number the output be yes inputs from users.

#include <stdio.h>
int convert(int b[], int s)
{
int flag = 1;
for (int i = 0; i < s; i++)
{
while (b[i] % 2 == 0)
b[i] /= 2;
while (b[i] % 3 == 0)
b[i] /= 3;
}
for (int i = 1; i < s; i++)
{
if (b[i] != b[0])
{
flag = 0 ;
}
return flag;
}
}
int main()
{
int n, i;
printf("ENTER THE NUMBER:");
scanf("%d", &n);
int a[n];
printf("Enter the array elements :");
for(i=0; i<n; i++)
scanf("%d", &a[i]);
if (convert(a, n) == 1)
printf("Yes, possible");
else
printf("No, it's not possible");
return 0;
}