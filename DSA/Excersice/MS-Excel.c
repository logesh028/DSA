// Give an Integer write a C program to converds,column 1 is named as "A",column  it into MS_Excel columns has a pattern like A,B,C......z,AB,AC........BA,BB.......ZZ,AAA,AAB.....etc.In other word as"B",column 27 as "AA".

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* convertToExcelColumn(int columnNumber) {
    char* result = (char*)malloc(sizeof(char) * 50);  // Allocate memory for the result string
    int index = 0;  // Index for result string

    while (columnNumber > 0) {
        int remainder = (columnNumber - 1) % 26;  // Calculate remainder
        result[index++] = 'A' + remainder;  // Append corresponding character

        columnNumber = (columnNumber - 1) / 26;  // Update column number
    }

    result[index] = '\0';  // Add null terminator
    int length = strlen(result);

    // Reverse the string
    for (int i = 0; i < length / 2; i++) {
        char temp = result[i];
        result[i] = result[length - i - 1];
        result[length - i - 1] = temp;
    }

    return result;
}

int main() {
    int columnNumber;

    printf("Enter the column number: ");
    scanf("%d", &columnNumber);

    char* columnName = convertToExcelColumn(columnNumber);

    printf("The corresponding Excel column name is: %s\n", columnName);

    free(columnName);  // Free the allocated memory

    return 0;
}