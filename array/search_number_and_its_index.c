#include<stdio.h>
int main()
{
    int a[7]={2,1,3,4,5,2,7};
    int x=2;
    for(int i=0;i<7;i++)
    {
        if(a[i]==x)
        {
            printf("%d is found in the array at index %d\n",x,i);
            break;
        }
    }
    return 0;
}