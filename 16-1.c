#include<stdio.h>
int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int b[3][3]={2,4,6,8,9,12,13,43,65};
    int c[3][3],i,j;
    for (i = 0; i <=2; i++)
    {
     for (j = 0;  j<=2; j++)
     {
        c[i][j]=a[i][j]+b[i][j];
     }
    
    }
    for (i = 0; i <=2; i++)
    {
     for (j = 0;  j<=2; j++)
     {
        printf(" %d",c[i][j]);
     }
     printf("\n");
    }
    return 0;
}