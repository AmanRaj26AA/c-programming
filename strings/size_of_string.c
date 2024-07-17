#include<stdio.h>
#include<string.h>
int main()
{
    char str[40];
    puts("Enter a string:");
    gets(str);
    puts("The size of string is:");

 //size of string
    int size=0,k=0;
    while(str[k]!='\0')
    {
        size++;
        k++;
    }
    printf("%d\n",size);

    return 0;
}