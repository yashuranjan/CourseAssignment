#include<stdio.h>
int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int b[3][3]={9,8,7,6,5,4,3,2,1};
    int i,j,k,sum=0;
    int c[3][3];
    for (i=0; i<=2; i++)
    {
      for ( j= 0; j <=2 ; j++)
      {
          for ( k=0; k<=2; k++)
          {
           sum=sum+(a[i][k]*b[k][j]); 
          }
          c[i][j]=sum;
          sum=0;
      }
      
    }
    for (size_t i = 0; i <=2; i++)
    {
        for (size_t j = 0; j <=2; j++)
        {
            printf(" %d",c[i][j]);
        }
        printf("\n");
    }
    
 return 0;   
}