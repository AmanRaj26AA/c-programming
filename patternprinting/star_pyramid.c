#include <stdio.h>
int main()
{
    int n;
     printf("enter a size of triangle:");
    scanf("%d",&n);
    //outer loop for printing rows
    for (int i = 1; i <= n; i++)
    {
        // inner loop for printing space
        for (int j = 1; j <= n-i; j++)   
        {
            printf(" ");
            
        }

        // inner loop for printing stars 
        for (int j = 1; j <= 2*i-1; j++)
        {
            printf("*");
             
        }

        // inner loop for printing space
        for (int j = 1; j <= n-i; j++)   
        {
            printf(" ");
            
        }
        printf("\n");
    }
    return 0;
}