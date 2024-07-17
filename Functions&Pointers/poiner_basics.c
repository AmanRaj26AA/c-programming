#include<stdio.h>
int main()
{
   int a=5;
   int *p=&a;
   printf("%p\n",&a); 
   printf("%p\n",p); 
   printf("%p\n",&p);
   printf("%d\n",*p);
   printf("%d\n",a);
   *p=7;
   printf("%d",a);
    return 0;
} 