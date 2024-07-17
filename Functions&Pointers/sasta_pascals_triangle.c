#include<stdio.h>
int factorial (int x)
{
    int fact=1;
    for(int i=1;i<=x;i++)
    fact*=i;
    return fact;
}
int main()
{
  int n;
  printf("Enter the number:");
  scanf("%d",&n);

  
  for(int i=0;i<=n;i++)
{
  for(int j=0;j<=i;j++)
  {
    int icj=factorial(i)/(factorial(j)*factorial(i-j));
    printf("%d ",icj);
  }
  printf("\n");
}  return 0;
}
