// Write a program in C to make such a pattern like a right angle triangle with a number which will repeat a number in a row.

#include <stdio.h>

int main() {
    int n;

    // Input the number of rows for the triangle
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Loop to iterate through each row
    for (int i = 1; i <= n; i++) {
        // Calculate the value to be printed in this row
        int value = i;
        
        // Loop to print the numbers in each row
        for (int j = 1; j <= i; j++) {
            printf("%d ", value); // Print the value
        }
        printf("\n"); // Move to the next line for the next row
    }

    return 0;
}
