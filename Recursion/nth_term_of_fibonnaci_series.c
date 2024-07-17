#include <stdio.h>

int fibo(int n) {
    if (n==1 || n==2) {
        return 1;
    } else {
        return fibo(n - 1) + fibo(n - 2);
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Invalid input. n cannot be negative.\n");
        return 0; // indicating error
    }
    
    int result = fibo(n);
    printf("The %dth Fibonacci number is: %d\n", n, result);
    
    return 0;
}
