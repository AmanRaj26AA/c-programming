#include<stdio.h>
int main()
{
    char a[]={'H','e','l','l','o','\0'};
    char b[]="muh me le lo";
    char arr1[]="college wallah is best channel for coders"; //automatically last character after letter s is \0
    char arr2[]="we love to crack gate from gate waallah\0"; //here \0 is used already used which helps to don't decide the size of string used 
    int i=0;
    while(a[i]!='\0')
    {
        printf("%c ",a[i]);
        i++;
    }
    printf("\n");

    int j=0;
    while(j<12)
    {
        printf("%c ",b[j]);
        j++;
    }
    printf("\n");

  int k=0;
  while(arr1[k]!='\0')  \\ \0 used to dont decide size of string
    {
        printf("%c ",arr1[k]);
        k++;
    }
    printf("\n");
      
    int p=0;
  while(arr2[p]!='\0')  \\ \0 used to dont decide size of string
    {
        printf("%c ",arr2[p]);
        p++;
    }  


    return 0;
}