#include<stdio.h>
int main()
{
   int a[3][2]={{1,2},{3,4},{5,6}};
   int b[2][4]={{1,2,3,4},{5,6,7,8}};
   int res[3][4];
   // multiplying matrix a and b
   int rc=2; //special variable rc declared for conditon 2=2 for marix multiplication
   for(int i=0;i<3;i++)
   {
      for(int j=0;j<4;j++)
      {
         // ith row of a and jth column of b
         res[i][j]=0;
         for(int k=0;k<rc;k++)
         {
          res[i][j] = res[i][j] + a[i][k]*b[k][j];
         }
      }
   }

   // print resultant matrix
    for(int i=0;i<3;i++)
   {
      for(int j=0;j<4;j++)
      {
        printf("%d ",res[i][j]);
      }
      printf("\n");
   }
   return 0;
}