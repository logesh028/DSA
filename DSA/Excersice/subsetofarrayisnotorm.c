//Give an integer array of size N.Write aprogram to find  whether an array is a subset of another array or not??


#include <stdio.h>

int isSubset(int arr1[], int m, int arr2[], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (arr2[i] == arr1[j])
                break;
        }
        if (j == m)
            return 0;
    }
    return 1;
}

int main() {
    int arr1[100], arr2[100];
    int m, n, i;

    printf("Enter the size of the first array: ");
    scanf("%d", &m);
    printf("Enter the elements of the first array:\n");
    for (i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &n);
    printf("Enter the elements of the second array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    if (isSubset(arr1, m, arr2, n))
        printf("The second array is a subset of the first array.\n");
    else
        printf("The second array is not a subset of the first array.\n");

    return 0;
}
