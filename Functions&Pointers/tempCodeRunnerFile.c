#include <stdio.h>

// Function to calculate factorial
unsigned long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

// Function to calculate combination (nCr)
unsigned long long combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

// Function to print Pascal's Triangle
void printPascalTriangle(int rows) {
    for (int i = 0; i < rows; i++) {
        // Print spaces for alignment
        for (int j = 0; j < rows - i - 1; j++) {
            printf("   ");
        }
        
        // Compute and print entries in ith row
        for (int j = 0; j <= i; j++) {
            printf("%6llu   ", combination(i, j));
        }
        
        // Move to the next line after each row is printed
        printf("\n");
    }
}

int main() {
    int rows;
    
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);
    
    printf("\nPascal's Triangle with %d rows:\n\n", rows);
    printPascalTriangle(rows);
    
    return 0;
}

