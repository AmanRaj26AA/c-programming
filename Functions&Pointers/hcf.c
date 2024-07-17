#include<stdio.h>
int gdc(int x,int y)
{
    if(x>y)
    {
     if(y==0)
     return x;
     return gdc(y,x%y);
    }
    else
    return gdc(y,x);
}
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    int c = gdc(a,b);
    printf("GCD of %d and %d is %d",a,b,c);
    return 0;
}