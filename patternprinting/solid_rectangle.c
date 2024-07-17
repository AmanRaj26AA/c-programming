#include<stdio.h>
int main()
{
    int n,i,j;
    printf ("enter no. of rows:");
    scanf ("%d",&n);
  for(int i=1;i<=n;i++)  // i means rows no.
  {
    char k='A';
    for(j=1;j<=n;j++)  // j means column rows
    {

        printf("%c ",k);
        k++;
    }
    printf("\n");
  }  
    return 0;
}