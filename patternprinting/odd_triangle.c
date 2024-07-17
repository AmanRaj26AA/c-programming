#include<stdio.h>
int main()
{
    int n,i,j;
    printf ("enter no. of rows:");
    scanf ("%d",&n);
  for(int i=1;i<=n;i++)  // i means rows no.
  {
    for(j=1;j<=i;j++)  // j means column rows
    {
      int k=2*j-1;
        printf("%d ",k);

    }
    printf("\n");
  }  
    return 0;
}