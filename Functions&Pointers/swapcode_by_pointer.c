#include<stdio.h>
int swap(int *x, int*y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return;
}
int main()
{
    int a,b;
    printf("enter value of a:");
    scanf("%d",&a);
    printf("enter value of b:");
    scanf("%d",&b);
    swap(&a,&b);
    printf("after swapping values of a is %d and b is %d",a,b);

    return 0;
}