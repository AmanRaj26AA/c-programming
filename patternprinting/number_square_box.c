#include<stdio.h>
int main()
{
    int a,b;
    printf ("enter no. of rows and no. of columns:");
    scanf ("%d %d",&a,&b);
  for(int i=0;i<a;i++)  // i means rows no.
  {
    for(int j=0;j<b;j++)  // j means column rows
    {
        printf("%d ",j+1);
    }
    printf("\n");
  }  
    return 0;
}