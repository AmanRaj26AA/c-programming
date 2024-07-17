#include <stdio.h>

int main() {
    int start = 100, end = 200;
    int sum = 0, count = 0;
    float average;
    
    int *ptr_sum = &sum;
    int *ptr_count = &count;
    
    for (int i = start; i <= end; ++i)
     {
        *ptr_sum += i;
        *ptr_count += 1;
    }
    
    average = (float)(*ptr_sum) / (*ptr_count);
    
    printf("Sum of numbers from %d to %d is: %d\n", start, end, *ptr_sum);
    printf("Average of numbers from %d to %d is: %.2f\n", start, end, average);
    
    return 0;
}
