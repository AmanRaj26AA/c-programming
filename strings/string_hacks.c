// strlen(char *c)                       -  returns length of the string   
// strcpy(char *s1, char *s2)            -    copies content of string 2 to string 1
// strcat(char *s1, char *s2)            -    add s1 string with s2 and stores result in s1
// strcmp(char *s1, char *s2)            -    compare the two strings
// strncpy(char *s2, char *s1, int len)  -  copy substring of size len starting from s1 character pointer into s2

#include<stdio.h>
#include<string.h>
int main()
{
    char a[50]="chirag bansal ";
    char c[50]="is a good boy";
    char b[50];
    strcpy(b,a);
    printf("%s\n",b);
    b[0]='A';
    printf("%s\n",b);
    int x=strlen(a);
    printf("length of string is: %d\n",x);
    strcat(a,c);
    printf("now new string is %s\n",a); 

    return 0;
}