#include<stdio.h>
int main()
{
    int a[3][3]={9,8,7,6,5,4,3,2,1};
    int i,j,sum=0;
    for ( i = 0; i <=2; i++)
    {
        for ( j = 0; j <=2; j++)
        {
            sum=sum+a[i][j];
        }
        
    }
    for ( i = 0; i <=2; i++)
    {
        for ( j = 0; j <=2; j++)
        {
            printf("  %d",sum);
        }
        printf("\n");
    }
    
    return 0;
}