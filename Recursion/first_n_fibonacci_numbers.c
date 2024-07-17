#include <stdio.h>

// Function to recursively print Fibonacci series up to n terms
void fibonacciSeries(int n, int a, int b) {
    if (n <= 0)
        return;
    
    printf("%d ", a);
    fibonacciSeries(n - 1, b, a + b);
}

int main() {
    int n;
    printf("Enter the number of terms to print in Fibonacci series: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Invalid input. Number of terms must be positive.\n");
        return 1; // indicating error
    }
    
    printf("Fibonacci series up to %d terms: \n", n);
    fibonacciSeries(n, 1, 1); // Start Fibonacci series from the first two terms: 0, 1
    
    return 0;
}
