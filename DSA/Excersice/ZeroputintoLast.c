// write a function to push all zeros that are present to the end of the array.The respective order of other element shounld remain the same.

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int count=n,s=0;
    while(s<count){
        while(a[s] == 0){
            for(int j=s;j<n-1;j++){
                a[j]=a[j+1];
            }
            a[n-1]=0;
            count--;
        }
        s++;
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}










// #include <stdio.h>

// void pushZerosToEnd(int arr[], int size) {
//     int count = 0;  // Count of non-zero elements

//     // Traverse the array and move non-zero elements to the beginning
//     for (int i = 0; i < size; i++) {
//         if (arr[i] != 0) {
//             arr[count++] = arr[i];
//         }
//     }

//     // Fill the remaining elements with zeros
//     while (count < size) {
//         arr[count++] = 0;
//     }
// }

// int main() {
//     int size;

//     printf("Enter the size of the array: ");
//     scanf("%d", &size);

//     int arr[size];

//     printf("Enter the elements of the array:\n");
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }

//     printf("Original array: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     pushZerosToEnd(arr, size);

//     printf("Array after pushing zeros to the end: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }
