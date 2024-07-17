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
  int n,r;
  printf("Enter the value of n: ",n);
  scanf("%d",&n);
  printf("Enter the value of r: ",r);
  scanf("%d",&r);
  if(r>n)
  {
    printf("value cannot be determined");
  }
  else
  {
  int ncr=factorial(n)/(factorial(r)*factorial(n-r));
  printf("value is %d",ncr);
  }
  return 0;
}
