#include<stdio.h>
int main()
{
    int n;
    printf ("enter no. of rows:");
    scanf ("%d",&n);
  for(int i=1;i<=n;i++)  // i means rows no.
  {
    for(int j=1;j<=i;j++)  // j means column rows
    {
        printf("*");
    }
    printf("\n");
  }  
    return 0;
}