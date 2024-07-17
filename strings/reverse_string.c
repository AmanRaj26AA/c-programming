#include<stdio.h>
#include<string.h>
int main()
{
    char str[40];
    puts("Enter a string:");
    gets(str);

 //size of string
    int size=0,k=0;
    while(str[k]!='\0')
    {
        size++;
        k++;     
    }           //we got size of input string

 //reverse string  
    for(int i=0,j=size-1;i<=j;i++,j--)
    {
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    puts("the reversed string is:");
    puts(str);
    return 0;
}