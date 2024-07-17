#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    gets(str); //take input string from user
    printf("your input was: %s",str);

    return 0;
}