//Write a program in C to find the transpose of a given matrix
#include<stdio.h>
int main()
{
    int a[3][3]={9,8,7,6,5,4,3,2,1};
    int b[3][3];
    int i,j,sum=0;
    for (size_t i = 0; i <=2; i++)
    {
        for (size_t j = 0; j <=2; j++)
        {
           a[j][i]=b[i][j];
        }
        printf("\n");
    }
    for ( i = 0; i <=2; i++)
    {
        for ( j = 0; j<=2; j++)
        {
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }
    
    
    
 return 0;   
}