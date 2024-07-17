#include<stdio.h>
int main()
{
    int a,b;
    printf ("enter no. of rows:");
    scanf ("%d",&a);
  for(int i=1;i<=a;i++)  // i means rows no.
  {
    for(char j='A';j<=b;j++)  // j means column rows
    {
        printf("%c",j);
    }
    printf("\n");
  }  
    return 0;
}