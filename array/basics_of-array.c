#include<stdio.h>
void main()
{
    int a[5]={5,6,3,2,8};  
    a[0]= 4;  //1st element becomes 4
    a[3]= 3;   //4th element becomes 3
    printf("1st element is %d\n",a[0]); 
    printf("2nd element is %d\n",a[1]);
    printf("3rd element is %d\n",a[2]);
    printf("4th element is %d\n",a[3]);
    printf("5th element is %d\n",a[4]);
}